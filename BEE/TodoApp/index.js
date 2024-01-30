const btn = document.querySelector('#addTsk');
const inp = document.querySelector('#inputBox');
const editTaskBtn = document.querySelector('#editTask');

const leftSide = document.querySelector(".left");
// Add event listener to the input field for key press
var dataFromLocalStorage = localStorage.getItem("toDoTask");
if (dataFromLocalStorage != null) {
    dataFromLocalStorage = JSON.parse(dataFromLocalStorage);
    window.onload = addToDoToDom(dataFromLocalStorage);
}
var taskArray = [];
btn.addEventListener('click', (e) => {
    createToDo();
})

function createToDo() {
    const inputTaskByUser = inp.value;
    if (inputTaskByUser == '') {
        alert(`Enter Some task Before Submiting`);
        return;
    }
    var taskObj = {};
    taskObj.task = inputTaskByUser;
    taskObj.id = Date.now();
    taskArray.push(taskObj);

    addToDoToDom(taskArray);
    var dataFromLs = localStorage.getItem("toDoTask");
    if (dataFromLs == null) {
        localStorage.setItem("toDoTask", JSON.stringify(taskArray));
        taskArray = [];
    }
    else {
        dataFromLs = JSON.parse(dataFromLs);
        taskArray = taskArray.concat(dataFromLs);
        localStorage.setItem("toDoTask", JSON.stringify(taskArray));
        taskArray = [];
    }
}

function addToDoToDom(taskArray) {
    taskArray.forEach((val) => {
        const div = document.createElement('div');
        div.className = 'task';
        const li = document.createElement('li');
        li.innerText = val.task;
        div.appendChild(li);

        //  This function runs when task cross button is being clicked
        function crossClicked(e) {
            const liElement = e.target.parentNode;
            var taskErase = e.target.previousElementSibling.previousElementSibling;
            const taskInd = dataFromLocalStorage.findIndex(val => val.task === taskErase.innerText);
            dataFromLocalStorage.splice(taskInd, 1);
            localStorage.setItem("toDoTask", JSON.stringify(dataFromLocalStorage));
            liElement.remove();
            console.log("Task removed from Task List");
        }
        //  This function runs when task is completed

        function rightClicked(e) {
            const liElement = e.target.previousElementSibling;
            liElement.innerText.color = 'red';
            liElement.classList.toggle('strikethrough');
            console.log("congrats you have completed this task Successfully");
        }
        //  This function is called when you want to update any task 
        function editClicked(e) {
            const liElement = e.target.previousElementSibling.previousElementSibling.previousElementSibling;
            console.log(liElement);
            inp.value = liElement.innerText;
            const taskInd = dataFromLocalStorage.findIndex(val => val.task === liElement.innerText);
            editTaskBtn.addEventListener('click', () => {
                dataFromLocalStorage[taskInd].task = inp.value;
                localStorage.setItem("toDoTask", JSON.stringify(dataFromLocalStorage));
                console.log("Task being edited");
                window.location.reload();
            })

        }
        for (var i = 0; i < 3; i++) {
            const button = document.createElement('button');
            switch (i) {
                case 0: {
                    button.innerText = '✔';
                    button.addEventListener("click", rightClicked);
                    break;
                }
                case 1: {
                    button.innerText = '✖';
                    button.addEventListener("click", crossClicked);
                    break;
                }
                case 2: {
                    button.innerText = '✎';
                    button.addEventListener("click", editClicked);
                    break;
                }
            }
            div.appendChild(button);
        }
        leftSide.appendChild(div);
        inp.value = '';
    });
}
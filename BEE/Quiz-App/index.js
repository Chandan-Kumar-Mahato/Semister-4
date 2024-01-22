const bgColor = document.querySelector('.bgColor');
const body = document.querySelector('body');
bgColor.addEventListener('click', ()=>{
    if(body.style.backgroundColor == 'black')
    {
        body.style.backgroundColor = 'white';
        body.style.color = 'black';
    }
    else 
    {
        body.style.backgroundColor = 'black';
        body.style.color = 'white'
    }
})
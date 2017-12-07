

//document.getElementById('navbarMagic').onclick = function(){myFunction(i)};

function sleep(delay) {
    var start = new Date().getTime();
    while (new Date().getTime() < start + delay);
}


function myFunction(){
      document.getElementsByClassName('test')[0].style.background = "black";
      document.getElementsByClassName('test')[0].style.transform = "scale(5%, 50px);";
      document.getElementsByClassName('test')[0].style.transition = "5s";
}

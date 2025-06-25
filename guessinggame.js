
let jawaban = Math.floor (Math.random() * 100) + 1;
let percobaan = 0;
const guessButton = document.getElementById("guessButton");
let jawabanku;


document.getElementById("guessButton").onclick = function(){
jawabanku = document.getElementById("jawabanku").value;
console.log(jawabanku);
}

while (jawabanku != jawaban) {
    percobaan++
    if (jawabanku < jawaban) {
      hasil.textContent = "Too low!"
    }
    else if (jawabanku > jawaban) {
        hasil.textContent = "Too high!"
    }
    
    
}

hasil.textContent = "Correct!";
hasil2.textContent = 'Attempt : ' + percobaan;

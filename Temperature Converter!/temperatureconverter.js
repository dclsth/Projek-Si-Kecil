const hitung = document.getElementById("hitung");
const jenis1 = document.getElementById("jenis1");
const jenis2 = document.getElementById("jenis2");
const jawaban = document.getElementById("jawaban");
let nilai;
let pertama;
let kedua;

document.getElementById("hitung").onclick = function(){
    nilai = document.getElementById("nilai").value;
    console.log(nilai);
    switch (jenis1.value) {
    case "celcius":
        pertama = "Celcius";
        break;
    case "fahrenheit":
        pertama = "Fahrenheit";
        break;
    case "reamur":
        pertama = "Reamur";
        break;
    case "kelvin":
        pertama = "Kelvin";
        break;
    default:
        pertama = "nothing";
}
switch (jenis2.value) {
    case "celcius":
        kedua = "Celcius";
        break;
    case "fahrenheit":
        kedua = "Fahrenheit";
        break;
    case "reamur":
        kedua = "Reamur";
        break;
    case "kelvin":
        kedua = "Kelvin";
        break;
    default:
        kedua = "nothing";
}

console.log(pertama + " to " + kedua);

switch (pertama + " to " + kedua) {
    case "Celcius to Fahrenheit":
        jawaban.textContent = (Number(nilai) * 9/5 + 32) + `°F`;
    break;
    case "Celcius to Celcius":
        jawaban.textContent = `${nilai}°C`;
    break;
    case "Celcius to Reamur":
        jawaban.textContent = (Number(nilai) * 4/5) + `°R`;
    break;
    case "Celcius to Kelvin":
        jawaban.textContent = (Number(nilai) + 273) + `K`;
    break;
    case "Fahrenheit to Celcius":
        jawaban.textContent = (5/9 * (Number(nilai) - 32)) + `°C`;
    break;
    case "Fahrenheit to Fahrenheit":
        jawaban.textContent = `${nilai}°F`;
    break;
    case "Fahrenheit to Reamur":
        jawaban.textContent = (4/9 * (Number(nilai) - 32)) + `°R`;
    break;
    case "Fahrenheit to Kelvin":
        jawaban.textContent = `undifined`;
    break;
    case "Reamur to Celcius":
        jawaban.textContent = (5/4 * Number(nilai)) + `°C`;
    break;
    case "Reamur to Fahrenheit":
        jawaban.textContent = (9/4 * Number(nilai) + 32) + `°F`;
    break;
    case "Reamur to Reamur": 
        jawaban.textContent = `${nilai}°R`;
    break;
    case "Reamur to Kelvin":
        jawaban.textContent = (5/4 * Number(nilai) + 273) + `K`;
    break;
    case "Kelvin to Celcius":
        jawaban.textContent = (Number(nilai) - 273) + `°C`;
    break;
    case "Kelvin to Fahrenheit":
        jawaban.textContent = `undifined`;
    break;
    case "Kelvin to Reamur":
        jawaban.textContent = (4/5 (Number(nilai) - 273)) + `°R`;
    break;
    case "Kelvin to Kelvin":
        jawaban.textContent = `${nilai}K`;
    break
    default:
        jawaban.textContent = `undifined`;
}


}


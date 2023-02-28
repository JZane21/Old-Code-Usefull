// function moneyBox(coins){
//     let saveCoins = 0;
//     saveCoins+=coins;
//     console.log("Monex Box: "+saveCoins+" Bs");
// }
// moneyBox(5);
// moneyBox(5);

//Con Closures:
function moneyBox(){
    let saveCoins = 0;
    function countCoins(coins){
        saveCoins+=coins;
        console.log("Monex Box: "+saveCoins+" Bs");
    }
    return countCoins;
}

const myMoneyBox = moneyBox();
myMoneyBox(5);
myMoneyBox(7);
myMoneyBox(11);
console.log("-----");
const moneyBoxAna = moneyBox();
moneyBoxAna(13);
moneyBoxAna(17);
moneyBoxAna(19);
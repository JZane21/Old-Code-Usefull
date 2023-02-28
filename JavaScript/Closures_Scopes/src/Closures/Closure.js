//closure proporcionan acceso al nivel lexico
function greeting(){
    let username = 'Oscar';
    function displayUserName(){
        return `Hello ${username}, how are you?`;
    }
    return displayUserName;
}

const g = greeting();

console.log(g);
console.log(g());
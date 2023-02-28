function fruit(){
    //esto es un blocke
    //y un blocke en general es cualquier cosa
    //que se encuentr dentro del handelbars
    if(true){
        var fruit1 = 'apple'; //fucntion scope
        let fruit2 = 'kiwi'; //block scope
        const fruit3 = 'banana' //block scope
            
        console.log(fruit2);
        console.log(fruit3);
    }
    console.log(fruit1);
}
fruit();
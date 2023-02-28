
function isObject(subject){
    return typeof subject == "object"; 
}

function isArray(subject){
    return Array.isArray(subject);
}

function deepCopy(subject){
    let copySubject;

    if(isArray(subject)){
        copySubject = [];
    } else if(isObject(subject)){
        copySubject = {};
    } else{
        return subject;
    }

    for(let key in subject){
        if(isObject(subject[key])){
            copySubject[key] = deepCopy(subject[key]);
        }else{
            if(isArray(subject)){
                copySubject.push(subject[key]);
            }else{
                copySubject[key] = subject[key];
            }
        }
    }

    return copySubject;
}

// const studentBase = {
//     name: undefined,
//     email: undefined,
//     age: undefined,
//     approvedCourses:undefined,
//     learningPaths:undefined,
//     socialMedia:{
//         twitter:undefined,
//         instagram:undefined,
//         github:undefined
//     }
// };

// const juan = deepCopy(studentBase);

// Object.seal(juan);

// juan.name = "Juanito Alcachofa";

function requiredP(){
    throw new Error("Dato Obligatorio");
}

function createStudent(
    {    
        name = requiredP(),
        age,
        email = requiredP(),
        twitter,
        instagram,
        github,
        approvedCourses = [],
        learningPaths = []
    } = {}
){
    const private = {
        "_name":name
    };
    const public = {
        age,
        email,
        socialMedia:{
            twitter,
            instagram,
            github
        },
        approvedCourses,
        learningPaths,
        get getName(){
            return private._name;
        },
        set setName(newName){
            if(newName !== "Malito" && newName.length>=1){
                private["_name"] = newName;
            }else{
                console.warn("Nombre no permitido!");
            }
        }
    };

    Object.defineProperty(public,"getName",{
        writable:false,
        configurable:false
    });

    Object.defineProperty(public,"setName",{
        writable:false,
        configurable:false
    });

    return public;
}

const juan2 = createStudent({
    name:"Juanito Alcachofa",
    age:18,
    email:"juanito13@gmail.com",
    twitter:"alcachofasNews17"
});



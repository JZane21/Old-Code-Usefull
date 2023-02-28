// Declarando objetos con objetos literales
// * Esta no es la manera de hacerlo

// const jose = {
//     name: "Jose Carrasco",
//     userName: "JS2021",
//     point: 2000,
//     socialMedia:{
//         twitter: "jzane21",
//         instagram: "jzane21",
//         snapchat: undefined
//     },
//     approvedCourses: [
//         "Curso Definitivo de HTML y CSS",
//         "Curso Practico de HTML y CSS"
//     ],
//     learningPaths: [
//         {
//             name: "Escuela de Desarrollo Web",
//             courses:[
//                 "Curso Definitivo de HTML y CSS",
//             "Curso Practico de HTML y CSS",
//             "Curso de Responsive Design"
//             ]
//         },
//         {
//             name: "Escuela de Videojuegos",
//             courses:[
//                 "Curso de Introduccion a la Produccion de Vgs",
//                 "Curso de Unreal Engine",
//                 "Curso de Unity 3D"
//             ]
//         }
//     ]
// }

// Declarando objetos con POO

class LearningPaths{
    constructor({
        name = "PreWork",
        courses = [
            new Course({
                name:"Curso de PreWork para entorno Linux"
            }),
            new Course({
                name:"Curso de PreWork para entorno Windows"
            }),
            new Course({
                name:"Curso de PreWork para entorno MacOs"
            }),
        ]
    }){
        this.name = name;
        this.courses = courses;
    }
    newCourse(curso){
        this.courses.push(new Course({name:curso}));
    }
}

class Teacher{
    constructor({
        name,
        age=18,
        teacherId,
    }){
        this.name = name;
        this.age = age;
        this.teacherId = teacherId;
    }
}

class Course{
    constructor({
        name,
        hoursContent=1,
        teacher=new Teacher({
            name: "Juanito Alcachofa",
            teacherId:12345
        }),
    }){
        this.name = name;
        this.hoursContent = hoursContent;
        this.teacher = teacher;
    }
}

class Student{
    constructor({
        name,
        email,
        userName,
        twitter = undefined,
        instagram = undefined,
        approvedCourses = [],
        learningPaths = [new LearningPaths()]
    }){
        this.name = name;
        this.email = email;
        this.userName = userName;
        this.socialMedia = {
            twitter,
            instagram
        }
        this.approvedCourses = approvedCourses,
        this.learningPaths = learningPaths
    }
    agregarLearningPath(nombreRuta){
        this.learningPaths.push(new LearningPaths({name:nombreRuta}));
    }
    agregarCurso(rutaExistente,nombreCurso){
        if(this.learningPaths.filter(i=>i.name===rutaExistente).length==1){
            this.learningPaths.filter(i=>i.name===rutaExistente).forEach(i=>i.newCourse(nombreCurso));
        }else{
            console.log("La ruta que escribio no existe");
        }
    }
}

const jose2 = new Student({
    name:"Jose",
    userName:"JZane21",
    email:"JZane21@gmail.com",
    twitter:"JSamu21",
    learningPaths: [
        new LearningPaths({name:'Escuela de Desarrollo Web'})
        ,new LearningPaths({name:'Escuela de Video Juegos'})
    ]
});

const miguel2 = new Student({
    name:"Miguel",
    userName:"Micky2002",
    email:"Mick12@gmail.com",
    instagram:"Miguel777",
    learningPaths: [
        new LearningPaths({name:'Escuela de Video Juegos'})
        ,new LearningPaths({name:'Escuela de Startups'})
    ]
});



class Course{
    constructor({
        name,
        clasess = [],
        comments = []
    }){
        this.name = name;
        this.clasess = clasess;
        this.comments = comments;
    }
}

const cursoProgramacionBasica = new Course({
    name:"Curso de Programacion Basica Gratis",
    clasess:[instalacionDeAtom]
});

const cursoDefinitivoHTMLCSS = new Course({
    name:"Curso Definitivo de HTML y CSS",
    clasess:[estructuraBasicaHTML]
});

const cursoPracticoHTMLCSS = new Course({
    name:"Curso Practico de HTML y CSS",
    clasess:[combinandoJSHTML]
});

class Clasess{
    constructor({
        name,
        timeMin=10,
        classComments=[],
        files=[],
        links=[]
    }){
        this.name = name;
        this.timeMin = timeMin;
        this.classComments = classComments;
        this.files = files;
        this.links = links;
    }
}

const instalacionDeAtom = new Clasess({
    name:"Instalando Atom"
});

const estructuraBasicaHTML = new Clasess({
    name:"Estructura basica de HTML"
});

const combinandoJSHTML = new Clasess({
    name:"Combinando JS con HTML y CSS"
});

class LearningPaths{
    constructor({
        name = "PreWork",
        courses = []
    }){
        this.name = name;
        this.courses = courses;
    }
}

const escuelaFuncional = new LearningPath({
    name: "Escuela de Desarrollo Web",
    courses: [
        cursoProgramacionBasica,
        cursoDefinitivoHTMLCSS,
        cursoPracticoHTMLCSS
    ]
});

const escuelaDataScience = new LearningPath({
    name: "Escuela de Desarrollo Web",
    courses: [
        "Curso de Python Profesional",
        "Curso de Machine Learning con Python"
    ]
});

const escuelaVGS = new LearningPath({
    name: "Escuela de Desarrollo Web",
    courses: [
        "Curso de Unity",
        "Curso de Unreal"
    ]
});

const escuelaDataBusiness = new LearningPath({
    name: "Escuela de Desarrollo Web",
    courses: [
        "Curso de AI con chrome",
        "Curso de Economia Profesional"
    ]
});

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
}

const jose2 = new Student({
    name:"Jose",
    userName:"JZane21",
    email:"JZane21@gmail.com",
    twitter:"JSamu21",
    learningPaths: [
        escuelaFuncional,
        escuelaDataScience
    ]
});

const miguel2 = new Student({
    name:"Miguel",
    userName:"Micky2002",
    email:"Mick12@gmail.com",
    instagram:"Miguel777",
    learningPaths: [
        escuelaDataBusiness,
        escuelaDataScience
    ]
});



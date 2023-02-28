function videoPlay(id){
    const urlSecreta = "https://platziultrasecreto.com/"+id;
    console.log("Se esta reproduciendo desde la url "+urlSecreta);
}

function videoStop(id){
    const urlSecreta = "https://platziultrasecreto.com/"+id;
    console.log("Pausamos la url "+urlSecreta);
}
/*
los exports nos permiten definir cuales clases
podemos ejecutar o interactuar con las mismas
desde otros scripts
*/
export class PlatziClass{
    constructor({
        name,
        videoID
    }){
        this._name = name;
        this._videoID = videoID;
    }

    reproducir(){
        videoPlay(this._videoID);
    }

    pausar(){
        videoStop(this._videoID);
    }

}






class LearningPath{
    constructor({
        name = "PreWork",
        courses = []
    }){
        this._name = name;
        this._courses = courses;
    }

    get getName(){
        return this._name;
    }

    set setName(newName){
        this._name=newName;
    }

    get getCourses(){
        return this._courses;
    }

    set setCourses(newCourse){
        this._courses.push(newCourse);
    }

}

class Clasess{
    constructor({
        name,
        timeMin=10,
        classComments=[],
        files=[],
        links=[]
    }){
        this._name = name;
        this._timeMin = timeMin;
        this._classComments = classComments;
        this._files = files;
        this._links = links;
    }

    get getName(){
        return this._name;
    }

    set setName(newName){
        this._name=newName;
    }

    get getTimeMin(){
        return this._timeMin;
    }

    set setTimeMin(newTime){
        this._timeMin = newTime;
    }

    get getClassComments(){
        return this._classComments;
    }

    set setClassComments(newClassComment){
        this._classComments.push(newClassComment);
    }

    get getFiles(){
        return this._files;
    }

    set setFiles(newFile){
        this._files.push(newFile);
    }

    get getLinks(){
        return this._links;
    }

    set setLinks(newLink){
        this._links.push(newLink);
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

class Course{
    constructor({
        name,
        clasess = [],
        comments = []
    }){
        this._name = name;
        this._clasess = clasess;
        this._comments = comments;
    }

    get getName(){
        return this._name;
    }

    set setName(newName){
        if(newName === "Curso Malito de Programacion Basica"){
            console.error("Wey...no");
        }else{
            this._name = newName;
        }
    }

    get getClasses(){
        return this._clasess;
    }

    set setClasses(newClass){
        this._clasess.push(newClass);
    }

    get getComments(){
        return this._comments;
    }

    set setComments(newComment){
        this._comments.push(newComment);
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
        this._name = name;
        this._email = email;
        this._userName = userName;
        this._socialMedia = {
            twitter,
            instagram
        }
        this._approvedCourses = approvedCourses,
        this._learningPaths = learningPaths
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



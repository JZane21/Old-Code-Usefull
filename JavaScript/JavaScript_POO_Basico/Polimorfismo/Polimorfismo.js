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

class Comment{
    constructor({
        content,
        studentName,
        studentRole = "estudiantes"
    }){
        this.content = content;
        this.studentName = studentName;
        this.studentRole = studentRole;
        this.like = 0;
    }

    publicar(){
        console.log(this.studentName + " ("+this.studentRole+")");
        console.log(this.like+" likes");
        console.log(this.content);
    }

}

function videoPlay(id){
    const urlSecreta = "https://platziultrasecreto.com/"+id;
    console.log("Se esta reproduciendo desde la url "+urlSecreta);
}

function videoStop(id){
    const urlSecreta = "https://platziultrasecreto.com/"+id;
    console.log("Pausamos la url "+urlSecreta);
}

class PlatziClass{
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
        comments = [],
        isFree = false,
        lang = "spanish"
    }){
        this._name = name;
        this._clasess = clasess;
        this._comments = comments;
        this._isFree = isFree;
        this._lang = lang;
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
    isFree: true,
    clasess:[instalacionDeAtom]
});

const cursoDefinitivoHTMLCSS = new Course({
    name:"Curso Definitivo de HTML y CSS",
    clasess:[estructuraBasicaHTML]
});

const cursoPracticoHTMLCSS = new Course({
    name:"Curso Practico de HTML y CSS",
    clasess:[combinandoJSHTML],
    lang:"english"
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
        learningPaths = [new LearningPath({name:"Escuela PreWork"})]
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

    publicarComentario(commentContent){
        const comment = new Comment({
            content:commentContent,
            studentName:this._name
        })
        comment.publicar();
    }

    get getEmail(){
        return this._email;
    }

    set setEmail(newEmail){
        this._email=newEmail;
    }

    get getUserName(){
        return this._userName;
    }

    set setUserName(newUserName){
        this._userName=newUserName;
    }

    get getSocialMedia(){
        return this._socialMedia;
    }

    get getApprovedCourse(){
        return this._approvedCourses;
    }

    set setApprovedCourse(newApprovedCourse){
        this._approvedCourses.push(newApprovedCourse);
    }

    get getLearningPaths(){
        return this._learningPaths;
    }

    set setLearningPaths(newLearningPath){
        this._learningPaths.push(newLearningPath);
    }

}

class FreeStudent extends Student{
    constructor(props){
        super(props);
    }
    approveCourse(newCourse){
        if(newCourse._isFree){
            this.setApprovedCourse = newCourse;
        }else{
            console.warn("Lo sentimos "+this.getUserName+
            ", solo puedes tomar cursos habilitados para su subscripcion");
        }
    }
}

class BasicStudent extends Student{
    constructor(props){
        super(props);
    }

    approveCourse(newCourse){
        if(newCourse._lang !== "english"){
            this.setApprovedCourse = newCourse;
        }else{
            console.warn("Lo sentimos "+this.getUserName+
            ", solo puedes tomar cursos habilitados para su subscripcion");
        }
    }
}

class ExpertStudent extends Student{
    constructor(props){
        super(props);
    }

    approveCourse(newCourse){
        this.setApprovedCourse = newCourse;
    }
}

class TeacherStudent extends Student{
    constructor(props){
        super(props);
    }

    approveCourse(newCourse){
        this.setApprovedCourse = newCourse;
    }

    publicarComentario(commentContent){
        const comment = new Comment({
            content:commentContent,
            studentName:this._name,
            studentRole:"profesor"
        })
        comment.publicar();
    }

} 


const freddy = new TeacherStudent({
    name:"Freddy Vega",
    userName:"freddier",
    email:"freddier@platzi.com",
    twitter:"freddiervega"
});

const jose2 = new FreeStudent({
    name:"Jose",
    userName:"JZane21",
    email:"JZane21@gmail.com",
    twitter:"JSamu21",
    learningPaths: [
        escuelaFuncional,
        escuelaDataScience
    ]
});

const miguel2 = new BasicStudent({
    name:"Miguel",
    userName:"Micky2002",
    email:"Mick12@gmail.com",
    instagram:"Miguel777",
    learningPaths: [
        escuelaDataBusiness,
        escuelaDataScience
    ]
});



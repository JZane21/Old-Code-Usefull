//prototipos con la sintaxis de clases
class Student{
    constructor({
        name,
        email,
        age,
        cursosAprobados=[]
    }){
        this.name = name;
        this.age = age;
        this.email = email;
        this.cursosAprobados = cursosAprobados;
    }

    aprobarCurso(nuevoCurso){
        this.cursosAprobados.push(nuevoCurso);
    }
}

const miguel = new Student({
    age: 17,
    name: 'Miguel',
    email:'jscuber@gmail.com'
});
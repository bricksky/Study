const quizData = [
    {
        question: 'How old is Donghyun?',
        a: '18',
        b: '20',
        c: '22',
        d: '25',
        correct: 'c'
    }, {
        question: 'Which city does Donghyun live in?',
        a: 'Seoul',
        b: 'NewYork',
        c: 'Tokyo',
        d: 'Sydney',
        correct: 'a'
    }, {
        question: 'How tall is Donghyun?',
        a: '170',
        b: '175',
        c: '180',
        d: '185',
        correct: 'c'
    }, {
        question: 'Which country has Donghyun not been to?',
        a: 'Egypt',
        b: 'France',
        c: 'Japan',
        d: 'China',
        correct: 'a'

    }, {
        question: 'What kind of transportation has Donghyun never taken?',
        a: 'Bike',
        b: 'Taxi',
        c: 'Bus',
        d: 'Kayak',
        correct: 'd'
    }
];

const quiz = document.getElementById("quiz");
const answerEls = document.querySelectorAll(".answer");
const questionE1 = document.getElementById("question");

const a_text = document.getElementById("a_text");
const b_text = document.getElementById("b_text");
const c_text = document.getElementById("c_text");
const d_text = document.getElementById("d_text");
const submitBtn = document.getElementById("submit");

let currentQuiz = 0;
let score = 0;

loadQuiz();

function loadQuiz() {
    deselectAnswers(); //한번 클릭하면 다음 질문에 이전 클릭의 흔적이 남지 않게 하는 부분 

    const currentQuizData = quizData[currentQuiz];

    questionE1.innerText = currentQuizData.question;

    a_text.innerText = currentQuizData.a;
    b_text.innerText = currentQuizData.b;
    c_text.innerText = currentQuizData.c;
    d_text.innerText = currentQuizData.d;
    
}

function getSelected() {

    let answer = undefined;

    answerEls.forEach((answerEl) => {
        if(answerEl.checked) {
           answer = answerEl.id;
        }
    });

   return answer;
}

function deselectAnswers() {
    answerEls.forEach((answerEl) => {
       answerEl.checked = false;
    });
}

submitBtn.addEventListener("click", () => {
    // check to see the answer
    const answer = getSelected();

    if (answer){
        if (answer === quizData[currentQuiz].correct) {
            score++;
        }

            currentQuiz++;
            if (currentQuiz < quizData.length) {
                loadQuiz();
            } else {
                quiz.innerHTML = `<h2>You answered correctly at ${score}/${quizData.length} questions.</h2> <buttononclick="location.reload">Reload</button>`;
            }
        }
});
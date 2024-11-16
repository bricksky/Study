package com.mysite.sbb;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.time.LocalDateTime;
import java.util.List;
import java.util.Optional;

import com.mysite.sbb.answer.Answer;
import com.mysite.sbb.question.Question;
import com.mysite.sbb.question.QuestionRepository;
import jakarta.transaction.Transactional;
import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;

@SpringBootTest
class SbbApplicationTests {
    @Autowired
    private QuestionRepository questionRepository;

  @Transactional
    @Test
    void testJpa() {
//        Optional<Question> question = questionRepository.findById(2);
//        assertTrue(question.isPresent());
//        Question q = question.get();
//
//        List<Answer> answerList = q.getAnswerList();
//
//        assertEquals(1, answerList.size());
//        assertEquals("네 자동으로 생성됩니다.", answerList.get(0).getContent());
      Question q1 = new Question();
      q1.setSubject("sbb가 무엇인가요?");
      q1.setContent("sbb에 대해서 알고싶습니다.");
      q1.setCreateDate(LocalDateTime.now());
      this.questionRepository.save(q1);

      Question q2 = new Question();
      q2.setSubject("스프링 부트 모델 질문입니다.");
      q2.setContent("id는 자동으로 생성되나요?");
      q2.setCreateDate(LocalDateTime.now());
      this.questionRepository.save(q2);
    }
}

package com.mysite.sbb;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;

import java.time.LocalDateTime;
import java.util.List;
import java.util.Optional;

@SpringBootTest
class SbbApplicationTests {

    @Autowired
    private QuestionRepository questionRepository;

    @Test
    void testJpa() {
        Question q = this.questionRepository.findBySubjectAndContent("sbb가 무엇인가요?", "sbbs에 대해 알고싶습니다.");
        assertEquals(1, q.getId());
    }
}

import java.util.HashMap;
import java.util.Map;

class Student {
    private String name;
    private Map<String, Integer> scores; // 과목명과 점수를 저장

    public Student(String name) {
        this.name = name;
        this.scores = new HashMap<>();
    }

    public void addScore(String subject, int score) {
        scores.put(subject, score);
    }

    public Map<String, Integer> getScores() {
        return scores;
    }

    public String getName() {
        return name;
    }
}

public class Main {
    public static void main(String[] args) {
        // 학생 객체 생성
        Student student = new Student("홍길동");
        student.addScore("수학", 75);
        student.addScore("과학", 45);
        student.addScore("영어", 85);

        // 학습 계획 생성기 사용
        LearningPlanGenerator generator = new LearningPlanGenerator();
        LearningPlan plan = generator.generatePlan(student);

        // 결과 출력
        System.out.println("학생: " + student.getName());
        System.out.println("개인화된 학습 계획: " + plan);
    }
}

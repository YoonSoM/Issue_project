class LearningPlanGenerator {
    public LearningPlan generatePlan(Student student) {
        LearningPlan learningPlan = new LearningPlan();
        Map<String, Integer> scores = student.getScores();

        // 강점과 약점 분석
        for (Map.Entry<String, Integer> entry : scores.entrySet()) {
            String subject = entry.getKey();
            int score = entry.getValue();

            if (score < 60) {
                learningPlan.addActivity(subject + " 복습");
            } else if (score >= 60 && score < 80) {
                learningPlan.addActivity(subject + " 심화 학습");
            } else {
                learningPlan.addActivity(subject + " 문제 풀이");
            }
        }

        return learningPlan;
    }
}

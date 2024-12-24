import java.util.ArrayList;
import java.util.List;

class LearningPlan {
    private List<String> plan;

    public LearningPlan() {
        this.plan = new ArrayList<>();
    }

    public void addActivity(String activity) {
        plan.add(activity);
    }

    public List<String> getPlan() {
        return plan;
    }

    @Override
    public String toString() {
        return String.join(", ", plan);
    }
}

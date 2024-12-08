import java.util.Scanner;

public class HealthApp {

    // BMI 계산 메서드
    public static double calculateBmi(double weight, double height) {
        return weight / (height * height);
    }

    // BMI 평가 메서드
    public static String evaluateBmi(double bmi) {
        if (bmi < 18.5) {
            return "저체중";
        } else if (bmi < 24.9) {
            return "정상 체중";
        } else if (bmi < 29.9) {
            return "과체중";
        } else {
            return "비만";
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("개인 맞춤형 건강 관리 어플리케이션");

        // 사용자 입력
        System.out.print("체중(kg)을 입력하세요: ");
        double weight = scanner.nextDouble();

        System.out.print("신장(m)을 입력하세요: ");
        double height = scanner.nextDouble();

        // BMI 계산
        double bmi = calculateBmi(weight, height);

        // BMI 평가
        String evaluation = evaluateBmi(bmi);

        // 결과 출력
        System.out.printf("당신의 BMI는 %.2f입니다. 건강 상태: %s%n", bmi, evaluation);

        scanner.close();
    }
}

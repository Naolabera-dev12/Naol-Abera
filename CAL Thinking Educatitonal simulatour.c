#include <stdio.h>

int main() {
    int choice, score = 0;

    printf("\n=== CAL Educational planing tester ===\n");
    printf("Train your brain for real Ethiopian school success!\n");
    printf("Subjects: 13 total — balance your time wisely.\n\n");

    // Level 1
    printf("Level 1: Homework Planning \n");
    printf("You have 3 assignments: Math, English, ICT.\n");
    printf("1. Watch a movie\n2. Do Math first\n3. Sleep\nChoice: ");
    scanf("%d", &choice);
    if (choice == 2) { printf(" Smart start!\n"); score += 10; }
    else { printf(" Lost focus.\n"); score -= 5; }

    // Level 2
    printf("\nLevel 2: Midterm Week \n");
    printf("Tomorrow: Chemistry & Biology test.\n");
    printf("1. Review notes early\n2. Scroll social media\n3. Skip studying\nChoice: ");
    scanf("%d", &choice);
    if (choice == 1) { printf(" Excellent choice!\n"); score += 10; }
    else { printf(" You wasted time.\n"); score -= 5; }

    // Level 3
    printf("\nLevel 3: Final Exam \n");
    printf("You feel tired. What do you do?\n");
    printf("1. Take 15 min rest then revise\n2. Study all night\n3. Give up\nChoice: ");
    scanf("%d", &choice);
    if (choice == 1) { printf(" Balanced mind!\n"); score += 10; }
    else { printf(" Poor planning.\n"); score -= 5; }

    // Level 4
    printf("\nLevel 4: Distraction Test \n");
    printf("Your friend invites you out before exam.\n");
    printf("1. Go out\n2. Study then relax later\n3. Ignore message\nChoice: ");
    scanf("%d", &choice);
    if (choice == 2) { printf(" Great discipline!\n"); score += 10; }
    else { printf(" Distraction wins.\n"); score -= 5; }

    // Level 5
    printf("\nLevel 5: Reflection 🧭\n");
    printf("Do you plan your week before school?\n");
    printf("1. Always\n2. Sometimes\n3. Never\nChoice: ");
    scanf("%d", &choice);
    if (choice == 1) { printf(" Consistent planner!\n"); score += 10; }
    else { printf(" Planning helps success.\n"); score -= 5; }

    // Result
    printf("\n===== RESULT =====\n");
    printf("Your final score: %d/50\n", score);

    if (score >= 40)
        printf(" Excellent Planner — You’re ready for any exam!\n");
    else if (score >= 25)
        printf(" Good! Keep improving your focus.\n");
    else
        printf(" Train harder. Success needs daily effort.\n");

    printf("\nCreated by Naol Abera 🇪🇹\n");
    return 0;
}

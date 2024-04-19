#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   
#include <string.h>

void displayword(char wordscp[]);

int main() {
    srand(time(NULL));
    char words[100][20] = {
        "apple", "banana", "orange", "grape", "strawberry", "kiwi", "pineapple", "watermelon", "blueberry", "peach",
        "apricot", "pear", "plum", "cherry", "lemon", "lime", "coconut", "mango", "papaya", "guava",
        "fig", "raspberry", "blackberry", "cranberry", "pomegranate", "grapefruit", "melon", "nectarine", "tangerine", "kiwifruit",
        "melon", "dragonfruit", "passionfruit", "lychee", "starfruit", "persimmon", "cantaloupe", "honeydew", "apricot", "kumquat",
        "mulberry", "quince", "date", "durian", "boysenberry", "elderberry", "bilberry", "clementine", "plantain", "soursop",
        "lion", "tiger", "elephant", "zebra", "giraffe", "hippopotamus", "rhinoceros", "cheetah", "leopard", "hyena",
        "wolf", "fox", "bear", "panda", "koala", "kangaroo", "monkey", "gorilla", "chimp", "baboon",
        "crocodile", "alligator", "snake", "python", "cobra", "anaconda", "turtle", "tortoise", "lizard", "iguana",
        "frog", "toad", "salamander", "newt", "gecko", "chameleon", "ostrich", "emu", "penguin", "kiwi",
        "eagle", "hawk", "falcon", "vulture", "owl", "raven", "crow", "sparrow", "parrot", "macaw"
    };

    char wordshint[100][3][1000] = {
        {"Sweet and crunchy", "Round and yellow", "Common citrus fruit"},
        {"Yellow and curved", "A good source of potassium", "Often used in smoothies"},
        {"A citrus fruit", "Common breakfast juice", "Rich in vitamin C"},
        {"Used in wine making", "Small and round", "Often eaten fresh or dried"},
        {"Small red fruit", "Often used in desserts", "Grows on vines"},
        {"Small and fuzzy on the outside", "Green flesh with black seeds", "Native to New Zealand"},
        {"Tropical fruit with tough skin", "Spiky on the outside", "Sweet and juicy inside"},
        {"Large and green on the outside", "Red flesh with black seeds", "Contains a lot of water"},
        {"Small and round", "Often used in baking", "Purple in color"},
        {"Fuzzy skin", "Yellow flesh", "Sweet and juicy"},
        {"Small and round", "Yellowish-orange flesh", "Velvety skin"},
        {"Juicy and sweet", "Commonly green", "Shaped like a teardrop"},
        {"Common stone fruit", "Purple or red skin", "Sweet and juicy"},
        {"Small and round", "Bright red when ripe", "Often used in pies"},
        {"Yellow when ripe", "Sour taste", "Commonly used in drinks"},
        {"Small and green", "Used in Mexican and Asian cuisine", "Commonly used in cocktails"},
        {"Hard brown shell", "White flesh", "Used in baking and cooking"},
        {"Tropical fruit", "Yellow flesh", "Sweet and tangy"},
        {"Tropical fruit with orange flesh", "Small black seeds inside", "Sweet and fragrant"},
        {"Tropical fruit with green skin", "Pink flesh", "Commonly used in jams and jellies"},
        {"Small fruit with purple skin", "Tiny edible seeds", "Often used in desserts"},
        {"Tiny red fruit", "Sour taste", "Often used in sauces"},
        {"Small dark purple fruit", "Commonly used in desserts", "Grows on thorny bushes"},
        {"Small red fruit", "Tart taste", "Commonly used in juice"},
        {"Red or purple fruit", "Commonly used in juice", "High in antioxidants"},
        {"Red or pink fruit", "Sour taste", "Often used in cocktails"},
        {"Large round fruit", "Commonly used in fruit salads", "Green or orange flesh"},
        {"Small and orange", "Juicy and sweet", "Similar to oranges"},
        {"Small orange fruit", "Similar to oranges", "Sweet and tangy"},
        {"Small brown fruit", "Sweet and tart", "Commonly used in Asian cuisine"},
        {"Large yellow fruit", "Spiky on the outside", "Creamy white flesh"},
        {"Small round fruit", "Sweet and juicy", "Commonly used in desserts"},
        {"Small yellow fruit", "Sweet and fragrant", "Native to tropical regions"},
        {"Tropical fruit with rough skin", "Sweet and fragrant", "Reddish-orange flesh"},
        {"Tropical fruit with rough skin", "Sweet and tart", "Pinkish flesh"},
        {"Tropical fruit with brown skin", "Sweet and aromatic", "Commonly used in desserts"},
        {"Small round fruit", "Brown skin", "Commonly used in Asian cuisine"},
        {"Small yellow fruit", "Tart taste", "Often used in preserves"},
        {"Small round fruit", "Sweet and tangy", "Commonly used in desserts"},
        {"Sweet and juicy", "Similar to apples", "Tropical fruit"},
        {"Small orange fruit", "Sweet and tangy", "Commonly used in desserts"},
        {"Small green fruit", "Sweet and aromatic", "Similar to apples"},
        {"Small purple fruit", "Sweet and tart", "Grows on a tree"},
        {"Tropical fruit with purple skin", "Sweet and tangy", "Contains black seeds"},
        {"Tropical fruit with green skin", "Sweet and creamy", "Often used in ice cream"},
        {"Small green fruit", "Tropical fruit", "Contains a large seed inside"},
        {"Tropical fruit with red skin", "Sweet and tart", "Similar to apples"},
        {"Tropical fruit with green skin", "Sweet and juicy", "Contains black seeds"},
        {"Large carnivorous cat", "Known for its mane","Often called the 'king of the jungle'"},
        {"Large striped cat", "Known for its strength and agility", "Found in various habitats"},
        {"Large mammal with tusks", "Known for its intelligence", "Often seen in African savannas"},
        {"Striped horse-like animal", "Native to Africa", "Distinctive black and white stripes"},
        {"Tall African mammal", "Has a long neck", "Known for its distinct spotted coat"},
        {"Large semi-aquatic mammal", "Often found in rivers and lakes", "Has a massive jaw"},
        {"Large herbivorous mammal", "Has a horn on its nose", "Known for its thick skin"},
        {"Fastest land animal", "Spotted coat", "Often found in the African savanna"},
        {"Large spotted cat", "Known for its stealth and agility", "Often seen in various habitats"},
        {"Carnivorous mammal known for its laughter-like vocalization", "Often scavenges for food", "Found in African and Asian habitats"},
        {"Wild canine", "Known for its pack behavior", "Howls to communicate"},
        {"Wild canine with bushy tail", "Adaptable and cunning", "Commonly seen in both urban and rural areas"},
        {"Large omnivorous mammal", "Found in various habitats", "Hibernate in winter"},
        {"Large bear native to China", "Distinctive black and white coat", "Eats mainly bamboo"},
        {"Small marsupial native to Australia", "Eats eucalyptus leaves", "Carries its young in a pouch"},
        {"Marsupial with a pouch", "Native to Australia", "Known for its jumping ability"},
        {"Primate with prehensile tail", "Found in tropical regions", "Known for its agility"},
        {"Largest primate", "Shares DNA with humans", "Found in Africa"},
        {"Close relative of humans", "Shares DNA with humans", "Found in African forests"},
        {"Primate known for its distinctive red bottom", "Found in African and Asian habitats", "Often seen in large groups"},
        {"Large reptile with armored skin", "Semi-aquatic predator", "Found in tropical regions"},
        {"Large reptile with a broad snout", "Found in North America and China", "Prefers freshwater habitats"},
        {"Long limbless reptile", "Venomous", "Found in various habitats"},
        {"Large non-venomous snake", "Constrictor", "Found in tropical regions"},
        {"Venomous snake with hood", "Found in various habitats", "Has potent venom"},
        {"Large non-venomous snake", "Constrictor", "Found in South America"},
        {"Reptile with a hard shell", "Slow-moving", "Found in both freshwater and terrestrial habitats"},
        {"Reptile with a hard shell", "Slow-moving", "Found primarily on land"},
        {"Reptile with scales", "Found in warm climates", "Can detach its tail"},
        {"Reptile with a long tail and spiky crest", "Native to Central and South America", "Has a unique tongue"},
        {"Amphibian with smooth skin", "Known for its jumping ability", "Requires moisture to survive"},
        {"Amphibian similar to a frog", "Has dry warty skin", "Prefers terrestrial habitats"},
        {"Amphibian with slender body and long tail", "Often brightly colored", "Found near water bodies"},
        {"Small amphibian with a long tail", "Often found in forests", "Commonly seen in pet trade"},
        {"Small reptile with adhesive toe pads", "Found in warm climates", "Can change color"},
        {"Reptile with a long, slender body", "Known for its ability to change color", "Found in tropical regions"},
        {"Large flightless bird", "Native to Africa", "Fast runner"},
        {"Flightless bird native to Australia", "Similar to the ostrich", "Known for its distinctive call"},
        {"Flightless bird native to Antarctica", "Well-adapted to cold environments", "Excellent swimmer"},
        {"Flightless bird native to New Zealand", "Nocturnal", "Evolves to have no wings"},
        {"Large bird of prey", "Excellent eyesight", "Often seen soaring in the sky"},
        {"Bird of prey with distinctive call", "Known for its silent flight", "Nocturnal"},
        {"Bird with black feathers", "Often seen in groups", "Known for its intelligence"},
        {"Small bird with brown feathers", "Common in urban areas", "Often seen hopping on the ground"},
        {"Colorful bird with curved beak", "Found in tropical regions", "Known for its mimicry"},
        {"Colorful parrot native to Central and South America", "Long tail feathers", "Often kept as pets"}
    };

    int choice = rand() % 100;
    char wordscp[20];
    strcpy(wordscp, words[choice]);
    int hp = 3, hint = 1;
    int i;

    printf("Guess the word: ");
    for(i = 0; wordscp[i] != '\0'; i++) {
        if(wordscp[i] != 'a' && wordscp[i] != 'e' && wordscp[i] != 'i' && wordscp[i] != 'o' && wordscp[i] != 'u')
            wordscp[i] = '_';
    }
    displayword(wordscp);
    printf("Hint : \n");
    printf("%d.%s\n",1,wordshint[choice][0]);
    do {
        char guess;
        int check = 0;
        int j;
        printf("\nguess the charcter (9 for more hint): ");
        scanf(" %c", &guess);
        if(guess=='9'){
			if(hint<3){
				for(i=0;i<=hint;i++){
				printf("%d.%s\n",i+1,wordshint[choice][i]);
		    	}
			 hint++; 	
			}else{
				printf("NO more hint!\n");
			}	
		}	
		else{
			for(i = 0; words[choice][i] != '\0'; i++) {
	            if(words[choice][i] == guess) {
	                wordscp[i] = guess;
	                check = 1;
	            }
	        }
	        if(check) {
	            printf("\nCorrect guess! : ");
	            displayword(wordscp);
	        } else {
	            hp--;
	            printf("\nIncorrect guess! You have %d guesses left : ", hp);
	            displayword(wordscp);
       	 }
		}
    } while(hp > 0 && strcmp(words[choice], wordscp) != 0); 

    if(hp > 0) {
        printf("\n\t\t Congratulations! The word is %s", words[choice]);
    } else {
        printf("\n\t\t let try agian! The word is %s", words[choice]);
    }
    return 0;
}

void displayword(char wordscp[]) {
    int i;
    for(i = 0; wordscp[i] != '\0'; i++) {
        printf("%c ", wordscp[i]);
    }
    printf("\n");
}

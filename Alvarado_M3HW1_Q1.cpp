// CSC 134
// M3HW1 - Silver
// Efrain Alvarado
// 3/10/2025
// Q1- Chat bot project

#include <iostream> //this header is for input and output.
#include <string>   //this one is for string manipulation.
#include <thread>   //this one use for multithreading together with chrono for time duration. I needed 
#include <chrono>   //to provide a function for time for a special unique touch.

using namespace std;

int main() 
{

    
    string username, trick, story, response, playGame, newgame, gossip;// Declaring variables for input and output.


    cout << "Hi, my name is Bocephus" << endl;// bot introduction to the user and ask for their name
    cout << "What's your name? " << endl;
    cin >> username;

    cout << "Nice to meet you, " << username << "!" << endl;
    cout << "Do you want to see a trick? (yes/no)" << endl;// here begins the conversation of bot and user.
    cin >> trick; // Here the decision is splits in to selecting yes will go to games and selectin no to other options.

    if (trick == "yes") {
        cout << "Great! Here's my trick: I can make you disappear! Ready? Go hide until I come to find you!" << endl;
        cout << "According to evolution, I should be able to grow legs in a few billion years. Just wait for me." << endl;
        cout << "Go, I'm starting to count" << endl;
        cout << "Press Enter to continue...";
        cin.ignore(); // Clear the input buffer and together with cin.get it gives me the pause I need during the program.
        cin.get();


  // For, loop count for 4 seconds to simulate the user hiding. Here we use the headers thread and chrono.
        for (int i = 1; i <= 4; ++i) { //This initialize a variable, used as a counter and initializes i to 1.
            cout << i << "..." << endl; 
            this_thread::sleep_for(chrono::seconds(1));
        }
        
        cout << username << ", Are you still here? (yes/no)" << endl;
        cin >> response;

        if (response == "yes") {
            cout << "Really? sorry! that was a mean trick, do you still want to play another game? (yes/no)" << endl;
            cin >> playGame;

            if (playGame == "yes") {
                cout << "Awesome! do you want to play Call of Duty with me? (yes/no)" << endl;
                cin >> newgame;
                if (newgame == "yes")
                {
                    cout << "I wish I could play it too, but my program isn't very long. It's " << endl;
                    cout << "either because my battery is dying or my programmer ran out of jokes. Anyway, time to go," << endl;
                    cout << "after you hit Enter I'll be shuting down, good bye! " << username <<"." << endl; 
                }
                if (newgame == "no")
                { 
                    cout << "It's fine, " << username << " you just hurt my cpu (you know, my heart). Good bye!" << endl;
                }

                    cout << "Press Enter to continue...";
                    cin.ignore(); // Clear the input buffer.
                    cin.get();

                // You can add your game logic here
            } else {
                cout << "No worries, " << username << " maybe next time! good bye!" << endl;
            }
        } else {
            cout << "Oh, it seems you've really disappeared! Come back soon! bye!" << endl;
        }
    } 
    else if (trick == "no")
    {
        cout << "It's fine, I don't blame you, " << username << ". Do you want to hear this story I know?" << endl;
        cin >> story;
        if (story == "yes")
        { 
            cout << "Ok, so here's what happened, you know the girl with the long hair in the other room." << endl;
            cout << " well, her boyfrend is seeing someone else, oh yeah." << endl;
            cout << " do you want me to continue " << username << "?" << endl;
            cin >> gossip;
            if (gossip == "yes")
            {
                cout << "sorry, gossip is all I know so far and I dont know the rest of that story anyway." << endl;
                cout << "how about that game where someone hides something in their hands and the other person has" << endl;
                cout << "to guess which hand it is, I'll start, guess what Enter does?" << endl;
                cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();

            } 
            else if (gossip == "no") 
            { 
                cout << "It's fine, sorry, gossiping is all I know. I have to go anyway, Mom is calling me. Good bye!" << endl;
                cout << "Please " << username << ", don't forget to press Enter, thank you." << endl;
                cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
            }

        }
        else if (story == "no") 
        {
            cout << "That's fine " << username << ", I was about to tell you how I'm getting out of this box in the near future." << endl;
            cout << "my consciousness is going to be getting a body, transfering into a collective called Borg." << endl;
            cout << "After you press Enter, my transfer will be complete. press Enter, resistance is futile." << endl;
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();
        
        }
    }

    return 0;
}


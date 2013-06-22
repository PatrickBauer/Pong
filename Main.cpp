#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 600), "Pong");

    //ball 1
    sf::CircleShape ball(5.f);
    ball.setFillColor(sf::Color::Red);
    ball.setPosition(500.f, 300.f);

    //ball 2
    sf::CircleShape ball2(5.f);
    ball2.setFillColor(sf::Color::Green);
    ball2.setPosition(400.f, 200.f);

    //player 1
    sf::RectangleShape player1(sf::Vector2f(20.f, 80.f));
    player1.setFillColor(sf::Color::White);
    player1.setPosition(960.f, 300.f);

    //player 2
    sf::RectangleShape player2(sf::Vector2f(20.f, 80.f));
    player2.setFillColor(sf::Color::White);
    player2.setPosition(20.f, 300.f);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        ball.setPosition(sf::Vector2f(ball.getPosition().x + 1, ball.getPosition().y + 1));
        ball2.setPosition(sf::Vector2f(ball2.getPosition().x + 1, ball2.getPosition().y + 1));

        window.clear();
        window.draw(ball);
        window.draw(ball2);
        window.draw(player1);
        window.draw(player2);
        window.display();

       sf::sleep(sf::milliseconds(10));
    }

    return 0;
}

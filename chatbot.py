from nltk.chat.util import Chat, reflections

pairs = [
    [
        r"hi|hello|hey",
        ["Welcome to the Canteen! How can I help you?"]
    ],
    [
        r"what is on the menu?",
        ["We have Pizza, Burger, Sandwich, Maggi, Tea and Coffee."]
    ],
    [
        r"what is the price of pizza?",
        ["The price of Pizza is Rs. 120."]
    ],
    [
        r"what is the price of burger?",
        ["The price of Burger is Rs. 80."]
    ],
    [
        r"do you have tea?",
        ["Yes, Tea is available for Rs. 15."]
    ],
    [
        r"do you have coffee?",
        ["Yes, Coffee is available for Rs. 25."]
    ],
    [
        r"what are the canteen timings?",
        ["The canteen is open from 8 AM to 8 PM."]
    ],
    [
        r"thank you|thanks",

        ["You're welcome! Enjoy your meal."]
    ],
    [
        r"bye|exit",
        ["Thank you for visiting the canteen. Goodbye!"]
    ]
]

chatbot = Chat(pairs, reflections)

print("Canteen Chatbot: Type 'exit' to end the chat.")
chatbot.converse()
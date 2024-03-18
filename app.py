#  █████╗ ██████╗ ██████╗ 
# ██╔══██╗██╔══██╗██╔══██╗
# ███████║██████╔╝██████╔╝
# ██╔══██║██╔═══╝ ██╔═══╝ 
# ██║  ██║██║     ██║     
# ╚═╝  ╚═╝╚═╝     ╚═╝     
print("What is the advantage of using Flutter over Kotlin or Swift?")
# Answering this question is mandatory.
advtg = "Flutter is a framework made by Google for building mobile apps. One big advantage is that Flutter allows you to write code once and use it for both Android and iOS apps, saving time and effort. With Kotlin and Swift, you'd have to write separate code for each platform. Additionally, Flutter uses a single codebase, which can make it easier to maintain and update your app."
print("Which stacks can not be used to make crossplatform apps?")
# Answering this question is mandatory. Multiple options may be selected.
crossplatform = {
   "flutter": false,
   "react": false,
   "native": true,
   "kotlin": true,
   "native script": false,
}
print("Do you know what a splash screen is? If yes, explain in detail the usage and how you'd go creating one in your preferred stack?")
# Answering this question is mandatory.
splashscreen = """ 
Yes, a splash screen is the first screen that appears when you open an app. It usually displays the app's logo or some introductory image, providing a visual transition from the app launch to the main content. 

Creating a splash screen in Flutter:
1. Adding flutter_native_splash to pubspec.yaml and run the cmd: flutter pub get

2. Adding config file(native_splash.yaml)
# native_splash.yaml
image: assets/splash.png
color: "ff6969"
android: true
ios: true

3. Running the packing to generate splash screen code. (cmd: flutter pub run flutter_native_splash:create)

4. Updating main.dart to use the splash screen.
Code:
import 'package:flutter/material.dart';
import 'package:flutter_native_splash/flutter_native_splash.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'MyApp',
      home: SplashScreen(), // Display the splash screen
    );
  }
}
 """
print("What stands out as your favorite feature in an website you use daily that you would like to bring to an app, and what does this feature accomplish or bring to your overall experience? ")
# Answering this question is mandatory.
spl_feature = """ I like the option to choose which notifications I get on websites. It lets me pick what news or updates I want to see. I wish this feature was in apps too. It would make the app more useful by letting me get only the notifications I care about.
 """
print("In your view, if you had to pick the most important part of app development, what would it be, and why? Also, how do you think the importance of this part might change with new technologies or different user needs?  ")
# Answering this question is mandatory.
appDev = """ 
The most important part of making an app is understanding what users want and need. This involves researching who will use the app and what they expect from it. This part will always be important, even as new technologies like AI and augmented reality come into play. It's also important to protect user data and privacy, as this builds trust with users. """
print("Tell us about one application whose architecture(be it speed, design sense, animations) you admire, also tell us the one thing which you would like to change in it.")
# Answering this question is mandatory.
fav_app = """ I admire Instagram's fast and smooth design. However, I'd improve its feed algorithm to show posts in a more chronological order and reduce the number of ads. """
print("Explain the advantages and disadvantages of using cache in a mobile application. Also, mention when it is preferred to use cache in an application. Please answer this question by giving us a fictional story. You may research the theory for the question, but we expect you to explain the concepts in a way that would be understandable to a 9-year-old.")
# Answering this question is mandatory.
cache_adv = """ Once upon a time, there was a wise owl named Oliver who loved reading books. He built a magical library to store his favorite stories. Here's how it relates to using a cache in a mobile app:

Advantages:
Quick Access: Oliver can quickly find his favorite books in the library, just like a cache in an app makes accessing information faster.
Offline Reading: Oliver can read books even when he can't go to the bookstore, similar to how a cache lets an app work without internet.
Efficiency: Oliver saves energy by not flying long distances to find books, just like a cache saves data and battery by storing information.

Disadvantages:
Outdated Books: If Oliver forgets to update his library, stories may become old. In apps, cached info can become outdated if not updated.
Limited Space: Oliver's library has limited space, like how a cache can take up space on a device.
Maintenance: Managing a library requires effort, similar to managing a cache in an app.

When to Use Cache:
Use a cache to make your app faster by storing often-used information.
Use it to let your app work without internet or with a weak connection.
Use it to save data and make your app more efficient.
 """
print("What is Jacob's Principle? Do you think it is necessary to follow it? Does it make people lack creativity?")
# Answering this question is mandatory.
jacob = """ Jakob's Law says people are used to how most websites work, so it's good to design your website similar to others. This helps people understand and use your website more easily. Following this law can make your website better for users, but it doesn't mean you can't be creative with your design. """
print("In its initial phase, frequent buffering in the YouTube mobile application led to considerable user frustration, significantly detracting from the mobile viewing experience. Which pivotal enhancement ultimately allowed YouTube to overcome its buffering dilemma? Kindly elucidate the principle underlying this improvement.")
# Answering this question is mandatory.
ytBuffering = "YouTube improved its mobile app by using adaptive bitrate streaming. This means the app can adjust the video quality based on your internet speed, reducing buffering. This change made watching videos smoother and less frustrating for users."
print("If you rebuild an exsting app, how would you rebuild it and what tech stack would you use to implement it? What new innovation would you bring to this app, and why?")
# Answering this question is mandatory.
app_rebuild = """ 
If I were to rebuild an app, I would first analyze it to understand what needs improvement. I would use Flutter and Firebase for the front-end, back-end, and database to make the app more robust and scalable.

To innovate, I would focus on improving the user experience and adding features that provide unique value. This could include using AI for personalization or AR/VR for immersive experiences.
 """
print("Describe your learning journey with app development. And if you're yet to begin, mention how you would go about your learning process with app dev.(Also do mention any prior projects/familiarity with app frameworks, if you have them.)")
# Answering this question is mandatory.
lifeapp_reeval = """ I'm a beginner in Flutter. I learn by watching YouTube channels such as Fireship, Flutter Guys, etc. I also do Google Codelabs and build apps. """
print("What is the significance of HTTP methods (GET, POST, PUT, DELETE) in the context of APIs?")
# Answering this question is mandatory.
api_und = "GET: Retrieve data from a server.
POST: Send data to a server to create or update a resource.
PUT: Update a resource on the server.
DELETE: Remove a resource from the server."
print("Explain the difference between authentication and authorization in the context of API security.")
# Answering this question is mandatory.
api_security = "Authentication is the process of verifying the identity of a user or system trying to access an API. Authorization, on the other hand, determines what actions the authenticated entity is allowed to perform.
"
print("In terms of scalability, what challenges might SQL databases face as compared to the scalability advantages provided by NoSQL databases? What factors would you consider before chooing a database for your project?")
# Answering this question is mandatory.
databases_compi = "SQL databases can struggle with scalability because they need a fixed schema and scale vertically, meaning they need more powerful hardware. NoSQL databases are more flexible and scale horizontally, meaning they can add more servers easily.

To choose a database for your project, consider factors like your data structure, scalability needs, consistency and availability requirements, performance, costs, and community support."
print("Which of the following tools can you use for testing your app?")
# Answering this question is mandatory. Multiple options may be selected.
app_testing = {
   "Docker": false,
   "Android Emulator": true,
   "Insomnia": false,
   "Postman": false,
}
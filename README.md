#  AI Projects Repository

This repository contains AI-powered projects that showcase practical applications of conversational agents and automation using Python.

---

## 🤖 Project 1: AI-Powered Auto Brochure Generator

This tool creates professional brochures by analyzing a company's website.

### Features

-  Accepts company name and website URL as input
-  Uses web scraping (BeautifulSoup) to collect data from the main page and internal links
-  Generates a brochure-style summary of services, products, and company info
-  Built with Gradio for a simple web-based UI
-  Ideal for automating company profiling or market research tasks

### Technologies Used

- Python 3
- BeautifulSoup (web scraping)
- Requests
- Gradio (web interface)

---

## ✈️ Project 2: Airline AI – Chat-Based Flight Reservation System

Airline AI is a conversational flight booking assistant that helps users book tickets interactively.

### Features

-  Chatbot interface to book flights using natural language
-  Search availability by destination city and date
-  Shows available seats and pricing for each date
-  Captures customer details (name, email, phone)
-  Saves each reservation to a local text file automatically
-  Supports text-to-speech output using OpenAI TTS API
-  Gradio-based UI for a seamless user experience

### Technologies Used

- Python 3
- OpenAI API (Chat and TTS)
- Gradio
- JSON for flight data
- File I/O (for saving reservations)

### Reservation Workflow

1. User selects a city and date
2. System checks seat availability
3. Calculates total cost based on seat count
4. Captures user details
5. Saves all data to a .txt file

---

## 📌 Getting Started

1. Clone the repository
2. Create a virtual environment
3. Install dependencies using pip
4. Set your OpenAI API key in the environment
5. Run the desired project via its Python file

---

## 📝 License

This project is for educational and demo purposes.

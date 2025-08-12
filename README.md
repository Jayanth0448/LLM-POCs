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
## Project 3 : Transforms Python source code into optimized C++
- **Python-to-C++ Code Converter**: Transforms Python source code into optimized C++ using LLMs (GPT or Claude) to enhance performance and efficiency.  
- **LLM Selection & Code Execution**: Allows users to choose between GPT or Claude for conversion, then compile and run the C++ output to verify results.  
- **Performance Boost & Output Validation**: Generates faster executables by leveraging C++ optimization, with built-in tools to compare outputs and benchmark speed improvements.

---

## Project 4 : Synthetic Enterprise Knowledge Base for RAG Pipelines
1. **RAG with LangChain** – Implemented Retrieval-Augmented Generation to combine retrieved banking documents with OpenAI GPT models for accurate, context-aware responses.  
2. **Vector Store using Chroma** – Stored and retrieved OpenAI-generated embeddings for fast semantic search and efficient document retrieval.  
3. **Custom Banking Dataset** – Created detailed Markdown files for company details, employees, products, contracts, and policies to simulate a real-world banking knowledge base.  
4. **Configurable Retriever Pipeline** – Tuned retrieval parameters to optimize the number and relevance of documents fed into the LLM for generation.

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

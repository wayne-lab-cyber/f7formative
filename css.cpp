<!DOCTYPE html>
<html lang="en">
<head>
 <meta charset="UTF-8">
 <meta name="viewport" content="width=device-width, initial-scale=1.0">
 <title>All-in-One Responsive Layout</title>

 <style>
 /*
==========================================================================
 1. Core & Mobile-First Styles (Default)

==========================================================================
*/
 * {
 box-sizing: border-box;
 margin: 0;
 padding: 0;
 }
 body {
 font-family: 'Segoe UI', system-ui, -apple-system, sans-serif;
 line-height: 1.6;
 color: #2c3e50;
 background-color: #f8fafc;
 }
 /* Header - Deep Teal Gradient */
 .main-header {
 background: linear-gradient(135deg, #1e3c72 0%, #1a5f7a 100%);
 color: #ffffff;
 padding: 3rem 1.5rem;
 text-align: center;
 box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
 }
 .main-header h1 {
 font-size: 2.5rem;
 font-weight: 700;
 letter-spacing: -0.5px;
 margin-bottom: 0.5rem;
 text-shadow: 0 2px 4px rgba(0,0,0,0.2);
 }
 .main-header p {
 color: #e2e8f0;
 font-size: 1.1rem;
 font-weight: 300;
 }
 /* Navigation - Slate Top Bar */
 .navbar {
 background-color: #0f172a;
 display: flex;
 flex-direction: column;
 box-shadow: 0 2px 4px rgba(0,0,0,0.05);
 }
 .navbar a {
 color: #94a3b8;
 padding: 1.1rem;
 text-decoration: none;
 font-weight: 500;
 text-align: center;
 transition: all 0.25s ease;
 }
 /* Hover & Active States - Warm Coral Accent */
 .navbar a:hover, .navbar a.active {
 color: #ffffff;
 background-color: #ff6b6b;
 }
 /* Content Layout Containers */
 .content-container {
 display: flex;
 flex-direction: column;
 padding: 1.5rem;
 gap: 1.5rem;
 max-width: 1200px;
 margin: 0 auto;
 }
 /* Main Content Box */
 .main-content {
 background: #ffffff;
 padding: 2rem;
 border-radius: 12px;
 border-top: 4px solid #1a5f7a;
 box-shadow: 0 4px 6px -1px rgba(0, 0, 0, 0.05);
 }
 .main-content h2 {
 color: #1a5f7a;
 margin-bottom: 1rem;
 }
 /* Sidebar Styling - Slate/Teal tint block */
 .sidebar {
 background-color: #f1f5f9;
 padding: 2rem;
 border-radius: 12px;
 border-left: 4px solid #ff6b6b;
 }
 .sidebar h3 {
 color: #0f172a;
 margin-bottom: 1.2rem;
 font-size: 1.3rem;
 }
 /* Cards inside sidebar */
 .sidebar-card {
 background: #ffffff;
 padding: 1rem;
 border-radius: 8px;
 margin-bottom: 1rem;
 box-shadow: 0 2px 4px rgba(0,0,0,0.03);
 }
 .sidebar-card h4 {
 color: #1a5f7a;
 margin-bottom: 0.25rem;
 }
 .sidebar-card p {
 font-size: 0.9rem;
 color: #64748b;
 }
 /* Footer */
 .main-footer {
 background-color: #0f172a;
 color: #94a3b8;
 text-align: center;
 padding: 1.5rem;
 margin-top: 4rem;
 font-size: 0.9rem;
 }
 /*
==========================================================================
 2. Tablet Screens (Widths 600px and up)

==========================================================================
*/
 @media (min-width: 600px) {
 .navbar {
 flex-direction: row;
 justify-content: center;
 }

 .content-container {
 padding: 2.5rem 2rem;
 }
 }
 /*
==========================================================================
 3. Desktop Screens (Widths 992px and up)

==========================================================================
*/
 @media (min-width: 992px) {
 .content-container {
 flex-direction: row;
 }
 .main-content {
 flex: 3;
 }
 .sidebar {
 flex: 1;
 }
 }
 </style>
 </head>
<body>
 <header class="main-header">
 <h1>My Responsive Website</h1>
 <p>John Wayne Rhudzen B. Guan</p>
 </header>
 <nav class="navbar">
 <a href="#" class="active">Home</a>
 <a href="#">About</a>
 <a href="#">Services</a>
 <a href="#">Contact</a>
 </nav>
 <main class="content-container">
 <section class="main-content">
 <h2>Welcome to the Main Content</h2>
 <p>T5-TECHNICAL ASSESSMENT 5</p>
 <p>BSIT-CST TC03</p>
 </section>

 <aside class="sidebar">
 <h3>Sidebar Elements</h3>
 <div class="sidebar-card">
 <h4>Feature Update</h4>
 <p>Check out our brand new styled components and
widgets.</p>
 </div>
 <div class="sidebar-card">
 <h4>Quick Links</h4>
 <p>Access documentation, settings, and user profiles
instantly.</p>
 </div>
 </aside>
 </main>
 <footer class="main-footer">
 <p>&copy; 2026 Responsive Web Design Task. All rights
reserved.</p>
 </footer>
</body>
</html
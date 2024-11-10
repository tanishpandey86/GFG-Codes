<h2><a href="https://www.geeksforgeeks.org/problems/get-minimum-element-from-stack/1?page=6&sortBy=submissions">Get Min from Stack</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p>Given <strong><code>q</code></strong> queries, implement a Stack with three functionalities:</p>
<ol>
<li><strong>Push</strong> an integer <strong><code>x</code> </strong>onto the stack.</li>
<li><strong>Pop</strong> the top element from the stack and return it. If the stack is empty, return <code>-1</code>.</li>
<li><strong>GetMin</strong>, which retrieves the minimum element in the stack <span class="katex"><span class="katex-html" aria-hidden="true"><span class="base"><strong><span class="mord mathnormal">O</span><span class="mopen">(</span><span class="mord">1</span><span class="mclose">)</span></strong></span></span></span> time. If the stack is empty, return <code>-1</code>.</li>
</ol>
<p>Each query can be one of the following:</p>
<ul>
<li><code>1 x</code>: Push <code>x</code> onto the stack.</li>
<li><code>2</code>: Pop the top element from the stack and return it.</li>
<li><code>3</code>: Return the minimum element currently in the stack.</li>
</ul>
<p><span style="font-size: 12pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 12pt;"><strong>Input:</strong> q = 6, queries = [(1 2), (1 3), (2), (3), (1 1), (3)]<strong>
Output: </strong>3, 2, 1<strong>
Explanation: </strong>
push(2): Stack is {2}
push(3): Stack is {2, 3}
pop(): Removes 3, stack is {2}
getMin(): Minimum element is 2
push(1): Stack is {2, 1}
getMin(): Minimum element is 1</span></pre>
<pre><span style="font-size: 12pt;"><strong>Input:</strong> q = 4, queries = [(1, 4), (1, 2), (3), (2)]<strong>
Output: </strong>2, 2<strong>
Explanation: <br></strong>Push 4 onto the stack. Stack is now <code>{4}</code>.<br>Push 2 onto the stack. Stack is now <code>{4, 2}</code>.<br>Get the minimum element, which is 2.<br>Pop the top element (2) from the stack. Stack is now <code>{4}</code>.<strong><br></strong></span></pre>
<pre><span style="font-size: 12pt;"><strong>Input:</strong> q = 5, queries = [(1, 10), (3), (1, 5), (3), (2)]<strong>
Output: </strong>10, 5, 5<strong>
Explanation: <br></strong></span>Push 10 onto the stack. Stack is now <code style="font-size: 12pt;">{10}</code><span style="font-size: 12pt; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">.<br></span>Get the minimum element, which is 10.<br>Push 5 onto the stack. Stack is now <code style="font-size: 12pt;">{10, 5}</code><span style="font-size: 12pt; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">.<br></span>Get the minimum element, which is 5.<br>Pop the top element (5) from the stack. Stack is now <code style="font-size: 12pt;">{10}</code><span style="font-size: 12pt; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">.</span></pre>
<p><span style="font-size: 12pt;"><strong>Constraints:</strong><br>1 &lt;= q &lt;= 100<br>1 &lt;= values on the stack &lt;= 100</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>D-E-Shaw</code>&nbsp;<code>FactSet</code>&nbsp;<code>Walmart</code>&nbsp;<code>Goldman Sachs</code>&nbsp;<code>SAP Labs</code>&nbsp;<code>Sapient</code>&nbsp;<code>One97</code>&nbsp;<code>GreyOrange</code>&nbsp;<code>Kuliza</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;
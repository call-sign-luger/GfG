<h2><a href="https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article">Reverse a Linked List in Groups</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a linked list of size <strong>N</strong>. The task is to reverse every <strong>k</strong> nodes (where k is an input to the function) in the linked list. If the number of nodes is not a multiple of&nbsp;<em>k</em>&nbsp;then left-out nodes, in the end, should be considered as a group and must be&nbsp;reversed (See Example 2 for clarification).</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>LinkedList: 1-&gt;2-&gt;2-&gt;4-&gt;5-&gt;6-&gt;7-&gt;8
K = 4
<strong>Output: </strong>4&nbsp;2&nbsp;2&nbsp;1&nbsp;8&nbsp;7&nbsp;6&nbsp;5 
<strong>Explanation:</strong> 
The first 4 elements 1,2,2,4 are reversed first 
and then the next 4 elements 5,6,7,8. Hence, the 
resultant linked list is 4-&gt;2-&gt;2-&gt;1-&gt;8-&gt;7-&gt;6-&gt;5.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>LinkedList: 1-&gt;2-&gt;3-&gt;4-&gt;5
K = 3
<strong>Output: </strong>3 2 1 5 4 
<strong>Explanation: </strong>
The first 3 elements are 1,2,3 are reversed 
first and then elements 4,5 are reversed.Hence, 
the resultant linked list is 3-&gt;2-&gt;1-&gt;5-&gt;4.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>reverse</strong>() which should reverse the linked list in group of size <strong>k&nbsp;</strong>and return the head of the modified linked list.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity </strong>: O(N)<br><strong>Expected Auxilliary Space </strong>: O(1)</span></p>
<div><span style="font-size: 18px;"><strong>Constraints:</strong></span></div>
<div><span style="font-size: 18px;">1 &lt;= N &lt;= 10<sup>5</sup></span><br><span style="font-size: 18px;">1 &lt;= k &lt;= N</span></div></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>VMWare</code>&nbsp;<code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>Hike</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Walmart</code>&nbsp;<code>Goldman Sachs</code>&nbsp;<code>Adobe</code>&nbsp;<code>SAP Labs</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;<code>Data Structures</code>&nbsp;
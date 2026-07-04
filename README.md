# LeetCode to GitHub Auto-Sync

This repository automatically fetches your accepted LeetCode submissions and pushes them here! 

It uses a Python script running on GitHub Actions to keep your solutions backed up without you having to manually copy and paste.

## Setup Instructions

To get this working for your own LeetCode account, follow these steps:

### 1. Create a Repository
Push this folder to a new, empty repository on your GitHub account.

### 2. Get Your LeetCode Cookies
Since LeetCode does not have a public API, the script needs your session cookies to access your profile.

1. Go to [LeetCode](https://leetcode.com/) and log in.
2. Open **Developer Tools** (Right Click -> Inspect, or press F12).
3. Go to the **Network** tab.
4. Refresh the page.
5. Click on the first request to `leetcode.com` (or any GraphQL request).
6. Under **Request Headers**, look for the `Cookie:` string.
7. Find and copy the values for:
   - `LEETCODE_SESSION`
   - `csrftoken` (This will be your `LEETCODE_CSRF_TOKEN`)

### 3. Add GitHub Secrets
1. Go to your GitHub repository on the web.
2. Click on **Settings** -> **Secrets and variables** -> **Actions**.
3. Click **New repository secret**.
4. Add the first secret:
   - **Name:** `LEETCODE_SESSION`
   - **Secret:** *(Paste your session cookie value)*
5. Add the second secret:
   - **Name:** `LEETCODE_CSRF_TOKEN`
   - **Secret:** *(Paste your csrftoken value)*

### 4. Enable GitHub Actions
By default, GitHub Actions might be disabled on a new repo.
1. Go to the **Actions** tab on your repository.
2. Click the button to **Enable workflows**.
3. You can click on the **Sync Leetcode** workflow on the left side, and click **Run workflow** to test it out manually!

## How it works
- The GitHub Action runs daily.
- It executes `sync.py`.
- The Python script fetches your latest accepted submissions via the LeetCode GraphQL API.
- It saves them locally into the `solutions` folder.
- An auto-commit action automatically pushes any changes back to this repo.

<!---LeetCode Topics Start-->
# LeetCode Topics
## Linked List
|  |
| ------- |
| [0141-linked-list-cycle](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0141-linked-list-cycle) |
| [0142-linked-list-cycle-ii](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0142-linked-list-cycle-ii) |
| [0148-sort-list](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0148-sort-list) |
| [0160-intersection-of-two-linked-lists](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0160-intersection-of-two-linked-lists) |
| [0234-palindrome-linked-list](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0234-palindrome-linked-list) |
| [0328-odd-even-linked-list](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0328-odd-even-linked-list) |
| [0876-middle-of-the-linked-list](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0876-middle-of-the-linked-list) |
## Two Pointers
|  |
| ------- |
| [0042-trapping-rain-water](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0042-trapping-rain-water) |
| [0075-sort-colors](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0075-sort-colors) |
| [0141-linked-list-cycle](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0141-linked-list-cycle) |
| [0142-linked-list-cycle-ii](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0142-linked-list-cycle-ii) |
| [0148-sort-list](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0148-sort-list) |
| [0160-intersection-of-two-linked-lists](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0160-intersection-of-two-linked-lists) |
| [0234-palindrome-linked-list](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0234-palindrome-linked-list) |
| [0283-move-zeroes](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0283-move-zeroes) |
| [0876-middle-of-the-linked-list](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0876-middle-of-the-linked-list) |
| [2149-rearrange-array-elements-by-sign](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/2149-rearrange-array-elements-by-sign) |
## Hash Table
|  |
| ------- |
| [0001-two-sum](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0001-two-sum) |
| [0141-linked-list-cycle](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0141-linked-list-cycle) |
| [0142-linked-list-cycle-ii](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0142-linked-list-cycle-ii) |
| [0160-intersection-of-two-linked-lists](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0160-intersection-of-two-linked-lists) |
| [0268-missing-number](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0268-missing-number) |
| [0987-vertical-order-traversal-of-a-binary-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0987-vertical-order-traversal-of-a-binary-tree) |
| [1189-maximum-number-of-balloons](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/1189-maximum-number-of-balloons) |
## Stack
|  |
| ------- |
| [0042-trapping-rain-water](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0042-trapping-rain-water) |
| [0094-binary-tree-inorder-traversal](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0094-binary-tree-inorder-traversal) |
| [0144-binary-tree-preorder-traversal](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0145-binary-tree-postorder-traversal) |
| [0234-palindrome-linked-list](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0234-palindrome-linked-list) |
## Recursion
|  |
| ------- |
| [0234-palindrome-linked-list](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0234-palindrome-linked-list) |
## Divide and Conquer
|  |
| ------- |
| [0148-sort-list](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0148-sort-list) |
## Sorting
|  |
| ------- |
| [0075-sort-colors](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0075-sort-colors) |
| [0148-sort-list](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0148-sort-list) |
| [0268-missing-number](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0268-missing-number) |
| [0987-vertical-order-traversal-of-a-binary-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0987-vertical-order-traversal-of-a-binary-tree) |
## Merge Sort
|  |
| ------- |
| [0148-sort-list](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0148-sort-list) |
## Array
|  |
| ------- |
| [0001-two-sum](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0001-two-sum) |
| [0042-trapping-rain-water](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0042-trapping-rain-water) |
| [0075-sort-colors](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0075-sort-colors) |
| [0121-best-time-to-buy-and-sell-stock](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0121-best-time-to-buy-and-sell-stock) |
| [0268-missing-number](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0268-missing-number) |
| [0283-move-zeroes](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0283-move-zeroes) |
| [2149-rearrange-array-elements-by-sign](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/2149-rearrange-array-elements-by-sign) |
## Dynamic Programming
|  |
| ------- |
| [0042-trapping-rain-water](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0042-trapping-rain-water) |
| [0121-best-time-to-buy-and-sell-stock](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0121-best-time-to-buy-and-sell-stock) |
## Monotonic Stack
|  |
| ------- |
| [0042-trapping-rain-water](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0042-trapping-rain-water) |
## Tree
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0094-binary-tree-inorder-traversal) |
| [0100-same-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0100-same-tree) |
| [0104-maximum-depth-of-binary-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0104-maximum-depth-of-binary-tree) |
| [0110-balanced-binary-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0110-balanced-binary-tree) |
| [0144-binary-tree-preorder-traversal](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0145-binary-tree-postorder-traversal) |
| [0700-search-in-a-binary-search-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0700-search-in-a-binary-search-tree) |
| [0987-vertical-order-traversal-of-a-binary-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0987-vertical-order-traversal-of-a-binary-tree) |
## Depth-First Search
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0094-binary-tree-inorder-traversal) |
| [0100-same-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0100-same-tree) |
| [0104-maximum-depth-of-binary-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0104-maximum-depth-of-binary-tree) |
| [0110-balanced-binary-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0110-balanced-binary-tree) |
| [0144-binary-tree-preorder-traversal](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0145-binary-tree-postorder-traversal) |
| [0987-vertical-order-traversal-of-a-binary-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0987-vertical-order-traversal-of-a-binary-tree) |
## Binary Tree
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0094-binary-tree-inorder-traversal) |
| [0100-same-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0100-same-tree) |
| [0104-maximum-depth-of-binary-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0104-maximum-depth-of-binary-tree) |
| [0110-balanced-binary-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0110-balanced-binary-tree) |
| [0144-binary-tree-preorder-traversal](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0145-binary-tree-postorder-traversal) |
| [0700-search-in-a-binary-search-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0700-search-in-a-binary-search-tree) |
| [0987-vertical-order-traversal-of-a-binary-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0987-vertical-order-traversal-of-a-binary-tree) |
## Breadth-First Search
|  |
| ------- |
| [0100-same-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0100-same-tree) |
| [0104-maximum-depth-of-binary-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0104-maximum-depth-of-binary-tree) |
| [0987-vertical-order-traversal-of-a-binary-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0987-vertical-order-traversal-of-a-binary-tree) |
## Binary Search Tree
|  |
| ------- |
| [0268-missing-number](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0268-missing-number) |
| [0700-search-in-a-binary-search-tree](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0700-search-in-a-binary-search-tree) |
## Math
|  |
| ------- |
| [0268-missing-number](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0268-missing-number) |
## Bit Manipulation
|  |
| ------- |
| [0268-missing-number](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/0268-missing-number) |
## String
|  |
| ------- |
| [1189-maximum-number-of-balloons](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/1189-maximum-number-of-balloons) |
## Counting
|  |
| ------- |
| [1189-maximum-number-of-balloons](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/1189-maximum-number-of-balloons) |
## Simulation
|  |
| ------- |
| [2149-rearrange-array-elements-by-sign](https://github.com/prathamgarg1103/leetcode-submissions/tree/master/2149-rearrange-array-elements-by-sign) |
<!---LeetCode Topics End-->
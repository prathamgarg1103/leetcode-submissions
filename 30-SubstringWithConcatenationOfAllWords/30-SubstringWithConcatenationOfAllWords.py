# Last updated: 6/5/2026, 12:17:59 PM
from collections import Counter

class Solution:
    def findSubstring(self, s, words):
        if not s or not words:
            return []

        word_len = len(words[0])
        num_words = len(words)
        total_len = word_len * num_words

        word_count = Counter(words)
        result = []

        for i in range(word_len):
            left = i
            window_count = Counter()
            count = 0

            for right in range(i, len(s) - word_len + 1, word_len):
                word = s[right:right + word_len]

                if word in word_count:
                    window_count[word] += 1
                    count += 1

                    while window_count[word] > word_count[word]:
                        left_word = s[left:left + word_len]
                        window_count[left_word] -= 1
                        left += word_len
                        count -= 1

                    if count == num_words:
                        result.append(left)
                else:
                    window_count.clear()
                    count = 0
                    left = right + word_len

        return result

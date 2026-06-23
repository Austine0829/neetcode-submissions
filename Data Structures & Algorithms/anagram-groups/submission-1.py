class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dict_group = {}
        list_group = []

        for s in strs:
            sorted_str = "".join(sorted(s))
            dict_group.setdefault(sorted_str, []).append(s)

        for key in dict_group:
            grouped_anagrams = dict_group[key]
            list_group.append(grouped_anagrams)
                        
        return list_group
# Write your MySQL query statement below
SELECT w1.Id
FROM weather w1, weather w2
WHERE TO_DAYS(w1.RecordDate) - TO_DAYS(w2.RecordDate) = 1
AND w1.Temperature > w2.Temperature;

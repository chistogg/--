### Hi there 👋

<!--
**chistogg/chistogg** is a ✨ _special_ ✨ repository because its `README.md` (this file) appears on your GitHub profile.

Here are some ideas to get you started:

- 🔭 I’m currently working on ...
- 🌱 I’m currently learning ...
- 👯 I’m looking to collaborate on ...
- 🤔 I’m looking for help with ...
- 💬 Ask me about ...
- 📫 How to reach me: ...
- 😄 Pronouns: ...
- ⚡ Fun fact: ...
-->
- насколько была бы большой твоя мечта, если бы ты знал,что никогда не ошибешься?
void comb(std::vector<int> &data) // data — название вектора  (передаём по ссылке, чтобы вызов comb(array) менял вектор array)
    {
		double factor = 1.2473309; // фактор уменьшения
		int step = data.size() - 1; // шаг сортировки
        
        //Последняя итерация цикла, когда step==1 эквивалентна одному проходу сортировки пузырьком
		while (step >= 1)
		{
			for (int i = 0; i + step < data.size(); i++)
			{
				if (data[i] > data[i + step])
				{
					std::swap(data[i], data[i + step]);
				}
			}
			step /= factor;
		}
	}

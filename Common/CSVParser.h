#pragma once
#include <unordered_map>
#include <vector>
#include <cstdlib>
#include <string>
#include <filesystem>
#include <fstream>


class CSVParser
{
public:
	CSVParser();
	CSVParser(const char* path);
	CSVParser(const char* relative, const char* fileName);
	~CSVParser();

private:
	std::unordered_map<std::string, std::vector<std::string>> ColumnDatas;
	int RowCount;
	int ColumnCount;

public:
	bool Read(const char* relativePath, const char* fileName);
	bool Read(const char* fullPath);
	const int GetRowCount() const { return RowCount; }
	const int GetColumnCount() const { return ColumnCount; }

private:
	std::string GetPath(const char* relativePath, const char* fileName);
	std::string GetData(const char* n, int idx);

public:
	void GetData(const char* columnName, int idx, short& retVal);
	void GetData(const char* columnName, int idx, int& retVal);
	void GetData(const char* columnName, int idx, float& retVal);
	void GetData(const char* columnName, int idx, double& retVal);
	void GetData(const char* columnName, int idx, bool& retVal);

private:
	void Convert(const std::string& strVal, short& retVal)
	{
		retVal = static_cast<short>(std::stoi(strVal));
	}

	void Convert(const std::string& strVal, int& retVal)
	{
		retVal = static_cast<int>(std::stoi(strVal));
	}

	void Convert(const std::string& strVal, float& retVal)
	{
		retVal = std::stof(strVal);
	}

	void Convert(const std::string& strVal, double& retVal)
	{
		retVal = std::stod(strVal);
	}

	void Convert(const std::string& strVal, bool& retVal)
	{
		size_t size = strVal.length();
		if (size == 0)
			return;

		std::string temp;
		temp.resize(size);
		for (int i = 0; i < size; ++i)
			temp[i] = std::toupper(strVal[i]);

		if (temp == "TRUE")
			retVal = true;
		else if (temp == "FALSE")
			retVal = false;
	}


};


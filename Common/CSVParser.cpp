#include "CSVParser.h"

CSVParser::CSVParser()
{
}

CSVParser::CSVParser(const char* path) : RowCount(0), ColumnCount(0)
{
	ColumnDatas.clear();
	Read(path);
}

CSVParser::CSVParser(const char* relative, const char* fileName) : RowCount(0), ColumnCount(0)
{
	ColumnDatas.clear();
	Read(relative, fileName);
}

CSVParser::~CSVParser()
{
	ColumnDatas.clear();
}

bool CSVParser::Read(const char* relativePath, const char* fileName)
{
	return Read(GetPath(relativePath, fileName).c_str());
}

bool CSVParser::Read(const char* fullPath)
{
	std::fstream stream(fullPath);
	std::string fileStr;

	if (!stream.is_open())
		return false;

	int bom_idx = 0;
	char bom[3];
	stream.read(bom, 3);
	if ((bom[0] == (char)0xEF) && (bom[1] == (char)0xBB) && bom[2] == (char)0xBF)
		bom_idx = 3;
	else
		bom_idx = 0;

	//파일의 커서를 옮기는 함수
	stream.seekg(bom_idx, std::ios::end);
	fileStr.resize(stream.tellg());
	stream.seekg(bom_idx, std::ios::beg);

	stream.read(&fileStr[0], fileStr.size());

	char* context = nullptr;
	char* columnStr = nullptr;
	columnStr = strtok_s(const_cast<char*>(fileStr.c_str()), "\n", &context);

	std::unordered_map<int, std::string> colNames;
	
	int colIndex = 0;
	while (true)
	{
		char* columnName = strtok_s(NULL, ",", &columnStr);
		if (columnName == nullptr || columnName == "")
			break;

		std::string Name = columnName;
		colNames[colIndex++] = Name;
		ColumnCount++;
	}

	while (true)
	{
		char* row = strtok_s(NULL, "\n", &context);
		if (row == nullptr)
			break;

		int cellIdx = 0;
		while (true)
		{
			char* cellData = strtok_s(NULL, ",", &row);
			if (cellData == nullptr)
				break;

			ColumnDatas[colNames[cellIdx++]].push_back(cellData);
		}

		RowCount++;
	}

	return true;
}

std::string CSVParser::GetPath(const char* relativePath, const char* fileName)
{
	char absPath[4095] = {};

	if (_fullpath(absPath, relativePath, sizeof(absPath)) == nullptr)
		return "";

	std::string fullPath = absPath;
	if (!fullPath.empty() && fullPath.back() != '\\')
		fullPath += '\\';

	fullPath += fileName;

	return fullPath;
}

std::string CSVParser::GetData(const char* n, int idx)
{
	auto it = ColumnDatas.find(n);
	if (it == ColumnDatas.end())
		return "";

	if (idx < 0 || idx >= it->second.size())
		return "";

	return it->second[idx];
}

void CSVParser::GetData(const char* columnName, int idx, short& retVal)
{
	std::string strVal = GetData(columnName, idx);
	if (strVal.empty() || 0 == strVal.size())
		return;

	Convert(strVal, retVal);
}

void CSVParser::GetData(const char* columnName, int idx, int& retVal)
{
	std::string strVal = GetData(columnName, idx);
	if (strVal.empty() || 0 == strVal.size())
		return;

	Convert(strVal, retVal);
}

void CSVParser::GetData(const char* columnName, int idx, float& retVal)
{
	std::string strVal = GetData(columnName, idx);
	if (strVal.empty() || 0 == strVal.size())
		return;

	Convert(strVal, retVal);
}

void CSVParser::GetData(const char* columnName, int idx, double& retVal)
{
	std::string strVal = GetData(columnName, idx);
	if (strVal.empty() || 0 == strVal.size())
		return;

	Convert(strVal, retVal);
}

void CSVParser::GetData(const char* columnName, int idx, bool& retVal)
{
	std::string strVal = GetData(columnName, idx);
	if (strVal.empty() || 0 == strVal.size())
		return;

	Convert(strVal, retVal);
}



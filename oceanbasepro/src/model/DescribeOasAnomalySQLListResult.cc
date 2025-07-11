/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/oceanbasepro/model/DescribeOasAnomalySQLListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeOasAnomalySQLListResult::DescribeOasAnomalySQLListResult() :
	ServiceResult()
{}

DescribeOasAnomalySQLListResult::DescribeOasAnomalySQLListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOasAnomalySQLListResult::~DescribeOasAnomalySQLListResult()
{}

void DescribeOasAnomalySQLListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["AvgCpuTime"].isNull())
			dataObject.avgCpuTime = valueDataDataItem["AvgCpuTime"].asString();
		if(!valueDataDataItem["AvgElapsedTime"].isNull())
			dataObject.avgElapsedTime = valueDataDataItem["AvgElapsedTime"].asString();
		if(!valueDataDataItem["AvgGetPlanTime"].isNull())
			dataObject.avgGetPlanTime = valueDataDataItem["AvgGetPlanTime"].asString();
		if(!valueDataDataItem["CpuTime"].isNull())
			dataObject.cpuTime = valueDataDataItem["CpuTime"].asString();
		if(!valueDataDataItem["DbName"].isNull())
			dataObject.dbName = valueDataDataItem["DbName"].asString();
		if(!valueDataDataItem["Diagnosis"].isNull())
			dataObject.diagnosis = valueDataDataItem["Diagnosis"].asString();
		if(!valueDataDataItem["Executions"].isNull())
			dataObject.executions = valueDataDataItem["Executions"].asString();
		if(!valueDataDataItem["LastExecutedTime"].isNull())
			dataObject.lastExecutedTime = valueDataDataItem["LastExecutedTime"].asString();
		if(!valueDataDataItem["RiskLevel"].isNull())
			dataObject.riskLevel = valueDataDataItem["RiskLevel"].asString();
		if(!valueDataDataItem["SqlId"].isNull())
			dataObject.sqlId = valueDataDataItem["SqlId"].asString();
		if(!valueDataDataItem["SqlTextShort"].isNull())
			dataObject.sqlTextShort = valueDataDataItem["SqlTextShort"].asString();
		if(!valueDataDataItem["Suggestion"].isNull())
			dataObject.suggestion = valueDataDataItem["Suggestion"].asString();
		if(!valueDataDataItem["SumElapsedTime"].isNull())
			dataObject.sumElapsedTime = valueDataDataItem["SumElapsedTime"].asString();
		if(!valueDataDataItem["UserName"].isNull())
			dataObject.userName = valueDataDataItem["UserName"].asString();
		if(!valueDataDataItem["DynamicSql"].isNull())
			dataObject.dynamicSql = valueDataDataItem["DynamicSql"].asString() == "true";
		if(!valueDataDataItem["AvgDbTime"].isNull())
			dataObject.avgDbTime = valueDataDataItem["AvgDbTime"].asString();
		if(!valueDataDataItem["SumDbTime"].isNull())
			dataObject.sumDbTime = valueDataDataItem["SumDbTime"].asString();
		if(!valueDataDataItem["AvgRetryCount"].isNull())
			dataObject.avgRetryCount = valueDataDataItem["AvgRetryCount"].asString();
		if(!valueDataDataItem["SumRetryCount"].isNull())
			dataObject.sumRetryCount = valueDataDataItem["SumRetryCount"].asString();
		if(!valueDataDataItem["AvgLogicalReads"].isNull())
			dataObject.avgLogicalReads = valueDataDataItem["AvgLogicalReads"].asString();
		auto allSqlListNode = valueDataDataItem["SqlList"]["SqlListItem"];
		for (auto valueDataDataItemSqlListSqlListItem : allSqlListNode)
		{
			DataItem::SqlListItem sqlListObject;
			if(!valueDataDataItemSqlListSqlListItem["AvgCpuTime"].isNull())
				sqlListObject.avgCpuTime = valueDataDataItemSqlListSqlListItem["AvgCpuTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgElapsedTime"].isNull())
				sqlListObject.avgElapsedTime = valueDataDataItemSqlListSqlListItem["AvgElapsedTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgGetPlanTime"].isNull())
				sqlListObject.avgGetPlanTime = valueDataDataItemSqlListSqlListItem["AvgGetPlanTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["CpuTime"].isNull())
				sqlListObject.cpuTime = valueDataDataItemSqlListSqlListItem["CpuTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["DbName"].isNull())
				sqlListObject.dbName = valueDataDataItemSqlListSqlListItem["DbName"].asString();
			if(!valueDataDataItemSqlListSqlListItem["Diagnosis"].isNull())
				sqlListObject.diagnosis = valueDataDataItemSqlListSqlListItem["Diagnosis"].asString();
			if(!valueDataDataItemSqlListSqlListItem["Executions"].isNull())
				sqlListObject.executions = valueDataDataItemSqlListSqlListItem["Executions"].asString();
			if(!valueDataDataItemSqlListSqlListItem["LastExecutedTime"].isNull())
				sqlListObject.lastExecutedTime = valueDataDataItemSqlListSqlListItem["LastExecutedTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["RiskLevel"].isNull())
				sqlListObject.riskLevel = valueDataDataItemSqlListSqlListItem["RiskLevel"].asString();
			if(!valueDataDataItemSqlListSqlListItem["SqlId"].isNull())
				sqlListObject.sqlId = valueDataDataItemSqlListSqlListItem["SqlId"].asString();
			if(!valueDataDataItemSqlListSqlListItem["SqlTextShort"].isNull())
				sqlListObject.sqlTextShort = valueDataDataItemSqlListSqlListItem["SqlTextShort"].asString();
			if(!valueDataDataItemSqlListSqlListItem["Suggestion"].isNull())
				sqlListObject.suggestion = valueDataDataItemSqlListSqlListItem["Suggestion"].asString();
			if(!valueDataDataItemSqlListSqlListItem["SumElapsedTime"].isNull())
				sqlListObject.sumElapsedTime = valueDataDataItemSqlListSqlListItem["SumElapsedTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["UserName"].isNull())
				sqlListObject.userName = valueDataDataItemSqlListSqlListItem["UserName"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgDbTime"].isNull())
				sqlListObject.avgDbTime = valueDataDataItemSqlListSqlListItem["AvgDbTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["SumDbTime"].isNull())
				sqlListObject.sumDbTime = valueDataDataItemSqlListSqlListItem["SumDbTime"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgRetryCount"].isNull())
				sqlListObject.avgRetryCount = valueDataDataItemSqlListSqlListItem["AvgRetryCount"].asString();
			if(!valueDataDataItemSqlListSqlListItem["SumRetryCount"].isNull())
				sqlListObject.sumRetryCount = valueDataDataItemSqlListSqlListItem["SumRetryCount"].asString();
			if(!valueDataDataItemSqlListSqlListItem["AvgLogicalReads"].isNull())
				sqlListObject.avgLogicalReads = valueDataDataItemSqlListSqlListItem["AvgLogicalReads"].asString();
			auto allDiagTypes1 = value["DiagTypes"]["DiagTypes"];
			for (auto value : allDiagTypes1)
				sqlListObject.diagTypes1.push_back(value.asString());
			dataObject.sqlList.push_back(sqlListObject);
		}
		auto allDiagTypes = value["DiagTypes"]["DiagTypes"];
		for (auto value : allDiagTypes)
			dataObject.diagTypes.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeOasAnomalySQLListResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeOasAnomalySQLListResult::DataItem> DescribeOasAnomalySQLListResult::getData()const
{
	return data_;
}


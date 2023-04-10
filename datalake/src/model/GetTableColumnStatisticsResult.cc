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

#include <alibabacloud/datalake/model/GetTableColumnStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

GetTableColumnStatisticsResult::GetTableColumnStatisticsResult() :
	ServiceResult()
{}

GetTableColumnStatisticsResult::GetTableColumnStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTableColumnStatisticsResult::~GetTableColumnStatisticsResult()
{}

void GetTableColumnStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allColumnStatisticsObjListNode = value["ColumnStatisticsObjList"]["ColumnStatisticsObjListItem"];
	for (auto valueColumnStatisticsObjListColumnStatisticsObjListItem : allColumnStatisticsObjListNode)
	{
		ColumnStatisticsObjListItem columnStatisticsObjListObject;
		if(!valueColumnStatisticsObjListColumnStatisticsObjListItem["ColumnName"].isNull())
			columnStatisticsObjListObject.columnName = valueColumnStatisticsObjListColumnStatisticsObjListItem["ColumnName"].asString();
		if(!valueColumnStatisticsObjListColumnStatisticsObjListItem["ColumnType"].isNull())
			columnStatisticsObjListObject.columnType = valueColumnStatisticsObjListColumnStatisticsObjListItem["ColumnType"].asString();
		auto columnStatisticsDataNode = value["ColumnStatisticsData"];
		if(!columnStatisticsDataNode["StatisticsData"].isNull())
			columnStatisticsObjListObject.columnStatisticsData.statisticsData = columnStatisticsDataNode["StatisticsData"].asString();
		if(!columnStatisticsDataNode["StatisticsType"].isNull())
			columnStatisticsObjListObject.columnStatisticsData.statisticsType = columnStatisticsDataNode["StatisticsType"].asString();
		columnStatisticsObjList_.push_back(columnStatisticsObjListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetTableColumnStatisticsResult::getMessage()const
{
	return message_;
}

std::vector<GetTableColumnStatisticsResult::ColumnStatisticsObjListItem> GetTableColumnStatisticsResult::getColumnStatisticsObjList()const
{
	return columnStatisticsObjList_;
}

std::string GetTableColumnStatisticsResult::getCode()const
{
	return code_;
}

bool GetTableColumnStatisticsResult::getSuccess()const
{
	return success_;
}


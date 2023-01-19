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

#include <alibabacloud/sas/model/GetCheckRiskStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetCheckRiskStatisticsResult::GetCheckRiskStatisticsResult() :
	ServiceResult()
{}

GetCheckRiskStatisticsResult::GetCheckRiskStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCheckRiskStatisticsResult::~GetCheckRiskStatisticsResult()
{}

void GetCheckRiskStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["SceneName"].isNull())
			dataObject.sceneName = valueDataDataItem["SceneName"].asString();
		if(!valueDataDataItem["LowWarningCount"].isNull())
			dataObject.lowWarningCount = std::stoi(valueDataDataItem["LowWarningCount"].asString());
		if(!valueDataDataItem["MediumWarningCount"].isNull())
			dataObject.mediumWarningCount = std::stoi(valueDataDataItem["MediumWarningCount"].asString());
		if(!valueDataDataItem["HighWarningCount"].isNull())
			dataObject.highWarningCount = std::stoi(valueDataDataItem["HighWarningCount"].asString());
		if(!valueDataDataItem["TotalCount"].isNull())
			dataObject.totalCount = std::stoi(valueDataDataItem["TotalCount"].asString());
		if(!valueDataDataItem["PassCount"].isNull())
			dataObject.passCount = std::stoi(valueDataDataItem["PassCount"].asString());
		auto allSubStatisticsNode = valueDataDataItem["SubStatistics"]["SubStatistic"];
		for (auto valueDataDataItemSubStatisticsSubStatistic : allSubStatisticsNode)
		{
			DataItem::SubStatistic subStatisticsObject;
			if(!valueDataDataItemSubStatisticsSubStatistic["TypeName"].isNull())
				subStatisticsObject.typeName = valueDataDataItemSubStatisticsSubStatistic["TypeName"].asString();
			if(!valueDataDataItemSubStatisticsSubStatistic["Alias"].isNull())
				subStatisticsObject.alias = valueDataDataItemSubStatisticsSubStatistic["Alias"].asString();
			if(!valueDataDataItemSubStatisticsSubStatistic["LowWarningCount"].isNull())
				subStatisticsObject.lowWarningCount = std::stoi(valueDataDataItemSubStatisticsSubStatistic["LowWarningCount"].asString());
			if(!valueDataDataItemSubStatisticsSubStatistic["MediumWarningCount"].isNull())
				subStatisticsObject.mediumWarningCount = std::stoi(valueDataDataItemSubStatisticsSubStatistic["MediumWarningCount"].asString());
			if(!valueDataDataItemSubStatisticsSubStatistic["HighWarningCount"].isNull())
				subStatisticsObject.highWarningCount = std::stoi(valueDataDataItemSubStatisticsSubStatistic["HighWarningCount"].asString());
			if(!valueDataDataItemSubStatisticsSubStatistic["TotalCount"].isNull())
				subStatisticsObject.totalCount = std::stoi(valueDataDataItemSubStatisticsSubStatistic["TotalCount"].asString());
			if(!valueDataDataItemSubStatisticsSubStatistic["PassCount"].isNull())
				subStatisticsObject.passCount = std::stoi(valueDataDataItemSubStatisticsSubStatistic["PassCount"].asString());
			dataObject.subStatistics.push_back(subStatisticsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::vector<GetCheckRiskStatisticsResult::DataItem> GetCheckRiskStatisticsResult::getData()const
{
	return data_;
}

int GetCheckRiskStatisticsResult::getCount()const
{
	return count_;
}


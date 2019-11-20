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

#include <alibabacloud/cusanalytic_sc_online/model/GetHourlyStatisticsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

GetHourlyStatisticsDataResult::GetHourlyStatisticsDataResult() :
	ServiceResult()
{}

GetHourlyStatisticsDataResult::GetHourlyStatisticsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHourlyStatisticsDataResult::~GetHourlyStatisticsDataResult()
{}

void GetHourlyStatisticsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBaseStatisticsDatasNode = value["BaseStatisticsDatas"]["BaseStatisticsData"];
	for (auto valueBaseStatisticsDatasBaseStatisticsData : allBaseStatisticsDatasNode)
	{
		BaseStatisticsData baseStatisticsDatasObject;
		if(!valueBaseStatisticsDatasBaseStatisticsData["MaleUvCount"].isNull())
			baseStatisticsDatasObject.maleUvCount = std::stoi(valueBaseStatisticsDatasBaseStatisticsData["MaleUvCount"].asString());
		if(!valueBaseStatisticsDatasBaseStatisticsData["StoreId"].isNull())
			baseStatisticsDatasObject.storeId = std::stol(valueBaseStatisticsDatasBaseStatisticsData["StoreId"].asString());
		if(!valueBaseStatisticsDatasBaseStatisticsData["Day"].isNull())
			baseStatisticsDatasObject.day = valueBaseStatisticsDatasBaseStatisticsData["Day"].asString();
		if(!valueBaseStatisticsDatasBaseStatisticsData["LocationId"].isNull())
			baseStatisticsDatasObject.locationId = std::stol(valueBaseStatisticsDatasBaseStatisticsData["LocationId"].asString());
		if(!valueBaseStatisticsDatasBaseStatisticsData["StayPeriod"].isNull())
			baseStatisticsDatasObject.stayPeriod = std::stoi(valueBaseStatisticsDatasBaseStatisticsData["StayPeriod"].asString());
		if(!valueBaseStatisticsDatasBaseStatisticsData["UvCount"].isNull())
			baseStatisticsDatasObject.uvCount = std::stoi(valueBaseStatisticsDatasBaseStatisticsData["UvCount"].asString());
		if(!valueBaseStatisticsDatasBaseStatisticsData["OnlyBodyUvCount"].isNull())
			baseStatisticsDatasObject.onlyBodyUvCount = std::stoi(valueBaseStatisticsDatasBaseStatisticsData["OnlyBodyUvCount"].asString());
		if(!valueBaseStatisticsDatasBaseStatisticsData["Hour"].isNull())
			baseStatisticsDatasObject.hour = valueBaseStatisticsDatasBaseStatisticsData["Hour"].asString();
		if(!valueBaseStatisticsDatasBaseStatisticsData["FemaleUvCount"].isNull())
			baseStatisticsDatasObject.femaleUvCount = std::stoi(valueBaseStatisticsDatasBaseStatisticsData["FemaleUvCount"].asString());
		if(!valueBaseStatisticsDatasBaseStatisticsData["OldCount"].isNull())
			baseStatisticsDatasObject.oldCount = std::stoi(valueBaseStatisticsDatasBaseStatisticsData["OldCount"].asString());
		if(!valueBaseStatisticsDatasBaseStatisticsData["NewCount"].isNull())
			baseStatisticsDatasObject.newCount = std::stoi(valueBaseStatisticsDatasBaseStatisticsData["NewCount"].asString());
		baseStatisticsDatas_.push_back(baseStatisticsDatasObject);
	}
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["CursorTime"].isNull())
		cursorTime_ = value["CursorTime"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<GetHourlyStatisticsDataResult::BaseStatisticsData> GetHourlyStatisticsDataResult::getBaseStatisticsDatas()const
{
	return baseStatisticsDatas_;
}

std::string GetHourlyStatisticsDataResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string GetHourlyStatisticsDataResult::getCursorTime()const
{
	return cursorTime_;
}

bool GetHourlyStatisticsDataResult::getSuccess()const
{
	return success_;
}


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

#include <alibabacloud/cusanalytic_sc_online/model/GetOverviewDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

GetOverviewDataResult::GetOverviewDataResult() :
	ServiceResult()
{}

GetOverviewDataResult::GetOverviewDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOverviewDataResult::~GetOverviewDataResult()
{}

void GetOverviewDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["StayDeepAvg"].isNull())
		stayDeepAvg_ = std::stof(value["StayDeepAvg"].asString());
	if(!value["UvWeekGrowthPercent"].isNull())
		uvWeekGrowthPercent_ = std::stof(value["UvWeekGrowthPercent"].asString());
	if(!value["StayDeepAvgWeekGrowthPercent"].isNull())
		stayDeepAvgWeekGrowthPercent_ = std::stof(value["StayDeepAvgWeekGrowthPercent"].asString());
	if(!value["Uv"].isNull())
		uv_ = std::stol(value["Uv"].asString());
	if(!value["StayAvgPeriodWeekGrowthPercent"].isNull())
		stayAvgPeriodWeekGrowthPercent_ = std::stof(value["StayAvgPeriodWeekGrowthPercent"].asString());
	if(!value["UvEverySqm"].isNull())
		uvEverySqm_ = std::stof(value["UvEverySqm"].asString());
	if(!value["UvAvgWeekGrowthPercent"].isNull())
		uvAvgWeekGrowthPercent_ = std::stof(value["UvAvgWeekGrowthPercent"].asString());
	if(!value["StayAvgPeriod"].isNull())
		stayAvgPeriod_ = std::stof(value["StayAvgPeriod"].asString());
	if(!value["UvAvg"].isNull())
		uvAvg_ = std::stof(value["UvAvg"].asString());
	if(!value["UvEverySqmGrowthWeekPercent"].isNull())
		uvEverySqmGrowthWeekPercent_ = std::stof(value["UvEverySqmGrowthWeekPercent"].asString());

}

float GetOverviewDataResult::getStayDeepAvg()const
{
	return stayDeepAvg_;
}

float GetOverviewDataResult::getUvWeekGrowthPercent()const
{
	return uvWeekGrowthPercent_;
}

long GetOverviewDataResult::getUv()const
{
	return uv_;
}

float GetOverviewDataResult::getUvEverySqm()const
{
	return uvEverySqm_;
}

float GetOverviewDataResult::getUvEverySqmGrowthWeekPercent()const
{
	return uvEverySqmGrowthWeekPercent_;
}

float GetOverviewDataResult::getUvAvg()const
{
	return uvAvg_;
}

float GetOverviewDataResult::getStayAvgPeriod()const
{
	return stayAvgPeriod_;
}

float GetOverviewDataResult::getStayAvgPeriodWeekGrowthPercent()const
{
	return stayAvgPeriodWeekGrowthPercent_;
}

float GetOverviewDataResult::getUvAvgWeekGrowthPercent()const
{
	return uvAvgWeekGrowthPercent_;
}

float GetOverviewDataResult::getStayDeepAvgWeekGrowthPercent()const
{
	return stayDeepAvgWeekGrowthPercent_;
}


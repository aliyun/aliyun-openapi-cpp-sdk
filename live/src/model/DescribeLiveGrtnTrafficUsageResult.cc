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

#include <alibabacloud/live/model/DescribeLiveGrtnTrafficUsageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveGrtnTrafficUsageResult::DescribeLiveGrtnTrafficUsageResult() :
	ServiceResult()
{}

DescribeLiveGrtnTrafficUsageResult::DescribeLiveGrtnTrafficUsageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveGrtnTrafficUsageResult::~DescribeLiveGrtnTrafficUsageResult()
{}

void DescribeLiveGrtnTrafficUsageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUsageDataPerIntervalNode = value["UsageDataPerInterval"]["UsageData"];
	for (auto valueUsageDataPerIntervalUsageData : allUsageDataPerIntervalNode)
	{
		UsageData usageDataPerIntervalObject;
		if(!valueUsageDataPerIntervalUsageData["Value"].isNull())
			usageDataPerIntervalObject.value = valueUsageDataPerIntervalUsageData["Value"].asString();
		if(!valueUsageDataPerIntervalUsageData["TimeStamp"].isNull())
			usageDataPerIntervalObject.timeStamp = valueUsageDataPerIntervalUsageData["TimeStamp"].asString();
		usageDataPerInterval_.push_back(usageDataPerIntervalObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["Filed"].isNull())
		filed_ = value["Filed"].asString();
	if(!value["AppId"].isNull())
		appId_ = value["AppId"].asString();
	if(!value["Area"].isNull())
		area_ = value["Area"].asString();

}

std::vector<DescribeLiveGrtnTrafficUsageResult::UsageData> DescribeLiveGrtnTrafficUsageResult::getUsageDataPerInterval()const
{
	return usageDataPerInterval_;
}

std::string DescribeLiveGrtnTrafficUsageResult::getArea()const
{
	return area_;
}

std::string DescribeLiveGrtnTrafficUsageResult::getFiled()const
{
	return filed_;
}

std::string DescribeLiveGrtnTrafficUsageResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeLiveGrtnTrafficUsageResult::getAppId()const
{
	return appId_;
}

std::string DescribeLiveGrtnTrafficUsageResult::getStartTime()const
{
	return startTime_;
}


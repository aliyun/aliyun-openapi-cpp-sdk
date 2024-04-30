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

#include <alibabacloud/dcdn/model/DescribeDcdnBgpTrafficDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnBgpTrafficDataResult::DescribeDcdnBgpTrafficDataResult() :
	ServiceResult()
{}

DescribeDcdnBgpTrafficDataResult::DescribeDcdnBgpTrafficDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnBgpTrafficDataResult::~DescribeDcdnBgpTrafficDataResult()
{}

void DescribeDcdnBgpTrafficDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBgpDataIntervalNode = value["BgpDataInterval"]["BgpData"];
	for (auto valueBgpDataIntervalBgpData : allBgpDataIntervalNode)
	{
		BgpData bgpDataIntervalObject;
		if(!valueBgpDataIntervalBgpData["Out"].isNull())
			bgpDataIntervalObject.out = std::stol(valueBgpDataIntervalBgpData["Out"].asString());
		if(!valueBgpDataIntervalBgpData["In"].isNull())
			bgpDataIntervalObject.in = std::stol(valueBgpDataIntervalBgpData["In"].asString());
		if(!valueBgpDataIntervalBgpData["TimeStamp"].isNull())
			bgpDataIntervalObject.timeStamp = valueBgpDataIntervalBgpData["TimeStamp"].asString();
		bgpDataInterval_.push_back(bgpDataIntervalObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::string DescribeDcdnBgpTrafficDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDcdnBgpTrafficDataResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeDcdnBgpTrafficDataResult::BgpData> DescribeDcdnBgpTrafficDataResult::getBgpDataInterval()const
{
	return bgpDataInterval_;
}


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

#include <alibabacloud/dcdn/model/DescribeDcdnBgpBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnBgpBpsDataResult::DescribeDcdnBgpBpsDataResult() :
	ServiceResult()
{}

DescribeDcdnBgpBpsDataResult::DescribeDcdnBgpBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnBgpBpsDataResult::~DescribeDcdnBgpBpsDataResult()
{}

void DescribeDcdnBgpBpsDataResult::parse(const std::string &payload)
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
			bgpDataIntervalObject.out = std::stof(valueBgpDataIntervalBgpData["Out"].asString());
		if(!valueBgpDataIntervalBgpData["In"].isNull())
			bgpDataIntervalObject.in = std::stof(valueBgpDataIntervalBgpData["In"].asString());
		if(!valueBgpDataIntervalBgpData["TimeStamp"].isNull())
			bgpDataIntervalObject.timeStamp = valueBgpDataIntervalBgpData["TimeStamp"].asString();
		bgpDataInterval_.push_back(bgpDataIntervalObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::string DescribeDcdnBgpBpsDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDcdnBgpBpsDataResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeDcdnBgpBpsDataResult::BgpData> DescribeDcdnBgpBpsDataResult::getBgpDataInterval()const
{
	return bgpDataInterval_;
}


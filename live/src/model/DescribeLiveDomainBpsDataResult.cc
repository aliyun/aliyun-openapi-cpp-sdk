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

#include <alibabacloud/live/model/DescribeLiveDomainBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveDomainBpsDataResult::DescribeLiveDomainBpsDataResult() :
	ServiceResult()
{}

DescribeLiveDomainBpsDataResult::DescribeLiveDomainBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveDomainBpsDataResult::~DescribeLiveDomainBpsDataResult()
{}

void DescribeLiveDomainBpsDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allBpsDataPerInterval = value["BpsDataPerInterval"]["DataModule"];
	for (auto value : allBpsDataPerInterval)
	{
		DataModule bpsDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			bpsDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["BpsValue"].isNull())
			bpsDataPerIntervalObject.bpsValue = value["BpsValue"].asString();
		if(!value["HttpBpsValue"].isNull())
			bpsDataPerIntervalObject.httpBpsValue = value["HttpBpsValue"].asString();
		if(!value["HttpsBpsValue"].isNull())
			bpsDataPerIntervalObject.httpsBpsValue = value["HttpsBpsValue"].asString();
		bpsDataPerInterval_.push_back(bpsDataPerIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::string DescribeLiveDomainBpsDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeLiveDomainBpsDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeLiveDomainBpsDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeLiveDomainBpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeLiveDomainBpsDataResult::DataModule> DescribeLiveDomainBpsDataResult::getBpsDataPerInterval()const
{
	return bpsDataPerInterval_;
}


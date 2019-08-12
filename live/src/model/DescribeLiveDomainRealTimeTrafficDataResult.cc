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

#include <alibabacloud/live/model/DescribeLiveDomainRealTimeTrafficDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveDomainRealTimeTrafficDataResult::DescribeLiveDomainRealTimeTrafficDataResult() :
	ServiceResult()
{}

DescribeLiveDomainRealTimeTrafficDataResult::DescribeLiveDomainRealTimeTrafficDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveDomainRealTimeTrafficDataResult::~DescribeLiveDomainRealTimeTrafficDataResult()
{}

void DescribeLiveDomainRealTimeTrafficDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allRealTimeTrafficDataPerInterval = value["RealTimeTrafficDataPerInterval"]["DataModule"];
	for (auto value : allRealTimeTrafficDataPerInterval)
	{
		DataModule realTimeTrafficDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			realTimeTrafficDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Value"].isNull())
			realTimeTrafficDataPerIntervalObject.value = value["Value"].asString();
		realTimeTrafficDataPerInterval_.push_back(realTimeTrafficDataPerIntervalObject);
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

std::string DescribeLiveDomainRealTimeTrafficDataResult::getEndTime()const
{
	return endTime_;
}

std::vector<DescribeLiveDomainRealTimeTrafficDataResult::DataModule> DescribeLiveDomainRealTimeTrafficDataResult::getRealTimeTrafficDataPerInterval()const
{
	return realTimeTrafficDataPerInterval_;
}

std::string DescribeLiveDomainRealTimeTrafficDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeLiveDomainRealTimeTrafficDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeLiveDomainRealTimeTrafficDataResult::getDataInterval()const
{
	return dataInterval_;
}


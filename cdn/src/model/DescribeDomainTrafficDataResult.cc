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

#include <alibabacloud/cdn/model/DescribeDomainTrafficDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainTrafficDataResult::DescribeDomainTrafficDataResult() :
	ServiceResult()
{}

DescribeDomainTrafficDataResult::DescribeDomainTrafficDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainTrafficDataResult::~DescribeDomainTrafficDataResult()
{}

void DescribeDomainTrafficDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTrafficDataPerInterval = value["TrafficDataPerInterval"]["DataModule"];
	for (auto value : allTrafficDataPerInterval)
	{
		DataModule trafficDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			trafficDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Value"].isNull())
			trafficDataPerIntervalObject.value = value["Value"].asString();
		if(!value["DomesticValue"].isNull())
			trafficDataPerIntervalObject.domesticValue = value["DomesticValue"].asString();
		if(!value["OverseasValue"].isNull())
			trafficDataPerIntervalObject.overseasValue = value["OverseasValue"].asString();
		if(!value["HttpsValue"].isNull())
			trafficDataPerIntervalObject.httpsValue = value["HttpsValue"].asString();
		if(!value["HttpsDomesticValue"].isNull())
			trafficDataPerIntervalObject.httpsDomesticValue = value["HttpsDomesticValue"].asString();
		if(!value["HttpsOverseasValue"].isNull())
			trafficDataPerIntervalObject.httpsOverseasValue = value["HttpsOverseasValue"].asString();
		trafficDataPerInterval_.push_back(trafficDataPerIntervalObject);
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

std::string DescribeDomainTrafficDataResult::getEndTime()const
{
	return endTime_;
}

std::vector<DescribeDomainTrafficDataResult::DataModule> DescribeDomainTrafficDataResult::getTrafficDataPerInterval()const
{
	return trafficDataPerInterval_;
}

std::string DescribeDomainTrafficDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainTrafficDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainTrafficDataResult::getDataInterval()const
{
	return dataInterval_;
}


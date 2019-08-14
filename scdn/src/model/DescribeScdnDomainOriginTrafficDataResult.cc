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

#include <alibabacloud/scdn/model/DescribeScdnDomainOriginTrafficDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainOriginTrafficDataResult::DescribeScdnDomainOriginTrafficDataResult() :
	ServiceResult()
{}

DescribeScdnDomainOriginTrafficDataResult::DescribeScdnDomainOriginTrafficDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainOriginTrafficDataResult::~DescribeScdnDomainOriginTrafficDataResult()
{}

void DescribeScdnDomainOriginTrafficDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allOriginTrafficDataPerInterval = value["OriginTrafficDataPerInterval"]["DataModule"];
	for (auto value : allOriginTrafficDataPerInterval)
	{
		DataModule originTrafficDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			originTrafficDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["TrafficValue"].isNull())
			originTrafficDataPerIntervalObject.trafficValue = value["TrafficValue"].asString();
		if(!value["HttpTrafficValue"].isNull())
			originTrafficDataPerIntervalObject.httpTrafficValue = value["HttpTrafficValue"].asString();
		if(!value["HttpsTrafficValue"].isNull())
			originTrafficDataPerIntervalObject.httpsTrafficValue = value["HttpsTrafficValue"].asString();
		originTrafficDataPerInterval_.push_back(originTrafficDataPerIntervalObject);
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

std::string DescribeScdnDomainOriginTrafficDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeScdnDomainOriginTrafficDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeScdnDomainOriginTrafficDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeScdnDomainOriginTrafficDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeScdnDomainOriginTrafficDataResult::DataModule> DescribeScdnDomainOriginTrafficDataResult::getOriginTrafficDataPerInterval()const
{
	return originTrafficDataPerInterval_;
}


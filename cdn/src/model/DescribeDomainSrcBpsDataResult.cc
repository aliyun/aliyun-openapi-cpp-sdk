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

#include <alibabacloud/cdn/model/DescribeDomainSrcBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainSrcBpsDataResult::DescribeDomainSrcBpsDataResult() :
	ServiceResult()
{}

DescribeDomainSrcBpsDataResult::DescribeDomainSrcBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainSrcBpsDataResult::~DescribeDomainSrcBpsDataResult()
{}

void DescribeDomainSrcBpsDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSrcBpsDataPerInterval = value["SrcBpsDataPerInterval"]["DataModule"];
	for (auto value : allSrcBpsDataPerInterval)
	{
		DataModule srcBpsDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			srcBpsDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Value"].isNull())
			srcBpsDataPerIntervalObject.value = value["Value"].asString();
		srcBpsDataPerInterval_.push_back(srcBpsDataPerIntervalObject);
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

std::vector<DescribeDomainSrcBpsDataResult::DataModule> DescribeDomainSrcBpsDataResult::getSrcBpsDataPerInterval()const
{
	return srcBpsDataPerInterval_;
}

std::string DescribeDomainSrcBpsDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainSrcBpsDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainSrcBpsDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainSrcBpsDataResult::getDataInterval()const
{
	return dataInterval_;
}


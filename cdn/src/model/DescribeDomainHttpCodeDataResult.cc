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

#include <alibabacloud/cdn/model/DescribeDomainHttpCodeDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainHttpCodeDataResult::DescribeDomainHttpCodeDataResult() :
	ServiceResult()
{}

DescribeDomainHttpCodeDataResult::DescribeDomainHttpCodeDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainHttpCodeDataResult::~DescribeDomainHttpCodeDataResult()
{}

void DescribeDomainHttpCodeDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allHttpCodeData = value["HttpCodeData"]["UsageData"];
	for (auto value : allHttpCodeData)
	{
		UsageData usageDataObject;
		usageDataObject.timeStamp = value["TimeStamp"].asString();
		auto allValue = value["Value"]["CodeProportionData"];
		for (auto value : allValue)
		{
			UsageData::CodeProportionData codeProportionDataObject;
			codeProportionDataObject.code = value["Code"].asString();
			codeProportionDataObject.proportion = value["Proportion"].asString();
			codeProportionDataObject.count = value["Count"].asString();
			usageDataObject.value.push_back(codeProportionDataObject);
		}
		httpCodeData_.push_back(usageDataObject);
	}
	domainName_ = value["DomainName"].asString();
	dataInterval_ = value["DataInterval"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainHttpCodeDataResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainHttpCodeDataResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDomainHttpCodeDataResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainHttpCodeDataResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainHttpCodeDataResult::getDataInterval()const
{
	return dataInterval_;
}

void DescribeDomainHttpCodeDataResult::setDataInterval(const std::string& dataInterval)
{
	dataInterval_ = dataInterval;
}

std::string DescribeDomainHttpCodeDataResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainHttpCodeDataResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}


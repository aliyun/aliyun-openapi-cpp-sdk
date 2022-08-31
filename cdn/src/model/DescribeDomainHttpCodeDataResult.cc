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
	auto allHttpCodeDataNode = value["HttpCodeData"]["UsageData"];
	for (auto valueHttpCodeDataUsageData : allHttpCodeDataNode)
	{
		UsageData httpCodeDataObject;
		if(!valueHttpCodeDataUsageData["TimeStamp"].isNull())
			httpCodeDataObject.timeStamp = valueHttpCodeDataUsageData["TimeStamp"].asString();
		auto allValueNode = valueHttpCodeDataUsageData["Value"]["CodeProportionData"];
		for (auto valueHttpCodeDataUsageDataValueCodeProportionData : allValueNode)
		{
			UsageData::CodeProportionData valueObject;
			if(!valueHttpCodeDataUsageDataValueCodeProportionData["Code"].isNull())
				valueObject.code = valueHttpCodeDataUsageDataValueCodeProportionData["Code"].asString();
			if(!valueHttpCodeDataUsageDataValueCodeProportionData["Proportion"].isNull())
				valueObject.proportion = valueHttpCodeDataUsageDataValueCodeProportionData["Proportion"].asString();
			if(!valueHttpCodeDataUsageDataValueCodeProportionData["Count"].isNull())
				valueObject.count = valueHttpCodeDataUsageDataValueCodeProportionData["Count"].asString();
			httpCodeDataObject.value.push_back(valueObject);
		}
		httpCodeData_.push_back(httpCodeDataObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::string DescribeDomainHttpCodeDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainHttpCodeDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainHttpCodeDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainHttpCodeDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeDomainHttpCodeDataResult::UsageData> DescribeDomainHttpCodeDataResult::getHttpCodeData()const
{
	return httpCodeData_;
}


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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeHttpCodeDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainRealTimeHttpCodeDataResult::DescribeDomainRealTimeHttpCodeDataResult() :
	ServiceResult()
{}

DescribeDomainRealTimeHttpCodeDataResult::DescribeDomainRealTimeHttpCodeDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainRealTimeHttpCodeDataResult::~DescribeDomainRealTimeHttpCodeDataResult()
{}

void DescribeDomainRealTimeHttpCodeDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRealTimeHttpCodeDataNode = value["RealTimeHttpCodeData"]["UsageData"];
	for (auto valueRealTimeHttpCodeDataUsageData : allRealTimeHttpCodeDataNode)
	{
		UsageData realTimeHttpCodeDataObject;
		if(!valueRealTimeHttpCodeDataUsageData["TimeStamp"].isNull())
			realTimeHttpCodeDataObject.timeStamp = valueRealTimeHttpCodeDataUsageData["TimeStamp"].asString();
		auto allValueNode = valueRealTimeHttpCodeDataUsageData["Value"]["RealTimeCodeProportionData"];
		for (auto valueRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData : allValueNode)
		{
			UsageData::RealTimeCodeProportionData valueObject;
			if(!valueRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData["Code"].isNull())
				valueObject.code = valueRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData["Code"].asString();
			if(!valueRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData["Proportion"].isNull())
				valueObject.proportion = valueRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData["Proportion"].asString();
			if(!valueRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData["Count"].isNull())
				valueObject.count = valueRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData["Count"].asString();
			realTimeHttpCodeDataObject.value.push_back(valueObject);
		}
		realTimeHttpCodeData_.push_back(realTimeHttpCodeDataObject);
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

std::string DescribeDomainRealTimeHttpCodeDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainRealTimeHttpCodeDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainRealTimeHttpCodeDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainRealTimeHttpCodeDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeDomainRealTimeHttpCodeDataResult::UsageData> DescribeDomainRealTimeHttpCodeDataResult::getRealTimeHttpCodeData()const
{
	return realTimeHttpCodeData_;
}


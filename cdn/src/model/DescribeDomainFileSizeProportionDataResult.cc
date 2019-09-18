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

#include <alibabacloud/cdn/model/DescribeDomainFileSizeProportionDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainFileSizeProportionDataResult::DescribeDomainFileSizeProportionDataResult() :
	ServiceResult()
{}

DescribeDomainFileSizeProportionDataResult::DescribeDomainFileSizeProportionDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainFileSizeProportionDataResult::~DescribeDomainFileSizeProportionDataResult()
{}

void DescribeDomainFileSizeProportionDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFileSizeProportionDataInterval = value["FileSizeProportionDataInterval"]["UsageData"];
	for (auto value : allFileSizeProportionDataInterval)
	{
		UsageData fileSizeProportionDataIntervalObject;
		if(!value["TimeStamp"].isNull())
			fileSizeProportionDataIntervalObject.timeStamp = value["TimeStamp"].asString();
		auto allValue = value["Value"]["FileSizeProportionData"];
		for (auto value : allValue)
		{
			UsageData::FileSizeProportionData valueObject;
			if(!value["FileSize"].isNull())
				valueObject.fileSize = value["FileSize"].asString();
			if(!value["Proportion"].isNull())
				valueObject.proportion = value["Proportion"].asString();
			fileSizeProportionDataIntervalObject.value.push_back(valueObject);
		}
		fileSizeProportionDataInterval_.push_back(fileSizeProportionDataIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::vector<DescribeDomainFileSizeProportionDataResult::UsageData> DescribeDomainFileSizeProportionDataResult::getFileSizeProportionDataInterval()const
{
	return fileSizeProportionDataInterval_;
}

std::string DescribeDomainFileSizeProportionDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainFileSizeProportionDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainFileSizeProportionDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::string DescribeDomainFileSizeProportionDataResult::getStartTime()const
{
	return startTime_;
}


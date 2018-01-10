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
		UsageData usageDataObject;
		usageDataObject.timeStamp = value["TimeStamp"].asString();
		auto allValue = value["Value"]["FileSizeProportionData"];
		for (auto value : allValue)
		{
			UsageData::FileSizeProportionData fileSizeProportionDataObject;
			fileSizeProportionDataObject.fileSize = value["FileSize"].asString();
			fileSizeProportionDataObject.proportion = value["Proportion"].asString();
			usageDataObject.value.push_back(fileSizeProportionDataObject);
		}
		fileSizeProportionDataInterval_.push_back(usageDataObject);
	}
	domainName_ = value["DomainName"].asString();
	dataInterval_ = value["DataInterval"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainFileSizeProportionDataResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainFileSizeProportionDataResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDomainFileSizeProportionDataResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainFileSizeProportionDataResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainFileSizeProportionDataResult::getDataInterval()const
{
	return dataInterval_;
}

void DescribeDomainFileSizeProportionDataResult::setDataInterval(const std::string& dataInterval)
{
	dataInterval_ = dataInterval;
}

std::string DescribeDomainFileSizeProportionDataResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainFileSizeProportionDataResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}


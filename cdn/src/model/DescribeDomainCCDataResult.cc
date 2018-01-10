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

#include <alibabacloud/cdn/model/DescribeDomainCCDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainCCDataResult::DescribeDomainCCDataResult() :
	ServiceResult()
{}

DescribeDomainCCDataResult::DescribeDomainCCDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainCCDataResult::~DescribeDomainCCDataResult()
{}

void DescribeDomainCCDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allCCDataList = value["CCDataList"]["CCDatas"];
	for (auto value : allCCDataList)
	{
		CCDatas cCDatasObject;
		cCDatasObject.timeStamp = value["TimeStamp"].asString();
		cCDatasObject.count = value["Count"].asString();
		cCDataList_.push_back(cCDatasObject);
	}
	domainName_ = value["DomainName"].asString();
	dataInterval_ = value["DataInterval"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainCCDataResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainCCDataResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDomainCCDataResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainCCDataResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainCCDataResult::getDataInterval()const
{
	return dataInterval_;
}

void DescribeDomainCCDataResult::setDataInterval(const std::string& dataInterval)
{
	dataInterval_ = dataInterval;
}

std::string DescribeDomainCCDataResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainCCDataResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}


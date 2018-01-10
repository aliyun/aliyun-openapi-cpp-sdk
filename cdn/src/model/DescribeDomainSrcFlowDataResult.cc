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

#include <alibabacloud/cdn/model/DescribeDomainSrcFlowDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainSrcFlowDataResult::DescribeDomainSrcFlowDataResult() :
	ServiceResult()
{}

DescribeDomainSrcFlowDataResult::DescribeDomainSrcFlowDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainSrcFlowDataResult::~DescribeDomainSrcFlowDataResult()
{}

void DescribeDomainSrcFlowDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSrcFlowDataPerInterval = value["SrcFlowDataPerInterval"]["DataModule"];
	for (auto value : allSrcFlowDataPerInterval)
	{
		DataModule dataModuleObject;
		dataModuleObject.timeStamp = value["TimeStamp"].asString();
		dataModuleObject.value = value["Value"].asString();
		srcFlowDataPerInterval_.push_back(dataModuleObject);
	}
	domainName_ = value["DomainName"].asString();
	dataInterval_ = value["DataInterval"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainSrcFlowDataResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainSrcFlowDataResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDomainSrcFlowDataResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainSrcFlowDataResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainSrcFlowDataResult::getDataInterval()const
{
	return dataInterval_;
}

void DescribeDomainSrcFlowDataResult::setDataInterval(const std::string& dataInterval)
{
	dataInterval_ = dataInterval;
}

std::string DescribeDomainSrcFlowDataResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainSrcFlowDataResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}


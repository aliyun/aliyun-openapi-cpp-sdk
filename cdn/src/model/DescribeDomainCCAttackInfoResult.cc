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

#include <alibabacloud/cdn/model/DescribeDomainCCAttackInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainCCAttackInfoResult::DescribeDomainCCAttackInfoResult() :
	ServiceResult()
{}

DescribeDomainCCAttackInfoResult::DescribeDomainCCAttackInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainCCAttackInfoResult::~DescribeDomainCCAttackInfoResult()
{}

void DescribeDomainCCAttackInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAttackIpDataList = value["AttackIpDataList"]["AttackIpDatas"];
	for (auto value : allAttackIpDataList)
	{
		AttackIpDatas attackIpDatasObject;
		attackIpDatasObject.ip = value["Ip"].asString();
		attackIpDatasObject.attackCount = value["AttackCount"].asString();
		attackIpDatasObject.result = value["Result"].asString();
		attackIpDataList_.push_back(attackIpDatasObject);
	}
	auto allAttackedUrlDataList = value["AttackedUrlDataList"]["AttackedUrlDatas"];
	for (auto value : allAttackedUrlDataList)
	{
		AttackedUrlDatas attackedUrlDatasObject;
		attackedUrlDatasObject.url = value["Url"].asString();
		attackedUrlDatasObject.attackCount = value["AttackCount"].asString();
		attackedUrlDatasObject.result = value["Result"].asString();
		attackedUrlDataList_.push_back(attackedUrlDatasObject);
	}
	domainName_ = value["DomainName"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainCCAttackInfoResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainCCAttackInfoResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDomainCCAttackInfoResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainCCAttackInfoResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainCCAttackInfoResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainCCAttackInfoResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}


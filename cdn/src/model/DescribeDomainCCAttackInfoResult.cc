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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allAttackIpDataList = value["AttackIpDataList"]["AttackIpDatas"];
	for (auto value : allAttackIpDataList)
	{
		AttackIpDatas attackIpDataListObject;
		if(!value["Ip"].isNull())
			attackIpDataListObject.ip = value["Ip"].asString();
		if(!value["AttackCount"].isNull())
			attackIpDataListObject.attackCount = value["AttackCount"].asString();
		if(!value["Result"].isNull())
			attackIpDataListObject.result = value["Result"].asString();
		attackIpDataList_.push_back(attackIpDataListObject);
	}
	auto allAttackedUrlDataList = value["AttackedUrlDataList"]["AttackedUrlDatas"];
	for (auto value : allAttackedUrlDataList)
	{
		AttackedUrlDatas attackedUrlDataListObject;
		if(!value["Url"].isNull())
			attackedUrlDataListObject.url = value["Url"].asString();
		if(!value["AttackCount"].isNull())
			attackedUrlDataListObject.attackCount = value["AttackCount"].asString();
		if(!value["Result"].isNull())
			attackedUrlDataListObject.result = value["Result"].asString();
		attackedUrlDataList_.push_back(attackedUrlDataListObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainCCAttackInfoResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainCCAttackInfoResult::getDomainName()const
{
	return domainName_;
}

std::vector<DescribeDomainCCAttackInfoResult::AttackIpDatas> DescribeDomainCCAttackInfoResult::getAttackIpDataList()const
{
	return attackIpDataList_;
}

std::string DescribeDomainCCAttackInfoResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeDomainCCAttackInfoResult::AttackedUrlDatas> DescribeDomainCCAttackInfoResult::getAttackedUrlDataList()const
{
	return attackedUrlDataList_;
}


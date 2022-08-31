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

#include <alibabacloud/scdn/model/DescribeScdnCcTopIpResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnCcTopIpResult::DescribeScdnCcTopIpResult() :
	ServiceResult()
{}

DescribeScdnCcTopIpResult::DescribeScdnCcTopIpResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnCcTopIpResult::~DescribeScdnCcTopIpResult()
{}

void DescribeScdnCcTopIpResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAttackIpDataListNode = value["AttackIpDataList"]["AttackIpDatas"];
	for (auto valueAttackIpDataListAttackIpDatas : allAttackIpDataListNode)
	{
		AttackIpDatas attackIpDataListObject;
		if(!valueAttackIpDataListAttackIpDatas["AttackCount"].isNull())
			attackIpDataListObject.attackCount = valueAttackIpDataListAttackIpDatas["AttackCount"].asString();
		if(!valueAttackIpDataListAttackIpDatas["Ip"].isNull())
			attackIpDataListObject.ip = valueAttackIpDataListAttackIpDatas["Ip"].asString();
		attackIpDataList_.push_back(attackIpDataListObject);
	}
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();

}

std::string DescribeScdnCcTopIpResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeScdnCcTopIpResult::getTotal()const
{
	return total_;
}

std::vector<DescribeScdnCcTopIpResult::AttackIpDatas> DescribeScdnCcTopIpResult::getAttackIpDataList()const
{
	return attackIpDataList_;
}


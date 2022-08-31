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

#include <alibabacloud/scdn/model/DescribeScdnCcTopUrlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnCcTopUrlResult::DescribeScdnCcTopUrlResult() :
	ServiceResult()
{}

DescribeScdnCcTopUrlResult::DescribeScdnCcTopUrlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnCcTopUrlResult::~DescribeScdnCcTopUrlResult()
{}

void DescribeScdnCcTopUrlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAttackUrlDataListNode = value["AttackUrlDataList"]["AttackUrlDatas"];
	for (auto valueAttackUrlDataListAttackUrlDatas : allAttackUrlDataListNode)
	{
		AttackUrlDatas attackUrlDataListObject;
		if(!valueAttackUrlDataListAttackUrlDatas["AttackCount"].isNull())
			attackUrlDataListObject.attackCount = valueAttackUrlDataListAttackUrlDatas["AttackCount"].asString();
		if(!valueAttackUrlDataListAttackUrlDatas["Url"].isNull())
			attackUrlDataListObject.url = valueAttackUrlDataListAttackUrlDatas["Url"].asString();
		attackUrlDataList_.push_back(attackUrlDataListObject);
	}
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();

}

std::string DescribeScdnCcTopUrlResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeScdnCcTopUrlResult::getTotal()const
{
	return total_;
}

std::vector<DescribeScdnCcTopUrlResult::AttackUrlDatas> DescribeScdnCcTopUrlResult::getAttackUrlDataList()const
{
	return attackUrlDataList_;
}


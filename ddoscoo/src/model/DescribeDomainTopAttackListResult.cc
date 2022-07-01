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

#include <alibabacloud/ddoscoo/model/DescribeDomainTopAttackListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDomainTopAttackListResult::DescribeDomainTopAttackListResult() :
	ServiceResult()
{}

DescribeDomainTopAttackListResult::DescribeDomainTopAttackListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainTopAttackListResult::~DescribeDomainTopAttackListResult()
{}

void DescribeDomainTopAttackListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAttackListNode = value["AttackList"]["Data"];
	for (auto valueAttackListData : allAttackListNode)
	{
		Data attackListObject;
		if(!valueAttackListData["Attack"].isNull())
			attackListObject.attack = std::stol(valueAttackListData["Attack"].asString());
		if(!valueAttackListData["Domain"].isNull())
			attackListObject.domain = valueAttackListData["Domain"].asString();
		if(!valueAttackListData["Count"].isNull())
			attackListObject.count = std::stol(valueAttackListData["Count"].asString());
		attackList_.push_back(attackListObject);
	}

}

std::vector<DescribeDomainTopAttackListResult::Data> DescribeDomainTopAttackListResult::getAttackList()const
{
	return attackList_;
}


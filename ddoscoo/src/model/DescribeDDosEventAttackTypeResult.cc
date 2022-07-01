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

#include <alibabacloud/ddoscoo/model/DescribeDDosEventAttackTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDDosEventAttackTypeResult::DescribeDDosEventAttackTypeResult() :
	ServiceResult()
{}

DescribeDDosEventAttackTypeResult::DescribeDDosEventAttackTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDDosEventAttackTypeResult::~DescribeDDosEventAttackTypeResult()
{}

void DescribeDDosEventAttackTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAttackTypesNode = value["AttackTypes"]["EventAttackType"];
	for (auto valueAttackTypesEventAttackType : allAttackTypesNode)
	{
		EventAttackType attackTypesObject;
		if(!valueAttackTypesEventAttackType["InPkts"].isNull())
			attackTypesObject.inPkts = std::stol(valueAttackTypesEventAttackType["InPkts"].asString());
		if(!valueAttackTypesEventAttackType["AttackType"].isNull())
			attackTypesObject.attackType = valueAttackTypesEventAttackType["AttackType"].asString();
		attackTypes_.push_back(attackTypesObject);
	}

}

std::vector<DescribeDDosEventAttackTypeResult::EventAttackType> DescribeDDosEventAttackTypeResult::getAttackTypes()const
{
	return attackTypes_;
}


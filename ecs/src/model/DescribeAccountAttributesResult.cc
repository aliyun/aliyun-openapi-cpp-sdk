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

#include <alibabacloud/ecs/model/DescribeAccountAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeAccountAttributesResult::DescribeAccountAttributesResult() :
	ServiceResult()
{}

DescribeAccountAttributesResult::DescribeAccountAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccountAttributesResult::~DescribeAccountAttributesResult()
{}

void DescribeAccountAttributesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccountAttributeItemsNode = value["AccountAttributeItems"]["AccountAttributeItem"];
	for (auto valueAccountAttributeItemsAccountAttributeItem : allAccountAttributeItemsNode)
	{
		AccountAttributeItem accountAttributeItemsObject;
		if(!valueAccountAttributeItemsAccountAttributeItem["AttributeName"].isNull())
			accountAttributeItemsObject.attributeName = valueAccountAttributeItemsAccountAttributeItem["AttributeName"].asString();
		auto allAttributeValuesNode = allAccountAttributeItemsNode["AttributeValues"]["ValueItem"];
		for (auto allAccountAttributeItemsNodeAttributeValuesValueItem : allAttributeValuesNode)
		{
			AccountAttributeItem::ValueItem attributeValuesObject;
			if(!allAccountAttributeItemsNodeAttributeValuesValueItem["Value"].isNull())
				attributeValuesObject.value = allAccountAttributeItemsNodeAttributeValuesValueItem["Value"].asString();
			if(!allAccountAttributeItemsNodeAttributeValuesValueItem["ExpiredTime"].isNull())
				attributeValuesObject.expiredTime = allAccountAttributeItemsNodeAttributeValuesValueItem["ExpiredTime"].asString();
			if(!allAccountAttributeItemsNodeAttributeValuesValueItem["ZoneId"].isNull())
				attributeValuesObject.zoneId = allAccountAttributeItemsNodeAttributeValuesValueItem["ZoneId"].asString();
			if(!allAccountAttributeItemsNodeAttributeValuesValueItem["InstanceChargeType"].isNull())
				attributeValuesObject.instanceChargeType = allAccountAttributeItemsNodeAttributeValuesValueItem["InstanceChargeType"].asString();
			if(!allAccountAttributeItemsNodeAttributeValuesValueItem["InstanceType"].isNull())
				attributeValuesObject.instanceType = allAccountAttributeItemsNodeAttributeValuesValueItem["InstanceType"].asString();
			if(!allAccountAttributeItemsNodeAttributeValuesValueItem["Count"].isNull())
				attributeValuesObject.count = std::stoi(allAccountAttributeItemsNodeAttributeValuesValueItem["Count"].asString());
			accountAttributeItemsObject.attributeValues.push_back(attributeValuesObject);
		}
		accountAttributeItems_.push_back(accountAttributeItemsObject);
	}

}

std::vector<DescribeAccountAttributesResult::AccountAttributeItem> DescribeAccountAttributesResult::getAccountAttributeItems()const
{
	return accountAttributeItems_;
}


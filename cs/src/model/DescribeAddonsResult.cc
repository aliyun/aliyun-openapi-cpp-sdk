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

#include <alibabacloud/cs/model/DescribeAddonsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

DescribeAddonsResult::DescribeAddonsResult() :
	ServiceResult()
{}

DescribeAddonsResult::DescribeAddonsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAddonsResult::~DescribeAddonsResult()
{}

void DescribeAddonsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allComponentGroupsNode = value["ComponentGroups"]["ComponentGroupsItem"];
	for (auto valueComponentGroupsComponentGroupsItem : allComponentGroupsNode)
	{
		ComponentGroupsItem componentGroupsObject;
		if(!valueComponentGroupsComponentGroupsItem["group_name"].isNull())
			componentGroupsObject.group_name = valueComponentGroupsComponentGroupsItem["group_name"].asString();
		auto allitemsNode = allComponentGroupsNode["items"]["itemsItem"];
		for (auto allComponentGroupsNodeitemsitemsItem : allitemsNode)
		{
			ComponentGroupsItem::ItemsItem itemsObject;
			if(!allComponentGroupsNodeitemsitemsItem["name"].isNull())
				itemsObject.name = allComponentGroupsNodeitemsitemsItem["name"].asString();
			if(!allComponentGroupsNodeitemsitemsItem["description"].isNull())
				itemsObject.description = allComponentGroupsNodeitemsitemsItem["description"].asString();
			if(!allComponentGroupsNodeitemsitemsItem["disabled"].isNull())
				itemsObject.disabled = allComponentGroupsNodeitemsitemsItem["disabled"].asString() == "true";
			if(!allComponentGroupsNodeitemsitemsItem["version"].isNull())
				itemsObject.version = allComponentGroupsNodeitemsitemsItem["version"].asString();
			if(!allComponentGroupsNodeitemsitemsItem["required"].isNull())
				itemsObject.required = allComponentGroupsNodeitemsitemsItem["required"].asString();
			componentGroupsObject.items.push_back(itemsObject);
		}
		auto all_Default = value["default"]["ComponentName"];
		for (auto value : all_Default)
			componentGroupsObject._default.push_back(value.asString());
		componentGroups_.push_back(componentGroupsObject);
	}
	auto standardComponentsNode = value["StandardComponents"];
	if(!standardComponentsNode["ComponentName"].isNull())
		standardComponents_.componentName = standardComponentsNode["ComponentName"].asString();

}

DescribeAddonsResult::StandardComponents DescribeAddonsResult::getStandardComponents()const
{
	return standardComponents_;
}

std::vector<DescribeAddonsResult::ComponentGroupsItem> DescribeAddonsResult::getComponentGroups()const
{
	return componentGroups_;
}


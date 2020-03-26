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
			if(!allComponentGroupsNodeitemsitemsItem["config"].isNull())
				itemsObject.config = allComponentGroupsNodeitemsitemsItem["config"].asString();
			if(!allComponentGroupsNodeitemsitemsItem["required"].isNull())
				itemsObject.required = allComponentGroupsNodeitemsitemsItem["required"].asString();
			if(!allComponentGroupsNodeitemsitemsItem["disabled"].isNull())
				itemsObject.disabled = allComponentGroupsNodeitemsitemsItem["disabled"].asString() == "true";
			if(!allComponentGroupsNodeitemsitemsItem["version"].isNull())
				itemsObject.version = allComponentGroupsNodeitemsitemsItem["version"].asString();
			componentGroupsObject.items.push_back(itemsObject);
		}
		auto all_Default = value["default"]["default_addon_name"];
		for (auto value : all_Default)
			componentGroupsObject._default.push_back(value.asString());
		componentGroups_.push_back(componentGroupsObject);
	}
	auto standardComponentsNode = value["StandardComponents"];
	auto addon_nameNode = standardComponentsNode["addon_name"];
	if(!addon_nameNode["name"].isNull())
		standardComponents_.addon_name.name = addon_nameNode["name"].asString();
	if(!addon_nameNode["config"].isNull())
		standardComponents_.addon_name.config = addon_nameNode["config"].asString();
	if(!addon_nameNode["required"].isNull())
		standardComponents_.addon_name.required = addon_nameNode["required"].asString();
	if(!addon_nameNode["disabled"].isNull())
		standardComponents_.addon_name.disabled = addon_nameNode["disabled"].asString() == "true";
	if(!addon_nameNode["version"].isNull())
		standardComponents_.addon_name.version = addon_nameNode["version"].asString();

}

DescribeAddonsResult::StandardComponents DescribeAddonsResult::getStandardComponents()const
{
	return standardComponents_;
}

std::vector<DescribeAddonsResult::ComponentGroupsItem> DescribeAddonsResult::getComponentGroups()const
{
	return componentGroups_;
}


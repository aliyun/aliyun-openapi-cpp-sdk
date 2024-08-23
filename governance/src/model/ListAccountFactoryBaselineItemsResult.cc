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

#include <alibabacloud/governance/model/ListAccountFactoryBaselineItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Governance;
using namespace AlibabaCloud::Governance::Model;

ListAccountFactoryBaselineItemsResult::ListAccountFactoryBaselineItemsResult() :
	ServiceResult()
{}

ListAccountFactoryBaselineItemsResult::ListAccountFactoryBaselineItemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAccountFactoryBaselineItemsResult::~ListAccountFactoryBaselineItemsResult()
{}

void ListAccountFactoryBaselineItemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBaselineItemsNode = value["BaselineItems"]["BaselineItem"];
	for (auto valueBaselineItemsBaselineItem : allBaselineItemsNode)
	{
		BaselineItem baselineItemsObject;
		if(!valueBaselineItemsBaselineItem["Description"].isNull())
			baselineItemsObject.description = valueBaselineItemsBaselineItem["Description"].asString();
		if(!valueBaselineItemsBaselineItem["Name"].isNull())
			baselineItemsObject.name = valueBaselineItemsBaselineItem["Name"].asString();
		if(!valueBaselineItemsBaselineItem["Type"].isNull())
			baselineItemsObject.type = valueBaselineItemsBaselineItem["Type"].asString();
		if(!valueBaselineItemsBaselineItem["Version"].isNull())
			baselineItemsObject.version = valueBaselineItemsBaselineItem["Version"].asString();
		auto allDependsOnNode = valueBaselineItemsBaselineItem["DependsOn"]["DependsOnItem"];
		for (auto valueBaselineItemsBaselineItemDependsOnDependsOnItem : allDependsOnNode)
		{
			BaselineItem::DependsOnItem dependsOnObject;
			if(!valueBaselineItemsBaselineItemDependsOnDependsOnItem["Name"].isNull())
				dependsOnObject.name = valueBaselineItemsBaselineItemDependsOnDependsOnItem["Name"].asString();
			if(!valueBaselineItemsBaselineItemDependsOnDependsOnItem["Type"].isNull())
				dependsOnObject.type = valueBaselineItemsBaselineItemDependsOnDependsOnItem["Type"].asString();
			if(!valueBaselineItemsBaselineItemDependsOnDependsOnItem["Version"].isNull())
				dependsOnObject.version = valueBaselineItemsBaselineItemDependsOnDependsOnItem["Version"].asString();
			baselineItemsObject.dependsOn.push_back(dependsOnObject);
		}
		baselineItems_.push_back(baselineItemsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<ListAccountFactoryBaselineItemsResult::BaselineItem> ListAccountFactoryBaselineItemsResult::getBaselineItems()const
{
	return baselineItems_;
}

std::string ListAccountFactoryBaselineItemsResult::getNextToken()const
{
	return nextToken_;
}


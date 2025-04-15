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

#include <alibabacloud/ecs/model/DescribePortRangeListsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribePortRangeListsResult::DescribePortRangeListsResult() :
	ServiceResult()
{}

DescribePortRangeListsResult::DescribePortRangeListsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePortRangeListsResult::~DescribePortRangeListsResult()
{}

void DescribePortRangeListsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPortRangeListsNode = value["PortRangeLists"]["PortRangeList"];
	for (auto valuePortRangeListsPortRangeList : allPortRangeListsNode)
	{
		PortRangeList portRangeListsObject;
		if(!valuePortRangeListsPortRangeList["PortRangeListId"].isNull())
			portRangeListsObject.portRangeListId = valuePortRangeListsPortRangeList["PortRangeListId"].asString();
		if(!valuePortRangeListsPortRangeList["PortRangeListName"].isNull())
			portRangeListsObject.portRangeListName = valuePortRangeListsPortRangeList["PortRangeListName"].asString();
		if(!valuePortRangeListsPortRangeList["MaxEntries"].isNull())
			portRangeListsObject.maxEntries = std::stoi(valuePortRangeListsPortRangeList["MaxEntries"].asString());
		if(!valuePortRangeListsPortRangeList["AssociationCount"].isNull())
			portRangeListsObject.associationCount = std::stoi(valuePortRangeListsPortRangeList["AssociationCount"].asString());
		if(!valuePortRangeListsPortRangeList["Description"].isNull())
			portRangeListsObject.description = valuePortRangeListsPortRangeList["Description"].asString();
		if(!valuePortRangeListsPortRangeList["CreationTime"].isNull())
			portRangeListsObject.creationTime = valuePortRangeListsPortRangeList["CreationTime"].asString();
		if(!valuePortRangeListsPortRangeList["ResourceGroupId"].isNull())
			portRangeListsObject.resourceGroupId = valuePortRangeListsPortRangeList["ResourceGroupId"].asString();
		auto allTagsNode = valuePortRangeListsPortRangeList["Tags"]["Tag"];
		for (auto valuePortRangeListsPortRangeListTagsTag : allTagsNode)
		{
			PortRangeList::Tag tagsObject;
			if(!valuePortRangeListsPortRangeListTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valuePortRangeListsPortRangeListTagsTag["TagKey"].asString();
			if(!valuePortRangeListsPortRangeListTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valuePortRangeListsPortRangeListTagsTag["TagValue"].asString();
			portRangeListsObject.tags.push_back(tagsObject);
		}
		portRangeLists_.push_back(portRangeListsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribePortRangeListsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribePortRangeListsResult::PortRangeList> DescribePortRangeListsResult::getPortRangeLists()const
{
	return portRangeLists_;
}


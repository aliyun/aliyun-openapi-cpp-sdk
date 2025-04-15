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

#include <alibabacloud/ecs/model/DescribePortRangeListAssociationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribePortRangeListAssociationsResult::DescribePortRangeListAssociationsResult() :
	ServiceResult()
{}

DescribePortRangeListAssociationsResult::DescribePortRangeListAssociationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePortRangeListAssociationsResult::~DescribePortRangeListAssociationsResult()
{}

void DescribePortRangeListAssociationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPortRangeListAssociationsNode = value["PortRangeListAssociations"]["PortRangeListAssociation"];
	for (auto valuePortRangeListAssociationsPortRangeListAssociation : allPortRangeListAssociationsNode)
	{
		PortRangeListAssociation portRangeListAssociationsObject;
		if(!valuePortRangeListAssociationsPortRangeListAssociation["ResourceId"].isNull())
			portRangeListAssociationsObject.resourceId = valuePortRangeListAssociationsPortRangeListAssociation["ResourceId"].asString();
		if(!valuePortRangeListAssociationsPortRangeListAssociation["ResourceType"].isNull())
			portRangeListAssociationsObject.resourceType = valuePortRangeListAssociationsPortRangeListAssociation["ResourceType"].asString();
		portRangeListAssociations_.push_back(portRangeListAssociationsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<DescribePortRangeListAssociationsResult::PortRangeListAssociation> DescribePortRangeListAssociationsResult::getPortRangeListAssociations()const
{
	return portRangeListAssociations_;
}

std::string DescribePortRangeListAssociationsResult::getNextToken()const
{
	return nextToken_;
}


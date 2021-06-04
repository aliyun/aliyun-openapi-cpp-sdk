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

#include <alibabacloud/ecs/model/DescribePrefixListAssociationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribePrefixListAssociationsResult::DescribePrefixListAssociationsResult() :
	ServiceResult()
{}

DescribePrefixListAssociationsResult::DescribePrefixListAssociationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePrefixListAssociationsResult::~DescribePrefixListAssociationsResult()
{}

void DescribePrefixListAssociationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPrefixListAssociationsNode = value["PrefixListAssociations"]["PrefixListAssociation"];
	for (auto valuePrefixListAssociationsPrefixListAssociation : allPrefixListAssociationsNode)
	{
		PrefixListAssociation prefixListAssociationsObject;
		if(!valuePrefixListAssociationsPrefixListAssociation["ResourceId"].isNull())
			prefixListAssociationsObject.resourceId = valuePrefixListAssociationsPrefixListAssociation["ResourceId"].asString();
		if(!valuePrefixListAssociationsPrefixListAssociation["ResourceType"].isNull())
			prefixListAssociationsObject.resourceType = valuePrefixListAssociationsPrefixListAssociation["ResourceType"].asString();
		prefixListAssociations_.push_back(prefixListAssociationsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribePrefixListAssociationsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribePrefixListAssociationsResult::PrefixListAssociation> DescribePrefixListAssociationsResult::getPrefixListAssociations()const
{
	return prefixListAssociations_;
}


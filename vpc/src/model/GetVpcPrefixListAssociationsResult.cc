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

#include <alibabacloud/vpc/model/GetVpcPrefixListAssociationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

GetVpcPrefixListAssociationsResult::GetVpcPrefixListAssociationsResult() :
	ServiceResult()
{}

GetVpcPrefixListAssociationsResult::GetVpcPrefixListAssociationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVpcPrefixListAssociationsResult::~GetVpcPrefixListAssociationsResult()
{}

void GetVpcPrefixListAssociationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPrefixListAssociationNode = value["PrefixListAssociation"]["PrefixListAssociations"];
	for (auto valuePrefixListAssociationPrefixListAssociations : allPrefixListAssociationNode)
	{
		PrefixListAssociations prefixListAssociationObject;
		if(!valuePrefixListAssociationPrefixListAssociations["PrefixListId"].isNull())
			prefixListAssociationObject.prefixListId = valuePrefixListAssociationPrefixListAssociations["PrefixListId"].asString();
		if(!valuePrefixListAssociationPrefixListAssociations["ResourceId"].isNull())
			prefixListAssociationObject.resourceId = valuePrefixListAssociationPrefixListAssociations["ResourceId"].asString();
		if(!valuePrefixListAssociationPrefixListAssociations["ResourceType"].isNull())
			prefixListAssociationObject.resourceType = valuePrefixListAssociationPrefixListAssociations["ResourceType"].asString();
		if(!valuePrefixListAssociationPrefixListAssociations["OwnerId"].isNull())
			prefixListAssociationObject.ownerId = valuePrefixListAssociationPrefixListAssociations["OwnerId"].asString();
		if(!valuePrefixListAssociationPrefixListAssociations["Status"].isNull())
			prefixListAssociationObject.status = valuePrefixListAssociationPrefixListAssociations["Status"].asString();
		if(!valuePrefixListAssociationPrefixListAssociations["Reason"].isNull())
			prefixListAssociationObject.reason = valuePrefixListAssociationPrefixListAssociations["Reason"].asString();
		if(!valuePrefixListAssociationPrefixListAssociations["RegionId"].isNull())
			prefixListAssociationObject.regionId = valuePrefixListAssociationPrefixListAssociations["RegionId"].asString();
		if(!valuePrefixListAssociationPrefixListAssociations["ResourceUid"].isNull())
			prefixListAssociationObject.resourceUid = valuePrefixListAssociationPrefixListAssociations["ResourceUid"].asString();
		prefixListAssociation_.push_back(prefixListAssociationObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Count"].isNull())
		count_ = std::stol(value["Count"].asString());

}

long GetVpcPrefixListAssociationsResult::getTotalCount()const
{
	return totalCount_;
}

std::string GetVpcPrefixListAssociationsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<GetVpcPrefixListAssociationsResult::PrefixListAssociations> GetVpcPrefixListAssociationsResult::getPrefixListAssociation()const
{
	return prefixListAssociation_;
}

long GetVpcPrefixListAssociationsResult::getCount()const
{
	return count_;
}


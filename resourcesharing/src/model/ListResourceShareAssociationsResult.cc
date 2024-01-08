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

#include <alibabacloud/resourcesharing/model/ListResourceShareAssociationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceSharing;
using namespace AlibabaCloud::ResourceSharing::Model;

ListResourceShareAssociationsResult::ListResourceShareAssociationsResult() :
	ServiceResult()
{}

ListResourceShareAssociationsResult::ListResourceShareAssociationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceShareAssociationsResult::~ListResourceShareAssociationsResult()
{}

void ListResourceShareAssociationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourceShareAssociationsNode = value["ResourceShareAssociations"]["ResourceShareAssociation"];
	for (auto valueResourceShareAssociationsResourceShareAssociation : allResourceShareAssociationsNode)
	{
		ResourceShareAssociation resourceShareAssociationsObject;
		if(!valueResourceShareAssociationsResourceShareAssociation["UpdateTime"].isNull())
			resourceShareAssociationsObject.updateTime = valueResourceShareAssociationsResourceShareAssociation["UpdateTime"].asString();
		if(!valueResourceShareAssociationsResourceShareAssociation["EntityId"].isNull())
			resourceShareAssociationsObject.entityId = valueResourceShareAssociationsResourceShareAssociation["EntityId"].asString();
		if(!valueResourceShareAssociationsResourceShareAssociation["ResourceShareName"].isNull())
			resourceShareAssociationsObject.resourceShareName = valueResourceShareAssociationsResourceShareAssociation["ResourceShareName"].asString();
		if(!valueResourceShareAssociationsResourceShareAssociation["CreateTime"].isNull())
			resourceShareAssociationsObject.createTime = valueResourceShareAssociationsResourceShareAssociation["CreateTime"].asString();
		if(!valueResourceShareAssociationsResourceShareAssociation["EntityType"].isNull())
			resourceShareAssociationsObject.entityType = valueResourceShareAssociationsResourceShareAssociation["EntityType"].asString();
		if(!valueResourceShareAssociationsResourceShareAssociation["ResourceShareId"].isNull())
			resourceShareAssociationsObject.resourceShareId = valueResourceShareAssociationsResourceShareAssociation["ResourceShareId"].asString();
		if(!valueResourceShareAssociationsResourceShareAssociation["AssociationStatusMessage"].isNull())
			resourceShareAssociationsObject.associationStatusMessage = valueResourceShareAssociationsResourceShareAssociation["AssociationStatusMessage"].asString();
		if(!valueResourceShareAssociationsResourceShareAssociation["AssociationType"].isNull())
			resourceShareAssociationsObject.associationType = valueResourceShareAssociationsResourceShareAssociation["AssociationType"].asString();
		if(!valueResourceShareAssociationsResourceShareAssociation["AssociationStatus"].isNull())
			resourceShareAssociationsObject.associationStatus = valueResourceShareAssociationsResourceShareAssociation["AssociationStatus"].asString();
		if(!valueResourceShareAssociationsResourceShareAssociation["External"].isNull())
			resourceShareAssociationsObject.external = valueResourceShareAssociationsResourceShareAssociation["External"].asString() == "true";
		if(!valueResourceShareAssociationsResourceShareAssociation["TargetProperty"].isNull())
			resourceShareAssociationsObject.targetProperty = valueResourceShareAssociationsResourceShareAssociation["TargetProperty"].asString();
		auto allAssociationFailedDetailsNode = valueResourceShareAssociationsResourceShareAssociation["AssociationFailedDetails"]["AssociationFailedDetail"];
		for (auto valueResourceShareAssociationsResourceShareAssociationAssociationFailedDetailsAssociationFailedDetail : allAssociationFailedDetailsNode)
		{
			ResourceShareAssociation::AssociationFailedDetail associationFailedDetailsObject;
			if(!valueResourceShareAssociationsResourceShareAssociationAssociationFailedDetailsAssociationFailedDetail["Status"].isNull())
				associationFailedDetailsObject.status = valueResourceShareAssociationsResourceShareAssociationAssociationFailedDetailsAssociationFailedDetail["Status"].asString();
			if(!valueResourceShareAssociationsResourceShareAssociationAssociationFailedDetailsAssociationFailedDetail["StatusMessage"].isNull())
				associationFailedDetailsObject.statusMessage = valueResourceShareAssociationsResourceShareAssociationAssociationFailedDetailsAssociationFailedDetail["StatusMessage"].asString();
			if(!valueResourceShareAssociationsResourceShareAssociationAssociationFailedDetailsAssociationFailedDetail["AssociateType"].isNull())
				associationFailedDetailsObject.associateType = valueResourceShareAssociationsResourceShareAssociationAssociationFailedDetailsAssociationFailedDetail["AssociateType"].asString();
			if(!valueResourceShareAssociationsResourceShareAssociationAssociationFailedDetailsAssociationFailedDetail["EntityId"].isNull())
				associationFailedDetailsObject.entityId = valueResourceShareAssociationsResourceShareAssociationAssociationFailedDetailsAssociationFailedDetail["EntityId"].asString();
			if(!valueResourceShareAssociationsResourceShareAssociationAssociationFailedDetailsAssociationFailedDetail["EntityType"].isNull())
				associationFailedDetailsObject.entityType = valueResourceShareAssociationsResourceShareAssociationAssociationFailedDetailsAssociationFailedDetail["EntityType"].asString();
			resourceShareAssociationsObject.associationFailedDetails.push_back(associationFailedDetailsObject);
		}
		resourceShareAssociations_.push_back(resourceShareAssociationsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<ListResourceShareAssociationsResult::ResourceShareAssociation> ListResourceShareAssociationsResult::getResourceShareAssociations()const
{
	return resourceShareAssociations_;
}

std::string ListResourceShareAssociationsResult::getNextToken()const
{
	return nextToken_;
}


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

#include <alibabacloud/dataworks-public/model/ListLineageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListLineageResult::ListLineageResult() :
	ServiceResult()
{}

ListLineageResult::ListLineageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLineageResult::~ListLineageResult()
{}

void ListLineageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	auto allDataEntityListNode = dataNode["DataEntityList"]["DataEntityListItem"];
	for (auto dataNodeDataEntityListDataEntityListItem : allDataEntityListNode)
	{
		Data::DataEntityListItem dataEntityListItemObject;
		if(!dataNodeDataEntityListDataEntityListItem["CreateTimestamp"].isNull())
			dataEntityListItemObject.createTimestamp = std::stol(dataNodeDataEntityListDataEntityListItem["CreateTimestamp"].asString());
		auto allRelationListNode = dataNodeDataEntityListDataEntityListItem["RelationList"]["RelationListItem"];
		for (auto dataNodeDataEntityListDataEntityListItemRelationListRelationListItem : allRelationListNode)
		{
			Data::DataEntityListItem::RelationListItem relationListObject;
			if(!dataNodeDataEntityListDataEntityListItemRelationListRelationListItem["Guid"].isNull())
				relationListObject.guid = dataNodeDataEntityListDataEntityListItemRelationListRelationListItem["Guid"].asString();
			if(!dataNodeDataEntityListDataEntityListItemRelationListRelationListItem["Datasource"].isNull())
				relationListObject.datasource = dataNodeDataEntityListDataEntityListItemRelationListRelationListItem["Datasource"].asString();
			if(!dataNodeDataEntityListDataEntityListItemRelationListRelationListItem["Type"].isNull())
				relationListObject.type = dataNodeDataEntityListDataEntityListItemRelationListRelationListItem["Type"].asString();
			if(!dataNodeDataEntityListDataEntityListItemRelationListRelationListItem["Channel"].isNull())
				relationListObject.channel = dataNodeDataEntityListDataEntityListItemRelationListRelationListItem["Channel"].asString();
			dataEntityListItemObject.relationList.push_back(relationListObject);
		}
		auto entityNode = value["Entity"];
		if(!entityNode["QualifiedName"].isNull())
			dataEntityListItemObject.entity.qualifiedName = entityNode["QualifiedName"].asString();
		if(!entityNode["TenantId"].isNull())
			dataEntityListItemObject.entity.tenantId = std::stol(entityNode["TenantId"].asString());
		if(!entityNode["EntityContent"].isNull())
			dataEntityListItemObject.entity.entityContent = entityNode["EntityContent"].asString();
		data_.dataEntityList.push_back(dataEntityListItemObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

int ListLineageResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListLineageResult::Data ListLineageResult::getData()const
{
	return data_;
}

std::string ListLineageResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListLineageResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListLineageResult::getSuccess()const
{
	return success_;
}


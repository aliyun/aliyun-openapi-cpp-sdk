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

#include <alibabacloud/dataworks-public/model/ListMetaCollectionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListMetaCollectionsResult::ListMetaCollectionsResult() :
	ServiceResult()
{}

ListMetaCollectionsResult::ListMetaCollectionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMetaCollectionsResult::~ListMetaCollectionsResult()
{}

void ListMetaCollectionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	auto allCollectionListNode = dataNode["CollectionList"]["CollectionListItem"];
	for (auto dataNodeCollectionListCollectionListItem : allCollectionListNode)
	{
		Data::CollectionListItem collectionListItemObject;
		if(!dataNodeCollectionListCollectionListItem["QualifiedName"].isNull())
			collectionListItemObject.qualifiedName = dataNodeCollectionListCollectionListItem["QualifiedName"].asString();
		if(!dataNodeCollectionListCollectionListItem["CollectionType"].isNull())
			collectionListItemObject.collectionType = dataNodeCollectionListCollectionListItem["CollectionType"].asString();
		if(!dataNodeCollectionListCollectionListItem["Name"].isNull())
			collectionListItemObject.name = dataNodeCollectionListCollectionListItem["Name"].asString();
		if(!dataNodeCollectionListCollectionListItem["Comment"].isNull())
			collectionListItemObject.comment = dataNodeCollectionListCollectionListItem["Comment"].asString();
		if(!dataNodeCollectionListCollectionListItem["OwnerId"].isNull())
			collectionListItemObject.ownerId = dataNodeCollectionListCollectionListItem["OwnerId"].asString();
		if(!dataNodeCollectionListCollectionListItem["OwnerName"].isNull())
			collectionListItemObject.ownerName = dataNodeCollectionListCollectionListItem["OwnerName"].asString();
		if(!dataNodeCollectionListCollectionListItem["CreateTime"].isNull())
			collectionListItemObject.createTime = std::stol(dataNodeCollectionListCollectionListItem["CreateTime"].asString());
		if(!dataNodeCollectionListCollectionListItem["UpdateTime"].isNull())
			collectionListItemObject.updateTime = std::stol(dataNodeCollectionListCollectionListItem["UpdateTime"].asString());
		if(!dataNodeCollectionListCollectionListItem["Level"].isNull())
			collectionListItemObject.level = std::stoi(dataNodeCollectionListCollectionListItem["Level"].asString());
		data_.collectionList.push_back(collectionListItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int ListMetaCollectionsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListMetaCollectionsResult::Data ListMetaCollectionsResult::getData()const
{
	return data_;
}

std::string ListMetaCollectionsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListMetaCollectionsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListMetaCollectionsResult::getSuccess()const
{
	return success_;
}


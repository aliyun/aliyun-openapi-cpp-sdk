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

#include <alibabacloud/dataworks-public/model/GetMetaCollectionDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetMetaCollectionDetailResult::GetMetaCollectionDetailResult() :
	ServiceResult()
{}

GetMetaCollectionDetailResult::GetMetaCollectionDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMetaCollectionDetailResult::~GetMetaCollectionDetailResult()
{}

void GetMetaCollectionDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto collectionNode = value["Collection"];
	if(!collectionNode["QualifiedName"].isNull())
		collection_.qualifiedName = collectionNode["QualifiedName"].asString();
	if(!collectionNode["CollectionType"].isNull())
		collection_.collectionType = collectionNode["CollectionType"].asString();
	if(!collectionNode["Name"].isNull())
		collection_.name = collectionNode["Name"].asString();
	if(!collectionNode["Comment"].isNull())
		collection_.comment = collectionNode["Comment"].asString();
	if(!collectionNode["OwnerId"].isNull())
		collection_.ownerId = collectionNode["OwnerId"].asString();
	if(!collectionNode["OwnerName"].isNull())
		collection_.ownerName = collectionNode["OwnerName"].asString();
	if(!collectionNode["CreateTime"].isNull())
		collection_.createTime = std::stol(collectionNode["CreateTime"].asString());
	if(!collectionNode["UpdateTime"].isNull())
		collection_.updateTime = std::stol(collectionNode["UpdateTime"].asString());
	if(!collectionNode["Level"].isNull())
		collection_.level = std::stoi(collectionNode["Level"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int GetMetaCollectionDetailResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetMetaCollectionDetailResult::Collection GetMetaCollectionDetailResult::getCollection()const
{
	return collection_;
}

std::string GetMetaCollectionDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMetaCollectionDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetMetaCollectionDetailResult::getSuccess()const
{
	return success_;
}


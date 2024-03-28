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

#include <alibabacloud/devops/model/ListUserKeysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListUserKeysResult::ListUserKeysResult() :
	ServiceResult()
{}

ListUserKeysResult::ListUserKeysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserKeysResult::~ListUserKeysResult()
{}

void ListUserKeysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["list_keys_result"];
	for (auto valueresultlist_keys_result : allresultNode)
	{
		List_keys_result resultObject;
		if(!valueresultlist_keys_result["id"].isNull())
			resultObject.id = std::stol(valueresultlist_keys_result["id"].asString());
		if(!valueresultlist_keys_result["tittle"].isNull())
			resultObject.tittle = valueresultlist_keys_result["tittle"].asString();
		if(!valueresultlist_keys_result["title"].isNull())
			resultObject.title = valueresultlist_keys_result["title"].asString();
		if(!valueresultlist_keys_result["publicKey"].isNull())
			resultObject.publicKey = valueresultlist_keys_result["publicKey"].asString();
		if(!valueresultlist_keys_result["fingerPrint"].isNull())
			resultObject.fingerPrint = valueresultlist_keys_result["fingerPrint"].asString();
		if(!valueresultlist_keys_result["keyScope"].isNull())
			resultObject.keyScope = valueresultlist_keys_result["keyScope"].asString();
		if(!valueresultlist_keys_result["createdAt"].isNull())
			resultObject.createdAt = valueresultlist_keys_result["createdAt"].asString();
		if(!valueresultlist_keys_result["expireTime"].isNull())
			resultObject.expireTime = valueresultlist_keys_result["expireTime"].asString();
		if(!valueresultlist_keys_result["lastUsedTime"].isNull())
			resultObject.lastUsedTime = valueresultlist_keys_result["lastUsedTime"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::vector<ListUserKeysResult::List_keys_result> ListUserKeysResult::getresult()const
{
	return result_;
}

std::string ListUserKeysResult::getRequestId()const
{
	return requestId_;
}

std::string ListUserKeysResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListUserKeysResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListUserKeysResult::getSuccess()const
{
	return success_;
}


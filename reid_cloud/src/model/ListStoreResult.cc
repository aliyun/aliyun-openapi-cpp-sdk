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

#include <alibabacloud/reid_cloud/model/ListStoreResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid_cloud;
using namespace AlibabaCloud::Reid_cloud::Model;

ListStoreResult::ListStoreResult() :
	ServiceResult()
{}

ListStoreResult::ListStoreResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListStoreResult::~ListStoreResult()
{}

void ListStoreResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStoresNode = value["Stores"]["OpenStore"];
	for (auto valueStoresOpenStore : allStoresNode)
	{
		OpenStore storesObject;
		if(!valueStoresOpenStore["StoreId"].isNull())
			storesObject.storeId = std::stol(valueStoresOpenStore["StoreId"].asString());
		if(!valueStoresOpenStore["GmtCreate"].isNull())
			storesObject.gmtCreate = std::stol(valueStoresOpenStore["GmtCreate"].asString());
		if(!valueStoresOpenStore["Sqm"].isNull())
			storesObject.sqm = std::stof(valueStoresOpenStore["Sqm"].asString());
		if(!valueStoresOpenStore["Status"].isNull())
			storesObject.status = std::stoi(valueStoresOpenStore["Status"].asString());
		if(!valueStoresOpenStore["Name"].isNull())
			storesObject.name = valueStoresOpenStore["Name"].asString();
		if(!valueStoresOpenStore["OpeningEndTime"].isNull())
			storesObject.openingEndTime = valueStoresOpenStore["OpeningEndTime"].asString();
		if(!valueStoresOpenStore["OpeningStartTime"].isNull())
			storesObject.openingStartTime = valueStoresOpenStore["OpeningStartTime"].asString();
		if(!valueStoresOpenStore["StoreType"].isNull())
			storesObject.storeType = valueStoresOpenStore["StoreType"].asString();
		if(!valueStoresOpenStore["GmtModified"].isNull())
			storesObject.gmtModified = std::stol(valueStoresOpenStore["GmtModified"].asString());
		if(!valueStoresOpenStore["Address"].isNull())
			storesObject.address = valueStoresOpenStore["Address"].asString();
		stores_.push_back(storesObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string ListStoreResult::getMessage()const
{
	return message_;
}

std::string ListStoreResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::vector<ListStoreResult::OpenStore> ListStoreResult::getStores()const
{
	return stores_;
}

std::string ListStoreResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListStoreResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ListStoreResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListStoreResult::getCode()const
{
	return code_;
}

bool ListStoreResult::getSuccess()const
{
	return success_;
}


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

#include <alibabacloud/cloudesl/model/DescribeStoreByTemplateVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeStoreByTemplateVersionResult::DescribeStoreByTemplateVersionResult() :
	ServiceResult()
{}

DescribeStoreByTemplateVersionResult::DescribeStoreByTemplateVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStoreByTemplateVersionResult::~DescribeStoreByTemplateVersionResult()
{}

void DescribeStoreByTemplateVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStoresNode = value["Stores"]["SelectItemInfo"];
	for (auto valueStoresSelectItemInfo : allStoresNode)
	{
		SelectItemInfo storesObject;
		if(!valueStoresSelectItemInfo["StoreName"].isNull())
			storesObject.storeName = valueStoresSelectItemInfo["StoreName"].asString();
		if(!valueStoresSelectItemInfo["StoreId"].isNull())
			storesObject.storeId = valueStoresSelectItemInfo["StoreId"].asString();
		if(!valueStoresSelectItemInfo["ParentId"].isNull())
			storesObject.parentId = valueStoresSelectItemInfo["ParentId"].asString();
		if(!valueStoresSelectItemInfo["UserStoreCode"].isNull())
			storesObject.userStoreCode = valueStoresSelectItemInfo["UserStoreCode"].asString();
		if(!valueStoresSelectItemInfo["GmtModified"].isNull())
			storesObject.gmtModified = valueStoresSelectItemInfo["GmtModified"].asString();
		if(!valueStoresSelectItemInfo["Phone"].isNull())
			storesObject.phone = valueStoresSelectItemInfo["Phone"].asString();
		if(!valueStoresSelectItemInfo["Level"].isNull())
			storesObject.level = valueStoresSelectItemInfo["Level"].asString();
		if(!valueStoresSelectItemInfo["TemplateVersion"].isNull())
			storesObject.templateVersion = valueStoresSelectItemInfo["TemplateVersion"].asString();
		if(!valueStoresSelectItemInfo["TimeZone"].isNull())
			storesObject.timeZone = valueStoresSelectItemInfo["TimeZone"].asString();
		stores_.push_back(storesObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();

}

std::string DescribeStoreByTemplateVersionResult::getMessage()const
{
	return message_;
}

std::string DescribeStoreByTemplateVersionResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::vector<DescribeStoreByTemplateVersionResult::SelectItemInfo> DescribeStoreByTemplateVersionResult::getStores()const
{
	return stores_;
}

std::string DescribeStoreByTemplateVersionResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeStoreByTemplateVersionResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeStoreByTemplateVersionResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeStoreByTemplateVersionResult::getCode()const
{
	return code_;
}

bool DescribeStoreByTemplateVersionResult::getSuccess()const
{
	return success_;
}


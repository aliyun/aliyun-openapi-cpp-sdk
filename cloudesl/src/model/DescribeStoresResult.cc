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

#include <alibabacloud/cloudesl/model/DescribeStoresResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeStoresResult::DescribeStoresResult() :
	ServiceResult()
{}

DescribeStoresResult::DescribeStoresResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStoresResult::~DescribeStoresResult()
{}

void DescribeStoresResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStoresNode = value["Stores"]["StoreInfo"];
	for (auto valueStoresStoreInfo : allStoresNode)
	{
		StoreInfo storesObject;
		if(!valueStoresStoreInfo["CompanyId"].isNull())
			storesObject.companyId = valueStoresStoreInfo["CompanyId"].asString();
		if(!valueStoresStoreInfo["StoreId"].isNull())
			storesObject.storeId = valueStoresStoreInfo["StoreId"].asString();
		if(!valueStoresStoreInfo["StoreName"].isNull())
			storesObject.storeName = valueStoresStoreInfo["StoreName"].asString();
		if(!valueStoresStoreInfo["Brand"].isNull())
			storesObject.brand = valueStoresStoreInfo["Brand"].asString();
		if(!valueStoresStoreInfo["OutId"].isNull())
			storesObject.outId = valueStoresStoreInfo["OutId"].asString();
		if(!valueStoresStoreInfo["Phone"].isNull())
			storesObject.phone = valueStoresStoreInfo["Phone"].asString();
		if(!valueStoresStoreInfo["Level"].isNull())
			storesObject.level = valueStoresStoreInfo["Level"].asString();
		if(!valueStoresStoreInfo["Groups"].isNull())
			storesObject.groups = valueStoresStoreInfo["Groups"].asString();
		if(!valueStoresStoreInfo["Comments"].isNull())
			storesObject.comments = valueStoresStoreInfo["Comments"].asString();
		if(!valueStoresStoreInfo["ParentId"].isNull())
			storesObject.parentId = valueStoresStoreInfo["ParentId"].asString();
		if(!valueStoresStoreInfo["GmtCreate"].isNull())
			storesObject.gmtCreate = valueStoresStoreInfo["GmtCreate"].asString();
		if(!valueStoresStoreInfo["GmtModified"].isNull())
			storesObject.gmtModified = valueStoresStoreInfo["GmtModified"].asString();
		stores_.push_back(storesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeStoresResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeStoresResult::getMessage()const
{
	return message_;
}

int DescribeStoresResult::getPageSize()const
{
	return pageSize_;
}

int DescribeStoresResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeStoresResult::StoreInfo> DescribeStoresResult::getStores()const
{
	return stores_;
}

std::string DescribeStoresResult::getErrorCode()const
{
	return errorCode_;
}

bool DescribeStoresResult::getSuccess()const
{
	return success_;
}


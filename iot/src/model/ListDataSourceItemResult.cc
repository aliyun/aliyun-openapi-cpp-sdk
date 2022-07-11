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

#include <alibabacloud/iot/model/ListDataSourceItemResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

ListDataSourceItemResult::ListDataSourceItemResult() :
	ServiceResult()
{}

ListDataSourceItemResult::ListDataSourceItemResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataSourceItemResult::~ListDataSourceItemResult()
{}

void ListDataSourceItemResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataSourceItemsNode = value["DataSourceItems"]["dataSourceItem"];
	for (auto valueDataSourceItemsdataSourceItem : allDataSourceItemsNode)
	{
		DataSourceItem dataSourceItemsObject;
		if(!valueDataSourceItemsdataSourceItem["DataSourceItemId"].isNull())
			dataSourceItemsObject.dataSourceItemId = std::stol(valueDataSourceItemsdataSourceItem["DataSourceItemId"].asString());
		if(!valueDataSourceItemsdataSourceItem["Topic"].isNull())
			dataSourceItemsObject.topic = valueDataSourceItemsdataSourceItem["Topic"].asString();
		if(!valueDataSourceItemsdataSourceItem["ScopeType"].isNull())
			dataSourceItemsObject.scopeType = valueDataSourceItemsdataSourceItem["ScopeType"].asString();
		if(!valueDataSourceItemsdataSourceItem["ProductKey"].isNull())
			dataSourceItemsObject.productKey = valueDataSourceItemsdataSourceItem["ProductKey"].asString();
		if(!valueDataSourceItemsdataSourceItem["DeviceName"].isNull())
			dataSourceItemsObject.deviceName = valueDataSourceItemsdataSourceItem["DeviceName"].asString();
		dataSourceItems_.push_back(dataSourceItemsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Page"].isNull())
		page_ = std::stoi(value["Page"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<ListDataSourceItemResult::DataSourceItem> ListDataSourceItemResult::getDataSourceItems()const
{
	return dataSourceItems_;
}

int ListDataSourceItemResult::getPageSize()const
{
	return pageSize_;
}

int ListDataSourceItemResult::getTotal()const
{
	return total_;
}

int ListDataSourceItemResult::getPage()const
{
	return page_;
}

std::string ListDataSourceItemResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListDataSourceItemResult::getCode()const
{
	return code_;
}

bool ListDataSourceItemResult::getSuccess()const
{
	return success_;
}


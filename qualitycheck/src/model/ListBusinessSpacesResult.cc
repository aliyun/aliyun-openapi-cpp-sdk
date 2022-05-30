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

#include <alibabacloud/qualitycheck/model/ListBusinessSpacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

ListBusinessSpacesResult::ListBusinessSpacesResult() :
	ServiceResult()
{}

ListBusinessSpacesResult::ListBusinessSpacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBusinessSpacesResult::~ListBusinessSpacesResult()
{}

void ListBusinessSpacesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Id"].isNull())
			dataObject.id = std::stol(valueDataDataItem["Id"].asString());
		if(!valueDataDataItem["AliUid"].isNull())
			dataObject.aliUid = std::stol(valueDataDataItem["AliUid"].asString());
		if(!valueDataDataItem["SubAliUid"].isNull())
			dataObject.subAliUid = std::stol(valueDataDataItem["SubAliUid"].asString());
		if(!valueDataDataItem["RoleName"].isNull())
			dataObject.roleName = valueDataDataItem["RoleName"].asString();
		if(!valueDataDataItem["LoginUserType"].isNull())
			dataObject.loginUserType = std::stoi(valueDataDataItem["LoginUserType"].asString());
		if(!valueDataDataItem["BusinessSpaceCode"].isNull())
			dataObject.businessSpaceCode = valueDataDataItem["BusinessSpaceCode"].asString();
		if(!valueDataDataItem["BusinessSpaceName"].isNull())
			dataObject.businessSpaceName = valueDataDataItem["BusinessSpaceName"].asString();
		if(!valueDataDataItem["OrderInstanceId"].isNull())
			dataObject.orderInstanceId = valueDataDataItem["OrderInstanceId"].asString();
		if(!valueDataDataItem["XspaceProductCode"].isNull())
			dataObject.xspaceProductCode = valueDataDataItem["XspaceProductCode"].asString();
		if(!valueDataDataItem["XspaceCommodityCode"].isNull())
			dataObject.xspaceCommodityCode = valueDataDataItem["XspaceCommodityCode"].asString();
		if(!valueDataDataItem["ProductType"].isNull())
			dataObject.productType = valueDataDataItem["ProductType"].asString();
		if(!valueDataDataItem["Language"].isNull())
			dataObject.language = valueDataDataItem["Language"].asString();
		if(!valueDataDataItem["StartTime"].isNull())
			dataObject.startTime = valueDataDataItem["StartTime"].asString();
		if(!valueDataDataItem["EndTime"].isNull())
			dataObject.endTime = valueDataDataItem["EndTime"].asString();
		if(!valueDataDataItem["CurrentStatus"].isNull())
			dataObject.currentStatus = std::stoi(valueDataDataItem["CurrentStatus"].asString());
		data_.push_back(dataObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

int ListBusinessSpacesResult::getPageSize()const
{
	return pageSize_;
}

std::string ListBusinessSpacesResult::getMessage()const
{
	return message_;
}

int ListBusinessSpacesResult::getCurrentPage()const
{
	return currentPage_;
}

int ListBusinessSpacesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListBusinessSpacesResult::DataItem> ListBusinessSpacesResult::getData()const
{
	return data_;
}

std::string ListBusinessSpacesResult::getCode()const
{
	return code_;
}

bool ListBusinessSpacesResult::getSuccess()const
{
	return success_;
}


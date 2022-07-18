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

#include <alibabacloud/cloudesl/model/QueryLayoutByDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

QueryLayoutByDeviceResult::QueryLayoutByDeviceResult() :
	ServiceResult()
{}

QueryLayoutByDeviceResult::QueryLayoutByDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryLayoutByDeviceResult::~QueryLayoutByDeviceResult()
{}

void QueryLayoutByDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLayoutListNode = value["LayoutList"]["Layout"];
	for (auto valueLayoutListLayout : allLayoutListNode)
	{
		Layout layoutListObject;
		if(!valueLayoutListLayout["LayoutId"].isNull())
			layoutListObject.layoutId = valueLayoutListLayout["LayoutId"].asString();
		if(!valueLayoutListLayout["LayoutName"].isNull())
			layoutListObject.layoutName = valueLayoutListLayout["LayoutName"].asString();
		if(!valueLayoutListLayout["Description"].isNull())
			layoutListObject.description = valueLayoutListLayout["Description"].asString();
		if(!valueLayoutListLayout["LayoutTemplateId"].isNull())
			layoutListObject.layoutTemplateId = valueLayoutListLayout["LayoutTemplateId"].asString();
		if(!valueLayoutListLayout["IsBind"].isNull())
			layoutListObject.isBind = valueLayoutListLayout["IsBind"].asString() == "true";
		if(!valueLayoutListLayout["Brand"].isNull())
			layoutListObject.brand = valueLayoutListLayout["Brand"].asString();
		if(!valueLayoutListLayout["BasePic"].isNull())
			layoutListObject.basePic = valueLayoutListLayout["BasePic"].asString();
		layoutList_.push_back(layoutListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int QueryLayoutByDeviceResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<QueryLayoutByDeviceResult::Layout> QueryLayoutByDeviceResult::getLayoutList()const
{
	return layoutList_;
}

std::string QueryLayoutByDeviceResult::getMessage()const
{
	return message_;
}

int QueryLayoutByDeviceResult::getPageSize()const
{
	return pageSize_;
}

int QueryLayoutByDeviceResult::getPageNumber()const
{
	return pageNumber_;
}

std::string QueryLayoutByDeviceResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string QueryLayoutByDeviceResult::getErrorCode()const
{
	return errorCode_;
}

std::string QueryLayoutByDeviceResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string QueryLayoutByDeviceResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryLayoutByDeviceResult::getCode()const
{
	return code_;
}

bool QueryLayoutByDeviceResult::getSuccess()const
{
	return success_;
}


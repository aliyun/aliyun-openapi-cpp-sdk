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

#include <alibabacloud/cloudesl/model/DescribeAvailableEslModelsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeAvailableEslModelsResult::DescribeAvailableEslModelsResult() :
	ServiceResult()
{}

DescribeAvailableEslModelsResult::DescribeAvailableEslModelsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableEslModelsResult::~DescribeAvailableEslModelsResult()
{}

void DescribeAvailableEslModelsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEslModelsNode = value["EslModels"]["SelectItemInfo"];
	for (auto valueEslModelsSelectItemInfo : allEslModelsNode)
	{
		SelectItemInfo eslModelsObject;
		if(!valueEslModelsSelectItemInfo["ModelId"].isNull())
			eslModelsObject.modelId = valueEslModelsSelectItemInfo["ModelId"].asString();
		if(!valueEslModelsSelectItemInfo["Name"].isNull())
			eslModelsObject.name = valueEslModelsSelectItemInfo["Name"].asString();
		if(!valueEslModelsSelectItemInfo["DeviceType"].isNull())
			eslModelsObject.deviceType = valueEslModelsSelectItemInfo["DeviceType"].asString();
		if(!valueEslModelsSelectItemInfo["Vendor"].isNull())
			eslModelsObject.vendor = valueEslModelsSelectItemInfo["Vendor"].asString();
		if(!valueEslModelsSelectItemInfo["ScreenWidth"].isNull())
			eslModelsObject.screenWidth = std::stoi(valueEslModelsSelectItemInfo["ScreenWidth"].asString());
		if(!valueEslModelsSelectItemInfo["ScreenHeight"].isNull())
			eslModelsObject.screenHeight = std::stoi(valueEslModelsSelectItemInfo["ScreenHeight"].asString());
		if(!valueEslModelsSelectItemInfo["EslSize"].isNull())
			eslModelsObject.eslSize = valueEslModelsSelectItemInfo["EslSize"].asString();
		eslModels_.push_back(eslModelsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
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

}

std::vector<DescribeAvailableEslModelsResult::SelectItemInfo> DescribeAvailableEslModelsResult::getEslModels()const
{
	return eslModels_;
}

int DescribeAvailableEslModelsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAvailableEslModelsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeAvailableEslModelsResult::getMessage()const
{
	return message_;
}

int DescribeAvailableEslModelsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeAvailableEslModelsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeAvailableEslModelsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeAvailableEslModelsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeAvailableEslModelsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeAvailableEslModelsResult::getCode()const
{
	return code_;
}

bool DescribeAvailableEslModelsResult::getSuccess()const
{
	return success_;
}


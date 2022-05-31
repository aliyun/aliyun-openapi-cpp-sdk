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

#include <alibabacloud/cloudesl/model/DescribeEslModelByTemplateVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeEslModelByTemplateVersionResult::DescribeEslModelByTemplateVersionResult() :
	ServiceResult()
{}

DescribeEslModelByTemplateVersionResult::DescribeEslModelByTemplateVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEslModelByTemplateVersionResult::~DescribeEslModelByTemplateVersionResult()
{}

void DescribeEslModelByTemplateVersionResult::parse(const std::string &payload)
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
		if(!valueEslModelsSelectItemInfo["Image"].isNull())
			eslModelsObject.image = valueEslModelsSelectItemInfo["Image"].asString();
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
		if(!valueEslModelsSelectItemInfo["EslPhysicalSize"].isNull())
			eslModelsObject.eslPhysicalSize = valueEslModelsSelectItemInfo["EslPhysicalSize"].asString();
		eslModels_.push_back(eslModelsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
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
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeEslModelByTemplateVersionResult::SelectItemInfo> DescribeEslModelByTemplateVersionResult::getEslModels()const
{
	return eslModels_;
}

int DescribeEslModelByTemplateVersionResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeEslModelByTemplateVersionResult::getMessage()const
{
	return message_;
}

int DescribeEslModelByTemplateVersionResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEslModelByTemplateVersionResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeEslModelByTemplateVersionResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeEslModelByTemplateVersionResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeEslModelByTemplateVersionResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeEslModelByTemplateVersionResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeEslModelByTemplateVersionResult::getCode()const
{
	return code_;
}

bool DescribeEslModelByTemplateVersionResult::getSuccess()const
{
	return success_;
}


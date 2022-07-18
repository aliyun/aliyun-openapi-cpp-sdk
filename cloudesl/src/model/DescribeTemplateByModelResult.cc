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

#include <alibabacloud/cloudesl/model/DescribeTemplateByModelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeTemplateByModelResult::DescribeTemplateByModelResult() :
	ServiceResult()
{}

DescribeTemplateByModelResult::DescribeTemplateByModelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTemplateByModelResult::~DescribeTemplateByModelResult()
{}

void DescribeTemplateByModelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["SelectItemInfo"];
	for (auto valueItemsSelectItemInfo : allItemsNode)
	{
		SelectItemInfo itemsObject;
		if(!valueItemsSelectItemInfo["BasePicture"].isNull())
			itemsObject.basePicture = valueItemsSelectItemInfo["BasePicture"].asString();
		if(!valueItemsSelectItemInfo["TemplateId"].isNull())
			itemsObject.templateId = valueItemsSelectItemInfo["TemplateId"].asString();
		if(!valueItemsSelectItemInfo["TemplateName"].isNull())
			itemsObject.templateName = valueItemsSelectItemInfo["TemplateName"].asString();
		if(!valueItemsSelectItemInfo["EslSize"].isNull())
			itemsObject.eslSize = valueItemsSelectItemInfo["EslSize"].asString();
		if(!valueItemsSelectItemInfo["EslType"].isNull())
			itemsObject.eslType = valueItemsSelectItemInfo["EslType"].asString();
		if(!valueItemsSelectItemInfo["Width"].isNull())
			itemsObject.width = std::stol(valueItemsSelectItemInfo["Width"].asString());
		if(!valueItemsSelectItemInfo["Height"].isNull())
			itemsObject.height = std::stol(valueItemsSelectItemInfo["Height"].asString());
		if(!valueItemsSelectItemInfo["TemplateVersion"].isNull())
			itemsObject.templateVersion = valueItemsSelectItemInfo["TemplateVersion"].asString();
		if(!valueItemsSelectItemInfo["Layout"].isNull())
			itemsObject.layout = valueItemsSelectItemInfo["Layout"].asString();
		if(!valueItemsSelectItemInfo["Scene"].isNull())
			itemsObject.scene = valueItemsSelectItemInfo["Scene"].asString();
		if(!valueItemsSelectItemInfo["Brand"].isNull())
			itemsObject.brand = valueItemsSelectItemInfo["Brand"].asString();
		if(!valueItemsSelectItemInfo["TemplateSceneId"].isNull())
			itemsObject.templateSceneId = valueItemsSelectItemInfo["TemplateSceneId"].asString();
		items_.push_back(itemsObject);
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
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeTemplateByModelResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeTemplateByModelResult::getMessage()const
{
	return message_;
}

int DescribeTemplateByModelResult::getPageSize()const
{
	return pageSize_;
}

int DescribeTemplateByModelResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeTemplateByModelResult::SelectItemInfo> DescribeTemplateByModelResult::getItems()const
{
	return items_;
}

std::string DescribeTemplateByModelResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeTemplateByModelResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeTemplateByModelResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeTemplateByModelResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeTemplateByModelResult::getCode()const
{
	return code_;
}

bool DescribeTemplateByModelResult::getSuccess()const
{
	return success_;
}


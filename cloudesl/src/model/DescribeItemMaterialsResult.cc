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

#include <alibabacloud/cloudesl/model/DescribeItemMaterialsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeItemMaterialsResult::DescribeItemMaterialsResult() :
	ServiceResult()
{}

DescribeItemMaterialsResult::DescribeItemMaterialsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeItemMaterialsResult::~DescribeItemMaterialsResult()
{}

void DescribeItemMaterialsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMaterialsNode = value["Materials"]["ItemMaterialInfo"];
	for (auto valueMaterialsItemMaterialInfo : allMaterialsNode)
	{
		ItemMaterialInfo materialsObject;
		if(!valueMaterialsItemMaterialInfo["BarCode"].isNull())
			materialsObject.barCode = valueMaterialsItemMaterialInfo["BarCode"].asString();
		if(!valueMaterialsItemMaterialInfo["ItemName"].isNull())
			materialsObject.itemName = valueMaterialsItemMaterialInfo["ItemName"].asString();
		if(!valueMaterialsItemMaterialInfo["GmtCreate"].isNull())
			materialsObject.gmtCreate = valueMaterialsItemMaterialInfo["GmtCreate"].asString();
		materials_.push_back(materialsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
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

int DescribeItemMaterialsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeItemMaterialsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeItemMaterialsResult::getMessage()const
{
	return message_;
}

int DescribeItemMaterialsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeItemMaterialsResult::ItemMaterialInfo> DescribeItemMaterialsResult::getMaterials()const
{
	return materials_;
}

std::string DescribeItemMaterialsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeItemMaterialsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeItemMaterialsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeItemMaterialsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeItemMaterialsResult::getCode()const
{
	return code_;
}

bool DescribeItemMaterialsResult::getSuccess()const
{
	return success_;
}


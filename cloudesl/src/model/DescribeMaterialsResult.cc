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

#include <alibabacloud/cloudesl/model/DescribeMaterialsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeMaterialsResult::DescribeMaterialsResult() :
	ServiceResult()
{}

DescribeMaterialsResult::DescribeMaterialsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMaterialsResult::~DescribeMaterialsResult()
{}

void DescribeMaterialsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMaterialsNode = value["Materials"]["Material"];
	for (auto valueMaterialsMaterial : allMaterialsNode)
	{
		Material materialsObject;
		if(!valueMaterialsMaterial["MaterialId"].isNull())
			materialsObject.materialId = valueMaterialsMaterial["MaterialId"].asString();
		if(!valueMaterialsMaterial["Size"].isNull())
			materialsObject.size = valueMaterialsMaterial["Size"].asString();
		if(!valueMaterialsMaterial["Period"].isNull())
			materialsObject.period = std::stoi(valueMaterialsMaterial["Period"].asString());
		if(!valueMaterialsMaterial["Content"].isNull())
			materialsObject.content = valueMaterialsMaterial["Content"].asString();
		if(!valueMaterialsMaterial["Thumbnail"].isNull())
			materialsObject.thumbnail = valueMaterialsMaterial["Thumbnail"].asString();
		if(!valueMaterialsMaterial["Type"].isNull())
			materialsObject.type = std::stoi(valueMaterialsMaterial["Type"].asString());
		if(!valueMaterialsMaterial["Source"].isNull())
			materialsObject.source = valueMaterialsMaterial["Source"].asString();
		if(!valueMaterialsMaterial["Name"].isNull())
			materialsObject.name = valueMaterialsMaterial["Name"].asString();
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

int DescribeMaterialsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeMaterialsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeMaterialsResult::getMessage()const
{
	return message_;
}

int DescribeMaterialsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeMaterialsResult::Material> DescribeMaterialsResult::getMaterials()const
{
	return materials_;
}

std::string DescribeMaterialsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeMaterialsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeMaterialsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeMaterialsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeMaterialsResult::getCode()const
{
	return code_;
}

bool DescribeMaterialsResult::getSuccess()const
{
	return success_;
}


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

#include <alibabacloud/cloudesl/model/DescribeCompanyTemplateVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeCompanyTemplateVersionsResult::DescribeCompanyTemplateVersionsResult() :
	ServiceResult()
{}

DescribeCompanyTemplateVersionsResult::DescribeCompanyTemplateVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCompanyTemplateVersionsResult::~DescribeCompanyTemplateVersionsResult()
{}

void DescribeCompanyTemplateVersionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVersionsNode = value["Versions"]["SelectItemInfo"];
	for (auto valueVersionsSelectItemInfo : allVersionsNode)
	{
		SelectItemInfo versionsObject;
		if(!valueVersionsSelectItemInfo["Version"].isNull())
			versionsObject.version = valueVersionsSelectItemInfo["Version"].asString();
		versions_.push_back(versionsObject);
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
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeCompanyTemplateVersionsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeCompanyTemplateVersionsResult::SelectItemInfo> DescribeCompanyTemplateVersionsResult::getVersions()const
{
	return versions_;
}

std::string DescribeCompanyTemplateVersionsResult::getMessage()const
{
	return message_;
}

int DescribeCompanyTemplateVersionsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCompanyTemplateVersionsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeCompanyTemplateVersionsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeCompanyTemplateVersionsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeCompanyTemplateVersionsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeCompanyTemplateVersionsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeCompanyTemplateVersionsResult::getCode()const
{
	return code_;
}

bool DescribeCompanyTemplateVersionsResult::getSuccess()const
{
	return success_;
}


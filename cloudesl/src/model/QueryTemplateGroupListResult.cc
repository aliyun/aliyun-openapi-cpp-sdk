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

#include <alibabacloud/cloudesl/model/QueryTemplateGroupListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

QueryTemplateGroupListResult::QueryTemplateGroupListResult() :
	ServiceResult()
{}

QueryTemplateGroupListResult::QueryTemplateGroupListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTemplateGroupListResult::~QueryTemplateGroupListResult()
{}

void QueryTemplateGroupListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplateGroupListNode = value["TemplateGroupList"]["TemplateGroup"];
	for (auto valueTemplateGroupListTemplateGroup : allTemplateGroupListNode)
	{
		TemplateGroup templateGroupListObject;
		if(!valueTemplateGroupListTemplateGroup["GroupId"].isNull())
			templateGroupListObject.groupId = valueTemplateGroupListTemplateGroup["GroupId"].asString();
		if(!valueTemplateGroupListTemplateGroup["GroupName"].isNull())
			templateGroupListObject.groupName = valueTemplateGroupListTemplateGroup["GroupName"].asString();
		if(!valueTemplateGroupListTemplateGroup["Description"].isNull())
			templateGroupListObject.description = valueTemplateGroupListTemplateGroup["Description"].asString();
		if(!valueTemplateGroupListTemplateGroup["WidthPx"].isNull())
			templateGroupListObject.widthPx = std::stoi(valueTemplateGroupListTemplateGroup["WidthPx"].asString());
		if(!valueTemplateGroupListTemplateGroup["HeightPx"].isNull())
			templateGroupListObject.heightPx = std::stoi(valueTemplateGroupListTemplateGroup["HeightPx"].asString());
		if(!valueTemplateGroupListTemplateGroup["Relation"].isNull())
			templateGroupListObject.relation = valueTemplateGroupListTemplateGroup["Relation"].asString();
		templateGroupList_.push_back(templateGroupListObject);
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
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int QueryTemplateGroupListResult::getTotalCount()const
{
	return totalCount_;
}

std::string QueryTemplateGroupListResult::getMessage()const
{
	return message_;
}

int QueryTemplateGroupListResult::getPageSize()const
{
	return pageSize_;
}

int QueryTemplateGroupListResult::getPageNumber()const
{
	return pageNumber_;
}

std::string QueryTemplateGroupListResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::vector<QueryTemplateGroupListResult::TemplateGroup> QueryTemplateGroupListResult::getTemplateGroupList()const
{
	return templateGroupList_;
}

std::string QueryTemplateGroupListResult::getErrorCode()const
{
	return errorCode_;
}

std::string QueryTemplateGroupListResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string QueryTemplateGroupListResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryTemplateGroupListResult::getCode()const
{
	return code_;
}

bool QueryTemplateGroupListResult::getSuccess()const
{
	return success_;
}


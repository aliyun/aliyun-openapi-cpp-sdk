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

#include <alibabacloud/cloudesl/model/QueryTemplateListByGroupIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

QueryTemplateListByGroupIdResult::QueryTemplateListByGroupIdResult() :
	ServiceResult()
{}

QueryTemplateListByGroupIdResult::QueryTemplateListByGroupIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTemplateListByGroupIdResult::~QueryTemplateListByGroupIdResult()
{}

void QueryTemplateListByGroupIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplateListNode = value["TemplateList"]["Template"];
	for (auto valueTemplateListTemplate : allTemplateListNode)
	{
		_Template templateListObject;
		if(!valueTemplateListTemplate["BasePicture"].isNull())
			templateListObject.basePicture = valueTemplateListTemplate["BasePicture"].asString();
		if(!valueTemplateListTemplate["TemplateId"].isNull())
			templateListObject.templateId = valueTemplateListTemplate["TemplateId"].asString();
		if(!valueTemplateListTemplate["TemplateName"].isNull())
			templateListObject.templateName = valueTemplateListTemplate["TemplateName"].asString();
		if(!valueTemplateListTemplate["EslSize"].isNull())
			templateListObject.eslSize = valueTemplateListTemplate["EslSize"].asString();
		if(!valueTemplateListTemplate["EslType"].isNull())
			templateListObject.eslType = valueTemplateListTemplate["EslType"].asString();
		if(!valueTemplateListTemplate["Width"].isNull())
			templateListObject.width = std::stol(valueTemplateListTemplate["Width"].asString());
		if(!valueTemplateListTemplate["Height"].isNull())
			templateListObject.height = std::stol(valueTemplateListTemplate["Height"].asString());
		if(!valueTemplateListTemplate["TemplateVersion"].isNull())
			templateListObject.templateVersion = valueTemplateListTemplate["TemplateVersion"].asString();
		if(!valueTemplateListTemplate["Layout"].isNull())
			templateListObject.layout = valueTemplateListTemplate["Layout"].asString();
		if(!valueTemplateListTemplate["Scene"].isNull())
			templateListObject.scene = valueTemplateListTemplate["Scene"].asString();
		if(!valueTemplateListTemplate["Brand"].isNull())
			templateListObject.brand = valueTemplateListTemplate["Brand"].asString();
		if(!valueTemplateListTemplate["GroupId"].isNull())
			templateListObject.groupId = valueTemplateListTemplate["GroupId"].asString();
		if(!valueTemplateListTemplate["TemplateSceneId"].isNull())
			templateListObject.templateSceneId = valueTemplateListTemplate["TemplateSceneId"].asString();
		if(!valueTemplateListTemplate["Relation"].isNull())
			templateListObject.relation = valueTemplateListTemplate["Relation"].asString() == "true";
		templateList_.push_back(templateListObject);
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

int QueryTemplateListByGroupIdResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<QueryTemplateListByGroupIdResult::_Template> QueryTemplateListByGroupIdResult::getTemplateList()const
{
	return templateList_;
}

std::string QueryTemplateListByGroupIdResult::getMessage()const
{
	return message_;
}

int QueryTemplateListByGroupIdResult::getPageSize()const
{
	return pageSize_;
}

int QueryTemplateListByGroupIdResult::getPageNumber()const
{
	return pageNumber_;
}

std::string QueryTemplateListByGroupIdResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string QueryTemplateListByGroupIdResult::getErrorCode()const
{
	return errorCode_;
}

std::string QueryTemplateListByGroupIdResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string QueryTemplateListByGroupIdResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryTemplateListByGroupIdResult::getCode()const
{
	return code_;
}

bool QueryTemplateListByGroupIdResult::getSuccess()const
{
	return success_;
}


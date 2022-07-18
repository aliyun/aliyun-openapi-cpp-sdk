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

#include <alibabacloud/cloudesl/model/QueryContainerListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

QueryContainerListResult::QueryContainerListResult() :
	ServiceResult()
{}

QueryContainerListResult::QueryContainerListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryContainerListResult::~QueryContainerListResult()
{}

void QueryContainerListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContainerListNode = value["ContainerList"]["Container"];
	for (auto valueContainerListContainer : allContainerListNode)
	{
		Container containerListObject;
		if(!valueContainerListContainer["ContainerId"].isNull())
			containerListObject.containerId = valueContainerListContainer["ContainerId"].asString();
		if(!valueContainerListContainer["ContainerName"].isNull())
			containerListObject.containerName = valueContainerListContainer["ContainerName"].asString();
		if(!valueContainerListContainer["Description"].isNull())
			containerListObject.description = valueContainerListContainer["Description"].asString();
		if(!valueContainerListContainer["TopPx"].isNull())
			containerListObject.topPx = std::stoi(valueContainerListContainer["TopPx"].asString());
		if(!valueContainerListContainer["LeftPx"].isNull())
			containerListObject.leftPx = std::stoi(valueContainerListContainer["LeftPx"].asString());
		if(!valueContainerListContainer["WidthPx"].isNull())
			containerListObject.widthPx = std::stoi(valueContainerListContainer["WidthPx"].asString());
		if(!valueContainerListContainer["HeightPx"].isNull())
			containerListObject.heightPx = std::stoi(valueContainerListContainer["HeightPx"].asString());
		if(!valueContainerListContainer["GroupId"].isNull())
			containerListObject.groupId = valueContainerListContainer["GroupId"].asString();
		if(!valueContainerListContainer["GroupName"].isNull())
			containerListObject.groupName = valueContainerListContainer["GroupName"].asString();
		if(!valueContainerListContainer["DemoTemplateId"].isNull())
			containerListObject.demoTemplateId = valueContainerListContainer["DemoTemplateId"].asString();
		if(!valueContainerListContainer["DemoTemplateName"].isNull())
			containerListObject.demoTemplateName = valueContainerListContainer["DemoTemplateName"].asString();
		containerList_.push_back(containerListObject);
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

int QueryContainerListResult::getTotalCount()const
{
	return totalCount_;
}

std::string QueryContainerListResult::getMessage()const
{
	return message_;
}

int QueryContainerListResult::getPageSize()const
{
	return pageSize_;
}

int QueryContainerListResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<QueryContainerListResult::Container> QueryContainerListResult::getContainerList()const
{
	return containerList_;
}

std::string QueryContainerListResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string QueryContainerListResult::getErrorCode()const
{
	return errorCode_;
}

std::string QueryContainerListResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string QueryContainerListResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryContainerListResult::getCode()const
{
	return code_;
}

bool QueryContainerListResult::getSuccess()const
{
	return success_;
}


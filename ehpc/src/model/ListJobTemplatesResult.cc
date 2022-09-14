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

#include <alibabacloud/ehpc/model/ListJobTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListJobTemplatesResult::ListJobTemplatesResult() :
	ServiceResult()
{}

ListJobTemplatesResult::ListJobTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobTemplatesResult::~ListJobTemplatesResult()
{}

void ListJobTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplatesNode = value["Templates"]["JobTemplates"];
	for (auto valueTemplatesJobTemplates : allTemplatesNode)
	{
		JobTemplates templatesObject;
		if(!valueTemplatesJobTemplates["StdoutRedirectPath"].isNull())
			templatesObject.stdoutRedirectPath = valueTemplatesJobTemplates["StdoutRedirectPath"].asString();
		if(!valueTemplatesJobTemplates["Variables"].isNull())
			templatesObject.variables = valueTemplatesJobTemplates["Variables"].asString();
		if(!valueTemplatesJobTemplates["CommandLine"].isNull())
			templatesObject.commandLine = valueTemplatesJobTemplates["CommandLine"].asString();
		if(!valueTemplatesJobTemplates["PackagePath"].isNull())
			templatesObject.packagePath = valueTemplatesJobTemplates["PackagePath"].asString();
		if(!valueTemplatesJobTemplates["Priority"].isNull())
			templatesObject.priority = std::stoi(valueTemplatesJobTemplates["Priority"].asString());
		if(!valueTemplatesJobTemplates["ReRunable"].isNull())
			templatesObject.reRunable = valueTemplatesJobTemplates["ReRunable"].asString() == "true";
		if(!valueTemplatesJobTemplates["Name"].isNull())
			templatesObject.name = valueTemplatesJobTemplates["Name"].asString();
		if(!valueTemplatesJobTemplates["ArrayRequest"].isNull())
			templatesObject.arrayRequest = valueTemplatesJobTemplates["ArrayRequest"].asString();
		if(!valueTemplatesJobTemplates["Id"].isNull())
			templatesObject.id = valueTemplatesJobTemplates["Id"].asString();
		if(!valueTemplatesJobTemplates["StderrRedirectPath"].isNull())
			templatesObject.stderrRedirectPath = valueTemplatesJobTemplates["StderrRedirectPath"].asString();
		if(!valueTemplatesJobTemplates["RunasUser"].isNull())
			templatesObject.runasUser = valueTemplatesJobTemplates["RunasUser"].asString();
		templates_.push_back(templatesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListJobTemplatesResult::getTotalCount()const
{
	return totalCount_;
}

int ListJobTemplatesResult::getPageSize()const
{
	return pageSize_;
}

int ListJobTemplatesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListJobTemplatesResult::JobTemplates> ListJobTemplatesResult::getTemplates()const
{
	return templates_;
}


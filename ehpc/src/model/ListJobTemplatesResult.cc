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
		if(!valueTemplatesJobTemplates["Task"].isNull())
			templatesObject.task = std::stoi(valueTemplatesJobTemplates["Task"].asString());
		if(!valueTemplatesJobTemplates["Variables"].isNull())
			templatesObject.variables = valueTemplatesJobTemplates["Variables"].asString();
		if(!valueTemplatesJobTemplates["CommandLine"].isNull())
			templatesObject.commandLine = valueTemplatesJobTemplates["CommandLine"].asString();
		if(!valueTemplatesJobTemplates["Queue"].isNull())
			templatesObject.queue = valueTemplatesJobTemplates["Queue"].asString();
		if(!valueTemplatesJobTemplates["Priority"].isNull())
			templatesObject.priority = std::stoi(valueTemplatesJobTemplates["Priority"].asString());
		if(!valueTemplatesJobTemplates["Mem"].isNull())
			templatesObject.mem = valueTemplatesJobTemplates["Mem"].asString();
		if(!valueTemplatesJobTemplates["Thread"].isNull())
			templatesObject.thread = std::stoi(valueTemplatesJobTemplates["Thread"].asString());
		if(!valueTemplatesJobTemplates["ArrayRequest"].isNull())
			templatesObject.arrayRequest = valueTemplatesJobTemplates["ArrayRequest"].asString();
		if(!valueTemplatesJobTemplates["StderrRedirectPath"].isNull())
			templatesObject.stderrRedirectPath = valueTemplatesJobTemplates["StderrRedirectPath"].asString();
		if(!valueTemplatesJobTemplates["Node"].isNull())
			templatesObject.node = std::stoi(valueTemplatesJobTemplates["Node"].asString());
		if(!valueTemplatesJobTemplates["StdoutRedirectPath"].isNull())
			templatesObject.stdoutRedirectPath = valueTemplatesJobTemplates["StdoutRedirectPath"].asString();
		if(!valueTemplatesJobTemplates["Gpu"].isNull())
			templatesObject.gpu = std::stoi(valueTemplatesJobTemplates["Gpu"].asString());
		if(!valueTemplatesJobTemplates["PackagePath"].isNull())
			templatesObject.packagePath = valueTemplatesJobTemplates["PackagePath"].asString();
		if(!valueTemplatesJobTemplates["ClockTime"].isNull())
			templatesObject.clockTime = valueTemplatesJobTemplates["ClockTime"].asString();
		if(!valueTemplatesJobTemplates["ReRunable"].isNull())
			templatesObject.reRunable = valueTemplatesJobTemplates["ReRunable"].asString() == "true";
		if(!valueTemplatesJobTemplates["Name"].isNull())
			templatesObject.name = valueTemplatesJobTemplates["Name"].asString();
		if(!valueTemplatesJobTemplates["Id"].isNull())
			templatesObject.id = valueTemplatesJobTemplates["Id"].asString();
		if(!valueTemplatesJobTemplates["RunasUser"].isNull())
			templatesObject.runasUser = valueTemplatesJobTemplates["RunasUser"].asString();
		if(!valueTemplatesJobTemplates["InputFileUrl"].isNull())
			templatesObject.inputFileUrl = valueTemplatesJobTemplates["InputFileUrl"].asString();
		if(!valueTemplatesJobTemplates["WithUnzipCmd"].isNull())
			templatesObject.withUnzipCmd = valueTemplatesJobTemplates["WithUnzipCmd"].asString() == "true";
		if(!valueTemplatesJobTemplates["UnzipCmd"].isNull())
			templatesObject.unzipCmd = valueTemplatesJobTemplates["UnzipCmd"].asString();
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


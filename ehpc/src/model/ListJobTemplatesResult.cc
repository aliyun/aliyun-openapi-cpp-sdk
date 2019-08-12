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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTemplates = value["Templates"]["JobTemplates"];
	for (auto value : allTemplates)
	{
		JobTemplates templatesObject;
		if(!value["Id"].isNull())
			templatesObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			templatesObject.name = value["Name"].asString();
		if(!value["CommandLine"].isNull())
			templatesObject.commandLine = value["CommandLine"].asString();
		if(!value["RunasUser"].isNull())
			templatesObject.runasUser = value["RunasUser"].asString();
		if(!value["Priority"].isNull())
			templatesObject.priority = std::stoi(value["Priority"].asString());
		if(!value["PackagePath"].isNull())
			templatesObject.packagePath = value["PackagePath"].asString();
		if(!value["StdoutRedirectPath"].isNull())
			templatesObject.stdoutRedirectPath = value["StdoutRedirectPath"].asString();
		if(!value["StderrRedirectPath"].isNull())
			templatesObject.stderrRedirectPath = value["StderrRedirectPath"].asString();
		if(!value["ReRunable"].isNull())
			templatesObject.reRunable = value["ReRunable"].asString() == "true";
		if(!value["ArrayRequest"].isNull())
			templatesObject.arrayRequest = value["ArrayRequest"].asString();
		if(!value["Variables"].isNull())
			templatesObject.variables = value["Variables"].asString();
		templates_.push_back(templatesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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


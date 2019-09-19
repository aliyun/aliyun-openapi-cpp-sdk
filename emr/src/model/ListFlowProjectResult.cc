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

#include <alibabacloud/emr/model/ListFlowProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListFlowProjectResult::ListFlowProjectResult() :
	ServiceResult()
{}

ListFlowProjectResult::ListFlowProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowProjectResult::~ListFlowProjectResult()
{}

void ListFlowProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProjectsNode = value["Projects"]["Project"];
	for (auto valueProjectsProject : allProjectsNode)
	{
		Project projectsObject;
		if(!valueProjectsProject["Id"].isNull())
			projectsObject.id = valueProjectsProject["Id"].asString();
		if(!valueProjectsProject["GmtCreate"].isNull())
			projectsObject.gmtCreate = std::stol(valueProjectsProject["GmtCreate"].asString());
		if(!valueProjectsProject["GmtModified"].isNull())
			projectsObject.gmtModified = std::stol(valueProjectsProject["GmtModified"].asString());
		if(!valueProjectsProject["UserId"].isNull())
			projectsObject.userId = valueProjectsProject["UserId"].asString();
		if(!valueProjectsProject["Name"].isNull())
			projectsObject.name = valueProjectsProject["Name"].asString();
		if(!valueProjectsProject["Description"].isNull())
			projectsObject.description = valueProjectsProject["Description"].asString();
		projects_.push_back(projectsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListFlowProjectResult::getPageSize()const
{
	return pageSize_;
}

int ListFlowProjectResult::getPageNumber()const
{
	return pageNumber_;
}

int ListFlowProjectResult::getTotal()const
{
	return total_;
}

std::vector<ListFlowProjectResult::Project> ListFlowProjectResult::getProjects()const
{
	return projects_;
}


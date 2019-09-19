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

#include <alibabacloud/foas/model/ListProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

ListProjectResult::ListProjectResult() :
	ServiceResult()
{}

ListProjectResult::ListProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProjectResult::~ListProjectResult()
{}

void ListProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProjectsNode = value["Projects"]["Project"];
	for (auto valueProjectsProject : allProjectsNode)
	{
		Project projectsObject;
		if(!valueProjectsProject["Name"].isNull())
			projectsObject.name = valueProjectsProject["Name"].asString();
		if(!valueProjectsProject["State"].isNull())
			projectsObject.state = valueProjectsProject["State"].asString();
		if(!valueProjectsProject["Creator"].isNull())
			projectsObject.creator = valueProjectsProject["Creator"].asString();
		if(!valueProjectsProject["CreateTime"].isNull())
			projectsObject.createTime = std::stol(valueProjectsProject["CreateTime"].asString());
		if(!valueProjectsProject["Modifier"].isNull())
			projectsObject.modifier = valueProjectsProject["Modifier"].asString();
		if(!valueProjectsProject["ModifyTime"].isNull())
			projectsObject.modifyTime = std::stol(valueProjectsProject["ModifyTime"].asString());
		if(!valueProjectsProject["Description"].isNull())
			projectsObject.description = valueProjectsProject["Description"].asString();
		if(!valueProjectsProject["DeployType"].isNull())
			projectsObject.deployType = valueProjectsProject["DeployType"].asString();
		if(!valueProjectsProject["ClusterId"].isNull())
			projectsObject.clusterId = valueProjectsProject["ClusterId"].asString();
		if(!valueProjectsProject["ManagerIds"].isNull())
			projectsObject.managerIds = valueProjectsProject["ManagerIds"].asString();
		if(!valueProjectsProject["Region"].isNull())
			projectsObject.region = valueProjectsProject["Region"].asString();
		if(!valueProjectsProject["Id"].isNull())
			projectsObject.id = valueProjectsProject["Id"].asString();
		projects_.push_back(projectsObject);
	}
	if(!value["PageIndex"].isNull())
		pageIndex_ = std::stoi(value["PageIndex"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListProjectResult::getTotalCount()const
{
	return totalCount_;
}

int ListProjectResult::getPageSize()const
{
	return pageSize_;
}

int ListProjectResult::getTotalPage()const
{
	return totalPage_;
}

std::vector<ListProjectResult::Project> ListProjectResult::getProjects()const
{
	return projects_;
}

int ListProjectResult::getPageIndex()const
{
	return pageIndex_;
}


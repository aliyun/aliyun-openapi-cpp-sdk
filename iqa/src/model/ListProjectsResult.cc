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

#include <alibabacloud/iqa/model/ListProjectsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iqa;
using namespace AlibabaCloud::Iqa::Model;

ListProjectsResult::ListProjectsResult() :
	ServiceResult()
{}

ListProjectsResult::ListProjectsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProjectsResult::~ListProjectsResult()
{}

void ListProjectsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProjectsNode = value["Projects"]["Project"];
	for (auto valueProjectsProject : allProjectsNode)
	{
		Project projectsObject;
		if(!valueProjectsProject["ProjectType"].isNull())
			projectsObject.projectType = valueProjectsProject["ProjectType"].asString();
		if(!valueProjectsProject["ProjectId"].isNull())
			projectsObject.projectId = valueProjectsProject["ProjectId"].asString();
		if(!valueProjectsProject["ProjectName"].isNull())
			projectsObject.projectName = valueProjectsProject["ProjectName"].asString();
		if(!valueProjectsProject["CreateTime"].isNull())
			projectsObject.createTime = std::stol(valueProjectsProject["CreateTime"].asString());
		if(!valueProjectsProject["DeployTime"].isNull())
			projectsObject.deployTime = std::stol(valueProjectsProject["DeployTime"].asString());
		if(!valueProjectsProject["ModelId"].isNull())
			projectsObject.modelId = valueProjectsProject["ModelId"].asString();
		if(!valueProjectsProject["QuestionCount"].isNull())
			projectsObject.questionCount = std::stoi(valueProjectsProject["QuestionCount"].asString());
		if(!valueProjectsProject["DataStatus"].isNull())
			projectsObject.dataStatus = valueProjectsProject["DataStatus"].asString();
		if(!valueProjectsProject["TestServiceStatus"].isNull())
			projectsObject.testServiceStatus = valueProjectsProject["TestServiceStatus"].asString();
		if(!valueProjectsProject["OnlineServiceStatus"].isNull())
			projectsObject.onlineServiceStatus = valueProjectsProject["OnlineServiceStatus"].asString();
		if(!valueProjectsProject["DeployAvailable"].isNull())
			projectsObject.deployAvailable = valueProjectsProject["DeployAvailable"].asString();
		if(!valueProjectsProject["ModelName"].isNull())
			projectsObject.modelName = valueProjectsProject["ModelName"].asString();
		projects_.push_back(projectsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListProjectsResult::getTotalCount()const
{
	return totalCount_;
}

int ListProjectsResult::getPageSize()const
{
	return pageSize_;
}

int ListProjectsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListProjectsResult::Project> ListProjectsResult::getProjects()const
{
	return projects_;
}


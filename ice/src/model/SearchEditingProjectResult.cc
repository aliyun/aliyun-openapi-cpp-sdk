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

#include <alibabacloud/ice/model/SearchEditingProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

SearchEditingProjectResult::SearchEditingProjectResult() :
	ServiceResult()
{}

SearchEditingProjectResult::SearchEditingProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchEditingProjectResult::~SearchEditingProjectResult()
{}

void SearchEditingProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProjectListNode = value["ProjectList"]["ProjectListItem"];
	for (auto valueProjectListProjectListItem : allProjectListNode)
	{
		ProjectListItem projectListObject;
		if(!valueProjectListProjectListItem["ProjectId"].isNull())
			projectListObject.projectId = valueProjectListProjectListItem["ProjectId"].asString();
		if(!valueProjectListProjectListItem["Title"].isNull())
			projectListObject.title = valueProjectListProjectListItem["Title"].asString();
		if(!valueProjectListProjectListItem["Timeline"].isNull())
			projectListObject.timeline = valueProjectListProjectListItem["Timeline"].asString();
		if(!valueProjectListProjectListItem["Description"].isNull())
			projectListObject.description = valueProjectListProjectListItem["Description"].asString();
		if(!valueProjectListProjectListItem["CoverURL"].isNull())
			projectListObject.coverURL = valueProjectListProjectListItem["CoverURL"].asString();
		if(!valueProjectListProjectListItem["CreateTime"].isNull())
			projectListObject.createTime = valueProjectListProjectListItem["CreateTime"].asString();
		if(!valueProjectListProjectListItem["ModifiedTime"].isNull())
			projectListObject.modifiedTime = valueProjectListProjectListItem["ModifiedTime"].asString();
		if(!valueProjectListProjectListItem["Duration"].isNull())
			projectListObject.duration = std::stol(valueProjectListProjectListItem["Duration"].asString());
		if(!valueProjectListProjectListItem["Status"].isNull())
			projectListObject.status = valueProjectListProjectListItem["Status"].asString();
		if(!valueProjectListProjectListItem["ErrorCode"].isNull())
			projectListObject.errorCode = valueProjectListProjectListItem["ErrorCode"].asString();
		if(!valueProjectListProjectListItem["ErrorMessage"].isNull())
			projectListObject.errorMessage = valueProjectListProjectListItem["ErrorMessage"].asString();
		if(!valueProjectListProjectListItem["CreateSource"].isNull())
			projectListObject.createSource = valueProjectListProjectListItem["CreateSource"].asString();
		if(!valueProjectListProjectListItem["ModifiedSource"].isNull())
			projectListObject.modifiedSource = valueProjectListProjectListItem["ModifiedSource"].asString();
		if(!valueProjectListProjectListItem["TemplateType"].isNull())
			projectListObject.templateType = valueProjectListProjectListItem["TemplateType"].asString();
		if(!valueProjectListProjectListItem["ProjectType"].isNull())
			projectListObject.projectType = valueProjectListProjectListItem["ProjectType"].asString();
		if(!valueProjectListProjectListItem["BusinessConfig"].isNull())
			projectListObject.businessConfig = valueProjectListProjectListItem["BusinessConfig"].asString();
		if(!valueProjectListProjectListItem["BusinessStatus"].isNull())
			projectListObject.businessStatus = valueProjectListProjectListItem["BusinessStatus"].asString();
		projectList_.push_back(projectListObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stol(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

long SearchEditingProjectResult::getTotalCount()const
{
	return totalCount_;
}

std::string SearchEditingProjectResult::getNextToken()const
{
	return nextToken_;
}

std::vector<SearchEditingProjectResult::ProjectListItem> SearchEditingProjectResult::getProjectList()const
{
	return projectList_;
}

long SearchEditingProjectResult::getMaxResults()const
{
	return maxResults_;
}


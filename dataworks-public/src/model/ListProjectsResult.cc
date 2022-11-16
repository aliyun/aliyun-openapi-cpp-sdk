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

#include <alibabacloud/dataworks-public/model/ListProjectsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

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
	auto pageResultNode = value["PageResult"];
	if(!pageResultNode["PageNumber"].isNull())
		pageResult_.pageNumber = std::stoi(pageResultNode["PageNumber"].asString());
	if(!pageResultNode["PageSize"].isNull())
		pageResult_.pageSize = std::stoi(pageResultNode["PageSize"].asString());
	if(!pageResultNode["TotalCount"].isNull())
		pageResult_.totalCount = std::stoi(pageResultNode["TotalCount"].asString());
	auto allProjectListNode = pageResultNode["ProjectList"]["Project"];
	for (auto pageResultNodeProjectListProject : allProjectListNode)
	{
		PageResult::Project projectObject;
		if(!pageResultNodeProjectListProject["ProjectStatusCode"].isNull())
			projectObject.projectStatusCode = pageResultNodeProjectListProject["ProjectStatusCode"].asString();
		if(!pageResultNodeProjectListProject["ProjectStatus"].isNull())
			projectObject.projectStatus = std::stoi(pageResultNodeProjectListProject["ProjectStatus"].asString());
		if(!pageResultNodeProjectListProject["ProjectName"].isNull())
			projectObject.projectName = pageResultNodeProjectListProject["ProjectName"].asString();
		if(!pageResultNodeProjectListProject["ProjectIdentifier"].isNull())
			projectObject.projectIdentifier = pageResultNodeProjectListProject["ProjectIdentifier"].asString();
		if(!pageResultNodeProjectListProject["ProjectId"].isNull())
			projectObject.projectId = std::stol(pageResultNodeProjectListProject["ProjectId"].asString());
		if(!pageResultNodeProjectListProject["ProjectDescription"].isNull())
			projectObject.projectDescription = pageResultNodeProjectListProject["ProjectDescription"].asString();
		if(!pageResultNodeProjectListProject["ProjectOwnerBaseId"].isNull())
			projectObject.projectOwnerBaseId = pageResultNodeProjectListProject["ProjectOwnerBaseId"].asString();
		if(!pageResultNodeProjectListProject["ResourceManagerResourceGroupId"].isNull())
			projectObject.resourceManagerResourceGroupId = pageResultNodeProjectListProject["ResourceManagerResourceGroupId"].asString();
		if(!pageResultNodeProjectListProject["DisableDevelopment"].isNull())
			projectObject.disableDevelopment = pageResultNodeProjectListProject["DisableDevelopment"].asString() == "true";
		if(!pageResultNodeProjectListProject["UseProxyOdpsAccount"].isNull())
			projectObject.useProxyOdpsAccount = pageResultNodeProjectListProject["UseProxyOdpsAccount"].asString() == "true";
		if(!pageResultNodeProjectListProject["TablePrivacyMode"].isNull())
			projectObject.tablePrivacyMode = std::stoi(pageResultNodeProjectListProject["TablePrivacyMode"].asString());
		if(!pageResultNodeProjectListProject["IsDefault"].isNull())
			projectObject.isDefault = std::stoi(pageResultNodeProjectListProject["IsDefault"].asString());
		auto allTagsNode = pageResultNodeProjectListProject["Tags"]["Tag"];
		for (auto pageResultNodeProjectListProjectTagsTag : allTagsNode)
		{
			PageResult::Project::Tag tagsObject;
			if(!pageResultNodeProjectListProjectTagsTag["Key"].isNull())
				tagsObject.key = pageResultNodeProjectListProjectTagsTag["Key"].asString();
			if(!pageResultNodeProjectListProjectTagsTag["Value"].isNull())
				tagsObject.value = pageResultNodeProjectListProjectTagsTag["Value"].asString();
			projectObject.tags.push_back(tagsObject);
		}
		pageResult_.projectList.push_back(projectObject);
	}

}

ListProjectsResult::PageResult ListProjectsResult::getPageResult()const
{
	return pageResult_;
}


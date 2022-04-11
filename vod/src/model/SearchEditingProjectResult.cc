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

#include <alibabacloud/vod/model/SearchEditingProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

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
	auto allProjectListNode = value["ProjectList"]["Project"];
	for (auto valueProjectListProject : allProjectListNode)
	{
		Project projectListObject;
		if(!valueProjectListProject["StorageLocation"].isNull())
			projectListObject.storageLocation = valueProjectListProject["StorageLocation"].asString();
		if(!valueProjectListProject["Status"].isNull())
			projectListObject.status = valueProjectListProject["Status"].asString();
		if(!valueProjectListProject["CreationTime"].isNull())
			projectListObject.creationTime = valueProjectListProject["CreationTime"].asString();
		if(!valueProjectListProject["ModifiedTime"].isNull())
			projectListObject.modifiedTime = valueProjectListProject["ModifiedTime"].asString();
		if(!valueProjectListProject["Description"].isNull())
			projectListObject.description = valueProjectListProject["Description"].asString();
		if(!valueProjectListProject["CoverURL"].isNull())
			projectListObject.coverURL = valueProjectListProject["CoverURL"].asString();
		if(!valueProjectListProject["ProjectId"].isNull())
			projectListObject.projectId = valueProjectListProject["ProjectId"].asString();
		if(!valueProjectListProject["Duration"].isNull())
			projectListObject.duration = std::stof(valueProjectListProject["Duration"].asString());
		if(!valueProjectListProject["Title"].isNull())
			projectListObject.title = valueProjectListProject["Title"].asString();
		if(!valueProjectListProject["RegionId"].isNull())
			projectListObject.regionId = valueProjectListProject["RegionId"].asString();
		projectList_.push_back(projectListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<SearchEditingProjectResult::Project> SearchEditingProjectResult::getProjectList()const
{
	return projectList_;
}

int SearchEditingProjectResult::getTotal()const
{
	return total_;
}


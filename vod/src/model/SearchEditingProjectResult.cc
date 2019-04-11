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
	auto allProjectList = value["ProjectList"]["Project"];
	for (auto value : allProjectList)
	{
		Project projectListObject;
		if(!value["ProjectId"].isNull())
			projectListObject.projectId = value["ProjectId"].asString();
		if(!value["CreationTime"].isNull())
			projectListObject.creationTime = value["CreationTime"].asString();
		if(!value["ModifiedTime"].isNull())
			projectListObject.modifiedTime = value["ModifiedTime"].asString();
		if(!value["Status"].isNull())
			projectListObject.status = value["Status"].asString();
		if(!value["Description"].isNull())
			projectListObject.description = value["Description"].asString();
		if(!value["Title"].isNull())
			projectListObject.title = value["Title"].asString();
		if(!value["CoverURL"].isNull())
			projectListObject.coverURL = value["CoverURL"].asString();
		if(!value["StorageLocation"].isNull())
			projectListObject.storageLocation = value["StorageLocation"].asString();
		if(!value["RegionId"].isNull())
			projectListObject.regionId = value["RegionId"].asString();
		if(!value["Duration"].isNull())
			projectListObject.duration = std::stof(value["Duration"].asString());
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


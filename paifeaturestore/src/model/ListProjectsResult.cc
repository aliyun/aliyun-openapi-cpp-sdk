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

#include <alibabacloud/paifeaturestore/model/ListProjectsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

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
	auto allProjectsNode = value["Projects"]["ProjectsItem"];
	for (auto valueProjectsProjectsItem : allProjectsNode)
	{
		ProjectsItem projectsObject;
		if(!valueProjectsProjectsItem["ProjectId"].isNull())
			projectsObject.projectId = valueProjectsProjectsItem["ProjectId"].asString();
		if(!valueProjectsProjectsItem["Name"].isNull())
			projectsObject.name = valueProjectsProjectsItem["Name"].asString();
		if(!valueProjectsProjectsItem["Description"].isNull())
			projectsObject.description = valueProjectsProjectsItem["Description"].asString();
		if(!valueProjectsProjectsItem["OfflineDatasourceType"].isNull())
			projectsObject.offlineDatasourceType = valueProjectsProjectsItem["OfflineDatasourceType"].asString();
		if(!valueProjectsProjectsItem["OfflineDatasourceId"].isNull())
			projectsObject.offlineDatasourceId = valueProjectsProjectsItem["OfflineDatasourceId"].asString();
		if(!valueProjectsProjectsItem["OfflineDatasourceName"].isNull())
			projectsObject.offlineDatasourceName = valueProjectsProjectsItem["OfflineDatasourceName"].asString();
		if(!valueProjectsProjectsItem["OnlineDatasourceType"].isNull())
			projectsObject.onlineDatasourceType = valueProjectsProjectsItem["OnlineDatasourceType"].asString();
		if(!valueProjectsProjectsItem["OnlineDatasourceId"].isNull())
			projectsObject.onlineDatasourceId = valueProjectsProjectsItem["OnlineDatasourceId"].asString();
		if(!valueProjectsProjectsItem["OnlineDatasourceName"].isNull())
			projectsObject.onlineDatasourceName = valueProjectsProjectsItem["OnlineDatasourceName"].asString();
		if(!valueProjectsProjectsItem["OfflineLifecycle"].isNull())
			projectsObject.offlineLifecycle = std::stoi(valueProjectsProjectsItem["OfflineLifecycle"].asString());
		if(!valueProjectsProjectsItem["FeatureEntityCount"].isNull())
			projectsObject.featureEntityCount = std::stoi(valueProjectsProjectsItem["FeatureEntityCount"].asString());
		if(!valueProjectsProjectsItem["FeatureViewCount"].isNull())
			projectsObject.featureViewCount = std::stoi(valueProjectsProjectsItem["FeatureViewCount"].asString());
		if(!valueProjectsProjectsItem["ModelCount"].isNull())
			projectsObject.modelCount = std::stoi(valueProjectsProjectsItem["ModelCount"].asString());
		if(!valueProjectsProjectsItem["Owner"].isNull())
			projectsObject.owner = valueProjectsProjectsItem["Owner"].asString();
		if(!valueProjectsProjectsItem["GmtCreateTime"].isNull())
			projectsObject.gmtCreateTime = valueProjectsProjectsItem["GmtCreateTime"].asString();
		if(!valueProjectsProjectsItem["GmtModifiedTime"].isNull())
			projectsObject.gmtModifiedTime = valueProjectsProjectsItem["GmtModifiedTime"].asString();
		projects_.push_back(projectsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListProjectsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListProjectsResult::ProjectsItem> ListProjectsResult::getProjects()const
{
	return projects_;
}


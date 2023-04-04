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

#include <alibabacloud/imm/model/ListProjectsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

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
		if(!valueProjectsProjectsItem["ProjectName"].isNull())
			projectsObject.projectName = valueProjectsProjectsItem["ProjectName"].asString();
		if(!valueProjectsProjectsItem["ServiceRole"].isNull())
			projectsObject.serviceRole = valueProjectsProjectsItem["ServiceRole"].asString();
		if(!valueProjectsProjectsItem["TemplateId"].isNull())
			projectsObject.templateId = valueProjectsProjectsItem["TemplateId"].asString();
		if(!valueProjectsProjectsItem["CreateTime"].isNull())
			projectsObject.createTime = valueProjectsProjectsItem["CreateTime"].asString();
		if(!valueProjectsProjectsItem["UpdateTime"].isNull())
			projectsObject.updateTime = valueProjectsProjectsItem["UpdateTime"].asString();
		if(!valueProjectsProjectsItem["Description"].isNull())
			projectsObject.description = valueProjectsProjectsItem["Description"].asString();
		if(!valueProjectsProjectsItem["ProjectQueriesPerSecond"].isNull())
			projectsObject.projectQueriesPerSecond = std::stol(valueProjectsProjectsItem["ProjectQueriesPerSecond"].asString());
		if(!valueProjectsProjectsItem["EngineConcurrency"].isNull())
			projectsObject.engineConcurrency = std::stol(valueProjectsProjectsItem["EngineConcurrency"].asString());
		if(!valueProjectsProjectsItem["ProjectMaxDatasetCount"].isNull())
			projectsObject.projectMaxDatasetCount = std::stol(valueProjectsProjectsItem["ProjectMaxDatasetCount"].asString());
		if(!valueProjectsProjectsItem["DatasetMaxBindCount"].isNull())
			projectsObject.datasetMaxBindCount = std::stol(valueProjectsProjectsItem["DatasetMaxBindCount"].asString());
		if(!valueProjectsProjectsItem["DatasetMaxFileCount"].isNull())
			projectsObject.datasetMaxFileCount = std::stol(valueProjectsProjectsItem["DatasetMaxFileCount"].asString());
		if(!valueProjectsProjectsItem["DatasetMaxEntityCount"].isNull())
			projectsObject.datasetMaxEntityCount = std::stol(valueProjectsProjectsItem["DatasetMaxEntityCount"].asString());
		if(!valueProjectsProjectsItem["DatasetMaxRelationCount"].isNull())
			projectsObject.datasetMaxRelationCount = std::stol(valueProjectsProjectsItem["DatasetMaxRelationCount"].asString());
		if(!valueProjectsProjectsItem["DatasetMaxTotalFileSize"].isNull())
			projectsObject.datasetMaxTotalFileSize = std::stol(valueProjectsProjectsItem["DatasetMaxTotalFileSize"].asString());
		if(!valueProjectsProjectsItem["DatasetCount"].isNull())
			projectsObject.datasetCount = std::stol(valueProjectsProjectsItem["DatasetCount"].asString());
		if(!valueProjectsProjectsItem["FileCount"].isNull())
			projectsObject.fileCount = std::stol(valueProjectsProjectsItem["FileCount"].asString());
		if(!valueProjectsProjectsItem["TotalFileSize"].isNull())
			projectsObject.totalFileSize = std::stol(valueProjectsProjectsItem["TotalFileSize"].asString());
		projects_.push_back(projectsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListProjectsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListProjectsResult::ProjectsItem> ListProjectsResult::getProjects()const
{
	return projects_;
}


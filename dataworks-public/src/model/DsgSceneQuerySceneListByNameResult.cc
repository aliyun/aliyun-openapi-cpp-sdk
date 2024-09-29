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

#include <alibabacloud/dataworks-public/model/DsgSceneQuerySceneListByNameResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

DsgSceneQuerySceneListByNameResult::DsgSceneQuerySceneListByNameResult() :
	ServiceResult()
{}

DsgSceneQuerySceneListByNameResult::DsgSceneQuerySceneListByNameResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DsgSceneQuerySceneListByNameResult::~DsgSceneQuerySceneListByNameResult()
{}

void DsgSceneQuerySceneListByNameResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Datas"];
	for (auto valueDataDatas : allDataNode)
	{
		Datas dataObject;
		if(!valueDataDatas["Id"].isNull())
			dataObject.id = std::stol(valueDataDatas["Id"].asString());
		if(!valueDataDatas["SceneCode"].isNull())
			dataObject.sceneCode = valueDataDatas["SceneCode"].asString();
		if(!valueDataDatas["Desc"].isNull())
			dataObject.desc = valueDataDatas["Desc"].asString();
		if(!valueDataDatas["SceneName"].isNull())
			dataObject.sceneName = valueDataDatas["SceneName"].asString();
		if(!valueDataDatas["UserGroups"].isNull())
			dataObject.userGroups = valueDataDatas["UserGroups"].asString();
		if(!valueDataDatas["SceneLevel"].isNull())
			dataObject.sceneLevel = std::stoi(valueDataDatas["SceneLevel"].asString());
		auto allProjectsNode = valueDataDatas["Projects"]["Project"];
		for (auto valueDataDatasProjectsProject : allProjectsNode)
		{
			Datas::Project projectsObject;
			if(!valueDataDatasProjectsProject["DbType"].isNull())
				projectsObject.dbType = valueDataDatasProjectsProject["DbType"].asString();
			if(!valueDataDatasProjectsProject["ProjectName"].isNull())
				projectsObject.projectName = valueDataDatasProjectsProject["ProjectName"].asString();
			if(!valueDataDatasProjectsProject["ClusterId"].isNull())
				projectsObject.clusterId = valueDataDatasProjectsProject["ClusterId"].asString();
			dataObject.projects.push_back(projectsObject);
		}
		auto allChildren = value["Children"]["Childrens"];
		for (auto value : allChildren)
			dataObject.children.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int DsgSceneQuerySceneListByNameResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<DsgSceneQuerySceneListByNameResult::Datas> DsgSceneQuerySceneListByNameResult::getData()const
{
	return data_;
}

std::string DsgSceneQuerySceneListByNameResult::getErrorCode()const
{
	return errorCode_;
}

std::string DsgSceneQuerySceneListByNameResult::getErrorMessage()const
{
	return errorMessage_;
}

bool DsgSceneQuerySceneListByNameResult::getSuccess()const
{
	return success_;
}


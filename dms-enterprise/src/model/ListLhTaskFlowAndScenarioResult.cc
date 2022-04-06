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

#include <alibabacloud/dms-enterprise/model/ListLhTaskFlowAndScenarioResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListLhTaskFlowAndScenarioResult::ListLhTaskFlowAndScenarioResult() :
	ServiceResult()
{}

ListLhTaskFlowAndScenarioResult::ListLhTaskFlowAndScenarioResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLhTaskFlowAndScenarioResult::~ListLhTaskFlowAndScenarioResult()
{}

void ListLhTaskFlowAndScenarioResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRawDAGListNode = value["RawDAGList"]["Dag"];
	for (auto valueRawDAGListDag : allRawDAGListNode)
	{
		Dag rawDAGListObject;
		if(!valueRawDAGListDag["Id"].isNull())
			rawDAGListObject.id = std::stol(valueRawDAGListDag["Id"].asString());
		if(!valueRawDAGListDag["CreatorId"].isNull())
			rawDAGListObject.creatorId = valueRawDAGListDag["CreatorId"].asString();
		if(!valueRawDAGListDag["IsDeleted"].isNull())
			rawDAGListObject.isDeleted = valueRawDAGListDag["IsDeleted"].asString() == "true";
		if(!valueRawDAGListDag["DemoId"].isNull())
			rawDAGListObject.demoId = valueRawDAGListDag["DemoId"].asString();
		if(!valueRawDAGListDag["DeployId"].isNull())
			rawDAGListObject.deployId = std::stol(valueRawDAGListDag["DeployId"].asString());
		if(!valueRawDAGListDag["DataFlowId"].isNull())
			rawDAGListObject.dataFlowId = std::stol(valueRawDAGListDag["DataFlowId"].asString());
		if(!valueRawDAGListDag["ScenarioId"].isNull())
			rawDAGListObject.scenarioId = std::stol(valueRawDAGListDag["ScenarioId"].asString());
		if(!valueRawDAGListDag["SpaceId"].isNull())
			rawDAGListObject.spaceId = std::stol(valueRawDAGListDag["SpaceId"].asString());
		if(!valueRawDAGListDag["CreatorNickName"].isNull())
			rawDAGListObject.creatorNickName = valueRawDAGListDag["CreatorNickName"].asString();
		if(!valueRawDAGListDag["DagOwnerNickName"].isNull())
			rawDAGListObject.dagOwnerNickName = valueRawDAGListDag["DagOwnerNickName"].asString();
		if(!valueRawDAGListDag["CanEdit"].isNull())
			rawDAGListObject.canEdit = valueRawDAGListDag["CanEdit"].asString() == "true";
		if(!valueRawDAGListDag["Status"].isNull())
			rawDAGListObject.status = std::stoi(valueRawDAGListDag["Status"].asString());
		if(!valueRawDAGListDag["LatestInstanceStatus"].isNull())
			rawDAGListObject.latestInstanceStatus = std::stoi(valueRawDAGListDag["LatestInstanceStatus"].asString());
		if(!valueRawDAGListDag["LatestInstanceTime"].isNull())
			rawDAGListObject.latestInstanceTime = std::stoi(valueRawDAGListDag["LatestInstanceTime"].asString());
		if(!valueRawDAGListDag["DagName"].isNull())
			rawDAGListObject.dagName = valueRawDAGListDag["DagName"].asString();
		if(!valueRawDAGListDag["DagOwnerId"].isNull())
			rawDAGListObject.dagOwnerId = valueRawDAGListDag["DagOwnerId"].asString();
		rawDAGList_.push_back(rawDAGListObject);
	}
	auto allScenarioDAGListNode = value["ScenarioDAGList"]["ScenarioDAG"];
	for (auto valueScenarioDAGListScenarioDAG : allScenarioDAGListNode)
	{
		ScenarioDAG scenarioDAGListObject;
		auto allDagListNode = valueScenarioDAGListScenarioDAG["DagList"]["Dag"];
		for (auto valueScenarioDAGListScenarioDAGDagListDag : allDagListNode)
		{
			ScenarioDAG::Dag1 dagListObject;
			if(!valueScenarioDAGListScenarioDAGDagListDag["Id"].isNull())
				dagListObject.id = std::stol(valueScenarioDAGListScenarioDAGDagListDag["Id"].asString());
			if(!valueScenarioDAGListScenarioDAGDagListDag["CreatorId"].isNull())
				dagListObject.creatorId = valueScenarioDAGListScenarioDAGDagListDag["CreatorId"].asString();
			if(!valueScenarioDAGListScenarioDAGDagListDag["IsDeleted"].isNull())
				dagListObject.isDeleted = valueScenarioDAGListScenarioDAGDagListDag["IsDeleted"].asString() == "true";
			if(!valueScenarioDAGListScenarioDAGDagListDag["DemoId"].isNull())
				dagListObject.demoId = valueScenarioDAGListScenarioDAGDagListDag["DemoId"].asString();
			if(!valueScenarioDAGListScenarioDAGDagListDag["DeployId"].isNull())
				dagListObject.deployId = std::stol(valueScenarioDAGListScenarioDAGDagListDag["DeployId"].asString());
			if(!valueScenarioDAGListScenarioDAGDagListDag["DataFlowId"].isNull())
				dagListObject.dataFlowId = std::stol(valueScenarioDAGListScenarioDAGDagListDag["DataFlowId"].asString());
			if(!valueScenarioDAGListScenarioDAGDagListDag["ScenarioId"].isNull())
				dagListObject.scenarioId = std::stol(valueScenarioDAGListScenarioDAGDagListDag["ScenarioId"].asString());
			if(!valueScenarioDAGListScenarioDAGDagListDag["SpaceId"].isNull())
				dagListObject.spaceId = std::stol(valueScenarioDAGListScenarioDAGDagListDag["SpaceId"].asString());
			if(!valueScenarioDAGListScenarioDAGDagListDag["CreatorNickName"].isNull())
				dagListObject.creatorNickName = valueScenarioDAGListScenarioDAGDagListDag["CreatorNickName"].asString();
			if(!valueScenarioDAGListScenarioDAGDagListDag["DagOwnerNickName"].isNull())
				dagListObject.dagOwnerNickName = valueScenarioDAGListScenarioDAGDagListDag["DagOwnerNickName"].asString();
			if(!valueScenarioDAGListScenarioDAGDagListDag["CanEdit"].isNull())
				dagListObject.canEdit = valueScenarioDAGListScenarioDAGDagListDag["CanEdit"].asString() == "true";
			if(!valueScenarioDAGListScenarioDAGDagListDag["Status"].isNull())
				dagListObject.status = std::stoi(valueScenarioDAGListScenarioDAGDagListDag["Status"].asString());
			if(!valueScenarioDAGListScenarioDAGDagListDag["LatestInstanceStatus"].isNull())
				dagListObject.latestInstanceStatus = std::stoi(valueScenarioDAGListScenarioDAGDagListDag["LatestInstanceStatus"].asString());
			if(!valueScenarioDAGListScenarioDAGDagListDag["LatestInstanceTime"].isNull())
				dagListObject.latestInstanceTime = std::stoi(valueScenarioDAGListScenarioDAGDagListDag["LatestInstanceTime"].asString());
			if(!valueScenarioDAGListScenarioDAGDagListDag["DagName"].isNull())
				dagListObject.dagName = valueScenarioDAGListScenarioDAGDagListDag["DagName"].asString();
			if(!valueScenarioDAGListScenarioDAGDagListDag["DagOwnerId"].isNull())
				dagListObject.dagOwnerId = valueScenarioDAGListScenarioDAGDagListDag["DagOwnerId"].asString();
			scenarioDAGListObject.dagList.push_back(dagListObject);
		}
		auto scenarioNode = value["Scenario"];
		if(!scenarioNode["ScenarioName"].isNull())
			scenarioDAGListObject.scenario.scenarioName = scenarioNode["ScenarioName"].asString();
		if(!scenarioNode["CreatorId"].isNull())
			scenarioDAGListObject.scenario.creatorId = scenarioNode["CreatorId"].asString();
		if(!scenarioNode["Description"].isNull())
			scenarioDAGListObject.scenario.description = scenarioNode["Description"].asString();
		scenarioDAGList_.push_back(scenarioDAGListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListLhTaskFlowAndScenarioResult::ScenarioDAG> ListLhTaskFlowAndScenarioResult::getScenarioDAGList()const
{
	return scenarioDAGList_;
}

std::string ListLhTaskFlowAndScenarioResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListLhTaskFlowAndScenarioResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListLhTaskFlowAndScenarioResult::getSuccess()const
{
	return success_;
}

std::vector<ListLhTaskFlowAndScenarioResult::Dag> ListLhTaskFlowAndScenarioResult::getRawDAGList()const
{
	return rawDAGList_;
}


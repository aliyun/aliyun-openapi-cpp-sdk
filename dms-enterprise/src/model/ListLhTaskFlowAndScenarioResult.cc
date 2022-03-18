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
	auto allRawDAGListNode = value["RawDAGList"]["dag"];
	for (auto valueRawDAGListdag : allRawDAGListNode)
	{
		Dag rawDAGListObject;
		if(!valueRawDAGListdag["Id"].isNull())
			rawDAGListObject.id = std::stol(valueRawDAGListdag["Id"].asString());
		if(!valueRawDAGListdag["CreatorId"].isNull())
			rawDAGListObject.creatorId = valueRawDAGListdag["CreatorId"].asString();
		if(!valueRawDAGListdag["IsDeleted"].isNull())
			rawDAGListObject.isDeleted = valueRawDAGListdag["IsDeleted"].asString() == "true";
		if(!valueRawDAGListdag["DemoId"].isNull())
			rawDAGListObject.demoId = valueRawDAGListdag["DemoId"].asString();
		if(!valueRawDAGListdag["DeployId"].isNull())
			rawDAGListObject.deployId = std::stol(valueRawDAGListdag["DeployId"].asString());
		if(!valueRawDAGListdag["DataFlowId"].isNull())
			rawDAGListObject.dataFlowId = std::stol(valueRawDAGListdag["DataFlowId"].asString());
		if(!valueRawDAGListdag["ScenarioId"].isNull())
			rawDAGListObject.scenarioId = std::stol(valueRawDAGListdag["ScenarioId"].asString());
		if(!valueRawDAGListdag["SpaceId"].isNull())
			rawDAGListObject.spaceId = std::stol(valueRawDAGListdag["SpaceId"].asString());
		if(!valueRawDAGListdag["CreatorNickName"].isNull())
			rawDAGListObject.creatorNickName = valueRawDAGListdag["CreatorNickName"].asString();
		if(!valueRawDAGListdag["DagOwnerNickName"].isNull())
			rawDAGListObject.dagOwnerNickName = valueRawDAGListdag["DagOwnerNickName"].asString();
		if(!valueRawDAGListdag["CanEdit"].isNull())
			rawDAGListObject.canEdit = valueRawDAGListdag["CanEdit"].asString() == "true";
		if(!valueRawDAGListdag["Status"].isNull())
			rawDAGListObject.status = std::stoi(valueRawDAGListdag["Status"].asString());
		if(!valueRawDAGListdag["LatestInstanceStatus"].isNull())
			rawDAGListObject.latestInstanceStatus = std::stoi(valueRawDAGListdag["LatestInstanceStatus"].asString());
		if(!valueRawDAGListdag["LatestInstanceTime"].isNull())
			rawDAGListObject.latestInstanceTime = std::stoi(valueRawDAGListdag["LatestInstanceTime"].asString());
		rawDAGList_.push_back(rawDAGListObject);
	}
	auto scenarioDAGListNode = value["ScenarioDAGList"];
	auto allDagListNode = scenarioDAGListNode["DagList"]["dag"];
	for (auto scenarioDAGListNodeDagListdag : allDagListNode)
	{
		ScenarioDAGList::Dag1 dag1Object;
		if(!scenarioDAGListNodeDagListdag["Id"].isNull())
			dag1Object.id = std::stol(scenarioDAGListNodeDagListdag["Id"].asString());
		if(!scenarioDAGListNodeDagListdag["CreatorId"].isNull())
			dag1Object.creatorId = scenarioDAGListNodeDagListdag["CreatorId"].asString();
		if(!scenarioDAGListNodeDagListdag["IsDeleted"].isNull())
			dag1Object.isDeleted = scenarioDAGListNodeDagListdag["IsDeleted"].asString() == "true";
		if(!scenarioDAGListNodeDagListdag["DemoId"].isNull())
			dag1Object.demoId = scenarioDAGListNodeDagListdag["DemoId"].asString();
		if(!scenarioDAGListNodeDagListdag["DeployId"].isNull())
			dag1Object.deployId = std::stol(scenarioDAGListNodeDagListdag["DeployId"].asString());
		if(!scenarioDAGListNodeDagListdag["DataFlowId"].isNull())
			dag1Object.dataFlowId = std::stol(scenarioDAGListNodeDagListdag["DataFlowId"].asString());
		if(!scenarioDAGListNodeDagListdag["ScenarioId"].isNull())
			dag1Object.scenarioId = std::stol(scenarioDAGListNodeDagListdag["ScenarioId"].asString());
		if(!scenarioDAGListNodeDagListdag["SpaceId"].isNull())
			dag1Object.spaceId = std::stol(scenarioDAGListNodeDagListdag["SpaceId"].asString());
		if(!scenarioDAGListNodeDagListdag["CreatorNickName"].isNull())
			dag1Object.creatorNickName = scenarioDAGListNodeDagListdag["CreatorNickName"].asString();
		if(!scenarioDAGListNodeDagListdag["DagOwnerNickName"].isNull())
			dag1Object.dagOwnerNickName = scenarioDAGListNodeDagListdag["DagOwnerNickName"].asString();
		if(!scenarioDAGListNodeDagListdag["CanEdit"].isNull())
			dag1Object.canEdit = scenarioDAGListNodeDagListdag["CanEdit"].asString() == "true";
		if(!scenarioDAGListNodeDagListdag["Status"].isNull())
			dag1Object.status = std::stoi(scenarioDAGListNodeDagListdag["Status"].asString());
		if(!scenarioDAGListNodeDagListdag["LatestInstanceStatus"].isNull())
			dag1Object.latestInstanceStatus = std::stoi(scenarioDAGListNodeDagListdag["LatestInstanceStatus"].asString());
		if(!scenarioDAGListNodeDagListdag["LatestInstanceTime"].isNull())
			dag1Object.latestInstanceTime = std::stoi(scenarioDAGListNodeDagListdag["LatestInstanceTime"].asString());
		scenarioDAGList_.dagList.push_back(dag1Object);
	}
	auto scenarioNode = scenarioDAGListNode["Scenario"];
	if(!scenarioNode["ScenarioName"].isNull())
		scenarioDAGList_.scenario.scenarioName = scenarioNode["ScenarioName"].asString();
	if(!scenarioNode["CreatorId"].isNull())
		scenarioDAGList_.scenario.creatorId = scenarioNode["CreatorId"].asString();
	if(!scenarioNode["Description"].isNull())
		scenarioDAGList_.scenario.description = scenarioNode["Description"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ListLhTaskFlowAndScenarioResult::ScenarioDAGList ListLhTaskFlowAndScenarioResult::getScenarioDAGList()const
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


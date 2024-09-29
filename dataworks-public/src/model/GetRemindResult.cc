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

#include <alibabacloud/dataworks-public/model/GetRemindResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetRemindResult::GetRemindResult() :
	ServiceResult()
{}

GetRemindResult::GetRemindResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRemindResult::~GetRemindResult()
{}

void GetRemindResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["MaxAlertTimes"].isNull())
		data_.maxAlertTimes = std::stoi(dataNode["MaxAlertTimes"].asString());
	if(!dataNode["RemindUnit"].isNull())
		data_.remindUnit = dataNode["RemindUnit"].asString();
	if(!dataNode["AlertInterval"].isNull())
		data_.alertInterval = std::stoi(dataNode["AlertInterval"].asString());
	if(!dataNode["Useflag"].isNull())
		data_.useflag = dataNode["Useflag"].asString() == "true";
	if(!dataNode["Founder"].isNull())
		data_.founder = dataNode["Founder"].asString();
	if(!dataNode["RemindId"].isNull())
		data_.remindId = std::stol(dataNode["RemindId"].asString());
	if(!dataNode["DndEnd"].isNull())
		data_.dndEnd = dataNode["DndEnd"].asString();
	if(!dataNode["RemindType"].isNull())
		data_.remindType = dataNode["RemindType"].asString();
	if(!dataNode["AlertUnit"].isNull())
		data_.alertUnit = dataNode["AlertUnit"].asString();
	if(!dataNode["DndStart"].isNull())
		data_.dndStart = dataNode["DndStart"].asString();
	if(!dataNode["RemindName"].isNull())
		data_.remindName = dataNode["RemindName"].asString();
	if(!dataNode["Detail"].isNull())
		data_.detail = dataNode["Detail"].asString();
	auto allRobotsNode = dataNode["Robots"]["RobotsItem"];
	for (auto dataNodeRobotsRobotsItem : allRobotsNode)
	{
		Data::RobotsItem robotsItemObject;
		if(!dataNodeRobotsRobotsItem["WebUrl"].isNull())
			robotsItemObject.webUrl = dataNodeRobotsRobotsItem["WebUrl"].asString();
		if(!dataNodeRobotsRobotsItem["AtAll"].isNull())
			robotsItemObject.atAll = dataNodeRobotsRobotsItem["AtAll"].asString() == "true";
		data_.robots.push_back(robotsItemObject);
	}
	auto allNodesNode = dataNode["Nodes"]["NodesItem"];
	for (auto dataNodeNodesNodesItem : allNodesNode)
	{
		Data::NodesItem nodesItemObject;
		if(!dataNodeNodesNodesItem["Owner"].isNull())
			nodesItemObject.owner = dataNodeNodesNodesItem["Owner"].asString();
		if(!dataNodeNodesNodesItem["NodeName"].isNull())
			nodesItemObject.nodeName = dataNodeNodesNodesItem["NodeName"].asString();
		if(!dataNodeNodesNodesItem["NodeId"].isNull())
			nodesItemObject.nodeId = std::stol(dataNodeNodesNodesItem["NodeId"].asString());
		if(!dataNodeNodesNodesItem["ProjectId"].isNull())
			nodesItemObject.projectId = std::stol(dataNodeNodesNodesItem["ProjectId"].asString());
		data_.nodes.push_back(nodesItemObject);
	}
	auto allBaselinesNode = dataNode["Baselines"]["BaselinesItem"];
	for (auto dataNodeBaselinesBaselinesItem : allBaselinesNode)
	{
		Data::BaselinesItem baselinesItemObject;
		if(!dataNodeBaselinesBaselinesItem["BaselineName"].isNull())
			baselinesItemObject.baselineName = dataNodeBaselinesBaselinesItem["BaselineName"].asString();
		if(!dataNodeBaselinesBaselinesItem["BaselineId"].isNull())
			baselinesItemObject.baselineId = std::stol(dataNodeBaselinesBaselinesItem["BaselineId"].asString());
		data_.baselines.push_back(baselinesItemObject);
	}
	auto allProjectsNode = dataNode["Projects"]["ProjectsItem"];
	for (auto dataNodeProjectsProjectsItem : allProjectsNode)
	{
		Data::ProjectsItem projectsItemObject;
		if(!dataNodeProjectsProjectsItem["ProjectId"].isNull())
			projectsItemObject.projectId = std::stol(dataNodeProjectsProjectsItem["ProjectId"].asString());
		data_.projects.push_back(projectsItemObject);
	}
	auto allBizProcessesNode = dataNode["BizProcesses"]["BizProcessesItem"];
	for (auto dataNodeBizProcessesBizProcessesItem : allBizProcessesNode)
	{
		Data::BizProcessesItem bizProcessesItemObject;
		if(!dataNodeBizProcessesBizProcessesItem["BizProcessName"].isNull())
			bizProcessesItemObject.bizProcessName = dataNodeBizProcessesBizProcessesItem["BizProcessName"].asString();
		if(!dataNodeBizProcessesBizProcessesItem["BizId"].isNull())
			bizProcessesItemObject.bizId = std::stol(dataNodeBizProcessesBizProcessesItem["BizId"].asString());
		data_.bizProcesses.push_back(bizProcessesItemObject);
	}
	auto allReceiversNode = dataNode["Receivers"]["ReceiversItem"];
	for (auto dataNodeReceiversReceiversItem : allReceiversNode)
	{
		Data::ReceiversItem receiversItemObject;
		if(!dataNodeReceiversReceiversItem["AlertUnit"].isNull())
			receiversItemObject.alertUnit = dataNodeReceiversReceiversItem["AlertUnit"].asString();
		auto allAlertTargets1 = value["AlertTargets"]["AlertTargets"];
		for (auto value : allAlertTargets1)
			receiversItemObject.alertTargets1.push_back(value.asString());
		data_.receivers.push_back(receiversItemObject);
	}
		auto allAlertTargets = dataNode["AlertTargets"]["AlertTargets"];
		for (auto value : allAlertTargets)
			data_.alertTargets.push_back(value.asString());
		auto allAlertMethods = dataNode["AlertMethods"]["AlertMethods"];
		for (auto value : allAlertMethods)
			data_.alertMethods.push_back(value.asString());
		auto allWebhooks = dataNode["Webhooks"]["Webhooks"];
		for (auto value : allWebhooks)
			data_.webhooks.push_back(value.asString());
		auto allAllowNodes = dataNode["AllowNodes"]["allowNodes"];
		for (auto value : allAllowNodes)
			data_.allowNodes.push_back(value.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetRemindResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetRemindResult::Data GetRemindResult::getData()const
{
	return data_;
}

std::string GetRemindResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetRemindResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetRemindResult::getSuccess()const
{
	return success_;
}


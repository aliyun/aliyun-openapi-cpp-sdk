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

#include <alibabacloud/dataworks-public/model/GetNodeChildrenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetNodeChildrenResult::GetNodeChildrenResult() :
	ServiceResult()
{}

GetNodeChildrenResult::GetNodeChildrenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNodeChildrenResult::~GetNodeChildrenResult()
{}

void GetNodeChildrenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allNodesNode = dataNode["Nodes"]["NodesItem"];
	for (auto dataNodeNodesNodesItem : allNodesNode)
	{
		Data::NodesItem nodesItemObject;
		if(!dataNodeNodesNodesItem["SchedulerType"].isNull())
			nodesItemObject.schedulerType = dataNodeNodesNodesItem["SchedulerType"].asString();
		if(!dataNodeNodesNodesItem["BaselineId"].isNull())
			nodesItemObject.baselineId = std::stol(dataNodeNodesNodesItem["BaselineId"].asString());
		if(!dataNodeNodesNodesItem["Repeatability"].isNull())
			nodesItemObject.repeatability = dataNodeNodesNodesItem["Repeatability"].asString() == "true";
		if(!dataNodeNodesNodesItem["NodeName"].isNull())
			nodesItemObject.nodeName = dataNodeNodesNodesItem["NodeName"].asString();
		if(!dataNodeNodesNodesItem["ProjectId"].isNull())
			nodesItemObject.projectId = std::stol(dataNodeNodesNodesItem["ProjectId"].asString());
		if(!dataNodeNodesNodesItem["ProgramType"].isNull())
			nodesItemObject.programType = dataNodeNodesNodesItem["ProgramType"].asString();
		if(!dataNodeNodesNodesItem["Priority"].isNull())
			nodesItemObject.priority = std::stoi(dataNodeNodesNodesItem["Priority"].asString());
		if(!dataNodeNodesNodesItem["OwnerId"].isNull())
			nodesItemObject.ownerId = dataNodeNodesNodesItem["OwnerId"].asString();
		if(!dataNodeNodesNodesItem["CronExpress"].isNull())
			nodesItemObject.cronExpress = dataNodeNodesNodesItem["CronExpress"].asString();
		if(!dataNodeNodesNodesItem["NodeId"].isNull())
			nodesItemObject.nodeId = std::stol(dataNodeNodesNodesItem["NodeId"].asString());
		if(!dataNodeNodesNodesItem["StepType"].isNull())
			nodesItemObject.stepType = dataNodeNodesNodesItem["StepType"].asString();
		data_.nodes.push_back(nodesItemObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetNodeChildrenResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetNodeChildrenResult::Data GetNodeChildrenResult::getData()const
{
	return data_;
}

std::string GetNodeChildrenResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetNodeChildrenResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetNodeChildrenResult::getSuccess()const
{
	return success_;
}


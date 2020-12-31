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

#include <alibabacloud/iot/model/GetEdgeInstanceDeploymentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

GetEdgeInstanceDeploymentResult::GetEdgeInstanceDeploymentResult() :
	ServiceResult()
{}

GetEdgeInstanceDeploymentResult::GetEdgeInstanceDeploymentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEdgeInstanceDeploymentResult::~GetEdgeInstanceDeploymentResult()
{}

void GetEdgeInstanceDeploymentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!dataNode["GmtCompleted"].isNull())
		data_.gmtCompleted = dataNode["GmtCompleted"].asString();
	if(!dataNode["DeploymentId"].isNull())
		data_.deploymentId = dataNode["DeploymentId"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["Type"].isNull())
		data_.type = dataNode["Type"].asString();
	if(!dataNode["GmtCreateTimestamp"].isNull())
		data_.gmtCreateTimestamp = std::stol(dataNode["GmtCreateTimestamp"].asString());
	if(!dataNode["GmtModifiedTimestamp"].isNull())
		data_.gmtModifiedTimestamp = std::stol(dataNode["GmtModifiedTimestamp"].asString());
	if(!dataNode["GmtCompletedTimestamp"].isNull())
		data_.gmtCompletedTimestamp = std::stol(dataNode["GmtCompletedTimestamp"].asString());
	auto allTaskListNode = dataNode["TaskList"]["Task"];
	for (auto dataNodeTaskListTask : allTaskListNode)
	{
		Data::Task taskObject;
		if(!dataNodeTaskListTask["GmtCreate"].isNull())
			taskObject.gmtCreate = dataNodeTaskListTask["GmtCreate"].asString();
		if(!dataNodeTaskListTask["GmtModified"].isNull())
			taskObject.gmtModified = dataNodeTaskListTask["GmtModified"].asString();
		if(!dataNodeTaskListTask["GmtCompleted"].isNull())
			taskObject.gmtCompleted = dataNodeTaskListTask["GmtCompleted"].asString();
		if(!dataNodeTaskListTask["GatewayId"].isNull())
			taskObject.gatewayId = dataNodeTaskListTask["GatewayId"].asString();
		if(!dataNodeTaskListTask["TaskId"].isNull())
			taskObject.taskId = dataNodeTaskListTask["TaskId"].asString();
		if(!dataNodeTaskListTask["Stage"].isNull())
			taskObject.stage = std::stoi(dataNodeTaskListTask["Stage"].asString());
		if(!dataNodeTaskListTask["Status"].isNull())
			taskObject.status = std::stoi(dataNodeTaskListTask["Status"].asString());
		if(!dataNodeTaskListTask["GmtCreateTimestamp"].isNull())
			taskObject.gmtCreateTimestamp = std::stol(dataNodeTaskListTask["GmtCreateTimestamp"].asString());
		if(!dataNodeTaskListTask["GmtModifiedTimestamp"].isNull())
			taskObject.gmtModifiedTimestamp = std::stol(dataNodeTaskListTask["GmtModifiedTimestamp"].asString());
		if(!dataNodeTaskListTask["GmtCompletedTimestamp"].isNull())
			taskObject.gmtCompletedTimestamp = std::stol(dataNodeTaskListTask["GmtCompletedTimestamp"].asString());
		auto allResourceSnapshotListNode = dataNodeTaskListTask["ResourceSnapshotList"]["ResourceSnapshot"];
		for (auto dataNodeTaskListTaskResourceSnapshotListResourceSnapshot : allResourceSnapshotListNode)
		{
			Data::Task::ResourceSnapshot resourceSnapshotListObject;
			if(!dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["GmtCreate"].isNull())
				resourceSnapshotListObject.gmtCreate = dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["GmtCreate"].asString();
			if(!dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["GmtModified"].isNull())
				resourceSnapshotListObject.gmtModified = dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["GmtModified"].asString();
			if(!dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["GmtCompleted"].isNull())
				resourceSnapshotListObject.gmtCompleted = dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["GmtCompleted"].asString();
			if(!dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["SnapshotId"].isNull())
				resourceSnapshotListObject.snapshotId = dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["SnapshotId"].asString();
			if(!dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["ResourceType"].isNull())
				resourceSnapshotListObject.resourceType = dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["ResourceType"].asString();
			if(!dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["ResourceId"].isNull())
				resourceSnapshotListObject.resourceId = dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["ResourceId"].asString();
			if(!dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["ResourceName"].isNull())
				resourceSnapshotListObject.resourceName = dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["ResourceName"].asString();
			if(!dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["OperateType"].isNull())
				resourceSnapshotListObject.operateType = std::stoi(dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["OperateType"].asString());
			if(!dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["Stage"].isNull())
				resourceSnapshotListObject.stage = std::stoi(dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["Stage"].asString());
			if(!dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["Status"].isNull())
				resourceSnapshotListObject.status = std::stoi(dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["Status"].asString());
			if(!dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["Log"].isNull())
				resourceSnapshotListObject.log = dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["Log"].asString();
			if(!dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["GmtCreateTimestamp"].isNull())
				resourceSnapshotListObject.gmtCreateTimestamp = std::stol(dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["GmtCreateTimestamp"].asString());
			if(!dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["GmtModifiedTimestamp"].isNull())
				resourceSnapshotListObject.gmtModifiedTimestamp = std::stol(dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["GmtModifiedTimestamp"].asString());
			if(!dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["GmtCompletedTimestamp"].isNull())
				resourceSnapshotListObject.gmtCompletedTimestamp = std::stol(dataNodeTaskListTaskResourceSnapshotListResourceSnapshot["GmtCompletedTimestamp"].asString());
			taskObject.resourceSnapshotList.push_back(resourceSnapshotListObject);
		}
		data_.taskList.push_back(taskObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

GetEdgeInstanceDeploymentResult::Data GetEdgeInstanceDeploymentResult::getData()const
{
	return data_;
}

std::string GetEdgeInstanceDeploymentResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetEdgeInstanceDeploymentResult::getCode()const
{
	return code_;
}

bool GetEdgeInstanceDeploymentResult::getSuccess()const
{
	return success_;
}


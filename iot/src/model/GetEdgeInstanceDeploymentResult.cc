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
	auto allTaskList = value["TaskList"]["Task"];
	for (auto value : allTaskList)
	{
		Data::Task taskObject;
		if(!value["GmtCreate"].isNull())
			taskObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtModified"].isNull())
			taskObject.gmtModified = value["GmtModified"].asString();
		if(!value["GmtCompleted"].isNull())
			taskObject.gmtCompleted = value["GmtCompleted"].asString();
		if(!value["GatewayId"].isNull())
			taskObject.gatewayId = value["GatewayId"].asString();
		if(!value["TaskId"].isNull())
			taskObject.taskId = value["TaskId"].asString();
		if(!value["Stage"].isNull())
			taskObject.stage = std::stoi(value["Stage"].asString());
		if(!value["Status"].isNull())
			taskObject.status = std::stoi(value["Status"].asString());
		auto allResourceSnapshotList = value["ResourceSnapshotList"]["ResourceSnapshot"];
		for (auto value : allResourceSnapshotList)
		{
			Data::Task::ResourceSnapshot resourceSnapshotListObject;
			if(!value["GmtCreate"].isNull())
				resourceSnapshotListObject.gmtCreate = value["GmtCreate"].asString();
			if(!value["GmtModified"].isNull())
				resourceSnapshotListObject.gmtModified = value["GmtModified"].asString();
			if(!value["GmtCompleted"].isNull())
				resourceSnapshotListObject.gmtCompleted = value["GmtCompleted"].asString();
			if(!value["SnapshotId"].isNull())
				resourceSnapshotListObject.snapshotId = value["SnapshotId"].asString();
			if(!value["ResourceType"].isNull())
				resourceSnapshotListObject.resourceType = value["ResourceType"].asString();
			if(!value["ResourceId"].isNull())
				resourceSnapshotListObject.resourceId = value["ResourceId"].asString();
			if(!value["ResourceName"].isNull())
				resourceSnapshotListObject.resourceName = value["ResourceName"].asString();
			if(!value["OperateType"].isNull())
				resourceSnapshotListObject.operateType = std::stoi(value["OperateType"].asString());
			if(!value["Stage"].isNull())
				resourceSnapshotListObject.stage = std::stoi(value["Stage"].asString());
			if(!value["Status"].isNull())
				resourceSnapshotListObject.status = std::stoi(value["Status"].asString());
			if(!value["Log"].isNull())
				resourceSnapshotListObject.log = value["Log"].asString();
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


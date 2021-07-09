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

#include <alibabacloud/devops-rdc/model/GetPipelineLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

GetPipelineLogResult::GetPipelineLogResult() :
	ServiceResult()
{}

GetPipelineLogResult::GetPipelineLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPipelineLogResult::~GetPipelineLogResult()
{}

void GetPipelineLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allObjectNode = value["Object"]["job"];
	for (auto valueObjectjob : allObjectNode)
	{
		Job objectObject;
		if(!valueObjectjob["ActionName"].isNull())
			objectObject.actionName = valueObjectjob["ActionName"].asString();
		if(!valueObjectjob["StartTime"].isNull())
			objectObject.startTime = valueObjectjob["StartTime"].asString();
		if(!valueObjectjob["JobId"].isNull())
			objectObject.jobId = std::stol(valueObjectjob["JobId"].asString());
		auto allBuildProcessNodesNode = valueObjectjob["BuildProcessNodes"]["buildProcessNode"];
		for (auto valueObjectjobBuildProcessNodesbuildProcessNode : allBuildProcessNodesNode)
		{
			Job::BuildProcessNode buildProcessNodesObject;
			if(!valueObjectjobBuildProcessNodesbuildProcessNode["Status"].isNull())
				buildProcessNodesObject.status = valueObjectjobBuildProcessNodesbuildProcessNode["Status"].asString();
			if(!valueObjectjobBuildProcessNodesbuildProcessNode["NodeIndex"].isNull())
				buildProcessNodesObject.nodeIndex = std::stoi(valueObjectjobBuildProcessNodesbuildProcessNode["NodeIndex"].asString());
			if(!valueObjectjobBuildProcessNodesbuildProcessNode["NodeName"].isNull())
				buildProcessNodesObject.nodeName = valueObjectjobBuildProcessNodesbuildProcessNode["NodeName"].asString();
			objectObject.buildProcessNodes.push_back(buildProcessNodesObject);
		}
		object_.push_back(objectObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::vector<GetPipelineLogResult::Job> GetPipelineLogResult::getObject()const
{
	return object_;
}

std::string GetPipelineLogResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetPipelineLogResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetPipelineLogResult::getSuccess()const
{
	return success_;
}


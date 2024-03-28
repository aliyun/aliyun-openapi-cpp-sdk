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

#include <alibabacloud/devops/model/LogVMDeployMachineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

LogVMDeployMachineResult::LogVMDeployMachineResult() :
	ServiceResult()
{}

LogVMDeployMachineResult::LogVMDeployMachineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

LogVMDeployMachineResult::~LogVMDeployMachineResult()
{}

void LogVMDeployMachineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto deployMachineLogNode = value["deployMachineLog"];
	if(!deployMachineLogNode["deployLog"].isNull())
		deployMachineLog_.deployLog = deployMachineLogNode["deployLog"].asString();
	if(!deployMachineLogNode["aliyunRegion"].isNull())
		deployMachineLog_.aliyunRegion = deployMachineLogNode["aliyunRegion"].asString();
	if(!deployMachineLogNode["deployLogPath"].isNull())
		deployMachineLog_.deployLogPath = deployMachineLogNode["deployLogPath"].asString();
	if(!deployMachineLogNode["deployBeginTime"].isNull())
		deployMachineLog_.deployBeginTime = std::stol(deployMachineLogNode["deployBeginTime"].asString());
	if(!deployMachineLogNode["deployEndTime"].isNull())
		deployMachineLog_.deployEndTime = std::stol(deployMachineLogNode["deployEndTime"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();

}

std::string LogVMDeployMachineResult::getRequestId()const
{
	return requestId_;
}

std::string LogVMDeployMachineResult::getErrorCode()const
{
	return errorCode_;
}

std::string LogVMDeployMachineResult::getErrorMessage()const
{
	return errorMessage_;
}

LogVMDeployMachineResult::DeployMachineLog LogVMDeployMachineResult::getDeployMachineLog()const
{
	return deployMachineLog_;
}

bool LogVMDeployMachineResult::getSuccess()const
{
	return success_;
}


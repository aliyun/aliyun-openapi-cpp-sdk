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

#include <alibabacloud/devops/model/GetVMDeployOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetVMDeployOrderResult::GetVMDeployOrderResult() :
	ServiceResult()
{}

GetVMDeployOrderResult::GetVMDeployOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVMDeployOrderResult::~GetVMDeployOrderResult()
{}

void GetVMDeployOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto deployOrderNode = value["deployOrder"];
	if(!deployOrderNode["deployOrderId"].isNull())
		deployOrder_.deployOrderId = deployOrderNode["deployOrderId"].asString();
	if(!deployOrderNode["createTime"].isNull())
		deployOrder_.createTime = std::stol(deployOrderNode["createTime"].asString());
	if(!deployOrderNode["updateTime"].isNull())
		deployOrder_.updateTime = std::stol(deployOrderNode["updateTime"].asString());
	if(!deployOrderNode["creator"].isNull())
		deployOrder_.creator = deployOrderNode["creator"].asString();
	if(!deployOrderNode["currentBatch"].isNull())
		deployOrder_.currentBatch = std::stoi(deployOrderNode["currentBatch"].asString());
	if(!deployOrderNode["totalBatch"].isNull())
		deployOrder_.totalBatch = std::stoi(deployOrderNode["totalBatch"].asString());
	if(!deployOrderNode["status"].isNull())
		deployOrder_.status = deployOrderNode["status"].asString();
	if(!deployOrderNode["exceptionCode"].isNull())
		deployOrder_.exceptionCode = deployOrderNode["exceptionCode"].asString();
	auto allactionsNode = deployOrderNode["actions"]["action"];
	for (auto deployOrderNodeactionsaction : allactionsNode)
	{
		DeployOrder::Action actionObject;
		if(!deployOrderNodeactionsaction["type"].isNull())
			actionObject.type = deployOrderNodeactionsaction["type"].asString();
		if(!deployOrderNodeactionsaction["disable"].isNull())
			actionObject.disable = deployOrderNodeactionsaction["disable"].asString() == "true";
		if(!deployOrderNodeactionsaction["params"].isNull())
			actionObject.params = deployOrderNodeactionsaction["params"].asString();
		deployOrder_.actions.push_back(actionObject);
	}
	auto deployMachineInfoNode = deployOrderNode["deployMachineInfo"];
	if(!deployMachineInfoNode["hostGroupId"].isNull())
		deployOrder_.deployMachineInfo.hostGroupId = std::stol(deployMachineInfoNode["hostGroupId"].asString());
	if(!deployMachineInfoNode["batchNum"].isNull())
		deployOrder_.deployMachineInfo.batchNum = std::stoi(deployMachineInfoNode["batchNum"].asString());
	auto alldeployMachinesNode = deployMachineInfoNode["deployMachines"]["deployMachine"];
	for (auto deployMachineInfoNodedeployMachinesdeployMachine : alldeployMachinesNode)
	{
		DeployOrder::DeployMachineInfo::DeployMachine deployMachineObject;
		if(!deployMachineInfoNodedeployMachinesdeployMachine["createTime"].isNull())
			deployMachineObject.createTime = std::stol(deployMachineInfoNodedeployMachinesdeployMachine["createTime"].asString());
		if(!deployMachineInfoNodedeployMachinesdeployMachine["updateTime"].isNull())
			deployMachineObject.updateTime = std::stol(deployMachineInfoNodedeployMachinesdeployMachine["updateTime"].asString());
		if(!deployMachineInfoNodedeployMachinesdeployMachine["status"].isNull())
			deployMachineObject.status = deployMachineInfoNodedeployMachinesdeployMachine["status"].asString();
		if(!deployMachineInfoNodedeployMachinesdeployMachine["machineSn"].isNull())
			deployMachineObject.machineSn = deployMachineInfoNodedeployMachinesdeployMachine["machineSn"].asString();
		if(!deployMachineInfoNodedeployMachinesdeployMachine["clientStatus"].isNull())
			deployMachineObject.clientStatus = deployMachineInfoNodedeployMachinesdeployMachine["clientStatus"].asString();
		if(!deployMachineInfoNodedeployMachinesdeployMachine["ip"].isNull())
			deployMachineObject.ip = deployMachineInfoNodedeployMachinesdeployMachine["ip"].asString();
		if(!deployMachineInfoNodedeployMachinesdeployMachine["batchNum"].isNull())
			deployMachineObject.batchNum = std::stoi(deployMachineInfoNodedeployMachinesdeployMachine["batchNum"].asString());
		auto allactions1Node = deployMachineInfoNodedeployMachinesdeployMachine["actions"]["action"];
		for (auto deployMachineInfoNodedeployMachinesdeployMachineactionsaction : allactions1Node)
		{
			DeployOrder::DeployMachineInfo::DeployMachine::Action2 actions1Object;
			if(!deployMachineInfoNodedeployMachinesdeployMachineactionsaction["type"].isNull())
				actions1Object.type = deployMachineInfoNodedeployMachinesdeployMachineactionsaction["type"].asString();
			if(!deployMachineInfoNodedeployMachinesdeployMachineactionsaction["disable"].isNull())
				actions1Object.disable = deployMachineInfoNodedeployMachinesdeployMachineactionsaction["disable"].asString() == "true";
			if(!deployMachineInfoNodedeployMachinesdeployMachineactionsaction["params"].isNull())
				actions1Object.params = deployMachineInfoNodedeployMachinesdeployMachineactionsaction["params"].asString();
			deployMachineObject.actions1.push_back(actions1Object);
		}
		deployOrder_.deployMachineInfo.deployMachines.push_back(deployMachineObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();

}

GetVMDeployOrderResult::DeployOrder GetVMDeployOrderResult::getDeployOrder()const
{
	return deployOrder_;
}

std::string GetVMDeployOrderResult::getRequestId()const
{
	return requestId_;
}

std::string GetVMDeployOrderResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetVMDeployOrderResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetVMDeployOrderResult::getSuccess()const
{
	return success_;
}


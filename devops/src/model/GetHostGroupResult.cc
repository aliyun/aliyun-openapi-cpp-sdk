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

#include <alibabacloud/devops/model/GetHostGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetHostGroupResult::GetHostGroupResult() :
	ServiceResult()
{}

GetHostGroupResult::GetHostGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHostGroupResult::~GetHostGroupResult()
{}

void GetHostGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto hostGroupNode = value["hostGroup"];
	if(!hostGroupNode["creatorAccountId"].isNull())
		hostGroup_.creatorAccountId = hostGroupNode["creatorAccountId"].asString();
	if(!hostGroupNode["upateTIme"].isNull())
		hostGroup_.upateTIme = std::stol(hostGroupNode["upateTIme"].asString());
	if(!hostGroupNode["hostNum"].isNull())
		hostGroup_.hostNum = std::stol(hostGroupNode["hostNum"].asString());
	if(!hostGroupNode["modifierAccountId"].isNull())
		hostGroup_.modifierAccountId = hostGroupNode["modifierAccountId"].asString();
	if(!hostGroupNode["description"].isNull())
		hostGroup_.description = hostGroupNode["description"].asString();
	if(!hostGroupNode["type"].isNull())
		hostGroup_.type = hostGroupNode["type"].asString();
	if(!hostGroupNode["createTime"].isNull())
		hostGroup_.createTime = std::stol(hostGroupNode["createTime"].asString());
	if(!hostGroupNode["ecsType"].isNull())
		hostGroup_.ecsType = hostGroupNode["ecsType"].asString();
	if(!hostGroupNode["aliyunRegion"].isNull())
		hostGroup_.aliyunRegion = hostGroupNode["aliyunRegion"].asString();
	if(!hostGroupNode["ecsLabelKey"].isNull())
		hostGroup_.ecsLabelKey = hostGroupNode["ecsLabelKey"].asString();
	if(!hostGroupNode["id"].isNull())
		hostGroup_.id = std::stol(hostGroupNode["id"].asString());
	if(!hostGroupNode["name"].isNull())
		hostGroup_.name = hostGroupNode["name"].asString();
	if(!hostGroupNode["serviceConnectionId"].isNull())
		hostGroup_.serviceConnectionId = std::stol(hostGroupNode["serviceConnectionId"].asString());
	if(!hostGroupNode["ecsLabelValue"].isNull())
		hostGroup_.ecsLabelValue = hostGroupNode["ecsLabelValue"].asString();
	auto allhostInfosNode = hostGroupNode["hostInfos"]["HostInfo"];
	for (auto hostGroupNodehostInfosHostInfo : allhostInfosNode)
	{
		HostGroup::HostInfo hostInfoObject;
		if(!hostGroupNodehostInfosHostInfo["updateTime"].isNull())
			hostInfoObject.updateTime = std::stol(hostGroupNodehostInfosHostInfo["updateTime"].asString());
		if(!hostGroupNodehostInfosHostInfo["creatorAccountId"].isNull())
			hostInfoObject.creatorAccountId = hostGroupNodehostInfosHostInfo["creatorAccountId"].asString();
		if(!hostGroupNodehostInfosHostInfo["instanceName"].isNull())
			hostInfoObject.instanceName = hostGroupNodehostInfosHostInfo["instanceName"].asString();
		if(!hostGroupNodehostInfosHostInfo["modifierAccountId"].isNull())
			hostInfoObject.modifierAccountId = hostGroupNodehostInfosHostInfo["modifierAccountId"].asString();
		if(!hostGroupNodehostInfosHostInfo["ip"].isNull())
			hostInfoObject.ip = hostGroupNodehostInfosHostInfo["ip"].asString();
		if(!hostGroupNodehostInfosHostInfo["createTime"].isNull())
			hostInfoObject.createTime = std::stol(hostGroupNodehostInfosHostInfo["createTime"].asString());
		if(!hostGroupNodehostInfosHostInfo["objectType"].isNull())
			hostInfoObject.objectType = hostGroupNodehostInfosHostInfo["objectType"].asString();
		if(!hostGroupNodehostInfosHostInfo["aliyunRegionId"].isNull())
			hostInfoObject.aliyunRegionId = hostGroupNodehostInfosHostInfo["aliyunRegionId"].asString();
		if(!hostGroupNodehostInfosHostInfo["machineSn"].isNull())
			hostInfoObject.machineSn = hostGroupNodehostInfosHostInfo["machineSn"].asString();
		hostGroup_.hostInfos.push_back(hostInfoObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string GetHostGroupResult::getRequestId()const
{
	return requestId_;
}

GetHostGroupResult::HostGroup GetHostGroupResult::getHostGroup()const
{
	return hostGroup_;
}

std::string GetHostGroupResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetHostGroupResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetHostGroupResult::getSuccess()const
{
	return success_;
}


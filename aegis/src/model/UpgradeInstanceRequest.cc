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

#include <alibabacloud/aegis/model/UpgradeInstanceRequest.h>

using AlibabaCloud::Aegis::Model::UpgradeInstanceRequest;

UpgradeInstanceRequest::UpgradeInstanceRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "UpgradeInstance")
{
	setMethod(HttpRequest::Method::Post);
}

UpgradeInstanceRequest::~UpgradeInstanceRequest()
{}

std::string UpgradeInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void UpgradeInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string UpgradeInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void UpgradeInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

int UpgradeInstanceRequest::getVmNumber()const
{
	return vmNumber_;
}

void UpgradeInstanceRequest::setVmNumber(int vmNumber)
{
	vmNumber_ = vmNumber;
	setParameter("VmNumber", std::to_string(vmNumber));
}

long UpgradeInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void UpgradeInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int UpgradeInstanceRequest::getVersionCode()const
{
	return versionCode_;
}

void UpgradeInstanceRequest::setVersionCode(int versionCode)
{
	versionCode_ = versionCode;
	setParameter("VersionCode", std::to_string(versionCode));
}


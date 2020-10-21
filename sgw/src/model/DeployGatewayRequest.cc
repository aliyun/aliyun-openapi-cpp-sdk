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

#include <alibabacloud/sgw/model/DeployGatewayRequest.h>

using AlibabaCloud::Sgw::Model::DeployGatewayRequest;

DeployGatewayRequest::DeployGatewayRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DeployGateway")
{
	setMethod(HttpRequest::Method::Post);
}

DeployGatewayRequest::~DeployGatewayRequest()
{}

std::string DeployGatewayRequest::getGatewayClass()const
{
	return gatewayClass_;
}

void DeployGatewayRequest::setGatewayClass(const std::string& gatewayClass)
{
	gatewayClass_ = gatewayClass;
	setParameter("GatewayClass", gatewayClass);
}

std::string DeployGatewayRequest::getGatewayVersion()const
{
	return gatewayVersion_;
}

void DeployGatewayRequest::setGatewayVersion(const std::string& gatewayVersion)
{
	gatewayVersion_ = gatewayVersion;
	setParameter("GatewayVersion", gatewayVersion);
}

std::vector<DeployGatewayRequest::DataDisk> DeployGatewayRequest::getDataDisk()const
{
	return dataDisk_;
}

void DeployGatewayRequest::setDataDisk(const std::vector<DataDisk>& dataDisk)
{
	dataDisk_ = dataDisk;
	for(int dep1 = 0; dep1!= dataDisk.size(); dep1++) {
		auto dataDiskObj = dataDisk.at(dep1);
		std::string dataDiskObjStr = "DataDisk." + std::to_string(dep1 + 1);
		setParameter(dataDiskObjStr + ".Size", std::to_string(dataDiskObj.size));
		setParameter(dataDiskObjStr + ".Category", dataDiskObj.category);
		setParameter(dataDiskObjStr + ".CacheConfig", dataDiskObj.cacheConfig);
	}
}

std::string DeployGatewayRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeployGatewayRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeployGatewayRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void DeployGatewayRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string DeployGatewayRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeployGatewayRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeployGatewayRequest::getGatewayId()const
{
	return gatewayId_;
}

void DeployGatewayRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}


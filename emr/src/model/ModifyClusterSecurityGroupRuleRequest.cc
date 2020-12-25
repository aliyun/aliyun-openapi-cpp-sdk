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

#include <alibabacloud/emr/model/ModifyClusterSecurityGroupRuleRequest.h>

using AlibabaCloud::Emr::Model::ModifyClusterSecurityGroupRuleRequest;

ModifyClusterSecurityGroupRuleRequest::ModifyClusterSecurityGroupRuleRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyClusterSecurityGroupRule")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyClusterSecurityGroupRuleRequest::~ModifyClusterSecurityGroupRuleRequest()
{}

std::string ModifyClusterSecurityGroupRuleRequest::getNicType()const
{
	return nicType_;
}

void ModifyClusterSecurityGroupRuleRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setParameter("NicType", nicType);
}

long ModifyClusterSecurityGroupRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyClusterSecurityGroupRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyClusterSecurityGroupRuleRequest::getPortRange()const
{
	return portRange_;
}

void ModifyClusterSecurityGroupRuleRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setParameter("PortRange", portRange);
}

std::string ModifyClusterSecurityGroupRuleRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void ModifyClusterSecurityGroupRuleRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

std::string ModifyClusterSecurityGroupRuleRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyClusterSecurityGroupRuleRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyClusterSecurityGroupRuleRequest::getWhiteIp()const
{
	return whiteIp_;
}

void ModifyClusterSecurityGroupRuleRequest::setWhiteIp(const std::string& whiteIp)
{
	whiteIp_ = whiteIp;
	setParameter("WhiteIp", whiteIp);
}

std::string ModifyClusterSecurityGroupRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyClusterSecurityGroupRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyClusterSecurityGroupRuleRequest::getRegionId()const
{
	return regionId_;
}

void ModifyClusterSecurityGroupRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyClusterSecurityGroupRuleRequest::getModifyType()const
{
	return modifyType_;
}

void ModifyClusterSecurityGroupRuleRequest::setModifyType(const std::string& modifyType)
{
	modifyType_ = modifyType;
	setParameter("ModifyType", modifyType);
}


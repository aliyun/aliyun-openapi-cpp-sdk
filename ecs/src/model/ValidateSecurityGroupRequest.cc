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

#include <alibabacloud/ecs/model/ValidateSecurityGroupRequest.h>

using AlibabaCloud::Ecs::Model::ValidateSecurityGroupRequest;

ValidateSecurityGroupRequest::ValidateSecurityGroupRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ValidateSecurityGroup")
{}

ValidateSecurityGroupRequest::~ValidateSecurityGroupRequest()
{}

std::string ValidateSecurityGroupRequest::getNicType()const
{
	return nicType_;
}

void ValidateSecurityGroupRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setParameter("NicType", nicType);
}

long ValidateSecurityGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ValidateSecurityGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ValidateSecurityGroupRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ValidateSecurityGroupRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool ValidateSecurityGroupRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ValidateSecurityGroupRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string ValidateSecurityGroupRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ValidateSecurityGroupRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ValidateSecurityGroupRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ValidateSecurityGroupRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ValidateSecurityGroupRequest::getCallerType()const
{
	return callerType_;
}

void ValidateSecurityGroupRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string ValidateSecurityGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ValidateSecurityGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ValidateSecurityGroupRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ValidateSecurityGroupRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

int ValidateSecurityGroupRequest::getSourcePort()const
{
	return sourcePort_;
}

void ValidateSecurityGroupRequest::setSourcePort(int sourcePort)
{
	sourcePort_ = sourcePort;
	setParameter("SourcePort", std::to_string(sourcePort));
}

std::string ValidateSecurityGroupRequest::getSourceIp()const
{
	return sourceIp_;
}

void ValidateSecurityGroupRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ValidateSecurityGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void ValidateSecurityGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ValidateSecurityGroupRequest::getRegionId()const
{
	return regionId_;
}

void ValidateSecurityGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool ValidateSecurityGroupRequest::getEnable()const
{
	return enable_;
}

void ValidateSecurityGroupRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string ValidateSecurityGroupRequest::getRequestContent()const
{
	return requestContent_;
}

void ValidateSecurityGroupRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ValidateSecurityGroupRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ValidateSecurityGroupRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string ValidateSecurityGroupRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ValidateSecurityGroupRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long ValidateSecurityGroupRequest::getCallerUid()const
{
	return callerUid_;
}

void ValidateSecurityGroupRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string ValidateSecurityGroupRequest::getDirection()const
{
	return direction_;
}

void ValidateSecurityGroupRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setParameter("Direction", direction);
}

std::string ValidateSecurityGroupRequest::getDestIp()const
{
	return destIp_;
}

void ValidateSecurityGroupRequest::setDestIp(const std::string& destIp)
{
	destIp_ = destIp;
	setParameter("DestIp", destIp);
}

std::string ValidateSecurityGroupRequest::getApp_ip()const
{
	return app_ip_;
}

void ValidateSecurityGroupRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string ValidateSecurityGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ValidateSecurityGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ValidateSecurityGroupRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void ValidateSecurityGroupRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

std::string ValidateSecurityGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ValidateSecurityGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ValidateSecurityGroupRequest::getCallerBid()const
{
	return callerBid_;
}

void ValidateSecurityGroupRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long ValidateSecurityGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void ValidateSecurityGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool ValidateSecurityGroupRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ValidateSecurityGroupRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool ValidateSecurityGroupRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ValidateSecurityGroupRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool ValidateSecurityGroupRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ValidateSecurityGroupRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string ValidateSecurityGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void ValidateSecurityGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ValidateSecurityGroupRequest::getRequestId()const
{
	return requestId_;
}

void ValidateSecurityGroupRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

int ValidateSecurityGroupRequest::getDestPort()const
{
	return destPort_;
}

void ValidateSecurityGroupRequest::setDestPort(int destPort)
{
	destPort_ = destPort;
	setParameter("DestPort", std::to_string(destPort));
}


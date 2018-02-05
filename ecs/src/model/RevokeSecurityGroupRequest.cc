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

#include <alibabacloud/ecs/model/RevokeSecurityGroupRequest.h>

using AlibabaCloud::Ecs::Model::RevokeSecurityGroupRequest;

RevokeSecurityGroupRequest::RevokeSecurityGroupRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "RevokeSecurityGroup")
{}

RevokeSecurityGroupRequest::~RevokeSecurityGroupRequest()
{}

std::string RevokeSecurityGroupRequest::getNicType()const
{
	return nicType_;
}

void RevokeSecurityGroupRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setParameter("NicType", nicType);
}

long RevokeSecurityGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RevokeSecurityGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RevokeSecurityGroupRequest::getSourcePortRange()const
{
	return sourcePortRange_;
}

void RevokeSecurityGroupRequest::setSourcePortRange(const std::string& sourcePortRange)
{
	sourcePortRange_ = sourcePortRange;
	setParameter("SourcePortRange", sourcePortRange);
}

std::string RevokeSecurityGroupRequest::getClientToken()const
{
	return clientToken_;
}

void RevokeSecurityGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long RevokeSecurityGroupRequest::getCallerParentId()const
{
	return callerParentId_;
}

void RevokeSecurityGroupRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string RevokeSecurityGroupRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void RevokeSecurityGroupRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

bool RevokeSecurityGroupRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RevokeSecurityGroupRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string RevokeSecurityGroupRequest::getDescription()const
{
	return description_;
}

void RevokeSecurityGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string RevokeSecurityGroupRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RevokeSecurityGroupRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string RevokeSecurityGroupRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void RevokeSecurityGroupRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string RevokeSecurityGroupRequest::getCallerType()const
{
	return callerType_;
}

void RevokeSecurityGroupRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string RevokeSecurityGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RevokeSecurityGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RevokeSecurityGroupRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void RevokeSecurityGroupRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

long RevokeSecurityGroupRequest::getSourceGroupOwnerId()const
{
	return sourceGroupOwnerId_;
}

void RevokeSecurityGroupRequest::setSourceGroupOwnerId(long sourceGroupOwnerId)
{
	sourceGroupOwnerId_ = sourceGroupOwnerId;
	setParameter("SourceGroupOwnerId", std::to_string(sourceGroupOwnerId));
}

std::string RevokeSecurityGroupRequest::getSourceGroupOwnerAccount()const
{
	return sourceGroupOwnerAccount_;
}

void RevokeSecurityGroupRequest::setSourceGroupOwnerAccount(const std::string& sourceGroupOwnerAccount)
{
	sourceGroupOwnerAccount_ = sourceGroupOwnerAccount;
	setParameter("SourceGroupOwnerAccount", sourceGroupOwnerAccount);
}

std::string RevokeSecurityGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void RevokeSecurityGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string RevokeSecurityGroupRequest::getRegionId()const
{
	return regionId_;
}

void RevokeSecurityGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool RevokeSecurityGroupRequest::getEnable()const
{
	return enable_;
}

void RevokeSecurityGroupRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string RevokeSecurityGroupRequest::getRequestContent()const
{
	return requestContent_;
}

void RevokeSecurityGroupRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string RevokeSecurityGroupRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void RevokeSecurityGroupRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string RevokeSecurityGroupRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void RevokeSecurityGroupRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long RevokeSecurityGroupRequest::getCallerUid()const
{
	return callerUid_;
}

void RevokeSecurityGroupRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string RevokeSecurityGroupRequest::getPolicy()const
{
	return policy_;
}

void RevokeSecurityGroupRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setParameter("Policy", policy);
}

std::string RevokeSecurityGroupRequest::getApp_ip()const
{
	return app_ip_;
}

void RevokeSecurityGroupRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string RevokeSecurityGroupRequest::getPortRange()const
{
	return portRange_;
}

void RevokeSecurityGroupRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setParameter("PortRange", portRange);
}

std::string RevokeSecurityGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RevokeSecurityGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RevokeSecurityGroupRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void RevokeSecurityGroupRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

std::string RevokeSecurityGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RevokeSecurityGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string RevokeSecurityGroupRequest::getSourceCidrIp()const
{
	return sourceCidrIp_;
}

void RevokeSecurityGroupRequest::setSourceCidrIp(const std::string& sourceCidrIp)
{
	sourceCidrIp_ = sourceCidrIp;
	setParameter("SourceCidrIp", sourceCidrIp);
}

std::string RevokeSecurityGroupRequest::getCallerBid()const
{
	return callerBid_;
}

void RevokeSecurityGroupRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long RevokeSecurityGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void RevokeSecurityGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RevokeSecurityGroupRequest::getPriority()const
{
	return priority_;
}

void RevokeSecurityGroupRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setParameter("Priority", priority);
}

std::string RevokeSecurityGroupRequest::getDestCidrIp()const
{
	return destCidrIp_;
}

void RevokeSecurityGroupRequest::setDestCidrIp(const std::string& destCidrIp)
{
	destCidrIp_ = destCidrIp;
	setParameter("DestCidrIp", destCidrIp);
}

bool RevokeSecurityGroupRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void RevokeSecurityGroupRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool RevokeSecurityGroupRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void RevokeSecurityGroupRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool RevokeSecurityGroupRequest::getSecurity_transport()const
{
	return security_transport_;
}

void RevokeSecurityGroupRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string RevokeSecurityGroupRequest::getRequestId()const
{
	return requestId_;
}

void RevokeSecurityGroupRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string RevokeSecurityGroupRequest::getSourceGroupId()const
{
	return sourceGroupId_;
}

void RevokeSecurityGroupRequest::setSourceGroupId(const std::string& sourceGroupId)
{
	sourceGroupId_ = sourceGroupId;
	setParameter("SourceGroupId", sourceGroupId);
}


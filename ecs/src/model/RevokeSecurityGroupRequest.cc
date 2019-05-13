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
	setCoreParameter("NicType", nicType);
}

long RevokeSecurityGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RevokeSecurityGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RevokeSecurityGroupRequest::getSourcePortRange()const
{
	return sourcePortRange_;
}

void RevokeSecurityGroupRequest::setSourcePortRange(const std::string& sourcePortRange)
{
	sourcePortRange_ = sourcePortRange;
	setCoreParameter("SourcePortRange", sourcePortRange);
}

std::string RevokeSecurityGroupRequest::getClientToken()const
{
	return clientToken_;
}

void RevokeSecurityGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long RevokeSecurityGroupRequest::getCallerParentId()const
{
	return callerParentId_;
}

void RevokeSecurityGroupRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string RevokeSecurityGroupRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void RevokeSecurityGroupRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

bool RevokeSecurityGroupRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RevokeSecurityGroupRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string RevokeSecurityGroupRequest::getDescription()const
{
	return description_;
}

void RevokeSecurityGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string RevokeSecurityGroupRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RevokeSecurityGroupRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string RevokeSecurityGroupRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void RevokeSecurityGroupRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string RevokeSecurityGroupRequest::getCallerType()const
{
	return callerType_;
}

void RevokeSecurityGroupRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string RevokeSecurityGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RevokeSecurityGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RevokeSecurityGroupRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void RevokeSecurityGroupRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long RevokeSecurityGroupRequest::getSourceGroupOwnerId()const
{
	return sourceGroupOwnerId_;
}

void RevokeSecurityGroupRequest::setSourceGroupOwnerId(long sourceGroupOwnerId)
{
	sourceGroupOwnerId_ = sourceGroupOwnerId;
	setCoreParameter("SourceGroupOwnerId", std::to_string(sourceGroupOwnerId));
}

std::string RevokeSecurityGroupRequest::getSourceGroupOwnerAccount()const
{
	return sourceGroupOwnerAccount_;
}

void RevokeSecurityGroupRequest::setSourceGroupOwnerAccount(const std::string& sourceGroupOwnerAccount)
{
	sourceGroupOwnerAccount_ = sourceGroupOwnerAccount;
	setCoreParameter("SourceGroupOwnerAccount", sourceGroupOwnerAccount);
}

std::string RevokeSecurityGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void RevokeSecurityGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string RevokeSecurityGroupRequest::getRegionId()const
{
	return regionId_;
}

void RevokeSecurityGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool RevokeSecurityGroupRequest::getEnable()const
{
	return enable_;
}

void RevokeSecurityGroupRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string RevokeSecurityGroupRequest::getRequestContent()const
{
	return requestContent_;
}

void RevokeSecurityGroupRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string RevokeSecurityGroupRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void RevokeSecurityGroupRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string RevokeSecurityGroupRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void RevokeSecurityGroupRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long RevokeSecurityGroupRequest::getCallerUid()const
{
	return callerUid_;
}

void RevokeSecurityGroupRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string RevokeSecurityGroupRequest::getIpv6DestCidrIp()const
{
	return ipv6DestCidrIp_;
}

void RevokeSecurityGroupRequest::setIpv6DestCidrIp(const std::string& ipv6DestCidrIp)
{
	ipv6DestCidrIp_ = ipv6DestCidrIp;
	setCoreParameter("Ipv6DestCidrIp", ipv6DestCidrIp);
}

std::string RevokeSecurityGroupRequest::getIpv6SourceCidrIp()const
{
	return ipv6SourceCidrIp_;
}

void RevokeSecurityGroupRequest::setIpv6SourceCidrIp(const std::string& ipv6SourceCidrIp)
{
	ipv6SourceCidrIp_ = ipv6SourceCidrIp;
	setCoreParameter("Ipv6SourceCidrIp", ipv6SourceCidrIp);
}

std::string RevokeSecurityGroupRequest::getPolicy()const
{
	return policy_;
}

void RevokeSecurityGroupRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setCoreParameter("Policy", policy);
}

std::string RevokeSecurityGroupRequest::getApp_ip()const
{
	return app_ip_;
}

void RevokeSecurityGroupRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string RevokeSecurityGroupRequest::getPortRange()const
{
	return portRange_;
}

void RevokeSecurityGroupRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setCoreParameter("PortRange", portRange);
}

std::string RevokeSecurityGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RevokeSecurityGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RevokeSecurityGroupRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void RevokeSecurityGroupRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setCoreParameter("IpProtocol", ipProtocol);
}

std::string RevokeSecurityGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RevokeSecurityGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string RevokeSecurityGroupRequest::getSourceCidrIp()const
{
	return sourceCidrIp_;
}

void RevokeSecurityGroupRequest::setSourceCidrIp(const std::string& sourceCidrIp)
{
	sourceCidrIp_ = sourceCidrIp;
	setCoreParameter("SourceCidrIp", sourceCidrIp);
}

std::string RevokeSecurityGroupRequest::getCallerBid()const
{
	return callerBid_;
}

void RevokeSecurityGroupRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long RevokeSecurityGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void RevokeSecurityGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string RevokeSecurityGroupRequest::getPriority()const
{
	return priority_;
}

void RevokeSecurityGroupRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setCoreParameter("Priority", priority);
}

std::string RevokeSecurityGroupRequest::getDestCidrIp()const
{
	return destCidrIp_;
}

void RevokeSecurityGroupRequest::setDestCidrIp(const std::string& destCidrIp)
{
	destCidrIp_ = destCidrIp;
	setCoreParameter("DestCidrIp", destCidrIp);
}

bool RevokeSecurityGroupRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void RevokeSecurityGroupRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool RevokeSecurityGroupRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void RevokeSecurityGroupRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool RevokeSecurityGroupRequest::getSecurity_transport()const
{
	return security_transport_;
}

void RevokeSecurityGroupRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string RevokeSecurityGroupRequest::getRequestId()const
{
	return requestId_;
}

void RevokeSecurityGroupRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string RevokeSecurityGroupRequest::getSourceGroupId()const
{
	return sourceGroupId_;
}

void RevokeSecurityGroupRequest::setSourceGroupId(const std::string& sourceGroupId)
{
	sourceGroupId_ = sourceGroupId;
	setCoreParameter("SourceGroupId", sourceGroupId);
}


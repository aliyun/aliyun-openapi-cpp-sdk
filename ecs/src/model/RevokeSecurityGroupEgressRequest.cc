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

#include <alibabacloud/ecs/model/RevokeSecurityGroupEgressRequest.h>

using AlibabaCloud::Ecs::Model::RevokeSecurityGroupEgressRequest;

RevokeSecurityGroupEgressRequest::RevokeSecurityGroupEgressRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "RevokeSecurityGroupEgress")
{}

RevokeSecurityGroupEgressRequest::~RevokeSecurityGroupEgressRequest()
{}

std::string RevokeSecurityGroupEgressRequest::getNicType()const
{
	return nicType_;
}

void RevokeSecurityGroupEgressRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setCoreParameter("NicType", nicType);
}

long RevokeSecurityGroupEgressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RevokeSecurityGroupEgressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RevokeSecurityGroupEgressRequest::getSourcePortRange()const
{
	return sourcePortRange_;
}

void RevokeSecurityGroupEgressRequest::setSourcePortRange(const std::string& sourcePortRange)
{
	sourcePortRange_ = sourcePortRange;
	setCoreParameter("SourcePortRange", sourcePortRange);
}

std::string RevokeSecurityGroupEgressRequest::getClientToken()const
{
	return clientToken_;
}

void RevokeSecurityGroupEgressRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long RevokeSecurityGroupEgressRequest::getCallerParentId()const
{
	return callerParentId_;
}

void RevokeSecurityGroupEgressRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string RevokeSecurityGroupEgressRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void RevokeSecurityGroupEgressRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

bool RevokeSecurityGroupEgressRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RevokeSecurityGroupEgressRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string RevokeSecurityGroupEgressRequest::getDescription()const
{
	return description_;
}

void RevokeSecurityGroupEgressRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string RevokeSecurityGroupEgressRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RevokeSecurityGroupEgressRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string RevokeSecurityGroupEgressRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void RevokeSecurityGroupEgressRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string RevokeSecurityGroupEgressRequest::getCallerType()const
{
	return callerType_;
}

void RevokeSecurityGroupEgressRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string RevokeSecurityGroupEgressRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RevokeSecurityGroupEgressRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RevokeSecurityGroupEgressRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void RevokeSecurityGroupEgressRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string RevokeSecurityGroupEgressRequest::getSecurityToken()const
{
	return securityToken_;
}

void RevokeSecurityGroupEgressRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string RevokeSecurityGroupEgressRequest::getRegionId()const
{
	return regionId_;
}

void RevokeSecurityGroupEgressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool RevokeSecurityGroupEgressRequest::getEnable()const
{
	return enable_;
}

void RevokeSecurityGroupEgressRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string RevokeSecurityGroupEgressRequest::getRequestContent()const
{
	return requestContent_;
}

void RevokeSecurityGroupEgressRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string RevokeSecurityGroupEgressRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void RevokeSecurityGroupEgressRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string RevokeSecurityGroupEgressRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void RevokeSecurityGroupEgressRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long RevokeSecurityGroupEgressRequest::getCallerUid()const
{
	return callerUid_;
}

void RevokeSecurityGroupEgressRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string RevokeSecurityGroupEgressRequest::getIpv6DestCidrIp()const
{
	return ipv6DestCidrIp_;
}

void RevokeSecurityGroupEgressRequest::setIpv6DestCidrIp(const std::string& ipv6DestCidrIp)
{
	ipv6DestCidrIp_ = ipv6DestCidrIp;
	setCoreParameter("Ipv6DestCidrIp", ipv6DestCidrIp);
}

std::string RevokeSecurityGroupEgressRequest::getIpv6SourceCidrIp()const
{
	return ipv6SourceCidrIp_;
}

void RevokeSecurityGroupEgressRequest::setIpv6SourceCidrIp(const std::string& ipv6SourceCidrIp)
{
	ipv6SourceCidrIp_ = ipv6SourceCidrIp;
	setCoreParameter("Ipv6SourceCidrIp", ipv6SourceCidrIp);
}

std::string RevokeSecurityGroupEgressRequest::getPolicy()const
{
	return policy_;
}

void RevokeSecurityGroupEgressRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setCoreParameter("Policy", policy);
}

std::string RevokeSecurityGroupEgressRequest::getApp_ip()const
{
	return app_ip_;
}

void RevokeSecurityGroupEgressRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string RevokeSecurityGroupEgressRequest::getPortRange()const
{
	return portRange_;
}

void RevokeSecurityGroupEgressRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setCoreParameter("PortRange", portRange);
}

std::string RevokeSecurityGroupEgressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RevokeSecurityGroupEgressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RevokeSecurityGroupEgressRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void RevokeSecurityGroupEgressRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setCoreParameter("IpProtocol", ipProtocol);
}

std::string RevokeSecurityGroupEgressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RevokeSecurityGroupEgressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string RevokeSecurityGroupEgressRequest::getSourceCidrIp()const
{
	return sourceCidrIp_;
}

void RevokeSecurityGroupEgressRequest::setSourceCidrIp(const std::string& sourceCidrIp)
{
	sourceCidrIp_ = sourceCidrIp;
	setCoreParameter("SourceCidrIp", sourceCidrIp);
}

std::string RevokeSecurityGroupEgressRequest::getCallerBid()const
{
	return callerBid_;
}

void RevokeSecurityGroupEgressRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string RevokeSecurityGroupEgressRequest::getDestGroupId()const
{
	return destGroupId_;
}

void RevokeSecurityGroupEgressRequest::setDestGroupId(const std::string& destGroupId)
{
	destGroupId_ = destGroupId;
	setCoreParameter("DestGroupId", destGroupId);
}

long RevokeSecurityGroupEgressRequest::getOwnerId()const
{
	return ownerId_;
}

void RevokeSecurityGroupEgressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string RevokeSecurityGroupEgressRequest::getDestGroupOwnerAccount()const
{
	return destGroupOwnerAccount_;
}

void RevokeSecurityGroupEgressRequest::setDestGroupOwnerAccount(const std::string& destGroupOwnerAccount)
{
	destGroupOwnerAccount_ = destGroupOwnerAccount;
	setCoreParameter("DestGroupOwnerAccount", destGroupOwnerAccount);
}

std::string RevokeSecurityGroupEgressRequest::getPriority()const
{
	return priority_;
}

void RevokeSecurityGroupEgressRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setCoreParameter("Priority", priority);
}

std::string RevokeSecurityGroupEgressRequest::getDestCidrIp()const
{
	return destCidrIp_;
}

void RevokeSecurityGroupEgressRequest::setDestCidrIp(const std::string& destCidrIp)
{
	destCidrIp_ = destCidrIp;
	setCoreParameter("DestCidrIp", destCidrIp);
}

bool RevokeSecurityGroupEgressRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void RevokeSecurityGroupEgressRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool RevokeSecurityGroupEgressRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void RevokeSecurityGroupEgressRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool RevokeSecurityGroupEgressRequest::getSecurity_transport()const
{
	return security_transport_;
}

void RevokeSecurityGroupEgressRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

long RevokeSecurityGroupEgressRequest::getDestGroupOwnerId()const
{
	return destGroupOwnerId_;
}

void RevokeSecurityGroupEgressRequest::setDestGroupOwnerId(long destGroupOwnerId)
{
	destGroupOwnerId_ = destGroupOwnerId;
	setCoreParameter("DestGroupOwnerId", std::to_string(destGroupOwnerId));
}

std::string RevokeSecurityGroupEgressRequest::getRequestId()const
{
	return requestId_;
}

void RevokeSecurityGroupEgressRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string RevokeSecurityGroupEgressRequest::getAkProxy()const
{
	return akProxy_;
}

void RevokeSecurityGroupEgressRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}


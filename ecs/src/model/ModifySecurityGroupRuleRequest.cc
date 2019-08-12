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

#include <alibabacloud/ecs/model/ModifySecurityGroupRuleRequest.h>

using AlibabaCloud::Ecs::Model::ModifySecurityGroupRuleRequest;

ModifySecurityGroupRuleRequest::ModifySecurityGroupRuleRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifySecurityGroupRule")
{}

ModifySecurityGroupRuleRequest::~ModifySecurityGroupRuleRequest()
{}

std::string ModifySecurityGroupRuleRequest::getNicType()const
{
	return nicType_;
}

void ModifySecurityGroupRuleRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setCoreParameter("NicType", nicType);
}

long ModifySecurityGroupRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySecurityGroupRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifySecurityGroupRuleRequest::getSourcePortRange()const
{
	return sourcePortRange_;
}

void ModifySecurityGroupRuleRequest::setSourcePortRange(const std::string& sourcePortRange)
{
	sourcePortRange_ = sourcePortRange;
	setCoreParameter("SourcePortRange", sourcePortRange);
}

std::string ModifySecurityGroupRuleRequest::getClientToken()const
{
	return clientToken_;
}

void ModifySecurityGroupRuleRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long ModifySecurityGroupRuleRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifySecurityGroupRuleRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::string ModifySecurityGroupRuleRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void ModifySecurityGroupRuleRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

bool ModifySecurityGroupRuleRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifySecurityGroupRuleRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string ModifySecurityGroupRuleRequest::getDescription()const
{
	return description_;
}

void ModifySecurityGroupRuleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifySecurityGroupRuleRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifySecurityGroupRuleRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifySecurityGroupRuleRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifySecurityGroupRuleRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifySecurityGroupRuleRequest::getCallerType()const
{
	return callerType_;
}

void ModifySecurityGroupRuleRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ModifySecurityGroupRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySecurityGroupRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifySecurityGroupRuleRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ModifySecurityGroupRuleRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long ModifySecurityGroupRuleRequest::getSourceGroupOwnerId()const
{
	return sourceGroupOwnerId_;
}

void ModifySecurityGroupRuleRequest::setSourceGroupOwnerId(long sourceGroupOwnerId)
{
	sourceGroupOwnerId_ = sourceGroupOwnerId;
	setCoreParameter("SourceGroupOwnerId", sourceGroupOwnerId);
}

std::string ModifySecurityGroupRuleRequest::getSourceGroupOwnerAccount()const
{
	return sourceGroupOwnerAccount_;
}

void ModifySecurityGroupRuleRequest::setSourceGroupOwnerAccount(const std::string& sourceGroupOwnerAccount)
{
	sourceGroupOwnerAccount_ = sourceGroupOwnerAccount;
	setCoreParameter("SourceGroupOwnerAccount", sourceGroupOwnerAccount);
}

std::string ModifySecurityGroupRuleRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifySecurityGroupRuleRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifySecurityGroupRuleRequest::getRegionId()const
{
	return regionId_;
}

void ModifySecurityGroupRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ModifySecurityGroupRuleRequest::getEnable()const
{
	return enable_;
}

void ModifySecurityGroupRuleRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string ModifySecurityGroupRuleRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifySecurityGroupRuleRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifySecurityGroupRuleRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifySecurityGroupRuleRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifySecurityGroupRuleRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifySecurityGroupRuleRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifySecurityGroupRuleRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifySecurityGroupRuleRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string ModifySecurityGroupRuleRequest::getIpv6SourceCidrIp()const
{
	return ipv6SourceCidrIp_;
}

void ModifySecurityGroupRuleRequest::setIpv6SourceCidrIp(const std::string& ipv6SourceCidrIp)
{
	ipv6SourceCidrIp_ = ipv6SourceCidrIp;
	setCoreParameter("Ipv6SourceCidrIp", ipv6SourceCidrIp);
}

std::string ModifySecurityGroupRuleRequest::getIpv6DestCidrIp()const
{
	return ipv6DestCidrIp_;
}

void ModifySecurityGroupRuleRequest::setIpv6DestCidrIp(const std::string& ipv6DestCidrIp)
{
	ipv6DestCidrIp_ = ipv6DestCidrIp;
	setCoreParameter("Ipv6DestCidrIp", ipv6DestCidrIp);
}

std::string ModifySecurityGroupRuleRequest::getPolicy()const
{
	return policy_;
}

void ModifySecurityGroupRuleRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setCoreParameter("Policy", policy);
}

std::string ModifySecurityGroupRuleRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifySecurityGroupRuleRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifySecurityGroupRuleRequest::getPortRange()const
{
	return portRange_;
}

void ModifySecurityGroupRuleRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setCoreParameter("PortRange", portRange);
}

std::string ModifySecurityGroupRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySecurityGroupRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifySecurityGroupRuleRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void ModifySecurityGroupRuleRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setCoreParameter("IpProtocol", ipProtocol);
}

std::string ModifySecurityGroupRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySecurityGroupRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifySecurityGroupRuleRequest::getSourceCidrIp()const
{
	return sourceCidrIp_;
}

void ModifySecurityGroupRuleRequest::setSourceCidrIp(const std::string& sourceCidrIp)
{
	sourceCidrIp_ = sourceCidrIp;
	setCoreParameter("SourceCidrIp", sourceCidrIp);
}

std::string ModifySecurityGroupRuleRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifySecurityGroupRuleRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifySecurityGroupRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySecurityGroupRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifySecurityGroupRuleRequest::getPriority()const
{
	return priority_;
}

void ModifySecurityGroupRuleRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setCoreParameter("Priority", priority);
}

std::string ModifySecurityGroupRuleRequest::getDestCidrIp()const
{
	return destCidrIp_;
}

void ModifySecurityGroupRuleRequest::setDestCidrIp(const std::string& destCidrIp)
{
	destCidrIp_ = destCidrIp;
	setCoreParameter("DestCidrIp", destCidrIp);
}

bool ModifySecurityGroupRuleRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifySecurityGroupRuleRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool ModifySecurityGroupRuleRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifySecurityGroupRuleRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool ModifySecurityGroupRuleRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifySecurityGroupRuleRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string ModifySecurityGroupRuleRequest::getRequestId()const
{
	return requestId_;
}

void ModifySecurityGroupRuleRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ModifySecurityGroupRuleRequest::getAkProxy()const
{
	return akProxy_;
}

void ModifySecurityGroupRuleRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string ModifySecurityGroupRuleRequest::getSourceGroupId()const
{
	return sourceGroupId_;
}

void ModifySecurityGroupRuleRequest::setSourceGroupId(const std::string& sourceGroupId)
{
	sourceGroupId_ = sourceGroupId;
	setCoreParameter("SourceGroupId", sourceGroupId);
}


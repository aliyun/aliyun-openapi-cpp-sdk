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

#include <alibabacloud/ecs/model/ModifySecurityGroupEgressRuleRequest.h>

using AlibabaCloud::Ecs::Model::ModifySecurityGroupEgressRuleRequest;

ModifySecurityGroupEgressRuleRequest::ModifySecurityGroupEgressRuleRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifySecurityGroupEgressRule")
{}

ModifySecurityGroupEgressRuleRequest::~ModifySecurityGroupEgressRuleRequest()
{}

std::string ModifySecurityGroupEgressRuleRequest::getNicType()const
{
	return nicType_;
}

void ModifySecurityGroupEgressRuleRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setCoreParameter("NicType", nicType);
}

bool ModifySecurityGroupEgressRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySecurityGroupEgressRuleRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

std::string ModifySecurityGroupEgressRuleRequest::getSourcePortRange()const
{
	return sourcePortRange_;
}

void ModifySecurityGroupEgressRuleRequest::setSourcePortRange(const std::string& sourcePortRange)
{
	sourcePortRange_ = sourcePortRange;
	setCoreParameter("SourcePortRange", sourcePortRange);
}

std::string ModifySecurityGroupEgressRuleRequest::getClientToken()const
{
	return clientToken_;
}

void ModifySecurityGroupEgressRuleRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

bool ModifySecurityGroupEgressRuleRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifySecurityGroupEgressRuleRequest::setCallerParentId(bool callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId ? "true" : "false");
}

std::string ModifySecurityGroupEgressRuleRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void ModifySecurityGroupEgressRuleRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

bool ModifySecurityGroupEgressRuleRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifySecurityGroupEgressRuleRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifySecurityGroupEgressRuleRequest::getDescription()const
{
	return description_;
}

void ModifySecurityGroupEgressRuleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifySecurityGroupEgressRuleRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifySecurityGroupEgressRuleRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifySecurityGroupEgressRuleRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifySecurityGroupEgressRuleRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifySecurityGroupEgressRuleRequest::getCallerType()const
{
	return callerType_;
}

void ModifySecurityGroupEgressRuleRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ModifySecurityGroupEgressRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySecurityGroupEgressRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifySecurityGroupEgressRuleRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ModifySecurityGroupEgressRuleRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string ModifySecurityGroupEgressRuleRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifySecurityGroupEgressRuleRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifySecurityGroupEgressRuleRequest::getRegionId()const
{
	return regionId_;
}

void ModifySecurityGroupEgressRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ModifySecurityGroupEgressRuleRequest::getEnable()const
{
	return enable_;
}

void ModifySecurityGroupEgressRuleRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string ModifySecurityGroupEgressRuleRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifySecurityGroupEgressRuleRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifySecurityGroupEgressRuleRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifySecurityGroupEgressRuleRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifySecurityGroupEgressRuleRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifySecurityGroupEgressRuleRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

bool ModifySecurityGroupEgressRuleRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifySecurityGroupEgressRuleRequest::setCallerUid(bool callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid ? "true" : "false");
}

std::string ModifySecurityGroupEgressRuleRequest::getIpv6DestCidrIp()const
{
	return ipv6DestCidrIp_;
}

void ModifySecurityGroupEgressRuleRequest::setIpv6DestCidrIp(const std::string& ipv6DestCidrIp)
{
	ipv6DestCidrIp_ = ipv6DestCidrIp;
	setCoreParameter("Ipv6DestCidrIp", ipv6DestCidrIp);
}

std::string ModifySecurityGroupEgressRuleRequest::getIpv6SourceCidrIp()const
{
	return ipv6SourceCidrIp_;
}

void ModifySecurityGroupEgressRuleRequest::setIpv6SourceCidrIp(const std::string& ipv6SourceCidrIp)
{
	ipv6SourceCidrIp_ = ipv6SourceCidrIp;
	setCoreParameter("Ipv6SourceCidrIp", ipv6SourceCidrIp);
}

std::string ModifySecurityGroupEgressRuleRequest::getPolicy()const
{
	return policy_;
}

void ModifySecurityGroupEgressRuleRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setCoreParameter("Policy", policy);
}

std::string ModifySecurityGroupEgressRuleRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifySecurityGroupEgressRuleRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifySecurityGroupEgressRuleRequest::getPortRange()const
{
	return portRange_;
}

void ModifySecurityGroupEgressRuleRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setCoreParameter("PortRange", portRange);
}

std::string ModifySecurityGroupEgressRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySecurityGroupEgressRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifySecurityGroupEgressRuleRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void ModifySecurityGroupEgressRuleRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setCoreParameter("IpProtocol", ipProtocol);
}

std::string ModifySecurityGroupEgressRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySecurityGroupEgressRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifySecurityGroupEgressRuleRequest::getSourceCidrIp()const
{
	return sourceCidrIp_;
}

void ModifySecurityGroupEgressRuleRequest::setSourceCidrIp(const std::string& sourceCidrIp)
{
	sourceCidrIp_ = sourceCidrIp;
	setCoreParameter("SourceCidrIp", sourceCidrIp);
}

std::string ModifySecurityGroupEgressRuleRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifySecurityGroupEgressRuleRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string ModifySecurityGroupEgressRuleRequest::getDestGroupId()const
{
	return destGroupId_;
}

void ModifySecurityGroupEgressRuleRequest::setDestGroupId(const std::string& destGroupId)
{
	destGroupId_ = destGroupId;
	setCoreParameter("DestGroupId", destGroupId);
}

bool ModifySecurityGroupEgressRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySecurityGroupEgressRuleRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

std::string ModifySecurityGroupEgressRuleRequest::getDestGroupOwnerAccount()const
{
	return destGroupOwnerAccount_;
}

void ModifySecurityGroupEgressRuleRequest::setDestGroupOwnerAccount(const std::string& destGroupOwnerAccount)
{
	destGroupOwnerAccount_ = destGroupOwnerAccount;
	setCoreParameter("DestGroupOwnerAccount", destGroupOwnerAccount);
}

std::string ModifySecurityGroupEgressRuleRequest::getPriority()const
{
	return priority_;
}

void ModifySecurityGroupEgressRuleRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setCoreParameter("Priority", priority);
}

std::string ModifySecurityGroupEgressRuleRequest::getDestCidrIp()const
{
	return destCidrIp_;
}

void ModifySecurityGroupEgressRuleRequest::setDestCidrIp(const std::string& destCidrIp)
{
	destCidrIp_ = destCidrIp;
	setCoreParameter("DestCidrIp", destCidrIp);
}

bool ModifySecurityGroupEgressRuleRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifySecurityGroupEgressRuleRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifySecurityGroupEgressRuleRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifySecurityGroupEgressRuleRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ModifySecurityGroupEgressRuleRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifySecurityGroupEgressRuleRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

bool ModifySecurityGroupEgressRuleRequest::getDestGroupOwnerId()const
{
	return destGroupOwnerId_;
}

void ModifySecurityGroupEgressRuleRequest::setDestGroupOwnerId(bool destGroupOwnerId)
{
	destGroupOwnerId_ = destGroupOwnerId;
	setCoreParameter("DestGroupOwnerId", destGroupOwnerId ? "true" : "false");
}

std::string ModifySecurityGroupEgressRuleRequest::getRequestId()const
{
	return requestId_;
}

void ModifySecurityGroupEgressRuleRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ModifySecurityGroupEgressRuleRequest::getAkProxy()const
{
	return akProxy_;
}

void ModifySecurityGroupEgressRuleRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}


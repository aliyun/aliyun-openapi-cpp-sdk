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

#include <alibabacloud/ecs/model/AuthorizeSecurityGroupRequest.h>

using AlibabaCloud::Ecs::Model::AuthorizeSecurityGroupRequest;

AuthorizeSecurityGroupRequest::AuthorizeSecurityGroupRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AuthorizeSecurityGroup")
{}

AuthorizeSecurityGroupRequest::~AuthorizeSecurityGroupRequest()
{}

std::string AuthorizeSecurityGroupRequest::getNicType()const
{
	return nicType_;
}

void AuthorizeSecurityGroupRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setCoreParameter("NicType", nicType);
}

long AuthorizeSecurityGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AuthorizeSecurityGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string AuthorizeSecurityGroupRequest::getSourcePortRange()const
{
	return sourcePortRange_;
}

void AuthorizeSecurityGroupRequest::setSourcePortRange(const std::string& sourcePortRange)
{
	sourcePortRange_ = sourcePortRange;
	setCoreParameter("SourcePortRange", sourcePortRange);
}

std::string AuthorizeSecurityGroupRequest::getClientToken()const
{
	return clientToken_;
}

void AuthorizeSecurityGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long AuthorizeSecurityGroupRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AuthorizeSecurityGroupRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::string AuthorizeSecurityGroupRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void AuthorizeSecurityGroupRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

bool AuthorizeSecurityGroupRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void AuthorizeSecurityGroupRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string AuthorizeSecurityGroupRequest::getDescription()const
{
	return description_;
}

void AuthorizeSecurityGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string AuthorizeSecurityGroupRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void AuthorizeSecurityGroupRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string AuthorizeSecurityGroupRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void AuthorizeSecurityGroupRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string AuthorizeSecurityGroupRequest::getCallerType()const
{
	return callerType_;
}

void AuthorizeSecurityGroupRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string AuthorizeSecurityGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AuthorizeSecurityGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AuthorizeSecurityGroupRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void AuthorizeSecurityGroupRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long AuthorizeSecurityGroupRequest::getSourceGroupOwnerId()const
{
	return sourceGroupOwnerId_;
}

void AuthorizeSecurityGroupRequest::setSourceGroupOwnerId(long sourceGroupOwnerId)
{
	sourceGroupOwnerId_ = sourceGroupOwnerId;
	setCoreParameter("SourceGroupOwnerId", sourceGroupOwnerId);
}

std::string AuthorizeSecurityGroupRequest::getSourceGroupOwnerAccount()const
{
	return sourceGroupOwnerAccount_;
}

void AuthorizeSecurityGroupRequest::setSourceGroupOwnerAccount(const std::string& sourceGroupOwnerAccount)
{
	sourceGroupOwnerAccount_ = sourceGroupOwnerAccount;
	setCoreParameter("SourceGroupOwnerAccount", sourceGroupOwnerAccount);
}

std::string AuthorizeSecurityGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void AuthorizeSecurityGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string AuthorizeSecurityGroupRequest::getRegionId()const
{
	return regionId_;
}

void AuthorizeSecurityGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool AuthorizeSecurityGroupRequest::getEnable()const
{
	return enable_;
}

void AuthorizeSecurityGroupRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string AuthorizeSecurityGroupRequest::getRequestContent()const
{
	return requestContent_;
}

void AuthorizeSecurityGroupRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string AuthorizeSecurityGroupRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void AuthorizeSecurityGroupRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string AuthorizeSecurityGroupRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void AuthorizeSecurityGroupRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long AuthorizeSecurityGroupRequest::getCallerUid()const
{
	return callerUid_;
}

void AuthorizeSecurityGroupRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string AuthorizeSecurityGroupRequest::getIpv6SourceCidrIp()const
{
	return ipv6SourceCidrIp_;
}

void AuthorizeSecurityGroupRequest::setIpv6SourceCidrIp(const std::string& ipv6SourceCidrIp)
{
	ipv6SourceCidrIp_ = ipv6SourceCidrIp;
	setCoreParameter("Ipv6SourceCidrIp", ipv6SourceCidrIp);
}

std::string AuthorizeSecurityGroupRequest::getIpv6DestCidrIp()const
{
	return ipv6DestCidrIp_;
}

void AuthorizeSecurityGroupRequest::setIpv6DestCidrIp(const std::string& ipv6DestCidrIp)
{
	ipv6DestCidrIp_ = ipv6DestCidrIp;
	setCoreParameter("Ipv6DestCidrIp", ipv6DestCidrIp);
}

std::string AuthorizeSecurityGroupRequest::getPolicy()const
{
	return policy_;
}

void AuthorizeSecurityGroupRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setCoreParameter("Policy", policy);
}

std::string AuthorizeSecurityGroupRequest::getApp_ip()const
{
	return app_ip_;
}

void AuthorizeSecurityGroupRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string AuthorizeSecurityGroupRequest::getPortRange()const
{
	return portRange_;
}

void AuthorizeSecurityGroupRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setCoreParameter("PortRange", portRange);
}

std::string AuthorizeSecurityGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AuthorizeSecurityGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AuthorizeSecurityGroupRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void AuthorizeSecurityGroupRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setCoreParameter("IpProtocol", ipProtocol);
}

std::string AuthorizeSecurityGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AuthorizeSecurityGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AuthorizeSecurityGroupRequest::getSourceCidrIp()const
{
	return sourceCidrIp_;
}

void AuthorizeSecurityGroupRequest::setSourceCidrIp(const std::string& sourceCidrIp)
{
	sourceCidrIp_ = sourceCidrIp;
	setCoreParameter("SourceCidrIp", sourceCidrIp);
}

std::string AuthorizeSecurityGroupRequest::getCallerBid()const
{
	return callerBid_;
}

void AuthorizeSecurityGroupRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long AuthorizeSecurityGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void AuthorizeSecurityGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string AuthorizeSecurityGroupRequest::getPriority()const
{
	return priority_;
}

void AuthorizeSecurityGroupRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setCoreParameter("Priority", priority);
}

std::string AuthorizeSecurityGroupRequest::getDestCidrIp()const
{
	return destCidrIp_;
}

void AuthorizeSecurityGroupRequest::setDestCidrIp(const std::string& destCidrIp)
{
	destCidrIp_ = destCidrIp;
	setCoreParameter("DestCidrIp", destCidrIp);
}

bool AuthorizeSecurityGroupRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void AuthorizeSecurityGroupRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool AuthorizeSecurityGroupRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void AuthorizeSecurityGroupRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool AuthorizeSecurityGroupRequest::getSecurity_transport()const
{
	return security_transport_;
}

void AuthorizeSecurityGroupRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string AuthorizeSecurityGroupRequest::getRequestId()const
{
	return requestId_;
}

void AuthorizeSecurityGroupRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string AuthorizeSecurityGroupRequest::getAkProxy()const
{
	return akProxy_;
}

void AuthorizeSecurityGroupRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string AuthorizeSecurityGroupRequest::getSourceGroupId()const
{
	return sourceGroupId_;
}

void AuthorizeSecurityGroupRequest::setSourceGroupId(const std::string& sourceGroupId)
{
	sourceGroupId_ = sourceGroupId;
	setCoreParameter("SourceGroupId", sourceGroupId);
}


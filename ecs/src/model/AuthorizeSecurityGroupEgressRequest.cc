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

#include <alibabacloud/ecs/model/AuthorizeSecurityGroupEgressRequest.h>

using AlibabaCloud::Ecs::Model::AuthorizeSecurityGroupEgressRequest;

AuthorizeSecurityGroupEgressRequest::AuthorizeSecurityGroupEgressRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AuthorizeSecurityGroupEgress")
{}

AuthorizeSecurityGroupEgressRequest::~AuthorizeSecurityGroupEgressRequest()
{}

std::string AuthorizeSecurityGroupEgressRequest::getNicType()const
{
	return nicType_;
}

void AuthorizeSecurityGroupEgressRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setCoreParameter("NicType", std::to_string(nicType));
}

long AuthorizeSecurityGroupEgressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AuthorizeSecurityGroupEgressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string AuthorizeSecurityGroupEgressRequest::getSourcePortRange()const
{
	return sourcePortRange_;
}

void AuthorizeSecurityGroupEgressRequest::setSourcePortRange(const std::string& sourcePortRange)
{
	sourcePortRange_ = sourcePortRange;
	setCoreParameter("SourcePortRange", std::to_string(sourcePortRange));
}

std::string AuthorizeSecurityGroupEgressRequest::getClientToken()const
{
	return clientToken_;
}

void AuthorizeSecurityGroupEgressRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

long AuthorizeSecurityGroupEgressRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AuthorizeSecurityGroupEgressRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::string AuthorizeSecurityGroupEgressRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void AuthorizeSecurityGroupEgressRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", std::to_string(securityGroupId));
}

bool AuthorizeSecurityGroupEgressRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void AuthorizeSecurityGroupEgressRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string AuthorizeSecurityGroupEgressRequest::getDescription()const
{
	return description_;
}

void AuthorizeSecurityGroupEgressRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string AuthorizeSecurityGroupEgressRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void AuthorizeSecurityGroupEgressRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string AuthorizeSecurityGroupEgressRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void AuthorizeSecurityGroupEgressRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string AuthorizeSecurityGroupEgressRequest::getCallerType()const
{
	return callerType_;
}

void AuthorizeSecurityGroupEgressRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string AuthorizeSecurityGroupEgressRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AuthorizeSecurityGroupEgressRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string AuthorizeSecurityGroupEgressRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void AuthorizeSecurityGroupEgressRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

std::string AuthorizeSecurityGroupEgressRequest::getSecurityToken()const
{
	return securityToken_;
}

void AuthorizeSecurityGroupEgressRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string AuthorizeSecurityGroupEgressRequest::getRegionId()const
{
	return regionId_;
}

void AuthorizeSecurityGroupEgressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool AuthorizeSecurityGroupEgressRequest::getEnable()const
{
	return enable_;
}

void AuthorizeSecurityGroupEgressRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string AuthorizeSecurityGroupEgressRequest::getRequestContent()const
{
	return requestContent_;
}

void AuthorizeSecurityGroupEgressRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string AuthorizeSecurityGroupEgressRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void AuthorizeSecurityGroupEgressRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string AuthorizeSecurityGroupEgressRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void AuthorizeSecurityGroupEgressRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long AuthorizeSecurityGroupEgressRequest::getCallerUid()const
{
	return callerUid_;
}

void AuthorizeSecurityGroupEgressRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string AuthorizeSecurityGroupEgressRequest::getIpv6DestCidrIp()const
{
	return ipv6DestCidrIp_;
}

void AuthorizeSecurityGroupEgressRequest::setIpv6DestCidrIp(const std::string& ipv6DestCidrIp)
{
	ipv6DestCidrIp_ = ipv6DestCidrIp;
	setCoreParameter("Ipv6DestCidrIp", std::to_string(ipv6DestCidrIp));
}

std::string AuthorizeSecurityGroupEgressRequest::getIpv6SourceCidrIp()const
{
	return ipv6SourceCidrIp_;
}

void AuthorizeSecurityGroupEgressRequest::setIpv6SourceCidrIp(const std::string& ipv6SourceCidrIp)
{
	ipv6SourceCidrIp_ = ipv6SourceCidrIp;
	setCoreParameter("Ipv6SourceCidrIp", std::to_string(ipv6SourceCidrIp));
}

std::string AuthorizeSecurityGroupEgressRequest::getPolicy()const
{
	return policy_;
}

void AuthorizeSecurityGroupEgressRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setCoreParameter("Policy", std::to_string(policy));
}

std::string AuthorizeSecurityGroupEgressRequest::getApp_ip()const
{
	return app_ip_;
}

void AuthorizeSecurityGroupEgressRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string AuthorizeSecurityGroupEgressRequest::getPortRange()const
{
	return portRange_;
}

void AuthorizeSecurityGroupEgressRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setCoreParameter("PortRange", std::to_string(portRange));
}

std::string AuthorizeSecurityGroupEgressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AuthorizeSecurityGroupEgressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string AuthorizeSecurityGroupEgressRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void AuthorizeSecurityGroupEgressRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setCoreParameter("IpProtocol", std::to_string(ipProtocol));
}

std::string AuthorizeSecurityGroupEgressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AuthorizeSecurityGroupEgressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string AuthorizeSecurityGroupEgressRequest::getSourceCidrIp()const
{
	return sourceCidrIp_;
}

void AuthorizeSecurityGroupEgressRequest::setSourceCidrIp(const std::string& sourceCidrIp)
{
	sourceCidrIp_ = sourceCidrIp;
	setCoreParameter("SourceCidrIp", std::to_string(sourceCidrIp));
}

std::string AuthorizeSecurityGroupEgressRequest::getCallerBid()const
{
	return callerBid_;
}

void AuthorizeSecurityGroupEgressRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

std::string AuthorizeSecurityGroupEgressRequest::getDestGroupId()const
{
	return destGroupId_;
}

void AuthorizeSecurityGroupEgressRequest::setDestGroupId(const std::string& destGroupId)
{
	destGroupId_ = destGroupId;
	setCoreParameter("DestGroupId", std::to_string(destGroupId));
}

long AuthorizeSecurityGroupEgressRequest::getOwnerId()const
{
	return ownerId_;
}

void AuthorizeSecurityGroupEgressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string AuthorizeSecurityGroupEgressRequest::getDestGroupOwnerAccount()const
{
	return destGroupOwnerAccount_;
}

void AuthorizeSecurityGroupEgressRequest::setDestGroupOwnerAccount(const std::string& destGroupOwnerAccount)
{
	destGroupOwnerAccount_ = destGroupOwnerAccount;
	setCoreParameter("DestGroupOwnerAccount", std::to_string(destGroupOwnerAccount));
}

std::string AuthorizeSecurityGroupEgressRequest::getPriority()const
{
	return priority_;
}

void AuthorizeSecurityGroupEgressRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setCoreParameter("Priority", std::to_string(priority));
}

std::string AuthorizeSecurityGroupEgressRequest::getDestCidrIp()const
{
	return destCidrIp_;
}

void AuthorizeSecurityGroupEgressRequest::setDestCidrIp(const std::string& destCidrIp)
{
	destCidrIp_ = destCidrIp;
	setCoreParameter("DestCidrIp", std::to_string(destCidrIp));
}

bool AuthorizeSecurityGroupEgressRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void AuthorizeSecurityGroupEgressRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool AuthorizeSecurityGroupEgressRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void AuthorizeSecurityGroupEgressRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool AuthorizeSecurityGroupEgressRequest::getSecurity_transport()const
{
	return security_transport_;
}

void AuthorizeSecurityGroupEgressRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

long AuthorizeSecurityGroupEgressRequest::getDestGroupOwnerId()const
{
	return destGroupOwnerId_;
}

void AuthorizeSecurityGroupEgressRequest::setDestGroupOwnerId(long destGroupOwnerId)
{
	destGroupOwnerId_ = destGroupOwnerId;
	setCoreParameter("DestGroupOwnerId", destGroupOwnerId);
}

std::string AuthorizeSecurityGroupEgressRequest::getRequestId()const
{
	return requestId_;
}

void AuthorizeSecurityGroupEgressRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string AuthorizeSecurityGroupEgressRequest::getAkProxy()const
{
	return akProxy_;
}

void AuthorizeSecurityGroupEgressRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}


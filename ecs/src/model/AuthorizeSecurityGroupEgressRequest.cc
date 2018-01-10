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

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

AuthorizeSecurityGroupEgressRequest::AuthorizeSecurityGroupEgressRequest() :
	EcsRequest("AuthorizeSecurityGroupEgress")
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
	setParameter("NicType", nicType);
}

long AuthorizeSecurityGroupEgressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AuthorizeSecurityGroupEgressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AuthorizeSecurityGroupEgressRequest::getSourcePortRange()const
{
	return sourcePortRange_;
}

void AuthorizeSecurityGroupEgressRequest::setSourcePortRange(const std::string& sourcePortRange)
{
	sourcePortRange_ = sourcePortRange;
	setParameter("SourcePortRange", sourcePortRange);
}

std::string AuthorizeSecurityGroupEgressRequest::getClientToken()const
{
	return clientToken_;
}

void AuthorizeSecurityGroupEgressRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long AuthorizeSecurityGroupEgressRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AuthorizeSecurityGroupEgressRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string AuthorizeSecurityGroupEgressRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void AuthorizeSecurityGroupEgressRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

bool AuthorizeSecurityGroupEgressRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void AuthorizeSecurityGroupEgressRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string AuthorizeSecurityGroupEgressRequest::getDescription()const
{
	return description_;
}

void AuthorizeSecurityGroupEgressRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string AuthorizeSecurityGroupEgressRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void AuthorizeSecurityGroupEgressRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string AuthorizeSecurityGroupEgressRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void AuthorizeSecurityGroupEgressRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string AuthorizeSecurityGroupEgressRequest::getCallerType()const
{
	return callerType_;
}

void AuthorizeSecurityGroupEgressRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string AuthorizeSecurityGroupEgressRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AuthorizeSecurityGroupEgressRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AuthorizeSecurityGroupEgressRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AuthorizeSecurityGroupEgressRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string AuthorizeSecurityGroupEgressRequest::getSecurityToken()const
{
	return securityToken_;
}

void AuthorizeSecurityGroupEgressRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string AuthorizeSecurityGroupEgressRequest::getRegionId()const
{
	return regionId_;
}

void AuthorizeSecurityGroupEgressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool AuthorizeSecurityGroupEgressRequest::getEnable()const
{
	return enable_;
}

void AuthorizeSecurityGroupEgressRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string AuthorizeSecurityGroupEgressRequest::getRequestContent()const
{
	return requestContent_;
}

void AuthorizeSecurityGroupEgressRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string AuthorizeSecurityGroupEgressRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void AuthorizeSecurityGroupEgressRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string AuthorizeSecurityGroupEgressRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void AuthorizeSecurityGroupEgressRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long AuthorizeSecurityGroupEgressRequest::getCallerUid()const
{
	return callerUid_;
}

void AuthorizeSecurityGroupEgressRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string AuthorizeSecurityGroupEgressRequest::getPolicy()const
{
	return policy_;
}

void AuthorizeSecurityGroupEgressRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setParameter("Policy", policy);
}

std::string AuthorizeSecurityGroupEgressRequest::getApp_ip()const
{
	return app_ip_;
}

void AuthorizeSecurityGroupEgressRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string AuthorizeSecurityGroupEgressRequest::getPortRange()const
{
	return portRange_;
}

void AuthorizeSecurityGroupEgressRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setParameter("PortRange", portRange);
}

std::string AuthorizeSecurityGroupEgressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AuthorizeSecurityGroupEgressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AuthorizeSecurityGroupEgressRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void AuthorizeSecurityGroupEgressRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

std::string AuthorizeSecurityGroupEgressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AuthorizeSecurityGroupEgressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string AuthorizeSecurityGroupEgressRequest::getSourceCidrIp()const
{
	return sourceCidrIp_;
}

void AuthorizeSecurityGroupEgressRequest::setSourceCidrIp(const std::string& sourceCidrIp)
{
	sourceCidrIp_ = sourceCidrIp;
	setParameter("SourceCidrIp", sourceCidrIp);
}

std::string AuthorizeSecurityGroupEgressRequest::getCallerBid()const
{
	return callerBid_;
}

void AuthorizeSecurityGroupEgressRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

std::string AuthorizeSecurityGroupEgressRequest::getDestGroupId()const
{
	return destGroupId_;
}

void AuthorizeSecurityGroupEgressRequest::setDestGroupId(const std::string& destGroupId)
{
	destGroupId_ = destGroupId;
	setParameter("DestGroupId", destGroupId);
}

long AuthorizeSecurityGroupEgressRequest::getOwnerId()const
{
	return ownerId_;
}

void AuthorizeSecurityGroupEgressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AuthorizeSecurityGroupEgressRequest::getDestGroupOwnerAccount()const
{
	return destGroupOwnerAccount_;
}

void AuthorizeSecurityGroupEgressRequest::setDestGroupOwnerAccount(const std::string& destGroupOwnerAccount)
{
	destGroupOwnerAccount_ = destGroupOwnerAccount;
	setParameter("DestGroupOwnerAccount", destGroupOwnerAccount);
}

std::string AuthorizeSecurityGroupEgressRequest::getPriority()const
{
	return priority_;
}

void AuthorizeSecurityGroupEgressRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setParameter("Priority", priority);
}

std::string AuthorizeSecurityGroupEgressRequest::getDestCidrIp()const
{
	return destCidrIp_;
}

void AuthorizeSecurityGroupEgressRequest::setDestCidrIp(const std::string& destCidrIp)
{
	destCidrIp_ = destCidrIp;
	setParameter("DestCidrIp", destCidrIp);
}

bool AuthorizeSecurityGroupEgressRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void AuthorizeSecurityGroupEgressRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool AuthorizeSecurityGroupEgressRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void AuthorizeSecurityGroupEgressRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool AuthorizeSecurityGroupEgressRequest::getSecurity_transport()const
{
	return security_transport_;
}

void AuthorizeSecurityGroupEgressRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

long AuthorizeSecurityGroupEgressRequest::getDestGroupOwnerId()const
{
	return destGroupOwnerId_;
}

void AuthorizeSecurityGroupEgressRequest::setDestGroupOwnerId(long destGroupOwnerId)
{
	destGroupOwnerId_ = destGroupOwnerId;
	setParameter("DestGroupOwnerId", std::to_string(destGroupOwnerId));
}

std::string AuthorizeSecurityGroupEgressRequest::getRequestId()const
{
	return requestId_;
}

void AuthorizeSecurityGroupEgressRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}


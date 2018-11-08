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

#include <alibabacloud/ecs/model/DescribeCloudAssistantStatusRequest.h>

using AlibabaCloud::Ecs::Model::DescribeCloudAssistantStatusRequest;

DescribeCloudAssistantStatusRequest::DescribeCloudAssistantStatusRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeCloudAssistantStatus")
{}

DescribeCloudAssistantStatusRequest::~DescribeCloudAssistantStatusRequest()
{}

long DescribeCloudAssistantStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCloudAssistantStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeCloudAssistantStatusRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeCloudAssistantStatusRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeCloudAssistantStatusRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeCloudAssistantStatusRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeCloudAssistantStatusRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeCloudAssistantStatusRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeCloudAssistantStatusRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeCloudAssistantStatusRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeCloudAssistantStatusRequest::getCallerType()const
{
	return callerType_;
}

void DescribeCloudAssistantStatusRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeCloudAssistantStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCloudAssistantStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeCloudAssistantStatusRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeCloudAssistantStatusRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeCloudAssistantStatusRequest::getRegionId()const
{
	return regionId_;
}

void DescribeCloudAssistantStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeCloudAssistantStatusRequest::getEnable()const
{
	return enable_;
}

void DescribeCloudAssistantStatusRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DescribeCloudAssistantStatusRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeCloudAssistantStatusRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeCloudAssistantStatusRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeCloudAssistantStatusRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeCloudAssistantStatusRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeCloudAssistantStatusRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeCloudAssistantStatusRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeCloudAssistantStatusRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeCloudAssistantStatusRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeCloudAssistantStatusRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeCloudAssistantStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCloudAssistantStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCloudAssistantStatusRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCloudAssistantStatusRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeCloudAssistantStatusRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeCloudAssistantStatusRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeCloudAssistantStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCloudAssistantStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeCloudAssistantStatusRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeCloudAssistantStatusRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeCloudAssistantStatusRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeCloudAssistantStatusRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeCloudAssistantStatusRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeCloudAssistantStatusRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::vector<std::string> DescribeCloudAssistantStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeCloudAssistantStatusRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int i = 0; i!= instanceId.size(); i++)
		setParameter("InstanceId."+ std::to_string(i), instanceId.at(i));
}

std::string DescribeCloudAssistantStatusRequest::getRequestId()const
{
	return requestId_;
}

void DescribeCloudAssistantStatusRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}


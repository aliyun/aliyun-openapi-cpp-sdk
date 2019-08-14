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

#include <alibabacloud/ecs/model/StopInvocationRequest.h>

using AlibabaCloud::Ecs::Model::StopInvocationRequest;

StopInvocationRequest::StopInvocationRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "StopInvocation")
{}

StopInvocationRequest::~StopInvocationRequest()
{}

long StopInvocationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StopInvocationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long StopInvocationRequest::getCallerParentId()const
{
	return callerParentId_;
}

void StopInvocationRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool StopInvocationRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void StopInvocationRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string StopInvocationRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void StopInvocationRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string StopInvocationRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void StopInvocationRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string StopInvocationRequest::getCallerType()const
{
	return callerType_;
}

void StopInvocationRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string StopInvocationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StopInvocationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string StopInvocationRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void StopInvocationRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string StopInvocationRequest::getSecurityToken()const
{
	return securityToken_;
}

void StopInvocationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string StopInvocationRequest::getRegionId()const
{
	return regionId_;
}

void StopInvocationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool StopInvocationRequest::getEnable()const
{
	return enable_;
}

void StopInvocationRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string StopInvocationRequest::getRequestContent()const
{
	return requestContent_;
}

void StopInvocationRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string StopInvocationRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void StopInvocationRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string StopInvocationRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void StopInvocationRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long StopInvocationRequest::getCallerUid()const
{
	return callerUid_;
}

void StopInvocationRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string StopInvocationRequest::getInvokeId()const
{
	return invokeId_;
}

void StopInvocationRequest::setInvokeId(const std::string& invokeId)
{
	invokeId_ = invokeId;
	setCoreParameter("InvokeId", invokeId);
}

std::string StopInvocationRequest::getApp_ip()const
{
	return app_ip_;
}

void StopInvocationRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string StopInvocationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void StopInvocationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string StopInvocationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void StopInvocationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string StopInvocationRequest::getCallerBid()const
{
	return callerBid_;
}

void StopInvocationRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long StopInvocationRequest::getOwnerId()const
{
	return ownerId_;
}

void StopInvocationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool StopInvocationRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void StopInvocationRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool StopInvocationRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void StopInvocationRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool StopInvocationRequest::getSecurity_transport()const
{
	return security_transport_;
}

void StopInvocationRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::vector<std::string> StopInvocationRequest::getInstanceId()const
{
	return instanceId_;
}

void StopInvocationRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int i = 0; i!= instanceId.size(); i++)
		setCoreParameter("InstanceId."+ std::to_string(i), instanceId.at(i));
}

std::string StopInvocationRequest::getRequestId()const
{
	return requestId_;
}

void StopInvocationRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string StopInvocationRequest::getAkProxy()const
{
	return akProxy_;
}

void StopInvocationRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}


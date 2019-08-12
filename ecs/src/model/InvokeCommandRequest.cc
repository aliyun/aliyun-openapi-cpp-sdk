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

#include <alibabacloud/ecs/model/InvokeCommandRequest.h>

using AlibabaCloud::Ecs::Model::InvokeCommandRequest;

InvokeCommandRequest::InvokeCommandRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "InvokeCommand")
{}

InvokeCommandRequest::~InvokeCommandRequest()
{}

long InvokeCommandRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void InvokeCommandRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long InvokeCommandRequest::getCallerParentId()const
{
	return callerParentId_;
}

void InvokeCommandRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool InvokeCommandRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void InvokeCommandRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string InvokeCommandRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void InvokeCommandRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string InvokeCommandRequest::getCommandId()const
{
	return commandId_;
}

void InvokeCommandRequest::setCommandId(const std::string& commandId)
{
	commandId_ = commandId;
	setCoreParameter("CommandId", commandId);
}

std::string InvokeCommandRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void InvokeCommandRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string InvokeCommandRequest::getCallerType()const
{
	return callerType_;
}

void InvokeCommandRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string InvokeCommandRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void InvokeCommandRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string InvokeCommandRequest::getFrequency()const
{
	return frequency_;
}

void InvokeCommandRequest::setFrequency(const std::string& frequency)
{
	frequency_ = frequency;
	setCoreParameter("Frequency", frequency);
}

std::string InvokeCommandRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void InvokeCommandRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string InvokeCommandRequest::getSecurityToken()const
{
	return securityToken_;
}

void InvokeCommandRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string InvokeCommandRequest::getRegionId()const
{
	return regionId_;
}

void InvokeCommandRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool InvokeCommandRequest::getEnable()const
{
	return enable_;
}

void InvokeCommandRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string InvokeCommandRequest::getRequestContent()const
{
	return requestContent_;
}

void InvokeCommandRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string InvokeCommandRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void InvokeCommandRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string InvokeCommandRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void InvokeCommandRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long InvokeCommandRequest::getCallerUid()const
{
	return callerUid_;
}

void InvokeCommandRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string InvokeCommandRequest::getApp_ip()const
{
	return app_ip_;
}

void InvokeCommandRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

bool InvokeCommandRequest::getTimed()const
{
	return timed_;
}

void InvokeCommandRequest::setTimed(bool timed)
{
	timed_ = timed;
	setCoreParameter("Timed", timed);
}

std::string InvokeCommandRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void InvokeCommandRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string InvokeCommandRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void InvokeCommandRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string InvokeCommandRequest::getCallerBid()const
{
	return callerBid_;
}

void InvokeCommandRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long InvokeCommandRequest::getOwnerId()const
{
	return ownerId_;
}

void InvokeCommandRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool InvokeCommandRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void InvokeCommandRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool InvokeCommandRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void InvokeCommandRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool InvokeCommandRequest::getSecurity_transport()const
{
	return security_transport_;
}

void InvokeCommandRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::vector<std::string> InvokeCommandRequest::getInstanceId()const
{
	return instanceId_;
}

void InvokeCommandRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int i = 0; i!= instanceId.size(); i++)
		setCoreParameter("InstanceId."+ std::to_string(i), std::to_string(instanceId.at(i)));
}

std::string InvokeCommandRequest::getRequestId()const
{
	return requestId_;
}

void InvokeCommandRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string InvokeCommandRequest::getAkProxy()const
{
	return akProxy_;
}

void InvokeCommandRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::map<std::string, std::string> InvokeCommandRequest::getParameters()const
{
	return parameters_;
}

void InvokeCommandRequest::setParameters(const std::map<std::string, std::string>& parameters)
{
	parameters_ = parameters;
	setJsonParameters("Parameters", parameters);
}


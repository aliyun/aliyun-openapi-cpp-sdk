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

#include <alibabacloud/ecs/model/ReportInstancesStatusRequest.h>

using AlibabaCloud::Ecs::Model::ReportInstancesStatusRequest;

ReportInstancesStatusRequest::ReportInstancesStatusRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ReportInstancesStatus")
{}

ReportInstancesStatusRequest::~ReportInstancesStatusRequest()
{}

std::string ReportInstancesStatusRequest::getReason()const
{
	return reason_;
}

void ReportInstancesStatusRequest::setReason(const std::string& reason)
{
	reason_ = reason;
	setCoreParameter("Reason", reason);
}

long ReportInstancesStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReportInstancesStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ReportInstancesStatusRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ReportInstancesStatusRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool ReportInstancesStatusRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ReportInstancesStatusRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ReportInstancesStatusRequest::getDescription()const
{
	return description_;
}

void ReportInstancesStatusRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ReportInstancesStatusRequest::getStartTime()const
{
	return startTime_;
}

void ReportInstancesStatusRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string ReportInstancesStatusRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ReportInstancesStatusRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ReportInstancesStatusRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ReportInstancesStatusRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ReportInstancesStatusRequest::getCallerType()const
{
	return callerType_;
}

void ReportInstancesStatusRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ReportInstancesStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReportInstancesStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ReportInstancesStatusRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ReportInstancesStatusRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string ReportInstancesStatusRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ReportInstancesStatusRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string ReportInstancesStatusRequest::getSecurityToken()const
{
	return securityToken_;
}

void ReportInstancesStatusRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ReportInstancesStatusRequest::getRegionId()const
{
	return regionId_;
}

void ReportInstancesStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ReportInstancesStatusRequest::getEnable()const
{
	return enable_;
}

void ReportInstancesStatusRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string ReportInstancesStatusRequest::getRequestContent()const
{
	return requestContent_;
}

void ReportInstancesStatusRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ReportInstancesStatusRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ReportInstancesStatusRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::vector<std::string> ReportInstancesStatusRequest::getDiskId()const
{
	return diskId_;
}

void ReportInstancesStatusRequest::setDiskId(const std::vector<std::string>& diskId)
{
	diskId_ = diskId;
	for(int i = 0; i!= diskId.size(); i++)
		setCoreParameter("DiskId."+ std::to_string(i), diskId.at(i));
}

std::string ReportInstancesStatusRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ReportInstancesStatusRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ReportInstancesStatusRequest::getCallerUid()const
{
	return callerUid_;
}

void ReportInstancesStatusRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string ReportInstancesStatusRequest::getApp_ip()const
{
	return app_ip_;
}

void ReportInstancesStatusRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ReportInstancesStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReportInstancesStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReportInstancesStatusRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReportInstancesStatusRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ReportInstancesStatusRequest::getEndTime()const
{
	return endTime_;
}

void ReportInstancesStatusRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string ReportInstancesStatusRequest::getCallerBid()const
{
	return callerBid_;
}

void ReportInstancesStatusRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ReportInstancesStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void ReportInstancesStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool ReportInstancesStatusRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ReportInstancesStatusRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ReportInstancesStatusRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ReportInstancesStatusRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ReportInstancesStatusRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ReportInstancesStatusRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::vector<std::string> ReportInstancesStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void ReportInstancesStatusRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int i = 0; i!= instanceId.size(); i++)
		setCoreParameter("InstanceId."+ std::to_string(i), instanceId.at(i));
}

std::string ReportInstancesStatusRequest::getRequestId()const
{
	return requestId_;
}

void ReportInstancesStatusRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ReportInstancesStatusRequest::getAkProxy()const
{
	return akProxy_;
}

void ReportInstancesStatusRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::vector<std::string> ReportInstancesStatusRequest::getDevice()const
{
	return device_;
}

void ReportInstancesStatusRequest::setDevice(const std::vector<std::string>& device)
{
	device_ = device;
	for(int i = 0; i!= device.size(); i++)
		setCoreParameter("Device."+ std::to_string(i), device.at(i));
}


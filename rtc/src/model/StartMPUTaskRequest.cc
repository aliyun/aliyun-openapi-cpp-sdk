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

#include <alibabacloud/rtc/model/StartMPUTaskRequest.h>

using AlibabaCloud::Rtc::Model::StartMPUTaskRequest;

StartMPUTaskRequest::StartMPUTaskRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "StartMPUTask")
{}

StartMPUTaskRequest::~StartMPUTaskRequest()
{}

long StartMPUTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StartMPUTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::vector<StartMPUTaskRequest::UserPanes> StartMPUTaskRequest::getUserPanes()const
{
	return userPanes_;
}

void StartMPUTaskRequest::setUserPanes(const std::vector<UserPanes>& userPanes)
{
	userPanes_ = userPanes;
	int i = 0;
	for(int i = 0; i!= userPanes.size(); i++)	{
		auto obj = userPanes.at(i);
		std::string str ="UserPanes."+ std::to_string(i);
		setCoreParameter(str + ".PaneId", obj.paneId);
		setCoreParameter(str + ".UserId", std::to_string(obj.userId));
		setCoreParameter(str + ".SourceType", std::to_string(obj.sourceType));
	}
}

long StartMPUTaskRequest::getCallerParentId()const
{
	return callerParentId_;
}

void StartMPUTaskRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool StartMPUTaskRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void StartMPUTaskRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string StartMPUTaskRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void StartMPUTaskRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string StartMPUTaskRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void StartMPUTaskRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string StartMPUTaskRequest::getCallerType()const
{
	return callerType_;
}

void StartMPUTaskRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string StartMPUTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartMPUTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

int StartMPUTaskRequest::getBackgroundColor()const
{
	return backgroundColor_;
}

void StartMPUTaskRequest::setBackgroundColor(int backgroundColor)
{
	backgroundColor_ = backgroundColor;
	setCoreParameter("BackgroundColor", backgroundColor);
}

int StartMPUTaskRequest::getCropMode()const
{
	return cropMode_;
}

void StartMPUTaskRequest::setCropMode(int cropMode)
{
	cropMode_ = cropMode;
	setCoreParameter("CropMode", cropMode);
}

std::string StartMPUTaskRequest::getSecurityToken()const
{
	return securityToken_;
}

void StartMPUTaskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string StartMPUTaskRequest::getRequestContent()const
{
	return requestContent_;
}

void StartMPUTaskRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string StartMPUTaskRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void StartMPUTaskRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string StartMPUTaskRequest::getTaskProfile()const
{
	return taskProfile_;
}

void StartMPUTaskRequest::setTaskProfile(const std::string& taskProfile)
{
	taskProfile_ = taskProfile;
	setCoreParameter("TaskProfile", std::to_string(taskProfile));
}

std::vector<long> StartMPUTaskRequest::getLayoutIds()const
{
	return layoutIds_;
}

void StartMPUTaskRequest::setLayoutIds(const std::vector<long>& layoutIds)
{
	layoutIds_ = layoutIds;
	for(int i = 0; i!= layoutIds.size(); i++)
		setCoreParameter("LayoutIds."+ std::to_string(i), layoutIds.at(i));
}

std::string StartMPUTaskRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void StartMPUTaskRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

std::string StartMPUTaskRequest::getTaskId()const
{
	return taskId_;
}

void StartMPUTaskRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", std::to_string(taskId));
}

long StartMPUTaskRequest::getCallerUid()const
{
	return callerUid_;
}

void StartMPUTaskRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string StartMPUTaskRequest::getStreamURL()const
{
	return streamURL_;
}

void StartMPUTaskRequest::setStreamURL(const std::string& streamURL)
{
	streamURL_ = streamURL;
	setCoreParameter("StreamURL", std::to_string(streamURL));
}

std::string StartMPUTaskRequest::getApp_ip()const
{
	return app_ip_;
}

void StartMPUTaskRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string StartMPUTaskRequest::getPopProduct()const
{
	return popProduct_;
}

void StartMPUTaskRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string StartMPUTaskRequest::getCallerBid()const
{
	return callerBid_;
}

void StartMPUTaskRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long StartMPUTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void StartMPUTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string StartMPUTaskRequest::getVersion()const
{
	return version_;
}

void StartMPUTaskRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool StartMPUTaskRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void StartMPUTaskRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool StartMPUTaskRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void StartMPUTaskRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool StartMPUTaskRequest::getSecurity_transport()const
{
	return security_transport_;
}

void StartMPUTaskRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string StartMPUTaskRequest::getServiceCode()const
{
	return serviceCode_;
}

void StartMPUTaskRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string StartMPUTaskRequest::getRequestId()const
{
	return requestId_;
}

void StartMPUTaskRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string StartMPUTaskRequest::getAppId()const
{
	return appId_;
}

void StartMPUTaskRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

int StartMPUTaskRequest::getMediaEncode()const
{
	return mediaEncode_;
}

void StartMPUTaskRequest::setMediaEncode(int mediaEncode)
{
	mediaEncode_ = mediaEncode;
	setCoreParameter("MediaEncode", mediaEncode);
}

std::string StartMPUTaskRequest::getChannelId()const
{
	return channelId_;
}

void StartMPUTaskRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", std::to_string(channelId));
}


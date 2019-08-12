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

#include <alibabacloud/rtc/model/UpdateTaskParamRequest.h>

using AlibabaCloud::Rtc::Model::UpdateTaskParamRequest;

UpdateTaskParamRequest::UpdateTaskParamRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "UpdateTaskParam")
{}

UpdateTaskParamRequest::~UpdateTaskParamRequest()
{}

std::vector<UpdateTaskParamRequest::MixPanes> UpdateTaskParamRequest::getMixPanes()const
{
	return mixPanes_;
}

void UpdateTaskParamRequest::setMixPanes(const std::vector<MixPanes>& mixPanes)
{
	mixPanes_ = mixPanes;
	int i = 0;
	for(int i = 0; i!= mixPanes.size(); i++)	{
		auto obj = mixPanes.at(i);
		std::string str ="MixPanes."+ std::to_string(i);
		setCoreParameter(str + ".PaneId", obj.paneId);
		setCoreParameter(str + ".UserId", std::to_string(obj.userId));
		setCoreParameter(str + ".SourceType", std::to_string(obj.sourceType));
	}
}

long UpdateTaskParamRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UpdateTaskParamRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool UpdateTaskParamRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UpdateTaskParamRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string UpdateTaskParamRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UpdateTaskParamRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string UpdateTaskParamRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void UpdateTaskParamRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string UpdateTaskParamRequest::getCallerType()const
{
	return callerType_;
}

void UpdateTaskParamRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string UpdateTaskParamRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateTaskParamRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string UpdateTaskParamRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateTaskParamRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string UpdateTaskParamRequest::getRequestContent()const
{
	return requestContent_;
}

void UpdateTaskParamRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string UpdateTaskParamRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void UpdateTaskParamRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string UpdateTaskParamRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void UpdateTaskParamRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long UpdateTaskParamRequest::getTaskId()const
{
	return taskId_;
}

void UpdateTaskParamRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

long UpdateTaskParamRequest::getCallerUid()const
{
	return callerUid_;
}

void UpdateTaskParamRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string UpdateTaskParamRequest::getApp_ip()const
{
	return app_ip_;
}

void UpdateTaskParamRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string UpdateTaskParamRequest::getPopProduct()const
{
	return popProduct_;
}

void UpdateTaskParamRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string UpdateTaskParamRequest::getCallerBid()const
{
	return callerBid_;
}

void UpdateTaskParamRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long UpdateTaskParamRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateTaskParamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

long UpdateTaskParamRequest::getTemplateId()const
{
	return templateId_;
}

void UpdateTaskParamRequest::setTemplateId(long templateId)
{
	templateId_ = templateId;
	setCoreParameter("TemplateId", templateId);
}

std::string UpdateTaskParamRequest::getVersion()const
{
	return version_;
}

void UpdateTaskParamRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool UpdateTaskParamRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UpdateTaskParamRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool UpdateTaskParamRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UpdateTaskParamRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool UpdateTaskParamRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UpdateTaskParamRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string UpdateTaskParamRequest::getRequestId()const
{
	return requestId_;
}

void UpdateTaskParamRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string UpdateTaskParamRequest::getAppId()const
{
	return appId_;
}

void UpdateTaskParamRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string UpdateTaskParamRequest::getChannelId()const
{
	return channelId_;
}

void UpdateTaskParamRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", std::to_string(channelId));
}


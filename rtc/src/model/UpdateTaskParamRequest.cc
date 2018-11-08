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
		setParameter(str + ".PaneId", std::to_string(obj.paneId));
		setParameter(str + ".UserId", obj.userId);
		setParameter(str + ".SourceType", obj.sourceType);
	}
}

long UpdateTaskParamRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UpdateTaskParamRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool UpdateTaskParamRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UpdateTaskParamRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string UpdateTaskParamRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UpdateTaskParamRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string UpdateTaskParamRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void UpdateTaskParamRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string UpdateTaskParamRequest::getCallerType()const
{
	return callerType_;
}

void UpdateTaskParamRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string UpdateTaskParamRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateTaskParamRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UpdateTaskParamRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateTaskParamRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string UpdateTaskParamRequest::getRequestContent()const
{
	return requestContent_;
}

void UpdateTaskParamRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string UpdateTaskParamRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void UpdateTaskParamRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string UpdateTaskParamRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void UpdateTaskParamRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long UpdateTaskParamRequest::getTaskId()const
{
	return taskId_;
}

void UpdateTaskParamRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", std::to_string(taskId));
}

long UpdateTaskParamRequest::getCallerUid()const
{
	return callerUid_;
}

void UpdateTaskParamRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string UpdateTaskParamRequest::getApp_ip()const
{
	return app_ip_;
}

void UpdateTaskParamRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string UpdateTaskParamRequest::getPopProduct()const
{
	return popProduct_;
}

void UpdateTaskParamRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string UpdateTaskParamRequest::getCallerBid()const
{
	return callerBid_;
}

void UpdateTaskParamRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long UpdateTaskParamRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateTaskParamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long UpdateTaskParamRequest::getTemplateId()const
{
	return templateId_;
}

void UpdateTaskParamRequest::setTemplateId(long templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", std::to_string(templateId));
}

std::string UpdateTaskParamRequest::getVersion()const
{
	return version_;
}

void UpdateTaskParamRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool UpdateTaskParamRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UpdateTaskParamRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool UpdateTaskParamRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UpdateTaskParamRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool UpdateTaskParamRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UpdateTaskParamRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string UpdateTaskParamRequest::getRequestId()const
{
	return requestId_;
}

void UpdateTaskParamRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string UpdateTaskParamRequest::getAppId()const
{
	return appId_;
}

void UpdateTaskParamRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string UpdateTaskParamRequest::getChannelId()const
{
	return channelId_;
}

void UpdateTaskParamRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setParameter("ChannelId", channelId);
}


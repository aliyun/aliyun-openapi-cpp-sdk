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

#include <alibabacloud/cdn/model/CreateUserUsageDataExportTaskRequest.h>

using AlibabaCloud::Cdn::Model::CreateUserUsageDataExportTaskRequest;

CreateUserUsageDataExportTaskRequest::CreateUserUsageDataExportTaskRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "CreateUserUsageDataExportTask")
{}

CreateUserUsageDataExportTaskRequest::~CreateUserUsageDataExportTaskRequest()
{}

long CreateUserUsageDataExportTaskRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateUserUsageDataExportTaskRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateUserUsageDataExportTaskRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateUserUsageDataExportTaskRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateUserUsageDataExportTaskRequest::getTaskName()const
{
	return taskName_;
}

void CreateUserUsageDataExportTaskRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setParameter("TaskName", taskName);
}

std::string CreateUserUsageDataExportTaskRequest::getLanguage()const
{
	return language_;
}

void CreateUserUsageDataExportTaskRequest::setLanguage(const std::string& language)
{
	language_ = language;
	setParameter("Language", language);
}

std::string CreateUserUsageDataExportTaskRequest::getStartTime()const
{
	return startTime_;
}

void CreateUserUsageDataExportTaskRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string CreateUserUsageDataExportTaskRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateUserUsageDataExportTaskRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateUserUsageDataExportTaskRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateUserUsageDataExportTaskRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateUserUsageDataExportTaskRequest::getCallerType()const
{
	return callerType_;
}

void CreateUserUsageDataExportTaskRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string CreateUserUsageDataExportTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateUserUsageDataExportTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateUserUsageDataExportTaskRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateUserUsageDataExportTaskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateUserUsageDataExportTaskRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateUserUsageDataExportTaskRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string CreateUserUsageDataExportTaskRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateUserUsageDataExportTaskRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateUserUsageDataExportTaskRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateUserUsageDataExportTaskRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long CreateUserUsageDataExportTaskRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateUserUsageDataExportTaskRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateUserUsageDataExportTaskRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateUserUsageDataExportTaskRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string CreateUserUsageDataExportTaskRequest::getPopProduct()const
{
	return popProduct_;
}

void CreateUserUsageDataExportTaskRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string CreateUserUsageDataExportTaskRequest::getProduct()const
{
	return product_;
}

void CreateUserUsageDataExportTaskRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string CreateUserUsageDataExportTaskRequest::getEndTime()const
{
	return endTime_;
}

void CreateUserUsageDataExportTaskRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string CreateUserUsageDataExportTaskRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateUserUsageDataExportTaskRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long CreateUserUsageDataExportTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateUserUsageDataExportTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateUserUsageDataExportTaskRequest::getVersion()const
{
	return version_;
}

void CreateUserUsageDataExportTaskRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool CreateUserUsageDataExportTaskRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateUserUsageDataExportTaskRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateUserUsageDataExportTaskRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateUserUsageDataExportTaskRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateUserUsageDataExportTaskRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateUserUsageDataExportTaskRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateUserUsageDataExportTaskRequest::getRequestId()const
{
	return requestId_;
}

void CreateUserUsageDataExportTaskRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}


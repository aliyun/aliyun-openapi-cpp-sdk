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

#include <alibabacloud/cdn/model/DeleteUserUsageDataExportTaskRequest.h>

using AlibabaCloud::Cdn::Model::DeleteUserUsageDataExportTaskRequest;

DeleteUserUsageDataExportTaskRequest::DeleteUserUsageDataExportTaskRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DeleteUserUsageDataExportTask")
{}

DeleteUserUsageDataExportTaskRequest::~DeleteUserUsageDataExportTaskRequest()
{}

std::string DeleteUserUsageDataExportTaskRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteUserUsageDataExportTaskRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DeleteUserUsageDataExportTaskRequest::getPopProduct()const
{
	return popProduct_;
}

void DeleteUserUsageDataExportTaskRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DeleteUserUsageDataExportTaskRequest::getProduct()const
{
	return product_;
}

void DeleteUserUsageDataExportTaskRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

long DeleteUserUsageDataExportTaskRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteUserUsageDataExportTaskRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteUserUsageDataExportTaskRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteUserUsageDataExportTaskRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteUserUsageDataExportTaskRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteUserUsageDataExportTaskRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DeleteUserUsageDataExportTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteUserUsageDataExportTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteUserUsageDataExportTaskRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteUserUsageDataExportTaskRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteUserUsageDataExportTaskRequest::getVersion()const
{
	return version_;
}

void DeleteUserUsageDataExportTaskRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string DeleteUserUsageDataExportTaskRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteUserUsageDataExportTaskRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteUserUsageDataExportTaskRequest::getCallerType()const
{
	return callerType_;
}

void DeleteUserUsageDataExportTaskRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool DeleteUserUsageDataExportTaskRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteUserUsageDataExportTaskRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteUserUsageDataExportTaskRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteUserUsageDataExportTaskRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DeleteUserUsageDataExportTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteUserUsageDataExportTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DeleteUserUsageDataExportTaskRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteUserUsageDataExportTaskRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteUserUsageDataExportTaskRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteUserUsageDataExportTaskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteUserUsageDataExportTaskRequest::getRequestId()const
{
	return requestId_;
}

void DeleteUserUsageDataExportTaskRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DeleteUserUsageDataExportTaskRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteUserUsageDataExportTaskRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DeleteUserUsageDataExportTaskRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteUserUsageDataExportTaskRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteUserUsageDataExportTaskRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteUserUsageDataExportTaskRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

std::string DeleteUserUsageDataExportTaskRequest::getTaskId()const
{
	return taskId_;
}

void DeleteUserUsageDataExportTaskRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

long DeleteUserUsageDataExportTaskRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteUserUsageDataExportTaskRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}


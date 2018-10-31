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

#include <alibabacloud/cdn/model/DeleteUsageDetailDataExportTaskRequest.h>

using AlibabaCloud::Cdn::Model::DeleteUsageDetailDataExportTaskRequest;

DeleteUsageDetailDataExportTaskRequest::DeleteUsageDetailDataExportTaskRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DeleteUsageDetailDataExportTask")
{}

DeleteUsageDetailDataExportTaskRequest::~DeleteUsageDetailDataExportTaskRequest()
{}

std::string DeleteUsageDetailDataExportTaskRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteUsageDetailDataExportTaskRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DeleteUsageDetailDataExportTaskRequest::getPopProduct()const
{
	return popProduct_;
}

void DeleteUsageDetailDataExportTaskRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DeleteUsageDetailDataExportTaskRequest::getProduct()const
{
	return product_;
}

void DeleteUsageDetailDataExportTaskRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long DeleteUsageDetailDataExportTaskRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteUsageDetailDataExportTaskRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteUsageDetailDataExportTaskRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteUsageDetailDataExportTaskRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DeleteUsageDetailDataExportTaskRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteUsageDetailDataExportTaskRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DeleteUsageDetailDataExportTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteUsageDetailDataExportTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteUsageDetailDataExportTaskRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteUsageDetailDataExportTaskRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteUsageDetailDataExportTaskRequest::getVersion()const
{
	return version_;
}

void DeleteUsageDetailDataExportTaskRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string DeleteUsageDetailDataExportTaskRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteUsageDetailDataExportTaskRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteUsageDetailDataExportTaskRequest::getCallerType()const
{
	return callerType_;
}

void DeleteUsageDetailDataExportTaskRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool DeleteUsageDetailDataExportTaskRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteUsageDetailDataExportTaskRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DeleteUsageDetailDataExportTaskRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteUsageDetailDataExportTaskRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string DeleteUsageDetailDataExportTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteUsageDetailDataExportTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DeleteUsageDetailDataExportTaskRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteUsageDetailDataExportTaskRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DeleteUsageDetailDataExportTaskRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteUsageDetailDataExportTaskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteUsageDetailDataExportTaskRequest::getRequestId()const
{
	return requestId_;
}

void DeleteUsageDetailDataExportTaskRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DeleteUsageDetailDataExportTaskRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteUsageDetailDataExportTaskRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DeleteUsageDetailDataExportTaskRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteUsageDetailDataExportTaskRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteUsageDetailDataExportTaskRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteUsageDetailDataExportTaskRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

std::string DeleteUsageDetailDataExportTaskRequest::getTaskId()const
{
	return taskId_;
}

void DeleteUsageDetailDataExportTaskRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

long DeleteUsageDetailDataExportTaskRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteUsageDetailDataExportTaskRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}


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

#include <alibabacloud/cdn/model/CreateUsageDetailDataExportTaskRequest.h>

using AlibabaCloud::Cdn::Model::CreateUsageDetailDataExportTaskRequest;

CreateUsageDetailDataExportTaskRequest::CreateUsageDetailDataExportTaskRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "CreateUsageDetailDataExportTask")
{}

CreateUsageDetailDataExportTaskRequest::~CreateUsageDetailDataExportTaskRequest()
{}

long CreateUsageDetailDataExportTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateUsageDetailDataExportTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long CreateUsageDetailDataExportTaskRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateUsageDetailDataExportTaskRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string CreateUsageDetailDataExportTaskRequest::getDomainNames()const
{
	return domainNames_;
}

void CreateUsageDetailDataExportTaskRequest::setDomainNames(const std::string& domainNames)
{
	domainNames_ = domainNames;
	setCoreParameter("DomainNames", domainNames);
}

bool CreateUsageDetailDataExportTaskRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateUsageDetailDataExportTaskRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateUsageDetailDataExportTaskRequest::getTaskName()const
{
	return taskName_;
}

void CreateUsageDetailDataExportTaskRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setCoreParameter("TaskName", taskName);
}

std::string CreateUsageDetailDataExportTaskRequest::getLanguage()const
{
	return language_;
}

void CreateUsageDetailDataExportTaskRequest::setLanguage(const std::string& language)
{
	language_ = language;
	setCoreParameter("Language", language);
}

std::string CreateUsageDetailDataExportTaskRequest::getStartTime()const
{
	return startTime_;
}

void CreateUsageDetailDataExportTaskRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string CreateUsageDetailDataExportTaskRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateUsageDetailDataExportTaskRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateUsageDetailDataExportTaskRequest::getType()const
{
	return type_;
}

void CreateUsageDetailDataExportTaskRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string CreateUsageDetailDataExportTaskRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateUsageDetailDataExportTaskRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateUsageDetailDataExportTaskRequest::getCallerType()const
{
	return callerType_;
}

void CreateUsageDetailDataExportTaskRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string CreateUsageDetailDataExportTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateUsageDetailDataExportTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateUsageDetailDataExportTaskRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateUsageDetailDataExportTaskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateUsageDetailDataExportTaskRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateUsageDetailDataExportTaskRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string CreateUsageDetailDataExportTaskRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateUsageDetailDataExportTaskRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateUsageDetailDataExportTaskRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateUsageDetailDataExportTaskRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long CreateUsageDetailDataExportTaskRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateUsageDetailDataExportTaskRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateUsageDetailDataExportTaskRequest::getGroup()const
{
	return group_;
}

void CreateUsageDetailDataExportTaskRequest::setGroup(const std::string& group)
{
	group_ = group;
	setCoreParameter("Group", group);
}

std::string CreateUsageDetailDataExportTaskRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateUsageDetailDataExportTaskRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string CreateUsageDetailDataExportTaskRequest::getPopProduct()const
{
	return popProduct_;
}

void CreateUsageDetailDataExportTaskRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string CreateUsageDetailDataExportTaskRequest::getProduct()const
{
	return product_;
}

void CreateUsageDetailDataExportTaskRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

std::string CreateUsageDetailDataExportTaskRequest::getEndTime()const
{
	return endTime_;
}

void CreateUsageDetailDataExportTaskRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string CreateUsageDetailDataExportTaskRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateUsageDetailDataExportTaskRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long CreateUsageDetailDataExportTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateUsageDetailDataExportTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateUsageDetailDataExportTaskRequest::getVersion()const
{
	return version_;
}

void CreateUsageDetailDataExportTaskRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool CreateUsageDetailDataExportTaskRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateUsageDetailDataExportTaskRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateUsageDetailDataExportTaskRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateUsageDetailDataExportTaskRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateUsageDetailDataExportTaskRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateUsageDetailDataExportTaskRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateUsageDetailDataExportTaskRequest::getRequestId()const
{
	return requestId_;
}

void CreateUsageDetailDataExportTaskRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}


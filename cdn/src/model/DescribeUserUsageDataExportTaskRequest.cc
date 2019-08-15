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

#include <alibabacloud/cdn/model/DescribeUserUsageDataExportTaskRequest.h>

using AlibabaCloud::Cdn::Model::DescribeUserUsageDataExportTaskRequest;

DescribeUserUsageDataExportTaskRequest::DescribeUserUsageDataExportTaskRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeUserUsageDataExportTask")
{}

DescribeUserUsageDataExportTaskRequest::~DescribeUserUsageDataExportTaskRequest()
{}

long DescribeUserUsageDataExportTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeUserUsageDataExportTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeUserUsageDataExportTaskRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeUserUsageDataExportTaskRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeUserUsageDataExportTaskRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeUserUsageDataExportTaskRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeUserUsageDataExportTaskRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeUserUsageDataExportTaskRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeUserUsageDataExportTaskRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeUserUsageDataExportTaskRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeUserUsageDataExportTaskRequest::getCallerType()const
{
	return callerType_;
}

void DescribeUserUsageDataExportTaskRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeUserUsageDataExportTaskRequest::get_Operator()const
{
	return _operator_;
}

void DescribeUserUsageDataExportTaskRequest::set_Operator(const std::string& _operator)
{
	_operator_ = _operator;
	setCoreParameter("_Operator", _operator);
}

std::string DescribeUserUsageDataExportTaskRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeUserUsageDataExportTaskRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeUserUsageDataExportTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeUserUsageDataExportTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeUserUsageDataExportTaskRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeUserUsageDataExportTaskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeUserUsageDataExportTaskRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeUserUsageDataExportTaskRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeUserUsageDataExportTaskRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeUserUsageDataExportTaskRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeUserUsageDataExportTaskRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeUserUsageDataExportTaskRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeUserUsageDataExportTaskRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeUserUsageDataExportTaskRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeUserUsageDataExportTaskRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeUserUsageDataExportTaskRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeUserUsageDataExportTaskRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeUserUsageDataExportTaskRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeUserUsageDataExportTaskRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeUserUsageDataExportTaskRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeUserUsageDataExportTaskRequest::getProduct()const
{
	return product_;
}

void DescribeUserUsageDataExportTaskRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

std::string DescribeUserUsageDataExportTaskRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeUserUsageDataExportTaskRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeUserUsageDataExportTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeUserUsageDataExportTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeUserUsageDataExportTaskRequest::getVersion()const
{
	return version_;
}

void DescribeUserUsageDataExportTaskRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeUserUsageDataExportTaskRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeUserUsageDataExportTaskRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeUserUsageDataExportTaskRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeUserUsageDataExportTaskRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeUserUsageDataExportTaskRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeUserUsageDataExportTaskRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeUserUsageDataExportTaskRequest::getRequestId()const
{
	return requestId_;
}

void DescribeUserUsageDataExportTaskRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}


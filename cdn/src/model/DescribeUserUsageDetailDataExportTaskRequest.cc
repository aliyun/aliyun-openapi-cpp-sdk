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

#include <alibabacloud/cdn/model/DescribeUserUsageDetailDataExportTaskRequest.h>

using AlibabaCloud::Cdn::Model::DescribeUserUsageDetailDataExportTaskRequest;

DescribeUserUsageDetailDataExportTaskRequest::DescribeUserUsageDetailDataExportTaskRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeUserUsageDetailDataExportTask")
{}

DescribeUserUsageDetailDataExportTaskRequest::~DescribeUserUsageDetailDataExportTaskRequest()
{}

long DescribeUserUsageDetailDataExportTaskRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeUserUsageDetailDataExportTaskRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeUserUsageDetailDataExportTaskRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeUserUsageDetailDataExportTaskRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeUserUsageDetailDataExportTaskRequest::getCallerType()const
{
	return callerType_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeUserUsageDetailDataExportTaskRequest::get_Operator()const
{
	return _operator_;
}

void DescribeUserUsageDetailDataExportTaskRequest::set_Operator(const std::string& _operator)
{
	_operator_ = _operator;
	setParameter("_Operator", _operator);
}

std::string DescribeUserUsageDetailDataExportTaskRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", pageNumber);
}

std::string DescribeUserUsageDetailDataExportTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeUserUsageDetailDataExportTaskRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeUserUsageDetailDataExportTaskRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeUserUsageDetailDataExportTaskRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

std::string DescribeUserUsageDetailDataExportTaskRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeUserUsageDetailDataExportTaskRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeUserUsageDetailDataExportTaskRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeUserUsageDetailDataExportTaskRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeUserUsageDetailDataExportTaskRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeUserUsageDetailDataExportTaskRequest::getProduct()const
{
	return product_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeUserUsageDetailDataExportTaskRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeUserUsageDetailDataExportTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeUserUsageDetailDataExportTaskRequest::getVersion()const
{
	return version_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeUserUsageDetailDataExportTaskRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeUserUsageDetailDataExportTaskRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeUserUsageDetailDataExportTaskRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeUserUsageDetailDataExportTaskRequest::getRequestId()const
{
	return requestId_;
}

void DescribeUserUsageDetailDataExportTaskRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}


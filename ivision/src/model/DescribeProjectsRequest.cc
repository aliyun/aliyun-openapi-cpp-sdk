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

#include <alibabacloud/ivision/model/DescribeProjectsRequest.h>

using AlibabaCloud::Ivision::Model::DescribeProjectsRequest;

DescribeProjectsRequest::DescribeProjectsRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribeProjects")
{}

DescribeProjectsRequest::~DescribeProjectsRequest()
{}

long DescribeProjectsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeProjectsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeProjectsRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void DescribeProjectsRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setCoreParameter("NextPageToken", nextPageToken);
}

long DescribeProjectsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeProjectsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeProjectsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeProjectsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeProjectsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeProjectsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeProjectsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeProjectsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeProjectsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeProjectsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeProjectsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeProjectsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeProjectsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeProjectsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeProjectsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeProjectsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeProjectsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeProjectsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

long DescribeProjectsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeProjectsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeProjectsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeProjectsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeProjectsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeProjectsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeProjectsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeProjectsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeProjectsRequest::getShowLog()const
{
	return showLog_;
}

void DescribeProjectsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string DescribeProjectsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeProjectsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeProjectsRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeProjectsRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long DescribeProjectsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeProjectsRequest::setCurrentPage(long currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeProjectsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeProjectsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string DescribeProjectsRequest::getProjectIds()const
{
	return projectIds_;
}

void DescribeProjectsRequest::setProjectIds(const std::string& projectIds)
{
	projectIds_ = projectIds;
	setCoreParameter("ProjectIds", projectIds);
}

long DescribeProjectsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeProjectsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeProjectsRequest::getVersion()const
{
	return version_;
}

void DescribeProjectsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeProjectsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeProjectsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeProjectsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeProjectsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeProjectsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeProjectsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeProjectsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeProjectsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}


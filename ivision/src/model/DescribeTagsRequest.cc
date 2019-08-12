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

#include <alibabacloud/ivision/model/DescribeTagsRequest.h>

using AlibabaCloud::Ivision::Model::DescribeTagsRequest;

DescribeTagsRequest::DescribeTagsRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribeTags")
{}

DescribeTagsRequest::~DescribeTagsRequest()
{}

long DescribeTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeTagsRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void DescribeTagsRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setCoreParameter("NextPageToken", nextPageToken);
}

long DescribeTagsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeTagsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeTagsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeTagsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeTagsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeTagsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeTagsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeTagsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeTagsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeTagsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeTagsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeTagsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeTagsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeTagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeTagsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeTagsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

long DescribeTagsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTagsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeTagsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeTagsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeTagsRequest::getProjectId()const
{
	return projectId_;
}

void DescribeTagsRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string DescribeTagsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeTagsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeTagsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeTagsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeTagsRequest::getShowLog()const
{
	return showLog_;
}

void DescribeTagsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string DescribeTagsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeTagsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeTagsRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeTagsRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeTagsRequest::getTagIds()const
{
	return tagIds_;
}

void DescribeTagsRequest::setTagIds(const std::string& tagIds)
{
	tagIds_ = tagIds;
	setCoreParameter("TagIds", tagIds);
}

long DescribeTagsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeTagsRequest::setCurrentPage(long currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeTagsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeTagsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeTagsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeTagsRequest::getVersion()const
{
	return version_;
}

void DescribeTagsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeTagsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeTagsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeTagsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeTagsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeTagsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeTagsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeTagsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeTagsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeTagsRequest::getIterationId()const
{
	return iterationId_;
}

void DescribeTagsRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", iterationId);
}


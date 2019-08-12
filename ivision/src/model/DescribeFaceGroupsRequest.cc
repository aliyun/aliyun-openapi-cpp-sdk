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

#include <alibabacloud/ivision/model/DescribeFaceGroupsRequest.h>

using AlibabaCloud::Ivision::Model::DescribeFaceGroupsRequest;

DescribeFaceGroupsRequest::DescribeFaceGroupsRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribeFaceGroups")
{}

DescribeFaceGroupsRequest::~DescribeFaceGroupsRequest()
{}

long DescribeFaceGroupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeFaceGroupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeFaceGroupsRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void DescribeFaceGroupsRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setCoreParameter("NextPageToken", nextPageToken);
}

long DescribeFaceGroupsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeFaceGroupsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeFaceGroupsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeFaceGroupsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeFaceGroupsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeFaceGroupsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeFaceGroupsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeFaceGroupsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeFaceGroupsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeFaceGroupsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeFaceGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeFaceGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeFaceGroupsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeFaceGroupsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeFaceGroupsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFaceGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeFaceGroupsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeFaceGroupsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

long DescribeFaceGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeFaceGroupsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeFaceGroupsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeFaceGroupsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeFaceGroupsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeFaceGroupsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeFaceGroupsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeFaceGroupsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeFaceGroupsRequest::getShowLog()const
{
	return showLog_;
}

void DescribeFaceGroupsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string DescribeFaceGroupsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeFaceGroupsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeFaceGroupsRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeFaceGroupsRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long DescribeFaceGroupsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeFaceGroupsRequest::setCurrentPage(long currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeFaceGroupsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeFaceGroupsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeFaceGroupsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFaceGroupsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeFaceGroupsRequest::getVersion()const
{
	return version_;
}

void DescribeFaceGroupsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeFaceGroupsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeFaceGroupsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeFaceGroupsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeFaceGroupsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeFaceGroupsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeFaceGroupsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeFaceGroupsRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeFaceGroupsRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string DescribeFaceGroupsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeFaceGroupsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}


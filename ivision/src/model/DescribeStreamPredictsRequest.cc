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

#include <alibabacloud/ivision/model/DescribeStreamPredictsRequest.h>

using AlibabaCloud::Ivision::Model::DescribeStreamPredictsRequest;

DescribeStreamPredictsRequest::DescribeStreamPredictsRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribeStreamPredicts")
{}

DescribeStreamPredictsRequest::~DescribeStreamPredictsRequest()
{}

long DescribeStreamPredictsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeStreamPredictsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeStreamPredictsRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void DescribeStreamPredictsRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setCoreParameter("NextPageToken", nextPageToken);
}

long DescribeStreamPredictsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeStreamPredictsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DescribeStreamPredictsRequest::getPredictIds()const
{
	return predictIds_;
}

void DescribeStreamPredictsRequest::setPredictIds(const std::string& predictIds)
{
	predictIds_ = predictIds;
	setCoreParameter("PredictIds", predictIds);
}

bool DescribeStreamPredictsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeStreamPredictsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeStreamPredictsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeStreamPredictsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeStreamPredictsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeStreamPredictsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeStreamPredictsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeStreamPredictsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeStreamPredictsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeStreamPredictsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeStreamPredictsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeStreamPredictsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeStreamPredictsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeStreamPredictsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeStreamPredictsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeStreamPredictsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

long DescribeStreamPredictsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeStreamPredictsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeStreamPredictsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeStreamPredictsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeStreamPredictsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeStreamPredictsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeStreamPredictsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeStreamPredictsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeStreamPredictsRequest::getShowLog()const
{
	return showLog_;
}

void DescribeStreamPredictsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string DescribeStreamPredictsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeStreamPredictsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeStreamPredictsRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeStreamPredictsRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long DescribeStreamPredictsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeStreamPredictsRequest::setCurrentPage(long currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeStreamPredictsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeStreamPredictsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeStreamPredictsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeStreamPredictsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeStreamPredictsRequest::getVersion()const
{
	return version_;
}

void DescribeStreamPredictsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeStreamPredictsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeStreamPredictsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeStreamPredictsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeStreamPredictsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeStreamPredictsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeStreamPredictsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeStreamPredictsRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeStreamPredictsRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string DescribeStreamPredictsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeStreamPredictsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}


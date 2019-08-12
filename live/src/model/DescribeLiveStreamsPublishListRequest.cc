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

#include <alibabacloud/live/model/DescribeLiveStreamsPublishListRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveStreamsPublishListRequest;

DescribeLiveStreamsPublishListRequest::DescribeLiveStreamsPublishListRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveStreamsPublishList")
{}

DescribeLiveStreamsPublishListRequest::~DescribeLiveStreamsPublishListRequest()
{}

long DescribeLiveStreamsPublishListRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeLiveStreamsPublishListRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeLiveStreamsPublishListRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeLiveStreamsPublishListRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeLiveStreamsPublishListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamsPublishListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeLiveStreamsPublishListRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeLiveStreamsPublishListRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeLiveStreamsPublishListRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeLiveStreamsPublishListRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeLiveStreamsPublishListRequest::getCallerType()const
{
	return callerType_;
}

void DescribeLiveStreamsPublishListRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeLiveStreamsPublishListRequest::getEagleEyeRpcId()const
{
	return eagleEyeRpcId_;
}

void DescribeLiveStreamsPublishListRequest::setEagleEyeRpcId(const std::string& eagleEyeRpcId)
{
	eagleEyeRpcId_ = eagleEyeRpcId;
	setCoreParameter("EagleEyeRpcId", eagleEyeRpcId);
}

int DescribeLiveStreamsPublishListRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeLiveStreamsPublishListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeLiveStreamsPublishListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamsPublishListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeLiveStreamsPublishListRequest::getEagleEyeTraceId()const
{
	return eagleEyeTraceId_;
}

void DescribeLiveStreamsPublishListRequest::setEagleEyeTraceId(const std::string& eagleEyeTraceId)
{
	eagleEyeTraceId_ = eagleEyeTraceId;
	setCoreParameter("EagleEyeTraceId", eagleEyeTraceId);
}

std::string DescribeLiveStreamsPublishListRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamsPublishListRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string DescribeLiveStreamsPublishListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamsPublishListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamsPublishListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLiveStreamsPublishListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeLiveStreamsPublishListRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeLiveStreamsPublishListRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

int DescribeLiveStreamsPublishListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLiveStreamsPublishListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeLiveStreamsPublishListRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeLiveStreamsPublishListRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeLiveStreamsPublishListRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeLiveStreamsPublishListRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

std::string DescribeLiveStreamsPublishListRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveStreamsPublishListRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", streamName);
}

std::string DescribeLiveStreamsPublishListRequest::getQueryType()const
{
	return queryType_;
}

void DescribeLiveStreamsPublishListRequest::setQueryType(const std::string& queryType)
{
	queryType_ = queryType;
	setCoreParameter("QueryType", queryType);
}

long DescribeLiveStreamsPublishListRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeLiveStreamsPublishListRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeLiveStreamsPublishListRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeLiveStreamsPublishListRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeLiveStreamsPublishListRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeLiveStreamsPublishListRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeLiveStreamsPublishListRequest::getStreamType()const
{
	return streamType_;
}

void DescribeLiveStreamsPublishListRequest::setStreamType(const std::string& streamType)
{
	streamType_ = streamType;
	setCoreParameter("StreamType", streamType);
}

std::string DescribeLiveStreamsPublishListRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamsPublishListRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeLiveStreamsPublishListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamsPublishListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeLiveStreamsPublishListRequest::getOrderBy()const
{
	return orderBy_;
}

void DescribeLiveStreamsPublishListRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setCoreParameter("OrderBy", orderBy);
}

std::string DescribeLiveStreamsPublishListRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeLiveStreamsPublishListRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeLiveStreamsPublishListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamsPublishListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeLiveStreamsPublishListRequest::getVersion()const
{
	return version_;
}

void DescribeLiveStreamsPublishListRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeLiveStreamsPublishListRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeLiveStreamsPublishListRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeLiveStreamsPublishListRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeLiveStreamsPublishListRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeLiveStreamsPublishListRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeLiveStreamsPublishListRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeLiveStreamsPublishListRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeLiveStreamsPublishListRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string DescribeLiveStreamsPublishListRequest::getRequestId()const
{
	return requestId_;
}

void DescribeLiveStreamsPublishListRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeLiveStreamsPublishListRequest::getEagleEyeUserData()const
{
	return eagleEyeUserData_;
}

void DescribeLiveStreamsPublishListRequest::setEagleEyeUserData(const std::string& eagleEyeUserData)
{
	eagleEyeUserData_ = eagleEyeUserData;
	setCoreParameter("EagleEyeUserData", eagleEyeUserData);
}


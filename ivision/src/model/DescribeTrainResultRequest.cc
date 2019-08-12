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

#include <alibabacloud/ivision/model/DescribeTrainResultRequest.h>

using AlibabaCloud::Ivision::Model::DescribeTrainResultRequest;

DescribeTrainResultRequest::DescribeTrainResultRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribeTrainResult")
{}

DescribeTrainResultRequest::~DescribeTrainResultRequest()
{}

long DescribeTrainResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeTrainResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeTrainResultRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeTrainResultRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeTrainResultRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeTrainResultRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeTrainResultRequest::getThreshold()const
{
	return threshold_;
}

void DescribeTrainResultRequest::setThreshold(const std::string& threshold)
{
	threshold_ = threshold;
	setCoreParameter("Threshold", threshold);
}

std::string DescribeTrainResultRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeTrainResultRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeTrainResultRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeTrainResultRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeTrainResultRequest::getCallerType()const
{
	return callerType_;
}

void DescribeTrainResultRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeTrainResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeTrainResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeTrainResultRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeTrainResultRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeTrainResultRequest::getRegionId()const
{
	return regionId_;
}

void DescribeTrainResultRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeTrainResultRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeTrainResultRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeTrainResultRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeTrainResultRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeTrainResultRequest::getProjectId()const
{
	return projectId_;
}

void DescribeTrainResultRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string DescribeTrainResultRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeTrainResultRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeTrainResultRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeTrainResultRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeTrainResultRequest::getShowLog()const
{
	return showLog_;
}

void DescribeTrainResultRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string DescribeTrainResultRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeTrainResultRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeTrainResultRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeTrainResultRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeTrainResultRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeTrainResultRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeTrainResultRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTrainResultRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeTrainResultRequest::getVersion()const
{
	return version_;
}

void DescribeTrainResultRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeTrainResultRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeTrainResultRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeTrainResultRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeTrainResultRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeTrainResultRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeTrainResultRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeTrainResultRequest::getRequestId()const
{
	return requestId_;
}

void DescribeTrainResultRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeTrainResultRequest::getIterationId()const
{
	return iterationId_;
}

void DescribeTrainResultRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", iterationId);
}


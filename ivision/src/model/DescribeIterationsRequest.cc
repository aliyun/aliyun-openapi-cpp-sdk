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

#include <alibabacloud/ivision/model/DescribeIterationsRequest.h>

using AlibabaCloud::Ivision::Model::DescribeIterationsRequest;

DescribeIterationsRequest::DescribeIterationsRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DescribeIterations")
{}

DescribeIterationsRequest::~DescribeIterationsRequest()
{}

long DescribeIterationsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeIterationsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeIterationsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeIterationsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeIterationsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeIterationsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeIterationsRequest::getThreshold()const
{
	return threshold_;
}

void DescribeIterationsRequest::setThreshold(const std::string& threshold)
{
	threshold_ = threshold;
	setCoreParameter("Threshold", std::to_string(threshold));
}

std::string DescribeIterationsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeIterationsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeIterationsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeIterationsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeIterationsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeIterationsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeIterationsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeIterationsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeIterationsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeIterationsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeIterationsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeIterationsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeIterationsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeIterationsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeIterationsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeIterationsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeIterationsRequest::getProjectId()const
{
	return projectId_;
}

void DescribeIterationsRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", std::to_string(projectId));
}

std::string DescribeIterationsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeIterationsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeIterationsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeIterationsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeIterationsRequest::getShowLog()const
{
	return showLog_;
}

void DescribeIterationsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", std::to_string(showLog));
}

std::string DescribeIterationsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeIterationsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeIterationsRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeIterationsRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeIterationsRequest::getIterationIds()const
{
	return iterationIds_;
}

void DescribeIterationsRequest::setIterationIds(const std::string& iterationIds)
{
	iterationIds_ = iterationIds;
	setCoreParameter("IterationIds", std::to_string(iterationIds));
}

std::string DescribeIterationsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeIterationsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeIterationsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeIterationsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeIterationsRequest::getVersion()const
{
	return version_;
}

void DescribeIterationsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeIterationsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeIterationsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeIterationsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeIterationsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeIterationsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeIterationsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeIterationsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeIterationsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeIterationsRequest::getStatus()const
{
	return status_;
}

void DescribeIterationsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}


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

#include <alibabacloud/ivision/model/PredictImageRequest.h>

using AlibabaCloud::Ivision::Model::PredictImageRequest;

PredictImageRequest::PredictImageRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "PredictImage")
{}

PredictImageRequest::~PredictImageRequest()
{}

long PredictImageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PredictImageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long PredictImageRequest::getCallerParentId()const
{
	return callerParentId_;
}

void PredictImageRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool PredictImageRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void PredictImageRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string PredictImageRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void PredictImageRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string PredictImageRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void PredictImageRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string PredictImageRequest::getCallerType()const
{
	return callerType_;
}

void PredictImageRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string PredictImageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PredictImageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string PredictImageRequest::getSecurityToken()const
{
	return securityToken_;
}

void PredictImageRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string PredictImageRequest::getRegionId()const
{
	return regionId_;
}

void PredictImageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string PredictImageRequest::getRequestContent()const
{
	return requestContent_;
}

void PredictImageRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string PredictImageRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void PredictImageRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string PredictImageRequest::getProjectId()const
{
	return projectId_;
}

void PredictImageRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", std::to_string(projectId));
}

std::string PredictImageRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void PredictImageRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long PredictImageRequest::getCallerUid()const
{
	return callerUid_;
}

void PredictImageRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string PredictImageRequest::getShowLog()const
{
	return showLog_;
}

void PredictImageRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", std::to_string(showLog));
}

std::string PredictImageRequest::getApp_ip()const
{
	return app_ip_;
}

void PredictImageRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string PredictImageRequest::getPopProduct()const
{
	return popProduct_;
}

void PredictImageRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string PredictImageRequest::getCallerBid()const
{
	return callerBid_;
}

void PredictImageRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long PredictImageRequest::getOwnerId()const
{
	return ownerId_;
}

void PredictImageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string PredictImageRequest::getVersion()const
{
	return version_;
}

void PredictImageRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool PredictImageRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void PredictImageRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool PredictImageRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void PredictImageRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool PredictImageRequest::getSecurity_transport()const
{
	return security_transport_;
}

void PredictImageRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string PredictImageRequest::getRequestId()const
{
	return requestId_;
}

void PredictImageRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string PredictImageRequest::getIterationId()const
{
	return iterationId_;
}

void PredictImageRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", std::to_string(iterationId));
}

std::string PredictImageRequest::getDataUrls()const
{
	return dataUrls_;
}

void PredictImageRequest::setDataUrls(const std::string& dataUrls)
{
	dataUrls_ = dataUrls;
	setCoreParameter("DataUrls", std::to_string(dataUrls));
}


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

#include <alibabacloud/ivision/model/CreateTrainDatasFromUrlsRequest.h>

using AlibabaCloud::Ivision::Model::CreateTrainDatasFromUrlsRequest;

CreateTrainDatasFromUrlsRequest::CreateTrainDatasFromUrlsRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "CreateTrainDatasFromUrls")
{}

CreateTrainDatasFromUrlsRequest::~CreateTrainDatasFromUrlsRequest()
{}

long CreateTrainDatasFromUrlsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateTrainDatasFromUrlsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long CreateTrainDatasFromUrlsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateTrainDatasFromUrlsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateTrainDatasFromUrlsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateTrainDatasFromUrlsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateTrainDatasFromUrlsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateTrainDatasFromUrlsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateTrainDatasFromUrlsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateTrainDatasFromUrlsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateTrainDatasFromUrlsRequest::getCallerType()const
{
	return callerType_;
}

void CreateTrainDatasFromUrlsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string CreateTrainDatasFromUrlsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateTrainDatasFromUrlsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateTrainDatasFromUrlsRequest::getUrls()const
{
	return urls_;
}

void CreateTrainDatasFromUrlsRequest::setUrls(const std::string& urls)
{
	urls_ = urls;
	setCoreParameter("Urls", urls);
}

std::string CreateTrainDatasFromUrlsRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateTrainDatasFromUrlsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateTrainDatasFromUrlsRequest::getRegionId()const
{
	return regionId_;
}

void CreateTrainDatasFromUrlsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateTrainDatasFromUrlsRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateTrainDatasFromUrlsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string CreateTrainDatasFromUrlsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateTrainDatasFromUrlsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateTrainDatasFromUrlsRequest::getProjectId()const
{
	return projectId_;
}

void CreateTrainDatasFromUrlsRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string CreateTrainDatasFromUrlsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateTrainDatasFromUrlsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long CreateTrainDatasFromUrlsRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateTrainDatasFromUrlsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateTrainDatasFromUrlsRequest::getShowLog()const
{
	return showLog_;
}

void CreateTrainDatasFromUrlsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string CreateTrainDatasFromUrlsRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateTrainDatasFromUrlsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string CreateTrainDatasFromUrlsRequest::getPopProduct()const
{
	return popProduct_;
}

void CreateTrainDatasFromUrlsRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string CreateTrainDatasFromUrlsRequest::getTagId()const
{
	return tagId_;
}

void CreateTrainDatasFromUrlsRequest::setTagId(const std::string& tagId)
{
	tagId_ = tagId;
	setCoreParameter("TagId", tagId);
}

std::string CreateTrainDatasFromUrlsRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateTrainDatasFromUrlsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long CreateTrainDatasFromUrlsRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTrainDatasFromUrlsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateTrainDatasFromUrlsRequest::getVersion()const
{
	return version_;
}

void CreateTrainDatasFromUrlsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool CreateTrainDatasFromUrlsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateTrainDatasFromUrlsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateTrainDatasFromUrlsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateTrainDatasFromUrlsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateTrainDatasFromUrlsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateTrainDatasFromUrlsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateTrainDatasFromUrlsRequest::getRequestId()const
{
	return requestId_;
}

void CreateTrainDatasFromUrlsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}


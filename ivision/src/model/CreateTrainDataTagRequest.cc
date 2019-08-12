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

#include <alibabacloud/ivision/model/CreateTrainDataTagRequest.h>

using AlibabaCloud::Ivision::Model::CreateTrainDataTagRequest;

CreateTrainDataTagRequest::CreateTrainDataTagRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "CreateTrainDataTag")
{}

CreateTrainDataTagRequest::~CreateTrainDataTagRequest()
{}

long CreateTrainDataTagRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateTrainDataTagRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long CreateTrainDataTagRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateTrainDataTagRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool CreateTrainDataTagRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateTrainDataTagRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateTrainDataTagRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateTrainDataTagRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string CreateTrainDataTagRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateTrainDataTagRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string CreateTrainDataTagRequest::getCallerType()const
{
	return callerType_;
}

void CreateTrainDataTagRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string CreateTrainDataTagRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateTrainDataTagRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CreateTrainDataTagRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateTrainDataTagRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string CreateTrainDataTagRequest::getRegionId()const
{
	return regionId_;
}

void CreateTrainDataTagRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateTrainDataTagRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateTrainDataTagRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string CreateTrainDataTagRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateTrainDataTagRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string CreateTrainDataTagRequest::getProjectId()const
{
	return projectId_;
}

void CreateTrainDataTagRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", std::to_string(projectId));
}

std::string CreateTrainDataTagRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateTrainDataTagRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long CreateTrainDataTagRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateTrainDataTagRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string CreateTrainDataTagRequest::getShowLog()const
{
	return showLog_;
}

void CreateTrainDataTagRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", std::to_string(showLog));
}

std::string CreateTrainDataTagRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateTrainDataTagRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string CreateTrainDataTagRequest::getPopProduct()const
{
	return popProduct_;
}

void CreateTrainDataTagRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string CreateTrainDataTagRequest::getTagItems()const
{
	return tagItems_;
}

void CreateTrainDataTagRequest::setTagItems(const std::string& tagItems)
{
	tagItems_ = tagItems;
	setCoreParameter("TagItems", std::to_string(tagItems));
}

std::string CreateTrainDataTagRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateTrainDataTagRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long CreateTrainDataTagRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTrainDataTagRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateTrainDataTagRequest::getVersion()const
{
	return version_;
}

void CreateTrainDataTagRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool CreateTrainDataTagRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateTrainDataTagRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateTrainDataTagRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateTrainDataTagRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateTrainDataTagRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateTrainDataTagRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateTrainDataTagRequest::getDataId()const
{
	return dataId_;
}

void CreateTrainDataTagRequest::setDataId(const std::string& dataId)
{
	dataId_ = dataId;
	setCoreParameter("DataId", std::to_string(dataId));
}

std::string CreateTrainDataTagRequest::getRequestId()const
{
	return requestId_;
}

void CreateTrainDataTagRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}


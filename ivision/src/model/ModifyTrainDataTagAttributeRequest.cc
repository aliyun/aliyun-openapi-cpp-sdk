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

#include <alibabacloud/ivision/model/ModifyTrainDataTagAttributeRequest.h>

using AlibabaCloud::Ivision::Model::ModifyTrainDataTagAttributeRequest;

ModifyTrainDataTagAttributeRequest::ModifyTrainDataTagAttributeRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "ModifyTrainDataTagAttribute")
{}

ModifyTrainDataTagAttributeRequest::~ModifyTrainDataTagAttributeRequest()
{}

long ModifyTrainDataTagAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyTrainDataTagAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ModifyTrainDataTagAttributeRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyTrainDataTagAttributeRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool ModifyTrainDataTagAttributeRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyTrainDataTagAttributeRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyTrainDataTagAttributeRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyTrainDataTagAttributeRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyTrainDataTagAttributeRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyTrainDataTagAttributeRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyTrainDataTagAttributeRequest::getCallerType()const
{
	return callerType_;
}

void ModifyTrainDataTagAttributeRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ModifyTrainDataTagAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyTrainDataTagAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyTrainDataTagAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyTrainDataTagAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyTrainDataTagAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyTrainDataTagAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyTrainDataTagAttributeRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyTrainDataTagAttributeRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyTrainDataTagAttributeRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyTrainDataTagAttributeRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyTrainDataTagAttributeRequest::getProjectId()const
{
	return projectId_;
}

void ModifyTrainDataTagAttributeRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string ModifyTrainDataTagAttributeRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyTrainDataTagAttributeRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifyTrainDataTagAttributeRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyTrainDataTagAttributeRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifyTrainDataTagAttributeRequest::getShowLog()const
{
	return showLog_;
}

void ModifyTrainDataTagAttributeRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string ModifyTrainDataTagAttributeRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyTrainDataTagAttributeRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifyTrainDataTagAttributeRequest::getPopProduct()const
{
	return popProduct_;
}

void ModifyTrainDataTagAttributeRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string ModifyTrainDataTagAttributeRequest::getTagItems()const
{
	return tagItems_;
}

void ModifyTrainDataTagAttributeRequest::setTagItems(const std::string& tagItems)
{
	tagItems_ = tagItems;
	setCoreParameter("TagItems", tagItems);
}

std::string ModifyTrainDataTagAttributeRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyTrainDataTagAttributeRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyTrainDataTagAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyTrainDataTagAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyTrainDataTagAttributeRequest::getVersion()const
{
	return version_;
}

void ModifyTrainDataTagAttributeRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool ModifyTrainDataTagAttributeRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyTrainDataTagAttributeRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyTrainDataTagAttributeRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyTrainDataTagAttributeRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ModifyTrainDataTagAttributeRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyTrainDataTagAttributeRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ModifyTrainDataTagAttributeRequest::getDataId()const
{
	return dataId_;
}

void ModifyTrainDataTagAttributeRequest::setDataId(const std::string& dataId)
{
	dataId_ = dataId;
	setCoreParameter("DataId", dataId);
}

std::string ModifyTrainDataTagAttributeRequest::getRequestId()const
{
	return requestId_;
}

void ModifyTrainDataTagAttributeRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}


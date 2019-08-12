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

#include <alibabacloud/ivision/model/DeleteTagRequest.h>

using AlibabaCloud::Ivision::Model::DeleteTagRequest;

DeleteTagRequest::DeleteTagRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DeleteTag")
{}

DeleteTagRequest::~DeleteTagRequest()
{}

long DeleteTagRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteTagRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DeleteTagRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteTagRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteTagRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteTagRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteTagRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteTagRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteTagRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteTagRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteTagRequest::getCallerType()const
{
	return callerType_;
}

void DeleteTagRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DeleteTagRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteTagRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteTagRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteTagRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteTagRequest::getRegionId()const
{
	return regionId_;
}

void DeleteTagRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteTagRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteTagRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DeleteTagRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteTagRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteTagRequest::getProjectId()const
{
	return projectId_;
}

void DeleteTagRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string DeleteTagRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteTagRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DeleteTagRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteTagRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteTagRequest::getShowLog()const
{
	return showLog_;
}

void DeleteTagRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string DeleteTagRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteTagRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DeleteTagRequest::getPopProduct()const
{
	return popProduct_;
}

void DeleteTagRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DeleteTagRequest::getTagId()const
{
	return tagId_;
}

void DeleteTagRequest::setTagId(const std::string& tagId)
{
	tagId_ = tagId;
	setCoreParameter("TagId", tagId);
}

std::string DeleteTagRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteTagRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DeleteTagRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteTagRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteTagRequest::getVersion()const
{
	return version_;
}

void DeleteTagRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DeleteTagRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteTagRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteTagRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteTagRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteTagRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteTagRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteTagRequest::getRequestId()const
{
	return requestId_;
}

void DeleteTagRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}


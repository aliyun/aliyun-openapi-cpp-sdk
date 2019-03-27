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

#include <alibabacloud/ivision/model/TrainProjectRequest.h>

using AlibabaCloud::Ivision::Model::TrainProjectRequest;

TrainProjectRequest::TrainProjectRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "TrainProject")
{}

TrainProjectRequest::~TrainProjectRequest()
{}

long TrainProjectRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void TrainProjectRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long TrainProjectRequest::getCallerParentId()const
{
	return callerParentId_;
}

void TrainProjectRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool TrainProjectRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void TrainProjectRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string TrainProjectRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void TrainProjectRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string TrainProjectRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void TrainProjectRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string TrainProjectRequest::getCallerType()const
{
	return callerType_;
}

void TrainProjectRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string TrainProjectRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void TrainProjectRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string TrainProjectRequest::getSecurityToken()const
{
	return securityToken_;
}

void TrainProjectRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string TrainProjectRequest::getRegionId()const
{
	return regionId_;
}

void TrainProjectRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string TrainProjectRequest::getRequestContent()const
{
	return requestContent_;
}

void TrainProjectRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string TrainProjectRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void TrainProjectRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string TrainProjectRequest::getProjectId()const
{
	return projectId_;
}

void TrainProjectRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string TrainProjectRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void TrainProjectRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long TrainProjectRequest::getCallerUid()const
{
	return callerUid_;
}

void TrainProjectRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string TrainProjectRequest::getShowLog()const
{
	return showLog_;
}

void TrainProjectRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string TrainProjectRequest::getApp_ip()const
{
	return app_ip_;
}

void TrainProjectRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string TrainProjectRequest::getPopProduct()const
{
	return popProduct_;
}

void TrainProjectRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string TrainProjectRequest::getCallerBid()const
{
	return callerBid_;
}

void TrainProjectRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long TrainProjectRequest::getOwnerId()const
{
	return ownerId_;
}

void TrainProjectRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string TrainProjectRequest::getVersion()const
{
	return version_;
}

void TrainProjectRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool TrainProjectRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void TrainProjectRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool TrainProjectRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void TrainProjectRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool TrainProjectRequest::getSecurity_transport()const
{
	return security_transport_;
}

void TrainProjectRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string TrainProjectRequest::getRequestId()const
{
	return requestId_;
}

void TrainProjectRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}


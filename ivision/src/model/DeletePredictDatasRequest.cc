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

#include <alibabacloud/ivision/model/DeletePredictDatasRequest.h>

using AlibabaCloud::Ivision::Model::DeletePredictDatasRequest;

DeletePredictDatasRequest::DeletePredictDatasRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DeletePredictDatas")
{}

DeletePredictDatasRequest::~DeletePredictDatasRequest()
{}

long DeletePredictDatasRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeletePredictDatasRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DeletePredictDatasRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeletePredictDatasRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DeletePredictDatasRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeletePredictDatasRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeletePredictDatasRequest::getDataIds()const
{
	return dataIds_;
}

void DeletePredictDatasRequest::setDataIds(const std::string& dataIds)
{
	dataIds_ = dataIds;
	setCoreParameter("DataIds", std::to_string(dataIds));
}

std::string DeletePredictDatasRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeletePredictDatasRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DeletePredictDatasRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeletePredictDatasRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DeletePredictDatasRequest::getCallerType()const
{
	return callerType_;
}

void DeletePredictDatasRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DeletePredictDatasRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeletePredictDatasRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DeletePredictDatasRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeletePredictDatasRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DeletePredictDatasRequest::getRegionId()const
{
	return regionId_;
}

void DeletePredictDatasRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DeletePredictDatasRequest::getRequestContent()const
{
	return requestContent_;
}

void DeletePredictDatasRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DeletePredictDatasRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeletePredictDatasRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DeletePredictDatasRequest::getProjectId()const
{
	return projectId_;
}

void DeletePredictDatasRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", std::to_string(projectId));
}

std::string DeletePredictDatasRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeletePredictDatasRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DeletePredictDatasRequest::getCallerUid()const
{
	return callerUid_;
}

void DeletePredictDatasRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DeletePredictDatasRequest::getShowLog()const
{
	return showLog_;
}

void DeletePredictDatasRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", std::to_string(showLog));
}

std::string DeletePredictDatasRequest::getApp_ip()const
{
	return app_ip_;
}

void DeletePredictDatasRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DeletePredictDatasRequest::getPopProduct()const
{
	return popProduct_;
}

void DeletePredictDatasRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DeletePredictDatasRequest::getCallerBid()const
{
	return callerBid_;
}

void DeletePredictDatasRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DeletePredictDatasRequest::getOwnerId()const
{
	return ownerId_;
}

void DeletePredictDatasRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DeletePredictDatasRequest::getVersion()const
{
	return version_;
}

void DeletePredictDatasRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DeletePredictDatasRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeletePredictDatasRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeletePredictDatasRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeletePredictDatasRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeletePredictDatasRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeletePredictDatasRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeletePredictDatasRequest::getRequestId()const
{
	return requestId_;
}

void DeletePredictDatasRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DeletePredictDatasRequest::getIterationId()const
{
	return iterationId_;
}

void DeletePredictDatasRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", std::to_string(iterationId));
}


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

#include <alibabacloud/ivision/model/DeleteStreamPredictRequest.h>

using AlibabaCloud::Ivision::Model::DeleteStreamPredictRequest;

DeleteStreamPredictRequest::DeleteStreamPredictRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DeleteStreamPredict")
{}

DeleteStreamPredictRequest::~DeleteStreamPredictRequest()
{}

long DeleteStreamPredictRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteStreamPredictRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DeleteStreamPredictRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteStreamPredictRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DeleteStreamPredictRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteStreamPredictRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteStreamPredictRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteStreamPredictRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DeleteStreamPredictRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteStreamPredictRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DeleteStreamPredictRequest::getCallerType()const
{
	return callerType_;
}

void DeleteStreamPredictRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DeleteStreamPredictRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteStreamPredictRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DeleteStreamPredictRequest::getPredictId()const
{
	return predictId_;
}

void DeleteStreamPredictRequest::setPredictId(const std::string& predictId)
{
	predictId_ = predictId;
	setCoreParameter("PredictId", std::to_string(predictId));
}

std::string DeleteStreamPredictRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteStreamPredictRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DeleteStreamPredictRequest::getRegionId()const
{
	return regionId_;
}

void DeleteStreamPredictRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DeleteStreamPredictRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteStreamPredictRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DeleteStreamPredictRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteStreamPredictRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DeleteStreamPredictRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteStreamPredictRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DeleteStreamPredictRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteStreamPredictRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DeleteStreamPredictRequest::getShowLog()const
{
	return showLog_;
}

void DeleteStreamPredictRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", std::to_string(showLog));
}

std::string DeleteStreamPredictRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteStreamPredictRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DeleteStreamPredictRequest::getPopProduct()const
{
	return popProduct_;
}

void DeleteStreamPredictRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DeleteStreamPredictRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteStreamPredictRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DeleteStreamPredictRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteStreamPredictRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DeleteStreamPredictRequest::getVersion()const
{
	return version_;
}

void DeleteStreamPredictRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DeleteStreamPredictRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteStreamPredictRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteStreamPredictRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteStreamPredictRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteStreamPredictRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteStreamPredictRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteStreamPredictRequest::getRequestId()const
{
	return requestId_;
}

void DeleteStreamPredictRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}


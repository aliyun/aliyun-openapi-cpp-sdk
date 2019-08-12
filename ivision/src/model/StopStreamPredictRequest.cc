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

#include <alibabacloud/ivision/model/StopStreamPredictRequest.h>

using AlibabaCloud::Ivision::Model::StopStreamPredictRequest;

StopStreamPredictRequest::StopStreamPredictRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "StopStreamPredict")
{}

StopStreamPredictRequest::~StopStreamPredictRequest()
{}

long StopStreamPredictRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StopStreamPredictRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long StopStreamPredictRequest::getCallerParentId()const
{
	return callerParentId_;
}

void StopStreamPredictRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool StopStreamPredictRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void StopStreamPredictRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string StopStreamPredictRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void StopStreamPredictRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string StopStreamPredictRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void StopStreamPredictRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string StopStreamPredictRequest::getCallerType()const
{
	return callerType_;
}

void StopStreamPredictRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string StopStreamPredictRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StopStreamPredictRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string StopStreamPredictRequest::getPredictId()const
{
	return predictId_;
}

void StopStreamPredictRequest::setPredictId(const std::string& predictId)
{
	predictId_ = predictId;
	setCoreParameter("PredictId", predictId);
}

std::string StopStreamPredictRequest::getSecurityToken()const
{
	return securityToken_;
}

void StopStreamPredictRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string StopStreamPredictRequest::getRegionId()const
{
	return regionId_;
}

void StopStreamPredictRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string StopStreamPredictRequest::getRequestContent()const
{
	return requestContent_;
}

void StopStreamPredictRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string StopStreamPredictRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void StopStreamPredictRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string StopStreamPredictRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void StopStreamPredictRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long StopStreamPredictRequest::getCallerUid()const
{
	return callerUid_;
}

void StopStreamPredictRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string StopStreamPredictRequest::getShowLog()const
{
	return showLog_;
}

void StopStreamPredictRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string StopStreamPredictRequest::getApp_ip()const
{
	return app_ip_;
}

void StopStreamPredictRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string StopStreamPredictRequest::getPopProduct()const
{
	return popProduct_;
}

void StopStreamPredictRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string StopStreamPredictRequest::getCallerBid()const
{
	return callerBid_;
}

void StopStreamPredictRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long StopStreamPredictRequest::getOwnerId()const
{
	return ownerId_;
}

void StopStreamPredictRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string StopStreamPredictRequest::getVersion()const
{
	return version_;
}

void StopStreamPredictRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool StopStreamPredictRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void StopStreamPredictRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool StopStreamPredictRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void StopStreamPredictRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool StopStreamPredictRequest::getSecurity_transport()const
{
	return security_transport_;
}

void StopStreamPredictRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string StopStreamPredictRequest::getRequestId()const
{
	return requestId_;
}

void StopStreamPredictRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}


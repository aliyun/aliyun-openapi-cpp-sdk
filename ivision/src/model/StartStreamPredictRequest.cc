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

#include <alibabacloud/ivision/model/StartStreamPredictRequest.h>

using AlibabaCloud::Ivision::Model::StartStreamPredictRequest;

StartStreamPredictRequest::StartStreamPredictRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "StartStreamPredict")
{}

StartStreamPredictRequest::~StartStreamPredictRequest()
{}

long StartStreamPredictRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StartStreamPredictRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long StartStreamPredictRequest::getCallerParentId()const
{
	return callerParentId_;
}

void StartStreamPredictRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool StartStreamPredictRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void StartStreamPredictRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string StartStreamPredictRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void StartStreamPredictRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string StartStreamPredictRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void StartStreamPredictRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string StartStreamPredictRequest::getCallerType()const
{
	return callerType_;
}

void StartStreamPredictRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string StartStreamPredictRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartStreamPredictRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string StartStreamPredictRequest::getPredictId()const
{
	return predictId_;
}

void StartStreamPredictRequest::setPredictId(const std::string& predictId)
{
	predictId_ = predictId;
	setCoreParameter("PredictId", predictId);
}

std::string StartStreamPredictRequest::getSecurityToken()const
{
	return securityToken_;
}

void StartStreamPredictRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string StartStreamPredictRequest::getRegionId()const
{
	return regionId_;
}

void StartStreamPredictRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string StartStreamPredictRequest::getRequestContent()const
{
	return requestContent_;
}

void StartStreamPredictRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string StartStreamPredictRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void StartStreamPredictRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string StartStreamPredictRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void StartStreamPredictRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long StartStreamPredictRequest::getCallerUid()const
{
	return callerUid_;
}

void StartStreamPredictRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string StartStreamPredictRequest::getShowLog()const
{
	return showLog_;
}

void StartStreamPredictRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string StartStreamPredictRequest::getApp_ip()const
{
	return app_ip_;
}

void StartStreamPredictRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string StartStreamPredictRequest::getPopProduct()const
{
	return popProduct_;
}

void StartStreamPredictRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string StartStreamPredictRequest::getCallerBid()const
{
	return callerBid_;
}

void StartStreamPredictRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long StartStreamPredictRequest::getOwnerId()const
{
	return ownerId_;
}

void StartStreamPredictRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string StartStreamPredictRequest::getVersion()const
{
	return version_;
}

void StartStreamPredictRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool StartStreamPredictRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void StartStreamPredictRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool StartStreamPredictRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void StartStreamPredictRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool StartStreamPredictRequest::getSecurity_transport()const
{
	return security_transport_;
}

void StartStreamPredictRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string StartStreamPredictRequest::getRequestId()const
{
	return requestId_;
}

void StartStreamPredictRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}


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

#include <alibabacloud/ivision/model/CreateStreamPredictRequest.h>

using AlibabaCloud::Ivision::Model::CreateStreamPredictRequest;

CreateStreamPredictRequest::CreateStreamPredictRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "CreateStreamPredict")
{}

CreateStreamPredictRequest::~CreateStreamPredictRequest()
{}

long CreateStreamPredictRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateStreamPredictRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long CreateStreamPredictRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateStreamPredictRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateStreamPredictRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateStreamPredictRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateStreamPredictRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateStreamPredictRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateStreamPredictRequest::getAutoStart()const
{
	return autoStart_;
}

void CreateStreamPredictRequest::setAutoStart(const std::string& autoStart)
{
	autoStart_ = autoStart;
	setParameter("AutoStart", autoStart);
}

std::string CreateStreamPredictRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateStreamPredictRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateStreamPredictRequest::getCallerType()const
{
	return callerType_;
}

void CreateStreamPredictRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string CreateStreamPredictRequest::getNotify()const
{
	return notify_;
}

void CreateStreamPredictRequest::setNotify(const std::string& notify)
{
	notify_ = notify;
	setParameter("Notify", notify);
}

std::string CreateStreamPredictRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateStreamPredictRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateStreamPredictRequest::getOutput()const
{
	return output_;
}

void CreateStreamPredictRequest::setOutput(const std::string& output)
{
	output_ = output;
	setParameter("Output", output);
}

std::string CreateStreamPredictRequest::getUserData()const
{
	return userData_;
}

void CreateStreamPredictRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string CreateStreamPredictRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateStreamPredictRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateStreamPredictRequest::getRegionId()const
{
	return regionId_;
}

void CreateStreamPredictRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateStreamPredictRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateStreamPredictRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string CreateStreamPredictRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateStreamPredictRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateStreamPredictRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateStreamPredictRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long CreateStreamPredictRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateStreamPredictRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateStreamPredictRequest::getShowLog()const
{
	return showLog_;
}

void CreateStreamPredictRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string CreateStreamPredictRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateStreamPredictRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string CreateStreamPredictRequest::getPopProduct()const
{
	return popProduct_;
}

void CreateStreamPredictRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string CreateStreamPredictRequest::getStreamType()const
{
	return streamType_;
}

void CreateStreamPredictRequest::setStreamType(const std::string& streamType)
{
	streamType_ = streamType;
	setParameter("StreamType", streamType);
}

std::string CreateStreamPredictRequest::getStreamId()const
{
	return streamId_;
}

void CreateStreamPredictRequest::setStreamId(const std::string& streamId)
{
	streamId_ = streamId;
	setParameter("StreamId", streamId);
}

std::string CreateStreamPredictRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateStreamPredictRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long CreateStreamPredictRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateStreamPredictRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateStreamPredictRequest::getVersion()const
{
	return version_;
}

void CreateStreamPredictRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool CreateStreamPredictRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateStreamPredictRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateStreamPredictRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateStreamPredictRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateStreamPredictRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateStreamPredictRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateStreamPredictRequest::getProbabilityThresholds()const
{
	return probabilityThresholds_;
}

void CreateStreamPredictRequest::setProbabilityThresholds(const std::string& probabilityThresholds)
{
	probabilityThresholds_ = probabilityThresholds;
	setParameter("ProbabilityThresholds", probabilityThresholds);
}

std::string CreateStreamPredictRequest::getModelIds()const
{
	return modelIds_;
}

void CreateStreamPredictRequest::setModelIds(const std::string& modelIds)
{
	modelIds_ = modelIds;
	setParameter("ModelIds", modelIds);
}

std::string CreateStreamPredictRequest::getRequestId()const
{
	return requestId_;
}

void CreateStreamPredictRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}


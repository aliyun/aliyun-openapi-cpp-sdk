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

#include <alibabacloud/ivision/model/ImagePredictRequest.h>

using AlibabaCloud::Ivision::Model::ImagePredictRequest;

ImagePredictRequest::ImagePredictRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "ImagePredict")
{}

ImagePredictRequest::~ImagePredictRequest()
{}

std::string ImagePredictRequest::getDataUrl()const
{
	return dataUrl_;
}

void ImagePredictRequest::setDataUrl(const std::string& dataUrl)
{
	dataUrl_ = dataUrl;
	setCoreParameter("DataUrl", dataUrl);
}

long ImagePredictRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ImagePredictRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ImagePredictRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ImagePredictRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool ImagePredictRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ImagePredictRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ImagePredictRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ImagePredictRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ImagePredictRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ImagePredictRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ImagePredictRequest::getCallerType()const
{
	return callerType_;
}

void ImagePredictRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ImagePredictRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ImagePredictRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ImagePredictRequest::getSecurityToken()const
{
	return securityToken_;
}

void ImagePredictRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ImagePredictRequest::getRegionId()const
{
	return regionId_;
}

void ImagePredictRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ImagePredictRequest::getRequestContent()const
{
	return requestContent_;
}

void ImagePredictRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ImagePredictRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ImagePredictRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ImagePredictRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ImagePredictRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ImagePredictRequest::getCallerUid()const
{
	return callerUid_;
}

void ImagePredictRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string ImagePredictRequest::getShowLog()const
{
	return showLog_;
}

void ImagePredictRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string ImagePredictRequest::getApp_ip()const
{
	return app_ip_;
}

void ImagePredictRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ImagePredictRequest::getPopProduct()const
{
	return popProduct_;
}

void ImagePredictRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string ImagePredictRequest::getModelId()const
{
	return modelId_;
}

void ImagePredictRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setCoreParameter("ModelId", modelId);
}

std::string ImagePredictRequest::getCallerBid()const
{
	return callerBid_;
}

void ImagePredictRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ImagePredictRequest::getOwnerId()const
{
	return ownerId_;
}

void ImagePredictRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ImagePredictRequest::getVersion()const
{
	return version_;
}

void ImagePredictRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool ImagePredictRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ImagePredictRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ImagePredictRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ImagePredictRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ImagePredictRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ImagePredictRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ImagePredictRequest::getServiceCode()const
{
	return serviceCode_;
}

void ImagePredictRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string ImagePredictRequest::getRequestId()const
{
	return requestId_;
}

void ImagePredictRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}


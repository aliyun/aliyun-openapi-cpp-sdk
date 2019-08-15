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

#include <alibabacloud/cdn/model/UntagResourcesRequest.h>

using AlibabaCloud::Cdn::Model::UntagResourcesRequest;

UntagResourcesRequest::UntagResourcesRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "UntagResources")
{}

UntagResourcesRequest::~UntagResourcesRequest()
{}

long UntagResourcesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UntagResourcesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long UntagResourcesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UntagResourcesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool UntagResourcesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UntagResourcesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string UntagResourcesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UntagResourcesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string UntagResourcesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void UntagResourcesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string UntagResourcesRequest::getCallerType()const
{
	return callerType_;
}

void UntagResourcesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string UntagResourcesRequest::getHeraVersion()const
{
	return heraVersion_;
}

void UntagResourcesRequest::setHeraVersion(const std::string& heraVersion)
{
	heraVersion_ = heraVersion;
	setCoreParameter("HeraVersion", heraVersion);
}

std::string UntagResourcesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UntagResourcesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UntagResourcesRequest::getSecurityToken()const
{
	return securityToken_;
}

void UntagResourcesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string UntagResourcesRequest::getRegionId()const
{
	return regionId_;
}

void UntagResourcesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UntagResourcesRequest::getRequestContent()const
{
	return requestContent_;
}

void UntagResourcesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string UntagResourcesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void UntagResourcesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string UntagResourcesRequest::getHeraFormat()const
{
	return heraFormat_;
}

void UntagResourcesRequest::setHeraFormat(const std::string& heraFormat)
{
	heraFormat_ = heraFormat;
	setCoreParameter("HeraFormat", heraFormat);
}

std::string UntagResourcesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void UntagResourcesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long UntagResourcesRequest::getCallerUid()const
{
	return callerUid_;
}

void UntagResourcesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string UntagResourcesRequest::getApp_ip()const
{
	return app_ip_;
}

void UntagResourcesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string UntagResourcesRequest::getPopProduct()const
{
	return popProduct_;
}

void UntagResourcesRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::vector<std::string> UntagResourcesRequest::getResourceId()const
{
	return resourceId_;
}

void UntagResourcesRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int i = 0; i!= resourceId.size(); i++)
		setCoreParameter("ResourceId."+ std::to_string(i), resourceId.at(i));
}

std::string UntagResourcesRequest::getHeraAction()const
{
	return heraAction_;
}

void UntagResourcesRequest::setHeraAction(const std::string& heraAction)
{
	heraAction_ = heraAction;
	setCoreParameter("HeraAction", heraAction);
}

std::string UntagResourcesRequest::getCallerBid()const
{
	return callerBid_;
}

void UntagResourcesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long UntagResourcesRequest::getOwnerId()const
{
	return ownerId_;
}

void UntagResourcesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UntagResourcesRequest::getVersion()const
{
	return version_;
}

void UntagResourcesRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string UntagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void UntagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

bool UntagResourcesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UntagResourcesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool UntagResourcesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UntagResourcesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool UntagResourcesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UntagResourcesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string UntagResourcesRequest::getSignatureMethod()const
{
	return signatureMethod_;
}

void UntagResourcesRequest::setSignatureMethod(const std::string& signatureMethod)
{
	signatureMethod_ = signatureMethod;
	setCoreParameter("SignatureMethod", signatureMethod);
}

std::string UntagResourcesRequest::getServiceCode()const
{
	return serviceCode_;
}

void UntagResourcesRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string UntagResourcesRequest::getSignatureVersion()const
{
	return signatureVersion_;
}

void UntagResourcesRequest::setSignatureVersion(const std::string& signatureVersion)
{
	signatureVersion_ = signatureVersion;
	setCoreParameter("SignatureVersion", signatureVersion);
}

std::string UntagResourcesRequest::getRequestId()const
{
	return requestId_;
}

void UntagResourcesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::vector<std::string> UntagResourcesRequest::getTagKey()const
{
	return tagKey_;
}

void UntagResourcesRequest::setTagKey(const std::vector<std::string>& tagKey)
{
	tagKey_ = tagKey;
	for(int i = 0; i!= tagKey.size(); i++)
		setCoreParameter("TagKey."+ std::to_string(i), tagKey.at(i));
}


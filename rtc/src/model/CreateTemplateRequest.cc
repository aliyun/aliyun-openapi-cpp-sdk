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

#include <alibabacloud/rtc/model/CreateTemplateRequest.h>

using AlibabaCloud::Rtc::Model::CreateTemplateRequest;

CreateTemplateRequest::CreateTemplateRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "CreateTemplate")
{}

CreateTemplateRequest::~CreateTemplateRequest()
{}

int CreateTemplateRequest::getServiceMode()const
{
	return serviceMode_;
}

void CreateTemplateRequest::setServiceMode(int serviceMode)
{
	serviceMode_ = serviceMode;
	setCoreParameter("ServiceMode", std::to_string(serviceMode));
}

std::vector<CreateTemplateRequest::LiveConfig> CreateTemplateRequest::getLiveConfig()const
{
	return liveConfig_;
}

void CreateTemplateRequest::setLiveConfig(const std::vector<LiveConfig>& liveConfig)
{
	liveConfig_ = liveConfig;
	int i = 0;
	for(int i = 0; i!= liveConfig.size(); i++)	{
		auto obj = liveConfig.at(i);
		std::string str ="LiveConfig."+ std::to_string(i);
		setCoreParameter(str + ".DomainName", obj.domainName);
		setCoreParameter(str + ".AppName", obj.appName);
	}
}

long CreateTemplateRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateTemplateRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateTemplateRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateTemplateRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

int CreateTemplateRequest::getMediaConfig()const
{
	return mediaConfig_;
}

void CreateTemplateRequest::setMediaConfig(int mediaConfig)
{
	mediaConfig_ = mediaConfig;
	setCoreParameter("MediaConfig", std::to_string(mediaConfig));
}

int CreateTemplateRequest::getMaxMixStreamCount()const
{
	return maxMixStreamCount_;
}

void CreateTemplateRequest::setMaxMixStreamCount(int maxMixStreamCount)
{
	maxMixStreamCount_ = maxMixStreamCount;
	setCoreParameter("MaxMixStreamCount", std::to_string(maxMixStreamCount));
}

std::string CreateTemplateRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateTemplateRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateTemplateRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateTemplateRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateTemplateRequest::getCallerType()const
{
	return callerType_;
}

void CreateTemplateRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::vector<CreateTemplateRequest::RecordConfig> CreateTemplateRequest::getRecordConfig()const
{
	return recordConfig_;
}

void CreateTemplateRequest::setRecordConfig(const std::vector<RecordConfig>& recordConfig)
{
	recordConfig_ = recordConfig;
	int i = 0;
	for(int i = 0; i!= recordConfig.size(); i++)	{
		auto obj = recordConfig.at(i);
		std::string str ="RecordConfig."+ std::to_string(i);
		setCoreParameter(str + ".StorageType", obj.storageType);
		setCoreParameter(str + ".FileFormat", std::to_string(obj.fileFormat));
		setCoreParameter(str + ".OssEndPoint", obj.ossEndPoint);
		setCoreParameter(str + ".OssBucket", obj.ossBucket);
		setCoreParameter(str + ".VodTransCodeGroupId", std::to_string(obj.vodTransCodeGroupId));
	}
}

std::string CreateTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateTemplateRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateTemplateRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateTemplateRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateTemplateRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string CreateTemplateRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateTemplateRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateTemplateRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateTemplateRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long CreateTemplateRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateTemplateRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateTemplateRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateTemplateRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string CreateTemplateRequest::getPopProduct()const
{
	return popProduct_;
}

void CreateTemplateRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string CreateTemplateRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateTemplateRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long CreateTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateTemplateRequest::getVersion()const
{
	return version_;
}

void CreateTemplateRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool CreateTemplateRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateTemplateRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateTemplateRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateTemplateRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateTemplateRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateTemplateRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::vector<CreateTemplateRequest::LayOut> CreateTemplateRequest::getLayOut()const
{
	return layOut_;
}

void CreateTemplateRequest::setLayOut(const std::vector<LayOut>& layOut)
{
	layOut_ = layOut;
	int i = 0;
	for(int i = 0; i!= layOut.size(); i++)	{
		auto obj = layOut.at(i);
		std::string str ="LayOut."+ std::to_string(i);
		setCoreParameter(str + ".Color", obj.color);
		setCoreParameter(str + ".CutMode", std::to_string(obj.cutMode));
		setCoreParameter(str + ".LayOutId", std::to_string(obj.layOutId));
	}
}

std::string CreateTemplateRequest::getRequestId()const
{
	return requestId_;
}

void CreateTemplateRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string CreateTemplateRequest::getAppId()const
{
	return appId_;
}

void CreateTemplateRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string CreateTemplateRequest::getCallBack()const
{
	return callBack_;
}

void CreateTemplateRequest::setCallBack(const std::string& callBack)
{
	callBack_ = callBack;
	setCoreParameter("CallBack", callBack);
}

int CreateTemplateRequest::getMixMode()const
{
	return mixMode_;
}

void CreateTemplateRequest::setMixMode(int mixMode)
{
	mixMode_ = mixMode;
	setCoreParameter("MixMode", std::to_string(mixMode));
}


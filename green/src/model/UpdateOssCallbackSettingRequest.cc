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

#include <alibabacloud/green/model/UpdateOssCallbackSettingRequest.h>

using AlibabaCloud::Green::Model::UpdateOssCallbackSettingRequest;

UpdateOssCallbackSettingRequest::UpdateOssCallbackSettingRequest() :
	RpcServiceRequest("green", "2017-08-23", "UpdateOssCallbackSetting")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateOssCallbackSettingRequest::~UpdateOssCallbackSettingRequest()
{}

std::string UpdateOssCallbackSettingRequest::getScanCallbackSuggestions()const
{
	return scanCallbackSuggestions_;
}

void UpdateOssCallbackSettingRequest::setScanCallbackSuggestions(const std::string& scanCallbackSuggestions)
{
	scanCallbackSuggestions_ = scanCallbackSuggestions;
	setParameter("ScanCallbackSuggestions", scanCallbackSuggestions);
}

std::string UpdateOssCallbackSettingRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateOssCallbackSettingRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string UpdateOssCallbackSettingRequest::getCallbackSeed()const
{
	return callbackSeed_;
}

void UpdateOssCallbackSettingRequest::setCallbackSeed(const std::string& callbackSeed)
{
	callbackSeed_ = callbackSeed;
	setParameter("CallbackSeed", callbackSeed);
}

std::string UpdateOssCallbackSettingRequest::getServiceModules()const
{
	return serviceModules_;
}

void UpdateOssCallbackSettingRequest::setServiceModules(const std::string& serviceModules)
{
	serviceModules_ = serviceModules;
	setParameter("ServiceModules", serviceModules);
}

bool UpdateOssCallbackSettingRequest::getAuditCallback()const
{
	return auditCallback_;
}

void UpdateOssCallbackSettingRequest::setAuditCallback(bool auditCallback)
{
	auditCallback_ = auditCallback;
	setParameter("AuditCallback", auditCallback ? "true" : "false");
}

bool UpdateOssCallbackSettingRequest::getScanCallback()const
{
	return scanCallback_;
}

void UpdateOssCallbackSettingRequest::setScanCallback(bool scanCallback)
{
	scanCallback_ = scanCallback;
	setParameter("ScanCallback", scanCallback ? "true" : "false");
}

std::string UpdateOssCallbackSettingRequest::getCallbackUrl()const
{
	return callbackUrl_;
}

void UpdateOssCallbackSettingRequest::setCallbackUrl(const std::string& callbackUrl)
{
	callbackUrl_ = callbackUrl;
	setParameter("CallbackUrl", callbackUrl);
}


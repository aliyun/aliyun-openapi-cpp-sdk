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

#include <alibabacloud/cloudapi/model/ModifyApiRequest.h>

using AlibabaCloud::CloudAPI::Model::ModifyApiRequest;

ModifyApiRequest::ModifyApiRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "ModifyApi")
{}

ModifyApiRequest::~ModifyApiRequest()
{}

std::string ModifyApiRequest::getWebSocketApiType()const
{
	return webSocketApiType_;
}

void ModifyApiRequest::setWebSocketApiType(const std::string& webSocketApiType)
{
	webSocketApiType_ = webSocketApiType;
	setCoreParameter("WebSocketApiType", std::to_string(webSocketApiType));
}

std::string ModifyApiRequest::getErrorCodeSamples()const
{
	return errorCodeSamples_;
}

void ModifyApiRequest::setErrorCodeSamples(const std::string& errorCodeSamples)
{
	errorCodeSamples_ = errorCodeSamples;
	setCoreParameter("ErrorCodeSamples", std::to_string(errorCodeSamples));
}

std::string ModifyApiRequest::getAppCodeAuthType()const
{
	return appCodeAuthType_;
}

void ModifyApiRequest::setAppCodeAuthType(const std::string& appCodeAuthType)
{
	appCodeAuthType_ = appCodeAuthType;
	setCoreParameter("AppCodeAuthType", std::to_string(appCodeAuthType));
}

std::string ModifyApiRequest::getDescription()const
{
	return description_;
}

void ModifyApiRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

bool ModifyApiRequest::getDisableInternet()const
{
	return disableInternet_;
}

void ModifyApiRequest::setDisableInternet(bool disableInternet)
{
	disableInternet_ = disableInternet;
	setCoreParameter("DisableInternet", disableInternet ? "true" : "false");
}

std::string ModifyApiRequest::getConstantParameters()const
{
	return constantParameters_;
}

void ModifyApiRequest::setConstantParameters(const std::string& constantParameters)
{
	constantParameters_ = constantParameters;
	setCoreParameter("ConstantParameters", std::to_string(constantParameters));
}

std::string ModifyApiRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyApiRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string ModifyApiRequest::getAuthType()const
{
	return authType_;
}

void ModifyApiRequest::setAuthType(const std::string& authType)
{
	authType_ = authType;
	setCoreParameter("AuthType", std::to_string(authType));
}

std::string ModifyApiRequest::getAllowSignatureMethod()const
{
	return allowSignatureMethod_;
}

void ModifyApiRequest::setAllowSignatureMethod(const std::string& allowSignatureMethod)
{
	allowSignatureMethod_ = allowSignatureMethod;
	setCoreParameter("AllowSignatureMethod", std::to_string(allowSignatureMethod));
}

std::string ModifyApiRequest::getServiceParameters()const
{
	return serviceParameters_;
}

void ModifyApiRequest::setServiceParameters(const std::string& serviceParameters)
{
	serviceParameters_ = serviceParameters;
	setCoreParameter("ServiceParameters", std::to_string(serviceParameters));
}

std::string ModifyApiRequest::getFailResultSample()const
{
	return failResultSample_;
}

void ModifyApiRequest::setFailResultSample(const std::string& failResultSample)
{
	failResultSample_ = failResultSample;
	setCoreParameter("FailResultSample", std::to_string(failResultSample));
}

std::string ModifyApiRequest::getSystemParameters()const
{
	return systemParameters_;
}

void ModifyApiRequest::setSystemParameters(const std::string& systemParameters)
{
	systemParameters_ = systemParameters;
	setCoreParameter("SystemParameters", std::to_string(systemParameters));
}

std::string ModifyApiRequest::getServiceParametersMap()const
{
	return serviceParametersMap_;
}

void ModifyApiRequest::setServiceParametersMap(const std::string& serviceParametersMap)
{
	serviceParametersMap_ = serviceParametersMap;
	setCoreParameter("ServiceParametersMap", std::to_string(serviceParametersMap));
}

std::string ModifyApiRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyApiRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ModifyApiRequest::getOpenIdConnectConfig()const
{
	return openIdConnectConfig_;
}

void ModifyApiRequest::setOpenIdConnectConfig(const std::string& openIdConnectConfig)
{
	openIdConnectConfig_ = openIdConnectConfig;
	setCoreParameter("OpenIdConnectConfig", std::to_string(openIdConnectConfig));
}

std::string ModifyApiRequest::getRequestParameters()const
{
	return requestParameters_;
}

void ModifyApiRequest::setRequestParameters(const std::string& requestParameters)
{
	requestParameters_ = requestParameters;
	setCoreParameter("RequestParameters", std::to_string(requestParameters));
}

std::string ModifyApiRequest::getResultDescriptions()const
{
	return resultDescriptions_;
}

void ModifyApiRequest::setResultDescriptions(const std::string& resultDescriptions)
{
	resultDescriptions_ = resultDescriptions;
	setCoreParameter("ResultDescriptions", std::to_string(resultDescriptions));
}

std::string ModifyApiRequest::getVisibility()const
{
	return visibility_;
}

void ModifyApiRequest::setVisibility(const std::string& visibility)
{
	visibility_ = visibility;
	setCoreParameter("Visibility", std::to_string(visibility));
}

std::string ModifyApiRequest::getGroupId()const
{
	return groupId_;
}

void ModifyApiRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string ModifyApiRequest::getServiceConfig()const
{
	return serviceConfig_;
}

void ModifyApiRequest::setServiceConfig(const std::string& serviceConfig)
{
	serviceConfig_ = serviceConfig;
	setCoreParameter("ServiceConfig", std::to_string(serviceConfig));
}

std::string ModifyApiRequest::getResultType()const
{
	return resultType_;
}

void ModifyApiRequest::setResultType(const std::string& resultType)
{
	resultType_ = resultType;
	setCoreParameter("ResultType", std::to_string(resultType));
}

std::string ModifyApiRequest::getApiName()const
{
	return apiName_;
}

void ModifyApiRequest::setApiName(const std::string& apiName)
{
	apiName_ = apiName;
	setCoreParameter("ApiName", std::to_string(apiName));
}

std::string ModifyApiRequest::getResultSample()const
{
	return resultSample_;
}

void ModifyApiRequest::setResultSample(const std::string& resultSample)
{
	resultSample_ = resultSample;
	setCoreParameter("ResultSample", std::to_string(resultSample));
}

bool ModifyApiRequest::getForceNonceCheck()const
{
	return forceNonceCheck_;
}

void ModifyApiRequest::setForceNonceCheck(bool forceNonceCheck)
{
	forceNonceCheck_ = forceNonceCheck;
	setCoreParameter("ForceNonceCheck", forceNonceCheck ? "true" : "false");
}

std::string ModifyApiRequest::getRequestConfig()const
{
	return requestConfig_;
}

void ModifyApiRequest::setRequestConfig(const std::string& requestConfig)
{
	requestConfig_ = requestConfig;
	setCoreParameter("RequestConfig", std::to_string(requestConfig));
}

std::string ModifyApiRequest::getResultBodyModel()const
{
	return resultBodyModel_;
}

void ModifyApiRequest::setResultBodyModel(const std::string& resultBodyModel)
{
	resultBodyModel_ = resultBodyModel;
	setCoreParameter("ResultBodyModel", std::to_string(resultBodyModel));
}

std::string ModifyApiRequest::getApiId()const
{
	return apiId_;
}

void ModifyApiRequest::setApiId(const std::string& apiId)
{
	apiId_ = apiId;
	setCoreParameter("ApiId", std::to_string(apiId));
}


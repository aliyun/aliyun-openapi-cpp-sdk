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

#include <alibabacloud/cloudapi/model/CreateApiRequest.h>

using AlibabaCloud::CloudAPI::Model::CreateApiRequest;

CreateApiRequest::CreateApiRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "CreateApi")
{}

CreateApiRequest::~CreateApiRequest()
{}

std::string CreateApiRequest::getWebSocketApiType()const
{
	return webSocketApiType_;
}

void CreateApiRequest::setWebSocketApiType(const std::string& webSocketApiType)
{
	webSocketApiType_ = webSocketApiType;
	setCoreParameter("WebSocketApiType", webSocketApiType);
}

std::string CreateApiRequest::getErrorCodeSamples()const
{
	return errorCodeSamples_;
}

void CreateApiRequest::setErrorCodeSamples(const std::string& errorCodeSamples)
{
	errorCodeSamples_ = errorCodeSamples;
	setCoreParameter("ErrorCodeSamples", errorCodeSamples);
}

std::string CreateApiRequest::getAppCodeAuthType()const
{
	return appCodeAuthType_;
}

void CreateApiRequest::setAppCodeAuthType(const std::string& appCodeAuthType)
{
	appCodeAuthType_ = appCodeAuthType;
	setCoreParameter("AppCodeAuthType", appCodeAuthType);
}

std::string CreateApiRequest::getDescription()const
{
	return description_;
}

void CreateApiRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

bool CreateApiRequest::getDisableInternet()const
{
	return disableInternet_;
}

void CreateApiRequest::setDisableInternet(bool disableInternet)
{
	disableInternet_ = disableInternet;
	setCoreParameter("DisableInternet", disableInternet);
}

std::string CreateApiRequest::getConstantParameters()const
{
	return constantParameters_;
}

void CreateApiRequest::setConstantParameters(const std::string& constantParameters)
{
	constantParameters_ = constantParameters;
	setCoreParameter("ConstantParameters", constantParameters);
}

std::string CreateApiRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateApiRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateApiRequest::getAuthType()const
{
	return authType_;
}

void CreateApiRequest::setAuthType(const std::string& authType)
{
	authType_ = authType;
	setCoreParameter("AuthType", authType);
}

std::string CreateApiRequest::getAllowSignatureMethod()const
{
	return allowSignatureMethod_;
}

void CreateApiRequest::setAllowSignatureMethod(const std::string& allowSignatureMethod)
{
	allowSignatureMethod_ = allowSignatureMethod;
	setCoreParameter("AllowSignatureMethod", allowSignatureMethod);
}

std::string CreateApiRequest::getServiceParameters()const
{
	return serviceParameters_;
}

void CreateApiRequest::setServiceParameters(const std::string& serviceParameters)
{
	serviceParameters_ = serviceParameters;
	setCoreParameter("ServiceParameters", serviceParameters);
}

std::string CreateApiRequest::getFailResultSample()const
{
	return failResultSample_;
}

void CreateApiRequest::setFailResultSample(const std::string& failResultSample)
{
	failResultSample_ = failResultSample;
	setCoreParameter("FailResultSample", failResultSample);
}

std::string CreateApiRequest::getSystemParameters()const
{
	return systemParameters_;
}

void CreateApiRequest::setSystemParameters(const std::string& systemParameters)
{
	systemParameters_ = systemParameters;
	setCoreParameter("SystemParameters", systemParameters);
}

std::string CreateApiRequest::getServiceParametersMap()const
{
	return serviceParametersMap_;
}

void CreateApiRequest::setServiceParametersMap(const std::string& serviceParametersMap)
{
	serviceParametersMap_ = serviceParametersMap;
	setCoreParameter("ServiceParametersMap", serviceParametersMap);
}

std::string CreateApiRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateApiRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateApiRequest::getOpenIdConnectConfig()const
{
	return openIdConnectConfig_;
}

void CreateApiRequest::setOpenIdConnectConfig(const std::string& openIdConnectConfig)
{
	openIdConnectConfig_ = openIdConnectConfig;
	setCoreParameter("OpenIdConnectConfig", openIdConnectConfig);
}

std::string CreateApiRequest::getRequestParameters()const
{
	return requestParameters_;
}

void CreateApiRequest::setRequestParameters(const std::string& requestParameters)
{
	requestParameters_ = requestParameters;
	setCoreParameter("RequestParameters", requestParameters);
}

std::string CreateApiRequest::getResultDescriptions()const
{
	return resultDescriptions_;
}

void CreateApiRequest::setResultDescriptions(const std::string& resultDescriptions)
{
	resultDescriptions_ = resultDescriptions;
	setCoreParameter("ResultDescriptions", resultDescriptions);
}

std::string CreateApiRequest::getVisibility()const
{
	return visibility_;
}

void CreateApiRequest::setVisibility(const std::string& visibility)
{
	visibility_ = visibility;
	setCoreParameter("Visibility", visibility);
}

std::string CreateApiRequest::getGroupId()const
{
	return groupId_;
}

void CreateApiRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string CreateApiRequest::getServiceConfig()const
{
	return serviceConfig_;
}

void CreateApiRequest::setServiceConfig(const std::string& serviceConfig)
{
	serviceConfig_ = serviceConfig;
	setCoreParameter("ServiceConfig", serviceConfig);
}

std::string CreateApiRequest::getResultType()const
{
	return resultType_;
}

void CreateApiRequest::setResultType(const std::string& resultType)
{
	resultType_ = resultType;
	setCoreParameter("ResultType", resultType);
}

std::string CreateApiRequest::getApiName()const
{
	return apiName_;
}

void CreateApiRequest::setApiName(const std::string& apiName)
{
	apiName_ = apiName;
	setCoreParameter("ApiName", apiName);
}

std::string CreateApiRequest::getResultSample()const
{
	return resultSample_;
}

void CreateApiRequest::setResultSample(const std::string& resultSample)
{
	resultSample_ = resultSample;
	setCoreParameter("ResultSample", resultSample);
}

bool CreateApiRequest::getForceNonceCheck()const
{
	return forceNonceCheck_;
}

void CreateApiRequest::setForceNonceCheck(bool forceNonceCheck)
{
	forceNonceCheck_ = forceNonceCheck;
	setCoreParameter("ForceNonceCheck", forceNonceCheck);
}

std::string CreateApiRequest::getRequestConfig()const
{
	return requestConfig_;
}

void CreateApiRequest::setRequestConfig(const std::string& requestConfig)
{
	requestConfig_ = requestConfig;
	setCoreParameter("RequestConfig", requestConfig);
}

std::string CreateApiRequest::getResultBodyModel()const
{
	return resultBodyModel_;
}

void CreateApiRequest::setResultBodyModel(const std::string& resultBodyModel)
{
	resultBodyModel_ = resultBodyModel;
	setCoreParameter("ResultBodyModel", resultBodyModel);
}


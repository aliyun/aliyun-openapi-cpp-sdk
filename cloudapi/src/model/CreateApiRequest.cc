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

CreateApiRequest::CreateApiRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "CreateApi") {
  setMethod(HttpRequest::Method::Post);
}

CreateApiRequest::~CreateApiRequest() {}

std::string CreateApiRequest::getWebSocketApiType() const {
  return webSocketApiType_;
}

void CreateApiRequest::setWebSocketApiType(const std::string &webSocketApiType) {
  webSocketApiType_ = webSocketApiType;
  setParameter(std::string("WebSocketApiType"), webSocketApiType);
}

std::string CreateApiRequest::getErrorCodeSamples() const {
  return errorCodeSamples_;
}

void CreateApiRequest::setErrorCodeSamples(const std::string &errorCodeSamples) {
  errorCodeSamples_ = errorCodeSamples;
  setBodyParameter(std::string("ErrorCodeSamples"), errorCodeSamples);
}

std::string CreateApiRequest::getAppCodeAuthType() const {
  return appCodeAuthType_;
}

void CreateApiRequest::setAppCodeAuthType(const std::string &appCodeAuthType) {
  appCodeAuthType_ = appCodeAuthType;
  setParameter(std::string("AppCodeAuthType"), appCodeAuthType);
}

std::string CreateApiRequest::getDescription() const {
  return description_;
}

void CreateApiRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool CreateApiRequest::getDisableInternet() const {
  return disableInternet_;
}

void CreateApiRequest::setDisableInternet(bool disableInternet) {
  disableInternet_ = disableInternet;
  setParameter(std::string("DisableInternet"), disableInternet ? "true" : "false");
}

std::string CreateApiRequest::getBackendId() const {
  return backendId_;
}

void CreateApiRequest::setBackendId(const std::string &backendId) {
  backendId_ = backendId;
  setParameter(std::string("BackendId"), backendId);
}

std::string CreateApiRequest::getConstantParameters() const {
  return constantParameters_;
}

void CreateApiRequest::setConstantParameters(const std::string &constantParameters) {
  constantParameters_ = constantParameters;
  setBodyParameter(std::string("ConstantParameters"), constantParameters);
}

std::string CreateApiRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateApiRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateApiRequest::getAuthType() const {
  return authType_;
}

void CreateApiRequest::setAuthType(const std::string &authType) {
  authType_ = authType;
  setParameter(std::string("AuthType"), authType);
}

std::string CreateApiRequest::getAllowSignatureMethod() const {
  return allowSignatureMethod_;
}

void CreateApiRequest::setAllowSignatureMethod(const std::string &allowSignatureMethod) {
  allowSignatureMethod_ = allowSignatureMethod;
  setParameter(std::string("AllowSignatureMethod"), allowSignatureMethod);
}

std::string CreateApiRequest::getServiceParameters() const {
  return serviceParameters_;
}

void CreateApiRequest::setServiceParameters(const std::string &serviceParameters) {
  serviceParameters_ = serviceParameters;
  setBodyParameter(std::string("ServiceParameters"), serviceParameters);
}

std::string CreateApiRequest::getFailResultSample() const {
  return failResultSample_;
}

void CreateApiRequest::setFailResultSample(const std::string &failResultSample) {
  failResultSample_ = failResultSample;
  setBodyParameter(std::string("FailResultSample"), failResultSample);
}

std::string CreateApiRequest::getResourceOwnerToken() const {
  return resourceOwnerToken_;
}

void CreateApiRequest::setResourceOwnerToken(const std::string &resourceOwnerToken) {
  resourceOwnerToken_ = resourceOwnerToken;
  setParameter(std::string("ResourceOwnerToken"), resourceOwnerToken);
}

std::string CreateApiRequest::getSystemParameters() const {
  return systemParameters_;
}

void CreateApiRequest::setSystemParameters(const std::string &systemParameters) {
  systemParameters_ = systemParameters;
  setBodyParameter(std::string("SystemParameters"), systemParameters);
}

std::string CreateApiRequest::getServiceParametersMap() const {
  return serviceParametersMap_;
}

void CreateApiRequest::setServiceParametersMap(const std::string &serviceParametersMap) {
  serviceParametersMap_ = serviceParametersMap;
  setBodyParameter(std::string("ServiceParametersMap"), serviceParametersMap);
}

std::string CreateApiRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateApiRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CreateApiRequest::getOpenIdConnectConfig() const {
  return openIdConnectConfig_;
}

void CreateApiRequest::setOpenIdConnectConfig(const std::string &openIdConnectConfig) {
  openIdConnectConfig_ = openIdConnectConfig;
  setParameter(std::string("OpenIdConnectConfig"), openIdConnectConfig);
}

std::string CreateApiRequest::getRequestParameters() const {
  return requestParameters_;
}

void CreateApiRequest::setRequestParameters(const std::string &requestParameters) {
  requestParameters_ = requestParameters;
  setBodyParameter(std::string("RequestParameters"), requestParameters);
}

std::string CreateApiRequest::getResultDescriptions() const {
  return resultDescriptions_;
}

void CreateApiRequest::setResultDescriptions(const std::string &resultDescriptions) {
  resultDescriptions_ = resultDescriptions;
  setBodyParameter(std::string("ResultDescriptions"), resultDescriptions);
}

std::string CreateApiRequest::getVisibility() const {
  return visibility_;
}

void CreateApiRequest::setVisibility(const std::string &visibility) {
  visibility_ = visibility;
  setParameter(std::string("Visibility"), visibility);
}

std::string CreateApiRequest::getGroupId() const {
  return groupId_;
}

void CreateApiRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string CreateApiRequest::getServiceConfig() const {
  return serviceConfig_;
}

void CreateApiRequest::setServiceConfig(const std::string &serviceConfig) {
  serviceConfig_ = serviceConfig;
  setParameter(std::string("ServiceConfig"), serviceConfig);
}

std::string CreateApiRequest::getResultType() const {
  return resultType_;
}

void CreateApiRequest::setResultType(const std::string &resultType) {
  resultType_ = resultType;
  setParameter(std::string("ResultType"), resultType);
}

std::string CreateApiRequest::getApiName() const {
  return apiName_;
}

void CreateApiRequest::setApiName(const std::string &apiName) {
  apiName_ = apiName;
  setParameter(std::string("ApiName"), apiName);
}

std::string CreateApiRequest::getResultSample() const {
  return resultSample_;
}

void CreateApiRequest::setResultSample(const std::string &resultSample) {
  resultSample_ = resultSample;
  setBodyParameter(std::string("ResultSample"), resultSample);
}

bool CreateApiRequest::getBackendEnable() const {
  return backendEnable_;
}

void CreateApiRequest::setBackendEnable(bool backendEnable) {
  backendEnable_ = backendEnable;
  setParameter(std::string("BackendEnable"), backendEnable ? "true" : "false");
}

bool CreateApiRequest::getForceNonceCheck() const {
  return forceNonceCheck_;
}

void CreateApiRequest::setForceNonceCheck(bool forceNonceCheck) {
  forceNonceCheck_ = forceNonceCheck;
  setParameter(std::string("ForceNonceCheck"), forceNonceCheck ? "true" : "false");
}

std::string CreateApiRequest::getRequestConfig() const {
  return requestConfig_;
}

void CreateApiRequest::setRequestConfig(const std::string &requestConfig) {
  requestConfig_ = requestConfig;
  setParameter(std::string("RequestConfig"), requestConfig);
}

std::string CreateApiRequest::getResultBodyModel() const {
  return resultBodyModel_;
}

void CreateApiRequest::setResultBodyModel(const std::string &resultBodyModel) {
  resultBodyModel_ = resultBodyModel;
  setParameter(std::string("ResultBodyModel"), resultBodyModel);
}


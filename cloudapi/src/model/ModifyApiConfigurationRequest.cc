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

#include <alibabacloud/cloudapi/model/ModifyApiConfigurationRequest.h>

using AlibabaCloud::CloudAPI::Model::ModifyApiConfigurationRequest;

ModifyApiConfigurationRequest::ModifyApiConfigurationRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "ModifyApiConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

ModifyApiConfigurationRequest::~ModifyApiConfigurationRequest() {}

std::string ModifyApiConfigurationRequest::getContentTypeCategory() const {
  return contentTypeCategory_;
}

void ModifyApiConfigurationRequest::setContentTypeCategory(const std::string &contentTypeCategory) {
  contentTypeCategory_ = contentTypeCategory;
  setParameter(std::string("ContentTypeCategory"), contentTypeCategory);
}

std::string ModifyApiConfigurationRequest::getModelName() const {
  return modelName_;
}

void ModifyApiConfigurationRequest::setModelName(const std::string &modelName) {
  modelName_ = modelName;
  setParameter(std::string("ModelName"), modelName);
}

std::string ModifyApiConfigurationRequest::getErrorCodeSamples() const {
  return errorCodeSamples_;
}

void ModifyApiConfigurationRequest::setErrorCodeSamples(const std::string &errorCodeSamples) {
  errorCodeSamples_ = errorCodeSamples;
  setParameter(std::string("ErrorCodeSamples"), errorCodeSamples);
}

std::string ModifyApiConfigurationRequest::getAppCodeAuthType() const {
  return appCodeAuthType_;
}

void ModifyApiConfigurationRequest::setAppCodeAuthType(const std::string &appCodeAuthType) {
  appCodeAuthType_ = appCodeAuthType;
  setParameter(std::string("AppCodeAuthType"), appCodeAuthType);
}

std::string ModifyApiConfigurationRequest::getAuthType() const {
  return authType_;
}

void ModifyApiConfigurationRequest::setAuthType(const std::string &authType) {
  authType_ = authType;
  setParameter(std::string("AuthType"), authType);
}

std::string ModifyApiConfigurationRequest::getHttpConfig() const {
  return httpConfig_;
}

void ModifyApiConfigurationRequest::setHttpConfig(const std::string &httpConfig) {
  httpConfig_ = httpConfig;
  setParameter(std::string("HttpConfig"), httpConfig);
}

std::string ModifyApiConfigurationRequest::getServiceParameters() const {
  return serviceParameters_;
}

void ModifyApiConfigurationRequest::setServiceParameters(const std::string &serviceParameters) {
  serviceParameters_ = serviceParameters;
  setParameter(std::string("ServiceParameters"), serviceParameters);
}

std::string ModifyApiConfigurationRequest::getFailResultSample() const {
  return failResultSample_;
}

void ModifyApiConfigurationRequest::setFailResultSample(const std::string &failResultSample) {
  failResultSample_ = failResultSample;
  setParameter(std::string("FailResultSample"), failResultSample);
}

std::string ModifyApiConfigurationRequest::getContentTypeValue() const {
  return contentTypeValue_;
}

void ModifyApiConfigurationRequest::setContentTypeValue(const std::string &contentTypeValue) {
  contentTypeValue_ = contentTypeValue;
  setParameter(std::string("ContentTypeValue"), contentTypeValue);
}

std::string ModifyApiConfigurationRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyApiConfigurationRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyApiConfigurationRequest::getVisibility() const {
  return visibility_;
}

void ModifyApiConfigurationRequest::setVisibility(const std::string &visibility) {
  visibility_ = visibility;
  setParameter(std::string("Visibility"), visibility);
}

std::string ModifyApiConfigurationRequest::getRequestProtocol() const {
  return requestProtocol_;
}

void ModifyApiConfigurationRequest::setRequestProtocol(const std::string &requestProtocol) {
  requestProtocol_ = requestProtocol;
  setParameter(std::string("RequestProtocol"), requestProtocol);
}

std::string ModifyApiConfigurationRequest::getRequestMode() const {
  return requestMode_;
}

void ModifyApiConfigurationRequest::setRequestMode(const std::string &requestMode) {
  requestMode_ = requestMode;
  setParameter(std::string("RequestMode"), requestMode);
}

std::string ModifyApiConfigurationRequest::getBackendName() const {
  return backendName_;
}

void ModifyApiConfigurationRequest::setBackendName(const std::string &backendName) {
  backendName_ = backendName;
  setParameter(std::string("BackendName"), backendName);
}

std::string ModifyApiConfigurationRequest::getRequestPath() const {
  return requestPath_;
}

void ModifyApiConfigurationRequest::setRequestPath(const std::string &requestPath) {
  requestPath_ = requestPath;
  setParameter(std::string("RequestPath"), requestPath);
}

std::string ModifyApiConfigurationRequest::getResultType() const {
  return resultType_;
}

void ModifyApiConfigurationRequest::setResultType(const std::string &resultType) {
  resultType_ = resultType;
  setParameter(std::string("ResultType"), resultType);
}

std::string ModifyApiConfigurationRequest::getMockConfig() const {
  return mockConfig_;
}

void ModifyApiConfigurationRequest::setMockConfig(const std::string &mockConfig) {
  mockConfig_ = mockConfig;
  setParameter(std::string("MockConfig"), mockConfig);
}

std::string ModifyApiConfigurationRequest::getResultSample() const {
  return resultSample_;
}

void ModifyApiConfigurationRequest::setResultSample(const std::string &resultSample) {
  resultSample_ = resultSample;
  setParameter(std::string("ResultSample"), resultSample);
}

std::string ModifyApiConfigurationRequest::getBodyModel() const {
  return bodyModel_;
}

void ModifyApiConfigurationRequest::setBodyModel(const std::string &bodyModel) {
  bodyModel_ = bodyModel;
  setParameter(std::string("BodyModel"), bodyModel);
}

std::string ModifyApiConfigurationRequest::getVpcConfig() const {
  return vpcConfig_;
}

void ModifyApiConfigurationRequest::setVpcConfig(const std::string &vpcConfig) {
  vpcConfig_ = vpcConfig;
  setParameter(std::string("VpcConfig"), vpcConfig);
}

std::string ModifyApiConfigurationRequest::getFunctionComputeConfig() const {
  return functionComputeConfig_;
}

void ModifyApiConfigurationRequest::setFunctionComputeConfig(const std::string &functionComputeConfig) {
  functionComputeConfig_ = functionComputeConfig;
  setParameter(std::string("FunctionComputeConfig"), functionComputeConfig);
}

std::string ModifyApiConfigurationRequest::getApiId() const {
  return apiId_;
}

void ModifyApiConfigurationRequest::setApiId(const std::string &apiId) {
  apiId_ = apiId;
  setParameter(std::string("ApiId"), apiId);
}

bool ModifyApiConfigurationRequest::getUseBackendService() const {
  return useBackendService_;
}

void ModifyApiConfigurationRequest::setUseBackendService(bool useBackendService) {
  useBackendService_ = useBackendService;
  setParameter(std::string("UseBackendService"), useBackendService ? "true" : "false");
}

std::string ModifyApiConfigurationRequest::getServiceProtocol() const {
  return serviceProtocol_;
}

void ModifyApiConfigurationRequest::setServiceProtocol(const std::string &serviceProtocol) {
  serviceProtocol_ = serviceProtocol;
  setParameter(std::string("ServiceProtocol"), serviceProtocol);
}

std::string ModifyApiConfigurationRequest::getDescription() const {
  return description_;
}

void ModifyApiConfigurationRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool ModifyApiConfigurationRequest::getDisableInternet() const {
  return disableInternet_;
}

void ModifyApiConfigurationRequest::setDisableInternet(bool disableInternet) {
  disableInternet_ = disableInternet;
  setParameter(std::string("DisableInternet"), disableInternet ? "true" : "false");
}

std::string ModifyApiConfigurationRequest::getPostBodyDescription() const {
  return postBodyDescription_;
}

void ModifyApiConfigurationRequest::setPostBodyDescription(const std::string &postBodyDescription) {
  postBodyDescription_ = postBodyDescription;
  setParameter(std::string("PostBodyDescription"), postBodyDescription);
}

std::string ModifyApiConfigurationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyApiConfigurationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyApiConfigurationRequest::getAllowSignatureMethod() const {
  return allowSignatureMethod_;
}

void ModifyApiConfigurationRequest::setAllowSignatureMethod(const std::string &allowSignatureMethod) {
  allowSignatureMethod_ = allowSignatureMethod;
  setParameter(std::string("AllowSignatureMethod"), allowSignatureMethod);
}

std::string ModifyApiConfigurationRequest::getRequestHttpMethod() const {
  return requestHttpMethod_;
}

void ModifyApiConfigurationRequest::setRequestHttpMethod(const std::string &requestHttpMethod) {
  requestHttpMethod_ = requestHttpMethod;
  setParameter(std::string("RequestHttpMethod"), requestHttpMethod);
}

std::string ModifyApiConfigurationRequest::getServiceParametersMap() const {
  return serviceParametersMap_;
}

void ModifyApiConfigurationRequest::setServiceParametersMap(const std::string &serviceParametersMap) {
  serviceParametersMap_ = serviceParametersMap;
  setParameter(std::string("ServiceParametersMap"), serviceParametersMap);
}

std::string ModifyApiConfigurationRequest::getRequestParameters() const {
  return requestParameters_;
}

void ModifyApiConfigurationRequest::setRequestParameters(const std::string &requestParameters) {
  requestParameters_ = requestParameters;
  setParameter(std::string("RequestParameters"), requestParameters);
}

std::string ModifyApiConfigurationRequest::getBodyFormat() const {
  return bodyFormat_;
}

void ModifyApiConfigurationRequest::setBodyFormat(const std::string &bodyFormat) {
  bodyFormat_ = bodyFormat;
  setParameter(std::string("BodyFormat"), bodyFormat);
}

std::string ModifyApiConfigurationRequest::getOssConfig() const {
  return ossConfig_;
}

void ModifyApiConfigurationRequest::setOssConfig(const std::string &ossConfig) {
  ossConfig_ = ossConfig;
  setParameter(std::string("OssConfig"), ossConfig);
}

std::string ModifyApiConfigurationRequest::getApiName() const {
  return apiName_;
}

void ModifyApiConfigurationRequest::setApiName(const std::string &apiName) {
  apiName_ = apiName;
  setParameter(std::string("ApiName"), apiName);
}

int ModifyApiConfigurationRequest::getServiceTimeout() const {
  return serviceTimeout_;
}

void ModifyApiConfigurationRequest::setServiceTimeout(int serviceTimeout) {
  serviceTimeout_ = serviceTimeout;
  setParameter(std::string("ServiceTimeout"), std::to_string(serviceTimeout));
}

bool ModifyApiConfigurationRequest::getForceNonceCheck() const {
  return forceNonceCheck_;
}

void ModifyApiConfigurationRequest::setForceNonceCheck(bool forceNonceCheck) {
  forceNonceCheck_ = forceNonceCheck;
  setParameter(std::string("ForceNonceCheck"), forceNonceCheck ? "true" : "false");
}


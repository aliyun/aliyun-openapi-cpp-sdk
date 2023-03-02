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

#include <alibabacloud/dataworks-public/model/UpdateDataServiceApiRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateDataServiceApiRequest;

UpdateDataServiceApiRequest::UpdateDataServiceApiRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateDataServiceApi") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDataServiceApiRequest::~UpdateDataServiceApiRequest() {}

std::string UpdateDataServiceApiRequest::getScriptDetails() const {
  return scriptDetails_;
}

void UpdateDataServiceApiRequest::setScriptDetails(const std::string &scriptDetails) {
  scriptDetails_ = scriptDetails;
  setBodyParameter(std::string("ScriptDetails"), scriptDetails);
}

int UpdateDataServiceApiRequest::getRequestMethod() const {
  return requestMethod_;
}

void UpdateDataServiceApiRequest::setRequestMethod(int requestMethod) {
  requestMethod_ = requestMethod;
  setBodyParameter(std::string("RequestMethod"), std::to_string(requestMethod));
}

std::string UpdateDataServiceApiRequest::getApiDescription() const {
  return apiDescription_;
}

void UpdateDataServiceApiRequest::setApiDescription(const std::string &apiDescription) {
  apiDescription_ = apiDescription;
  setBodyParameter(std::string("ApiDescription"), apiDescription);
}

int UpdateDataServiceApiRequest::getTimeout() const {
  return timeout_;
}

void UpdateDataServiceApiRequest::setTimeout(int timeout) {
  timeout_ = timeout;
  setBodyParameter(std::string("Timeout"), std::to_string(timeout));
}

long UpdateDataServiceApiRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void UpdateDataServiceApiRequest::setResourceGroupId(long resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), std::to_string(resourceGroupId));
}

long UpdateDataServiceApiRequest::getTenantId() const {
  return tenantId_;
}

void UpdateDataServiceApiRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), std::to_string(tenantId));
}

std::string UpdateDataServiceApiRequest::getProtocols() const {
  return protocols_;
}

void UpdateDataServiceApiRequest::setProtocols(const std::string &protocols) {
  protocols_ = protocols;
  setBodyParameter(std::string("Protocols"), protocols);
}

long UpdateDataServiceApiRequest::getProjectId() const {
  return projectId_;
}

void UpdateDataServiceApiRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

int UpdateDataServiceApiRequest::getResponseContentType() const {
  return responseContentType_;
}

void UpdateDataServiceApiRequest::setResponseContentType(int responseContentType) {
  responseContentType_ = responseContentType;
  setBodyParameter(std::string("ResponseContentType"), std::to_string(responseContentType));
}

std::string UpdateDataServiceApiRequest::getApiPath() const {
  return apiPath_;
}

void UpdateDataServiceApiRequest::setApiPath(const std::string &apiPath) {
  apiPath_ = apiPath;
  setBodyParameter(std::string("ApiPath"), apiPath);
}

std::string UpdateDataServiceApiRequest::getWizardDetails() const {
  return wizardDetails_;
}

void UpdateDataServiceApiRequest::setWizardDetails(const std::string &wizardDetails) {
  wizardDetails_ = wizardDetails;
  setBodyParameter(std::string("WizardDetails"), wizardDetails);
}

int UpdateDataServiceApiRequest::getVisibleRange() const {
  return visibleRange_;
}

void UpdateDataServiceApiRequest::setVisibleRange(int visibleRange) {
  visibleRange_ = visibleRange;
  setBodyParameter(std::string("VisibleRange"), std::to_string(visibleRange));
}

std::string UpdateDataServiceApiRequest::getRegistrationDetails() const {
  return registrationDetails_;
}

void UpdateDataServiceApiRequest::setRegistrationDetails(const std::string &registrationDetails) {
  registrationDetails_ = registrationDetails;
  setBodyParameter(std::string("RegistrationDetails"), registrationDetails);
}

long UpdateDataServiceApiRequest::getApiId() const {
  return apiId_;
}

void UpdateDataServiceApiRequest::setApiId(long apiId) {
  apiId_ = apiId;
  setBodyParameter(std::string("ApiId"), std::to_string(apiId));
}


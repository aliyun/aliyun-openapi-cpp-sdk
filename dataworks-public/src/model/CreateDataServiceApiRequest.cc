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

#include <alibabacloud/dataworks-public/model/CreateDataServiceApiRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateDataServiceApiRequest;

CreateDataServiceApiRequest::CreateDataServiceApiRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateDataServiceApi") {
  setMethod(HttpRequest::Method::Post);
}

CreateDataServiceApiRequest::~CreateDataServiceApiRequest() {}

std::string CreateDataServiceApiRequest::getScriptDetails() const {
  return scriptDetails_;
}

void CreateDataServiceApiRequest::setScriptDetails(const std::string &scriptDetails) {
  scriptDetails_ = scriptDetails;
  setBodyParameter(std::string("ScriptDetails"), scriptDetails);
}

int CreateDataServiceApiRequest::getRequestMethod() const {
  return requestMethod_;
}

void CreateDataServiceApiRequest::setRequestMethod(int requestMethod) {
  requestMethod_ = requestMethod;
  setBodyParameter(std::string("RequestMethod"), std::to_string(requestMethod));
}

std::string CreateDataServiceApiRequest::getApiDescription() const {
  return apiDescription_;
}

void CreateDataServiceApiRequest::setApiDescription(const std::string &apiDescription) {
  apiDescription_ = apiDescription;
  setBodyParameter(std::string("ApiDescription"), apiDescription);
}

int CreateDataServiceApiRequest::getTimeout() const {
  return timeout_;
}

void CreateDataServiceApiRequest::setTimeout(int timeout) {
  timeout_ = timeout;
  setBodyParameter(std::string("Timeout"), std::to_string(timeout));
}

long CreateDataServiceApiRequest::getFolderId() const {
  return folderId_;
}

void CreateDataServiceApiRequest::setFolderId(long folderId) {
  folderId_ = folderId;
  setBodyParameter(std::string("FolderId"), std::to_string(folderId));
}

long CreateDataServiceApiRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDataServiceApiRequest::setResourceGroupId(long resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), std::to_string(resourceGroupId));
}

long CreateDataServiceApiRequest::getSqlMode() const {
  return sqlMode_;
}

void CreateDataServiceApiRequest::setSqlMode(long sqlMode) {
  sqlMode_ = sqlMode;
  setBodyParameter(std::string("SqlMode"), std::to_string(sqlMode));
}

long CreateDataServiceApiRequest::getTenantId() const {
  return tenantId_;
}

void CreateDataServiceApiRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), std::to_string(tenantId));
}

int CreateDataServiceApiRequest::getRequestContentType() const {
  return requestContentType_;
}

void CreateDataServiceApiRequest::setRequestContentType(int requestContentType) {
  requestContentType_ = requestContentType;
  setBodyParameter(std::string("RequestContentType"), std::to_string(requestContentType));
}

std::string CreateDataServiceApiRequest::getProtocols() const {
  return protocols_;
}

void CreateDataServiceApiRequest::setProtocols(const std::string &protocols) {
  protocols_ = protocols;
  setBodyParameter(std::string("Protocols"), protocols);
}

long CreateDataServiceApiRequest::getProjectId() const {
  return projectId_;
}

void CreateDataServiceApiRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

int CreateDataServiceApiRequest::getResponseContentType() const {
  return responseContentType_;
}

void CreateDataServiceApiRequest::setResponseContentType(int responseContentType) {
  responseContentType_ = responseContentType;
  setBodyParameter(std::string("ResponseContentType"), std::to_string(responseContentType));
}

std::string CreateDataServiceApiRequest::getGroupId() const {
  return groupId_;
}

void CreateDataServiceApiRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string CreateDataServiceApiRequest::getApiPath() const {
  return apiPath_;
}

void CreateDataServiceApiRequest::setApiPath(const std::string &apiPath) {
  apiPath_ = apiPath;
  setBodyParameter(std::string("ApiPath"), apiPath);
}

std::string CreateDataServiceApiRequest::getWizardDetails() const {
  return wizardDetails_;
}

void CreateDataServiceApiRequest::setWizardDetails(const std::string &wizardDetails) {
  wizardDetails_ = wizardDetails;
  setBodyParameter(std::string("WizardDetails"), wizardDetails);
}

int CreateDataServiceApiRequest::getApiMode() const {
  return apiMode_;
}

void CreateDataServiceApiRequest::setApiMode(int apiMode) {
  apiMode_ = apiMode;
  setBodyParameter(std::string("ApiMode"), std::to_string(apiMode));
}

int CreateDataServiceApiRequest::getVisibleRange() const {
  return visibleRange_;
}

void CreateDataServiceApiRequest::setVisibleRange(int visibleRange) {
  visibleRange_ = visibleRange;
  setBodyParameter(std::string("VisibleRange"), std::to_string(visibleRange));
}

std::string CreateDataServiceApiRequest::getRegistrationDetails() const {
  return registrationDetails_;
}

void CreateDataServiceApiRequest::setRegistrationDetails(const std::string &registrationDetails) {
  registrationDetails_ = registrationDetails;
  setBodyParameter(std::string("RegistrationDetails"), registrationDetails);
}

std::string CreateDataServiceApiRequest::getApiName() const {
  return apiName_;
}

void CreateDataServiceApiRequest::setApiName(const std::string &apiName) {
  apiName_ = apiName;
  setBodyParameter(std::string("ApiName"), apiName);
}


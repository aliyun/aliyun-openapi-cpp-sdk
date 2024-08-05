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

#include <alibabacloud/arms/model/CreateEnvironmentRequest.h>

using AlibabaCloud::ARMS::Model::CreateEnvironmentRequest;

CreateEnvironmentRequest::CreateEnvironmentRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateEnvironment") {
  setMethod(HttpRequest::Method::Post);
}

CreateEnvironmentRequest::~CreateEnvironmentRequest() {}

std::string CreateEnvironmentRequest::getAliyunLang() const {
  return aliyunLang_;
}

void CreateEnvironmentRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::string CreateEnvironmentRequest::getEnvironmentName() const {
  return environmentName_;
}

void CreateEnvironmentRequest::setEnvironmentName(const std::string &environmentName) {
  environmentName_ = environmentName;
  setParameter(std::string("EnvironmentName"), environmentName);
}

bool CreateEnvironmentRequest::getInitEnvironment() const {
  return initEnvironment_;
}

void CreateEnvironmentRequest::setInitEnvironment(bool initEnvironment) {
  initEnvironment_ = initEnvironment;
  setParameter(std::string("InitEnvironment"), initEnvironment ? "true" : "false");
}

std::string CreateEnvironmentRequest::getPrometheusInstanceId() const {
  return prometheusInstanceId_;
}

void CreateEnvironmentRequest::setPrometheusInstanceId(const std::string &prometheusInstanceId) {
  prometheusInstanceId_ = prometheusInstanceId;
  setParameter(std::string("PrometheusInstanceId"), prometheusInstanceId);
}

std::string CreateEnvironmentRequest::getEnvironmentSubType() const {
  return environmentSubType_;
}

void CreateEnvironmentRequest::setEnvironmentSubType(const std::string &environmentSubType) {
  environmentSubType_ = environmentSubType;
  setParameter(std::string("EnvironmentSubType"), environmentSubType);
}

std::vector<CreateEnvironmentRequest::Tags> CreateEnvironmentRequest::getTags() const {
  return tags_;
}

void CreateEnvironmentRequest::setTags(const std::vector<CreateEnvironmentRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

std::string CreateEnvironmentRequest::getGrafanaWorkspaceId() const {
  return grafanaWorkspaceId_;
}

void CreateEnvironmentRequest::setGrafanaWorkspaceId(const std::string &grafanaWorkspaceId) {
  grafanaWorkspaceId_ = grafanaWorkspaceId;
  setParameter(std::string("GrafanaWorkspaceId"), grafanaWorkspaceId);
}

std::string CreateEnvironmentRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateEnvironmentRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateEnvironmentRequest::getRegionId() const {
  return regionId_;
}

void CreateEnvironmentRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateEnvironmentRequest::getEnvironmentType() const {
  return environmentType_;
}

void CreateEnvironmentRequest::setEnvironmentType(const std::string &environmentType) {
  environmentType_ = environmentType;
  setParameter(std::string("EnvironmentType"), environmentType);
}

std::string CreateEnvironmentRequest::getManagedType() const {
  return managedType_;
}

void CreateEnvironmentRequest::setManagedType(const std::string &managedType) {
  managedType_ = managedType;
  setParameter(std::string("ManagedType"), managedType);
}

std::string CreateEnvironmentRequest::getBindResourceId() const {
  return bindResourceId_;
}

void CreateEnvironmentRequest::setBindResourceId(const std::string &bindResourceId) {
  bindResourceId_ = bindResourceId;
  setParameter(std::string("BindResourceId"), bindResourceId);
}

std::string CreateEnvironmentRequest::getFeePackage() const {
  return feePackage_;
}

void CreateEnvironmentRequest::setFeePackage(const std::string &feePackage) {
  feePackage_ = feePackage;
  setParameter(std::string("FeePackage"), feePackage);
}


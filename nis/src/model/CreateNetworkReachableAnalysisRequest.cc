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

#include <alibabacloud/nis/model/CreateNetworkReachableAnalysisRequest.h>

using AlibabaCloud::Nis::Model::CreateNetworkReachableAnalysisRequest;

CreateNetworkReachableAnalysisRequest::CreateNetworkReachableAnalysisRequest()
    : RpcServiceRequest("nis", "2021-12-16", "CreateNetworkReachableAnalysis") {
  setMethod(HttpRequest::Method::Post);
}

CreateNetworkReachableAnalysisRequest::~CreateNetworkReachableAnalysisRequest() {}

long CreateNetworkReachableAnalysisRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateNetworkReachableAnalysisRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool CreateNetworkReachableAnalysisRequest::getDryRun() const {
  return dryRun_;
}

void CreateNetworkReachableAnalysisRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateNetworkReachableAnalysisRequest::getClientToken() const {
  return clientToken_;
}

void CreateNetworkReachableAnalysisRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateNetworkReachableAnalysisRequest::SystemTag> CreateNetworkReachableAnalysisRequest::getSystemTag() const {
  return systemTag_;
}

void CreateNetworkReachableAnalysisRequest::setSystemTag(const std::vector<CreateNetworkReachableAnalysisRequest::SystemTag> &systemTag) {
  systemTag_ = systemTag;
  for(int dep1 = 0; dep1 != systemTag.size(); dep1++) {
  auto systemTagObj = systemTag.at(dep1);
  std::string systemTagObjStr = std::string("SystemTag") + "." + std::to_string(dep1 + 1);
    setParameter(systemTagObjStr + ".Key", systemTagObj.key);
    setParameter(systemTagObjStr + ".Value", systemTagObj.value);
    setParameter(systemTagObjStr + ".Scope", systemTagObj.scope);
  }
}

std::string CreateNetworkReachableAnalysisRequest::getNetworkPathId() const {
  return networkPathId_;
}

void CreateNetworkReachableAnalysisRequest::setNetworkPathId(const std::string &networkPathId) {
  networkPathId_ = networkPathId;
  setParameter(std::string("NetworkPathId"), networkPathId);
}

std::string CreateNetworkReachableAnalysisRequest::getRegionId() const {
  return regionId_;
}

void CreateNetworkReachableAnalysisRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateNetworkReachableAnalysisRequest::getAuditParam() const {
  return auditParam_;
}

void CreateNetworkReachableAnalysisRequest::setAuditParam(const std::string &auditParam) {
  auditParam_ = auditParam;
  setParameter(std::string("AuditParam"), auditParam);
}

std::vector<CreateNetworkReachableAnalysisRequest::Tag> CreateNetworkReachableAnalysisRequest::getTag() const {
  return tag_;
}

void CreateNetworkReachableAnalysisRequest::setTag(const std::vector<CreateNetworkReachableAnalysisRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}


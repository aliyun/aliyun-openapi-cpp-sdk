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

#include <alibabacloud/mse/model/ModifyGovernanceKubernetesClusterRequest.h>

using AlibabaCloud::Mse::Model::ModifyGovernanceKubernetesClusterRequest;

ModifyGovernanceKubernetesClusterRequest::ModifyGovernanceKubernetesClusterRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ModifyGovernanceKubernetesCluster") {
  setMethod(HttpRequest::Method::Post);
}

ModifyGovernanceKubernetesClusterRequest::~ModifyGovernanceKubernetesClusterRequest() {}

std::string ModifyGovernanceKubernetesClusterRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ModifyGovernanceKubernetesClusterRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ModifyGovernanceKubernetesClusterRequest::getRegionId() const {
  return regionId_;
}

void ModifyGovernanceKubernetesClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyGovernanceKubernetesClusterRequest::getNamespaceInfos() const {
  return namespaceInfos_;
}

void ModifyGovernanceKubernetesClusterRequest::setNamespaceInfos(const std::string &namespaceInfos) {
  namespaceInfos_ = namespaceInfos;
  setParameter(std::string("NamespaceInfos"), namespaceInfos);
}

std::string ModifyGovernanceKubernetesClusterRequest::getClusterId() const {
  return clusterId_;
}

void ModifyGovernanceKubernetesClusterRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ModifyGovernanceKubernetesClusterRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ModifyGovernanceKubernetesClusterRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}


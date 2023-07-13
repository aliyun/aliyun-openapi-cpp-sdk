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

#include <alibabacloud/mse/model/GetGovernanceKubernetesClusterRequest.h>

using AlibabaCloud::Mse::Model::GetGovernanceKubernetesClusterRequest;

GetGovernanceKubernetesClusterRequest::GetGovernanceKubernetesClusterRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetGovernanceKubernetesCluster") {
  setMethod(HttpRequest::Method::Post);
}

GetGovernanceKubernetesClusterRequest::~GetGovernanceKubernetesClusterRequest() {}

std::string GetGovernanceKubernetesClusterRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetGovernanceKubernetesClusterRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetGovernanceKubernetesClusterRequest::getRegionId() const {
  return regionId_;
}

void GetGovernanceKubernetesClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetGovernanceKubernetesClusterRequest::getClusterId() const {
  return clusterId_;
}

void GetGovernanceKubernetesClusterRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GetGovernanceKubernetesClusterRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetGovernanceKubernetesClusterRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}


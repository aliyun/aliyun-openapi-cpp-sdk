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

#include <alibabacloud/mse/model/QueryGovernanceKubernetesClusterRequest.h>

using AlibabaCloud::Mse::Model::QueryGovernanceKubernetesClusterRequest;

QueryGovernanceKubernetesClusterRequest::QueryGovernanceKubernetesClusterRequest()
    : RpcServiceRequest("mse", "2019-05-31", "QueryGovernanceKubernetesCluster") {
  setMethod(HttpRequest::Method::Get);
}

QueryGovernanceKubernetesClusterRequest::~QueryGovernanceKubernetesClusterRequest() {}

std::string QueryGovernanceKubernetesClusterRequest::getMseSessionId() const {
  return mseSessionId_;
}

void QueryGovernanceKubernetesClusterRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string QueryGovernanceKubernetesClusterRequest::getClusterName() const {
  return clusterName_;
}

void QueryGovernanceKubernetesClusterRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

int QueryGovernanceKubernetesClusterRequest::getPageNumber() const {
  return pageNumber_;
}

void QueryGovernanceKubernetesClusterRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int QueryGovernanceKubernetesClusterRequest::getPageSize() const {
  return pageSize_;
}

void QueryGovernanceKubernetesClusterRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryGovernanceKubernetesClusterRequest::getClusterId() const {
  return clusterId_;
}

void QueryGovernanceKubernetesClusterRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string QueryGovernanceKubernetesClusterRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void QueryGovernanceKubernetesClusterRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}


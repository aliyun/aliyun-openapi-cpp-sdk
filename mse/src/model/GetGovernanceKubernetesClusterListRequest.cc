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

#include <alibabacloud/mse/model/GetGovernanceKubernetesClusterListRequest.h>

using AlibabaCloud::Mse::Model::GetGovernanceKubernetesClusterListRequest;

GetGovernanceKubernetesClusterListRequest::GetGovernanceKubernetesClusterListRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetGovernanceKubernetesClusterList") {
  setMethod(HttpRequest::Method::Post);
}

GetGovernanceKubernetesClusterListRequest::~GetGovernanceKubernetesClusterListRequest() {}

std::string GetGovernanceKubernetesClusterListRequest::getClusterName() const {
  return clusterName_;
}

void GetGovernanceKubernetesClusterListRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

std::string GetGovernanceKubernetesClusterListRequest::getClusterId() const {
  return clusterId_;
}

void GetGovernanceKubernetesClusterListRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

int GetGovernanceKubernetesClusterListRequest::getPageNumber() const {
  return pageNumber_;
}

void GetGovernanceKubernetesClusterListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int GetGovernanceKubernetesClusterListRequest::getPageSize() const {
  return pageSize_;
}

void GetGovernanceKubernetesClusterListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetGovernanceKubernetesClusterListRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetGovernanceKubernetesClusterListRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}


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

#include <alibabacloud/sas/model/ListClusterInterceptionConfigRequest.h>

using AlibabaCloud::Sas::Model::ListClusterInterceptionConfigRequest;

ListClusterInterceptionConfigRequest::ListClusterInterceptionConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListClusterInterceptionConfig") {
  setMethod(HttpRequest::Method::Post);
}

ListClusterInterceptionConfigRequest::~ListClusterInterceptionConfigRequest() {}

std::string ListClusterInterceptionConfigRequest::getClusterName() const {
  return clusterName_;
}

void ListClusterInterceptionConfigRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

int ListClusterInterceptionConfigRequest::getClusterCNNFStatus() const {
  return clusterCNNFStatus_;
}

void ListClusterInterceptionConfigRequest::setClusterCNNFStatus(int clusterCNNFStatus) {
  clusterCNNFStatus_ = clusterCNNFStatus;
  setParameter(std::string("ClusterCNNFStatus"), std::to_string(clusterCNNFStatus));
}

std::string ListClusterInterceptionConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void ListClusterInterceptionConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ListClusterInterceptionConfigRequest::getPageSize() const {
  return pageSize_;
}

void ListClusterInterceptionConfigRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListClusterInterceptionConfigRequest::getCurrentPage() const {
  return currentPage_;
}

void ListClusterInterceptionConfigRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListClusterInterceptionConfigRequest::getClusterId() const {
  return clusterId_;
}

void ListClusterInterceptionConfigRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

int ListClusterInterceptionConfigRequest::getSwitchOn() const {
  return switchOn_;
}

void ListClusterInterceptionConfigRequest::setSwitchOn(int switchOn) {
  switchOn_ = switchOn;
  setParameter(std::string("SwitchOn"), std::to_string(switchOn));
}


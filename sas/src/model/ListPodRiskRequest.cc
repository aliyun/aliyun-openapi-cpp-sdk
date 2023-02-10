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

#include <alibabacloud/sas/model/ListPodRiskRequest.h>

using AlibabaCloud::Sas::Model::ListPodRiskRequest;

ListPodRiskRequest::ListPodRiskRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListPodRisk") {
  setMethod(HttpRequest::Method::Post);
}

ListPodRiskRequest::~ListPodRiskRequest() {}

std::string ListPodRiskRequest::getPodName() const {
  return podName_;
}

void ListPodRiskRequest::setPodName(const std::string &podName) {
  podName_ = podName;
  setParameter(std::string("PodName"), podName);
}

std::string ListPodRiskRequest::getAppName() const {
  return appName_;
}

void ListPodRiskRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

long ListPodRiskRequest::getPageSize() const {
  return pageSize_;
}

void ListPodRiskRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListPodRiskRequest::getCurrentPage() const {
  return currentPage_;
}

void ListPodRiskRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListPodRiskRequest::getClusterId() const {
  return clusterId_;
}

void ListPodRiskRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListPodRiskRequest::get_Namespace() const {
  return _namespace_;
}

void ListPodRiskRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}


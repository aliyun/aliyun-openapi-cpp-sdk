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

#include <alibabacloud/sas/model/ListImageRiskRequest.h>

using AlibabaCloud::Sas::Model::ListImageRiskRequest;

ListImageRiskRequest::ListImageRiskRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListImageRisk") {
  setMethod(HttpRequest::Method::Post);
}

ListImageRiskRequest::~ListImageRiskRequest() {}

std::string ListImageRiskRequest::getAppName() const {
  return appName_;
}

void ListImageRiskRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string ListImageRiskRequest::getImageName() const {
  return imageName_;
}

void ListImageRiskRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}

int ListImageRiskRequest::getPageSize() const {
  return pageSize_;
}

void ListImageRiskRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListImageRiskRequest::getCurrentPage() const {
  return currentPage_;
}

void ListImageRiskRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListImageRiskRequest::getClusterId() const {
  return clusterId_;
}

void ListImageRiskRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListImageRiskRequest::get_Namespace() const {
  return _namespace_;
}

void ListImageRiskRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}


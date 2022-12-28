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

#include <alibabacloud/es-serverless/model/ListAppsRequest.h>

using AlibabaCloud::Es_serverless::Model::ListAppsRequest;

ListAppsRequest::ListAppsRequest()
    : RoaServiceRequest("es-serverless", "2022-08-22") {
  setResourcePath("/openapi/xops/instances"};
  setMethod(HttpRequest::Method::Get);
}

ListAppsRequest::~ListAppsRequest() {}

std::string ListAppsRequest::getAppName() const {
  return appName_;
}

void ListAppsRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("appName"), appName);
}

int ListAppsRequest::getPageSize() const {
  return pageSize_;
}

void ListAppsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

std::string ListAppsRequest::getDescription() const {
  return description_;
}

void ListAppsRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("description"), description);
}

int ListAppsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAppsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("pageNumber"), std::to_string(pageNumber));
}


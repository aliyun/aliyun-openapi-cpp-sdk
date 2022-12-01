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

#include <alibabacloud/opensearch/model/ListAppGroupErrorsRequest.h>

using AlibabaCloud::OpenSearch::Model::ListAppGroupErrorsRequest;

ListAppGroupErrorsRequest::ListAppGroupErrorsRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/errors"};
  setMethod(HttpRequest::Method::Get);
}

ListAppGroupErrorsRequest::~ListAppGroupErrorsRequest() {}

std::string ListAppGroupErrorsRequest::getAppId() const {
  return appId_;
}

void ListAppGroupErrorsRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("appId"), appId);
}

int ListAppGroupErrorsRequest::getPageSize() const {
  return pageSize_;
}

void ListAppGroupErrorsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

int ListAppGroupErrorsRequest::getStartTime() const {
  return startTime_;
}

void ListAppGroupErrorsRequest::setStartTime(int startTime) {
  startTime_ = startTime;
  setParameter(std::string("startTime"), std::to_string(startTime));
}

int ListAppGroupErrorsRequest::getStopTime() const {
  return stopTime_;
}

void ListAppGroupErrorsRequest::setStopTime(int stopTime) {
  stopTime_ = stopTime;
  setParameter(std::string("stopTime"), std::to_string(stopTime));
}

std::string ListAppGroupErrorsRequest::getAppGroupIdentity() const {
  return appGroupIdentity_;
}

void ListAppGroupErrorsRequest::setAppGroupIdentity(const std::string &appGroupIdentity) {
  appGroupIdentity_ = appGroupIdentity;
  setParameter(std::string("appGroupIdentity"), appGroupIdentity);
}

int ListAppGroupErrorsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAppGroupErrorsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("pageNumber"), std::to_string(pageNumber));
}


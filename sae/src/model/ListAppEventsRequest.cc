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

#include <alibabacloud/sae/model/ListAppEventsRequest.h>

using AlibabaCloud::Sae::Model::ListAppEventsRequest;

ListAppEventsRequest::ListAppEventsRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/app/listAppEvents"};
  setMethod(HttpRequest::Method::Get);
}

ListAppEventsRequest::~ListAppEventsRequest() {}

std::string ListAppEventsRequest::getReason() const {
  return reason_;
}

void ListAppEventsRequest::setReason(const std::string &reason) {
  reason_ = reason;
  setParameter(std::string("Reason"), reason);
}

std::string ListAppEventsRequest::getObjectKind() const {
  return objectKind_;
}

void ListAppEventsRequest::setObjectKind(const std::string &objectKind) {
  objectKind_ = objectKind;
  setParameter(std::string("ObjectKind"), objectKind);
}

std::string ListAppEventsRequest::getAppId() const {
  return appId_;
}

void ListAppEventsRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

int ListAppEventsRequest::getPageSize() const {
  return pageSize_;
}

void ListAppEventsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAppEventsRequest::getObjectName() const {
  return objectName_;
}

void ListAppEventsRequest::setObjectName(const std::string &objectName) {
  objectName_ = objectName;
  setParameter(std::string("ObjectName"), objectName);
}

std::string ListAppEventsRequest::get_Namespace() const {
  return _namespace_;
}

void ListAppEventsRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

int ListAppEventsRequest::getCurrentPage() const {
  return currentPage_;
}

void ListAppEventsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListAppEventsRequest::getEventType() const {
  return eventType_;
}

void ListAppEventsRequest::setEventType(const std::string &eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), eventType);
}


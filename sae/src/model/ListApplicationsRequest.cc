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

#include <alibabacloud/sae/model/ListApplicationsRequest.h>

using AlibabaCloud::Sae::Model::ListApplicationsRequest;

ListApplicationsRequest::ListApplicationsRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/app/listApplications"};
  setMethod(HttpRequest::Method::Get);
}

ListApplicationsRequest::~ListApplicationsRequest() {}

std::string ListApplicationsRequest::getAppSource() const {
  return appSource_;
}

void ListApplicationsRequest::setAppSource(const std::string &appSource) {
  appSource_ = appSource;
  setParameter(std::string("AppSource"), appSource);
}

std::string ListApplicationsRequest::getAppName() const {
  return appName_;
}

void ListApplicationsRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string ListApplicationsRequest::getNamespaceId() const {
  return namespaceId_;
}

void ListApplicationsRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

int ListApplicationsRequest::getPageSize() const {
  return pageSize_;
}

void ListApplicationsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListApplicationsRequest::getOrderBy() const {
  return orderBy_;
}

void ListApplicationsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

int ListApplicationsRequest::getCurrentPage() const {
  return currentPage_;
}

void ListApplicationsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListApplicationsRequest::getFieldValue() const {
  return fieldValue_;
}

void ListApplicationsRequest::setFieldValue(const std::string &fieldValue) {
  fieldValue_ = fieldValue;
  setParameter(std::string("FieldValue"), fieldValue);
}

bool ListApplicationsRequest::getReverse() const {
  return reverse_;
}

void ListApplicationsRequest::setReverse(bool reverse) {
  reverse_ = reverse;
  setParameter(std::string("Reverse"), reverse ? "true" : "false");
}

std::string ListApplicationsRequest::getFieldType() const {
  return fieldType_;
}

void ListApplicationsRequest::setFieldType(const std::string &fieldType) {
  fieldType_ = fieldType;
  setParameter(std::string("FieldType"), fieldType);
}

std::string ListApplicationsRequest::getTags() const {
  return tags_;
}

void ListApplicationsRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}


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

#include <alibabacloud/sae/model/ListJobsRequest.h>

using AlibabaCloud::Sae::Model::ListJobsRequest;

ListJobsRequest::ListJobsRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/job/listJobs"};
  setMethod(HttpRequest::Method::Get);
}

ListJobsRequest::~ListJobsRequest() {}

std::string ListJobsRequest::getAppName() const {
  return appName_;
}

void ListJobsRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string ListJobsRequest::getNamespaceId() const {
  return namespaceId_;
}

void ListJobsRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

int ListJobsRequest::getPageSize() const {
  return pageSize_;
}

void ListJobsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListJobsRequest::getOrderBy() const {
  return orderBy_;
}

void ListJobsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string ListJobsRequest::getWorkload() const {
  return workload_;
}

void ListJobsRequest::setWorkload(const std::string &workload) {
  workload_ = workload;
  setParameter(std::string("Workload"), workload);
}

int ListJobsRequest::getCurrentPage() const {
  return currentPage_;
}

void ListJobsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListJobsRequest::getFieldValue() const {
  return fieldValue_;
}

void ListJobsRequest::setFieldValue(const std::string &fieldValue) {
  fieldValue_ = fieldValue;
  setParameter(std::string("FieldValue"), fieldValue);
}

bool ListJobsRequest::getReverse() const {
  return reverse_;
}

void ListJobsRequest::setReverse(bool reverse) {
  reverse_ = reverse;
  setParameter(std::string("Reverse"), reverse ? "true" : "false");
}

std::string ListJobsRequest::getFieldType() const {
  return fieldType_;
}

void ListJobsRequest::setFieldType(const std::string &fieldType) {
  fieldType_ = fieldType;
  setParameter(std::string("FieldType"), fieldType);
}

std::string ListJobsRequest::getTags() const {
  return tags_;
}

void ListJobsRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}


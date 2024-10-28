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

#include <alibabacloud/nas/model/ListLifecycleRetrieveJobsRequest.h>

using AlibabaCloud::NAS::Model::ListLifecycleRetrieveJobsRequest;

ListLifecycleRetrieveJobsRequest::ListLifecycleRetrieveJobsRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ListLifecycleRetrieveJobs") {
  setMethod(HttpRequest::Method::Post);
}

ListLifecycleRetrieveJobsRequest::~ListLifecycleRetrieveJobsRequest() {}

int ListLifecycleRetrieveJobsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListLifecycleRetrieveJobsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListLifecycleRetrieveJobsRequest::getStorageType() const {
  return storageType_;
}

void ListLifecycleRetrieveJobsRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

int ListLifecycleRetrieveJobsRequest::getPageSize() const {
  return pageSize_;
}

void ListLifecycleRetrieveJobsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListLifecycleRetrieveJobsRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ListLifecycleRetrieveJobsRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

std::string ListLifecycleRetrieveJobsRequest::getStatus() const {
  return status_;
}

void ListLifecycleRetrieveJobsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}


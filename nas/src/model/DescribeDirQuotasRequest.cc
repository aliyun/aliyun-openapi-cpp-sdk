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

#include <alibabacloud/nas/model/DescribeDirQuotasRequest.h>

using AlibabaCloud::NAS::Model::DescribeDirQuotasRequest;

DescribeDirQuotasRequest::DescribeDirQuotasRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DescribeDirQuotas") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDirQuotasRequest::~DescribeDirQuotasRequest() {}

int DescribeDirQuotasRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDirQuotasRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDirQuotasRequest::getPath() const {
  return path_;
}

void DescribeDirQuotasRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

int DescribeDirQuotasRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDirQuotasRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDirQuotasRequest::getFileSystemId() const {
  return fileSystemId_;
}

void DescribeDirQuotasRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}


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

#include <alibabacloud/sas/model/DescribeBruteForceRecordsRequest.h>

using AlibabaCloud::Sas::Model::DescribeBruteForceRecordsRequest;

DescribeBruteForceRecordsRequest::DescribeBruteForceRecordsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeBruteForceRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBruteForceRecordsRequest::~DescribeBruteForceRecordsRequest() {}

long DescribeBruteForceRecordsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeBruteForceRecordsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeBruteForceRecordsRequest::getBlockIp() const {
  return blockIp_;
}

void DescribeBruteForceRecordsRequest::setBlockIp(const std::string &blockIp) {
  blockIp_ = blockIp;
  setParameter(std::string("BlockIp"), blockIp);
}

std::string DescribeBruteForceRecordsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeBruteForceRecordsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeBruteForceRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeBruteForceRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeBruteForceRecordsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeBruteForceRecordsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

int DescribeBruteForceRecordsRequest::getStatus() const {
  return status_;
}

void DescribeBruteForceRecordsRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}


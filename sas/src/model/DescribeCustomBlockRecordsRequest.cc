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

#include <alibabacloud/sas/model/DescribeCustomBlockRecordsRequest.h>

using AlibabaCloud::Sas::Model::DescribeCustomBlockRecordsRequest;

DescribeCustomBlockRecordsRequest::DescribeCustomBlockRecordsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeCustomBlockRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCustomBlockRecordsRequest::~DescribeCustomBlockRecordsRequest() {}

long DescribeCustomBlockRecordsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCustomBlockRecordsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCustomBlockRecordsRequest::getBlockIp() const {
  return blockIp_;
}

void DescribeCustomBlockRecordsRequest::setBlockIp(const std::string &blockIp) {
  blockIp_ = blockIp;
  setParameter(std::string("BlockIp"), blockIp);
}

std::string DescribeCustomBlockRecordsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeCustomBlockRecordsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeCustomBlockRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCustomBlockRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeCustomBlockRecordsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeCustomBlockRecordsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

int DescribeCustomBlockRecordsRequest::getStatus() const {
  return status_;
}

void DescribeCustomBlockRecordsRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}


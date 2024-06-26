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

#include <alibabacloud/ens/model/DescribeKeyPairsRequest.h>

using AlibabaCloud::Ens::Model::DescribeKeyPairsRequest;

DescribeKeyPairsRequest::DescribeKeyPairsRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeKeyPairs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeKeyPairsRequest::~DescribeKeyPairsRequest() {}

std::string DescribeKeyPairsRequest::getKeyPairName() const {
  return keyPairName_;
}

void DescribeKeyPairsRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

std::string DescribeKeyPairsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeKeyPairsRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeKeyPairsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeKeyPairsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeKeyPairsRequest::getKeyPairId() const {
  return keyPairId_;
}

void DescribeKeyPairsRequest::setKeyPairId(const std::string &keyPairId) {
  keyPairId_ = keyPairId;
  setParameter(std::string("KeyPairId"), keyPairId);
}


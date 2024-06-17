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

#include <alibabacloud/swas-open/model/ListKeyPairsRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ListKeyPairsRequest;

ListKeyPairsRequest::ListKeyPairsRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ListKeyPairs") {
  setMethod(HttpRequest::Method::Get);
}

ListKeyPairsRequest::~ListKeyPairsRequest() {}

std::string ListKeyPairsRequest::getClientToken() const {
  return clientToken_;
}

void ListKeyPairsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ListKeyPairsRequest::getKeyPairName() const {
  return keyPairName_;
}

void ListKeyPairsRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

int ListKeyPairsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListKeyPairsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListKeyPairsRequest::getRegionId() const {
  return regionId_;
}

void ListKeyPairsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListKeyPairsRequest::getPageSize() const {
  return pageSize_;
}

void ListKeyPairsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}


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

#include <alibabacloud/bssopenapi/model/QueryResourcePackageInstancesRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryResourcePackageInstancesRequest;

QueryResourcePackageInstancesRequest::QueryResourcePackageInstancesRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QueryResourcePackageInstances") {
  setMethod(HttpRequest::Method::Post);
}

QueryResourcePackageInstancesRequest::~QueryResourcePackageInstancesRequest() {}

std::string QueryResourcePackageInstancesRequest::getExpiryTimeEnd() const {
  return expiryTimeEnd_;
}

void QueryResourcePackageInstancesRequest::setExpiryTimeEnd(const std::string &expiryTimeEnd) {
  expiryTimeEnd_ = expiryTimeEnd;
  setParameter(std::string("ExpiryTimeEnd"), expiryTimeEnd);
}

std::string QueryResourcePackageInstancesRequest::getProductCode() const {
  return productCode_;
}

void QueryResourcePackageInstancesRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

long QueryResourcePackageInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void QueryResourcePackageInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryResourcePackageInstancesRequest::getExpiryTimeStart() const {
  return expiryTimeStart_;
}

void QueryResourcePackageInstancesRequest::setExpiryTimeStart(const std::string &expiryTimeStart) {
  expiryTimeStart_ = expiryTimeStart;
  setParameter(std::string("ExpiryTimeStart"), expiryTimeStart);
}

int QueryResourcePackageInstancesRequest::getPageNum() const {
  return pageNum_;
}

void QueryResourcePackageInstancesRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

bool QueryResourcePackageInstancesRequest::getIncludePartner() const {
  return includePartner_;
}

void QueryResourcePackageInstancesRequest::setIncludePartner(bool includePartner) {
  includePartner_ = includePartner;
  setParameter(std::string("IncludePartner"), includePartner ? "true" : "false");
}

int QueryResourcePackageInstancesRequest::getPageSize() const {
  return pageSize_;
}

void QueryResourcePackageInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}


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

#include <alibabacloud/bssopenapi/model/QueryCostUnitResourceRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryCostUnitResourceRequest;

QueryCostUnitResourceRequest::QueryCostUnitResourceRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QueryCostUnitResource") {
  setMethod(HttpRequest::Method::Post);
}

QueryCostUnitResourceRequest::~QueryCostUnitResourceRequest() {}

int QueryCostUnitResourceRequest::getPageNum() const {
  return pageNum_;
}

void QueryCostUnitResourceRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

int QueryCostUnitResourceRequest::getPageSize() const {
  return pageSize_;
}

void QueryCostUnitResourceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long QueryCostUnitResourceRequest::getUnitId() const {
  return unitId_;
}

void QueryCostUnitResourceRequest::setUnitId(long unitId) {
  unitId_ = unitId;
  setParameter(std::string("UnitId"), std::to_string(unitId));
}

long QueryCostUnitResourceRequest::getOwnerUid() const {
  return ownerUid_;
}

void QueryCostUnitResourceRequest::setOwnerUid(long ownerUid) {
  ownerUid_ = ownerUid;
  setParameter(std::string("OwnerUid"), std::to_string(ownerUid));
}


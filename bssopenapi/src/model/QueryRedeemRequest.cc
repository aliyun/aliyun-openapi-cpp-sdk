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

#include <alibabacloud/bssopenapi/model/QueryRedeemRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryRedeemRequest;

QueryRedeemRequest::QueryRedeemRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QueryRedeem") {
  setMethod(HttpRequest::Method::Get);
}

QueryRedeemRequest::~QueryRedeemRequest() {}

std::string QueryRedeemRequest::getExpiryTimeEnd() const {
  return expiryTimeEnd_;
}

void QueryRedeemRequest::setExpiryTimeEnd(const std::string &expiryTimeEnd) {
  expiryTimeEnd_ = expiryTimeEnd;
  setParameter(std::string("ExpiryTimeEnd"), expiryTimeEnd);
}

std::string QueryRedeemRequest::getExpiryTimeStart() const {
  return expiryTimeStart_;
}

void QueryRedeemRequest::setExpiryTimeStart(const std::string &expiryTimeStart) {
  expiryTimeStart_ = expiryTimeStart;
  setParameter(std::string("ExpiryTimeStart"), expiryTimeStart);
}

int QueryRedeemRequest::getPageNum() const {
  return pageNum_;
}

void QueryRedeemRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

bool QueryRedeemRequest::getEffectiveOrNot() const {
  return effectiveOrNot_;
}

void QueryRedeemRequest::setEffectiveOrNot(bool effectiveOrNot) {
  effectiveOrNot_ = effectiveOrNot;
  setParameter(std::string("EffectiveOrNot"), effectiveOrNot ? "true" : "false");
}

int QueryRedeemRequest::getPageSize() const {
  return pageSize_;
}

void QueryRedeemRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}


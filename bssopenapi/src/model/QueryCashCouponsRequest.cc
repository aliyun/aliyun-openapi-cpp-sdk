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

#include <alibabacloud/bssopenapi/model/QueryCashCouponsRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryCashCouponsRequest;

QueryCashCouponsRequest::QueryCashCouponsRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QueryCashCoupons") {
  setMethod(HttpRequest::Method::Post);
}

QueryCashCouponsRequest::~QueryCashCouponsRequest() {}

std::string QueryCashCouponsRequest::getExpiryTimeEnd() const {
  return expiryTimeEnd_;
}

void QueryCashCouponsRequest::setExpiryTimeEnd(const std::string &expiryTimeEnd) {
  expiryTimeEnd_ = expiryTimeEnd;
  setParameter(std::string("ExpiryTimeEnd"), expiryTimeEnd);
}

std::string QueryCashCouponsRequest::getExpiryTimeStart() const {
  return expiryTimeStart_;
}

void QueryCashCouponsRequest::setExpiryTimeStart(const std::string &expiryTimeStart) {
  expiryTimeStart_ = expiryTimeStart;
  setParameter(std::string("ExpiryTimeStart"), expiryTimeStart);
}

bool QueryCashCouponsRequest::getEffectiveOrNot() const {
  return effectiveOrNot_;
}

void QueryCashCouponsRequest::setEffectiveOrNot(bool effectiveOrNot) {
  effectiveOrNot_ = effectiveOrNot;
  setParameter(std::string("EffectiveOrNot"), effectiveOrNot ? "true" : "false");
}


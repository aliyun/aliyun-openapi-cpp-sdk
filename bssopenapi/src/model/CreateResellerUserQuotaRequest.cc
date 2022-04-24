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

#include <alibabacloud/bssopenapi/model/CreateResellerUserQuotaRequest.h>

using AlibabaCloud::BssOpenApi::Model::CreateResellerUserQuotaRequest;

CreateResellerUserQuotaRequest::CreateResellerUserQuotaRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "CreateResellerUserQuota") {
  setMethod(HttpRequest::Method::Post);
}

CreateResellerUserQuotaRequest::~CreateResellerUserQuotaRequest() {}

std::string CreateResellerUserQuotaRequest::getAmount() const {
  return amount_;
}

void CreateResellerUserQuotaRequest::setAmount(const std::string &amount) {
  amount_ = amount;
  setParameter(std::string("Amount"), amount);
}

std::string CreateResellerUserQuotaRequest::getOutBizId() const {
  return outBizId_;
}

void CreateResellerUserQuotaRequest::setOutBizId(const std::string &outBizId) {
  outBizId_ = outBizId;
  setParameter(std::string("OutBizId"), outBizId);
}

long CreateResellerUserQuotaRequest::getOwnerId() const {
  return ownerId_;
}

void CreateResellerUserQuotaRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateResellerUserQuotaRequest::getCurrency() const {
  return currency_;
}

void CreateResellerUserQuotaRequest::setCurrency(const std::string &currency) {
  currency_ = currency;
  setParameter(std::string("Currency"), currency);
}


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

#include <alibabacloud/quotas/model/ListDependentQuotasRequest.h>

using AlibabaCloud::Quotas::Model::ListDependentQuotasRequest;

ListDependentQuotasRequest::ListDependentQuotasRequest()
    : RpcServiceRequest("quotas", "2020-05-10", "ListDependentQuotas") {
  setMethod(HttpRequest::Method::Post);
}

ListDependentQuotasRequest::~ListDependentQuotasRequest() {}

std::string ListDependentQuotasRequest::getOriginalContext() const {
  return originalContext_;
}

void ListDependentQuotasRequest::setOriginalContext(const std::string &originalContext) {
  originalContext_ = originalContext;
  setBodyParameter(std::string("OriginalContext"), originalContext);
}

std::string ListDependentQuotasRequest::getProductCode() const {
  return productCode_;
}

void ListDependentQuotasRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::string ListDependentQuotasRequest::getQuotaActionCode() const {
  return quotaActionCode_;
}

void ListDependentQuotasRequest::setQuotaActionCode(const std::string &quotaActionCode) {
  quotaActionCode_ = quotaActionCode;
  setBodyParameter(std::string("QuotaActionCode"), quotaActionCode);
}


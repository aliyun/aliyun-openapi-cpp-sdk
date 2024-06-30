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

#include <alibabacloud/quotas/model/GetProductQuotaRequest.h>

using AlibabaCloud::Quotas::Model::GetProductQuotaRequest;

GetProductQuotaRequest::GetProductQuotaRequest()
    : RpcServiceRequest("quotas", "2020-05-10", "GetProductQuota") {
  setMethod(HttpRequest::Method::Post);
}

GetProductQuotaRequest::~GetProductQuotaRequest() {}

std::string GetProductQuotaRequest::getProductCode() const {
  return productCode_;
}

void GetProductQuotaRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::string GetProductQuotaRequest::getQuotaActionCode() const {
  return quotaActionCode_;
}

void GetProductQuotaRequest::setQuotaActionCode(const std::string &quotaActionCode) {
  quotaActionCode_ = quotaActionCode;
  setBodyParameter(std::string("QuotaActionCode"), quotaActionCode);
}

std::string GetProductQuotaRequest::getOriginalContext() const {
  return originalContext_;
}

void GetProductQuotaRequest::setOriginalContext(const std::string &originalContext) {
  originalContext_ = originalContext;
  setBodyParameter(std::string("OriginalContext"), originalContext);
}

std::vector<GetProductQuotaRequest::Dimensions> GetProductQuotaRequest::getDimensions() const {
  return dimensions_;
}

void GetProductQuotaRequest::setDimensions(const std::vector<GetProductQuotaRequest::Dimensions> &dimensions) {
  dimensions_ = dimensions;
  for(int dep1 = 0; dep1 != dimensions.size(); dep1++) {
  auto dimensionsObj = dimensions.at(dep1);
  std::string dimensionsObjStr = std::string("Dimensions") + "." + std::to_string(dep1 + 1);
    setBodyParameter(dimensionsObjStr + ".Key", dimensionsObj.key);
    setBodyParameter(dimensionsObjStr + ".Value", dimensionsObj.value);
  }
}


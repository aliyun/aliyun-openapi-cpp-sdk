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

#include <alibabacloud/quotas/model/GetProductQuotaDimensionRequest.h>

using AlibabaCloud::Quotas::Model::GetProductQuotaDimensionRequest;

GetProductQuotaDimensionRequest::GetProductQuotaDimensionRequest()
    : RpcServiceRequest("quotas", "2020-05-10", "GetProductQuotaDimension") {
  setMethod(HttpRequest::Method::Post);
}

GetProductQuotaDimensionRequest::~GetProductQuotaDimensionRequest() {}

std::string GetProductQuotaDimensionRequest::getOriginalContext() const {
  return originalContext_;
}

void GetProductQuotaDimensionRequest::setOriginalContext(const std::string &originalContext) {
  originalContext_ = originalContext;
  setBodyParameter(std::string("OriginalContext"), originalContext);
}

std::string GetProductQuotaDimensionRequest::getProductCode() const {
  return productCode_;
}

void GetProductQuotaDimensionRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::vector<GetProductQuotaDimensionRequest::DependentDimensions> GetProductQuotaDimensionRequest::getDependentDimensions() const {
  return dependentDimensions_;
}

void GetProductQuotaDimensionRequest::setDependentDimensions(const std::vector<GetProductQuotaDimensionRequest::DependentDimensions> &dependentDimensions) {
  dependentDimensions_ = dependentDimensions;
  for(int dep1 = 0; dep1 != dependentDimensions.size(); dep1++) {
  auto dependentDimensionsObj = dependentDimensions.at(dep1);
  std::string dependentDimensionsObjStr = std::string("DependentDimensions") + "." + std::to_string(dep1 + 1);
    setBodyParameter(dependentDimensionsObjStr + ".Key", dependentDimensionsObj.key);
    setBodyParameter(dependentDimensionsObjStr + ".Value", dependentDimensionsObj.value);
  }
}

std::string GetProductQuotaDimensionRequest::getDimensionKey() const {
  return dimensionKey_;
}

void GetProductQuotaDimensionRequest::setDimensionKey(const std::string &dimensionKey) {
  dimensionKey_ = dimensionKey;
  setBodyParameter(std::string("DimensionKey"), dimensionKey);
}


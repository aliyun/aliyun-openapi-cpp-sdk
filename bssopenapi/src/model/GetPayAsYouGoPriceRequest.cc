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

#include <alibabacloud/bssopenapi/model/GetPayAsYouGoPriceRequest.h>

using AlibabaCloud::BssOpenApi::Model::GetPayAsYouGoPriceRequest;

GetPayAsYouGoPriceRequest::GetPayAsYouGoPriceRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "GetPayAsYouGoPrice") {
  setMethod(HttpRequest::Method::Post);
}

GetPayAsYouGoPriceRequest::~GetPayAsYouGoPriceRequest() {}

std::string GetPayAsYouGoPriceRequest::getProductCode() const {
  return productCode_;
}

void GetPayAsYouGoPriceRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string GetPayAsYouGoPriceRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void GetPayAsYouGoPriceRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setParameter(std::string("SubscriptionType"), subscriptionType);
}

std::vector<GetPayAsYouGoPriceRequest::ModuleList> GetPayAsYouGoPriceRequest::getModuleList() const {
  return moduleList_;
}

void GetPayAsYouGoPriceRequest::setModuleList(const std::vector<GetPayAsYouGoPriceRequest::ModuleList> &moduleList) {
  moduleList_ = moduleList;
  for(int dep1 = 0; dep1 != moduleList.size(); dep1++) {
  auto moduleListObj = moduleList.at(dep1);
  std::string moduleListObjStr = std::string("ModuleList") + "." + std::to_string(dep1 + 1);
    setParameter(moduleListObjStr + ".ModuleCode", moduleListObj.moduleCode);
    setParameter(moduleListObjStr + ".PriceType", moduleListObj.priceType);
    setParameter(moduleListObjStr + ".Config", moduleListObj.config);
  }
}

long GetPayAsYouGoPriceRequest::getOwnerId() const {
  return ownerId_;
}

void GetPayAsYouGoPriceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetPayAsYouGoPriceRequest::getProductType() const {
  return productType_;
}

void GetPayAsYouGoPriceRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string GetPayAsYouGoPriceRequest::getRegion() const {
  return region_;
}

void GetPayAsYouGoPriceRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}


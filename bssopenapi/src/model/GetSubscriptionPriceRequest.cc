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

#include <alibabacloud/bssopenapi/model/GetSubscriptionPriceRequest.h>

using AlibabaCloud::BssOpenApi::Model::GetSubscriptionPriceRequest;

GetSubscriptionPriceRequest::GetSubscriptionPriceRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "GetSubscriptionPrice") {
  setMethod(HttpRequest::Method::Post);
}

GetSubscriptionPriceRequest::~GetSubscriptionPriceRequest() {}

std::string GetSubscriptionPriceRequest::getProductCode() const {
  return productCode_;
}

void GetSubscriptionPriceRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

int GetSubscriptionPriceRequest::getQuantity() const {
  return quantity_;
}

void GetSubscriptionPriceRequest::setQuantity(int quantity) {
  quantity_ = quantity;
  setParameter(std::string("Quantity"), std::to_string(quantity));
}

std::string GetSubscriptionPriceRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void GetSubscriptionPriceRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setParameter(std::string("SubscriptionType"), subscriptionType);
}

std::vector<GetSubscriptionPriceRequest::ModuleList> GetSubscriptionPriceRequest::getModuleList() const {
  return moduleList_;
}

void GetSubscriptionPriceRequest::setModuleList(const std::vector<GetSubscriptionPriceRequest::ModuleList> &moduleList) {
  moduleList_ = moduleList;
  for(int dep1 = 0; dep1 != moduleList.size(); dep1++) {
  auto moduleListObj = moduleList.at(dep1);
  std::string moduleListObjStr = std::string("ModuleList") + "." + std::to_string(dep1 + 1);
    setParameter(moduleListObjStr + ".ModuleCode", moduleListObj.moduleCode);
    setParameter(moduleListObjStr + ".ModuleStatus", std::to_string(moduleListObj.moduleStatus));
    setParameter(moduleListObjStr + ".Tag", moduleListObj.tag);
    setParameter(moduleListObjStr + ".Config", moduleListObj.config);
  }
}

long GetSubscriptionPriceRequest::getOwnerId() const {
  return ownerId_;
}

void GetSubscriptionPriceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetSubscriptionPriceRequest::getProductType() const {
  return productType_;
}

void GetSubscriptionPriceRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

int GetSubscriptionPriceRequest::getServicePeriodQuantity() const {
  return servicePeriodQuantity_;
}

void GetSubscriptionPriceRequest::setServicePeriodQuantity(int servicePeriodQuantity) {
  servicePeriodQuantity_ = servicePeriodQuantity;
  setParameter(std::string("ServicePeriodQuantity"), std::to_string(servicePeriodQuantity));
}

std::string GetSubscriptionPriceRequest::getInstanceId() const {
  return instanceId_;
}

void GetSubscriptionPriceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetSubscriptionPriceRequest::getServicePeriodUnit() const {
  return servicePeriodUnit_;
}

void GetSubscriptionPriceRequest::setServicePeriodUnit(const std::string &servicePeriodUnit) {
  servicePeriodUnit_ = servicePeriodUnit;
  setParameter(std::string("ServicePeriodUnit"), servicePeriodUnit);
}

std::string GetSubscriptionPriceRequest::getRegion() const {
  return region_;
}

void GetSubscriptionPriceRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string GetSubscriptionPriceRequest::getOrderType() const {
  return orderType_;
}

void GetSubscriptionPriceRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}


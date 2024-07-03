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

#include <alibabacloud/ens/model/UpdateEnsSaleControlRequest.h>

using AlibabaCloud::Ens::Model::UpdateEnsSaleControlRequest;

UpdateEnsSaleControlRequest::UpdateEnsSaleControlRequest()
    : RpcServiceRequest("ens", "2017-11-10", "UpdateEnsSaleControl") {
  setMethod(HttpRequest::Method::Post);
}

UpdateEnsSaleControlRequest::~UpdateEnsSaleControlRequest() {}

std::vector<UpdateEnsSaleControlRequest::SaleControls> UpdateEnsSaleControlRequest::getSaleControls() const {
  return saleControls_;
}

void UpdateEnsSaleControlRequest::setSaleControls(const std::vector<UpdateEnsSaleControlRequest::SaleControls> &saleControls) {
  saleControls_ = saleControls;
  for(int dep1 = 0; dep1 != saleControls.size(); dep1++) {
    setParameter(std::string("SaleControls") + "." + std::to_string(dep1 + 1) + ".ModuleCode", saleControls[dep1].moduleCode);
    for(int dep2 = 0; dep2 != saleControls[dep1].moduleValue.moduleValue.size(); dep2++) {
      setParameter(std::string("SaleControls") + "." + std::to_string(dep1 + 1) + ".ModuleValue.ModuleValue." + std::to_string(dep2 + 1), saleControls[dep1].moduleValue.moduleValue[dep2]);
    }
    setParameter(std::string("SaleControls") + "." + std::to_string(dep1 + 1) + ".ModuleValue.ModuleMaxValue", saleControls[dep1].moduleValue.moduleMaxValue);
    setParameter(std::string("SaleControls") + "." + std::to_string(dep1 + 1) + ".ModuleValue.ModuleMinValue", saleControls[dep1].moduleValue.moduleMinValue);
    for(int dep2 = 0; dep2 != saleControls[dep1].conditionControls.size(); dep2++) {
      setParameter(std::string("SaleControls") + "." + std::to_string(dep1 + 1) + ".ConditionControls." + std::to_string(dep2 + 1) + ".ConditionControlModuleValue", saleControls[dep1].conditionControls[dep2].conditionControlModuleValue);
      setParameter(std::string("SaleControls") + "." + std::to_string(dep1 + 1) + ".ConditionControls." + std::to_string(dep2 + 1) + ".ConditionControlModuleCode", saleControls[dep1].conditionControls[dep2].conditionControlModuleCode);
    }
    setParameter(std::string("SaleControls") + "." + std::to_string(dep1 + 1) + ".Description", saleControls[dep1].description);
    setParameter(std::string("SaleControls") + "." + std::to_string(dep1 + 1) + ".Operator", saleControls[dep1]._operator);
    setParameter(std::string("SaleControls") + "." + std::to_string(dep1 + 1) + ".OrderType", saleControls[dep1].orderType);
  }
}

std::string UpdateEnsSaleControlRequest::getCustomAccount() const {
  return customAccount_;
}

void UpdateEnsSaleControlRequest::setCustomAccount(const std::string &customAccount) {
  customAccount_ = customAccount;
  setParameter(std::string("CustomAccount"), customAccount);
}

std::string UpdateEnsSaleControlRequest::getCommodityCode() const {
  return commodityCode_;
}

void UpdateEnsSaleControlRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

std::string UpdateEnsSaleControlRequest::getAliUidAccount() const {
  return aliUidAccount_;
}

void UpdateEnsSaleControlRequest::setAliUidAccount(const std::string &aliUidAccount) {
  aliUidAccount_ = aliUidAccount;
  setParameter(std::string("AliUidAccount"), aliUidAccount);
}


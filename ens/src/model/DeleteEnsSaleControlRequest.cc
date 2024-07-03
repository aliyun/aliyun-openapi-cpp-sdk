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

#include <alibabacloud/ens/model/DeleteEnsSaleControlRequest.h>

using AlibabaCloud::Ens::Model::DeleteEnsSaleControlRequest;

DeleteEnsSaleControlRequest::DeleteEnsSaleControlRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DeleteEnsSaleControl") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEnsSaleControlRequest::~DeleteEnsSaleControlRequest() {}

std::vector<DeleteEnsSaleControlRequest::SaleControls> DeleteEnsSaleControlRequest::getSaleControls() const {
  return saleControls_;
}

void DeleteEnsSaleControlRequest::setSaleControls(const std::vector<DeleteEnsSaleControlRequest::SaleControls> &saleControls) {
  saleControls_ = saleControls;
  for(int dep1 = 0; dep1 != saleControls.size(); dep1++) {
    setParameter(std::string("SaleControls") + "." + std::to_string(dep1 + 1) + ".ModuleCode", saleControls[dep1].moduleCode);
    setParameter(std::string("SaleControls") + "." + std::to_string(dep1 + 1) + ".OrderType", saleControls[dep1].orderType);
  }
}

std::string DeleteEnsSaleControlRequest::getCustomAccount() const {
  return customAccount_;
}

void DeleteEnsSaleControlRequest::setCustomAccount(const std::string &customAccount) {
  customAccount_ = customAccount;
  setParameter(std::string("CustomAccount"), customAccount);
}

std::string DeleteEnsSaleControlRequest::getCommodityCode() const {
  return commodityCode_;
}

void DeleteEnsSaleControlRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

std::string DeleteEnsSaleControlRequest::getAliUidAccount() const {
  return aliUidAccount_;
}

void DeleteEnsSaleControlRequest::setAliUidAccount(const std::string &aliUidAccount) {
  aliUidAccount_ = aliUidAccount;
  setParameter(std::string("AliUidAccount"), aliUidAccount);
}


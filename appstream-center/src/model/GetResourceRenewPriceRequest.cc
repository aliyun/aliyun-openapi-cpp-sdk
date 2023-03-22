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

#include <alibabacloud/appstream-center/model/GetResourceRenewPriceRequest.h>

using AlibabaCloud::Appstream_center::Model::GetResourceRenewPriceRequest;

GetResourceRenewPriceRequest::GetResourceRenewPriceRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "GetResourceRenewPrice") {
  setMethod(HttpRequest::Method::Post);
}

GetResourceRenewPriceRequest::~GetResourceRenewPriceRequest() {}

long GetResourceRenewPriceRequest::getPeriod() const {
  return period_;
}

void GetResourceRenewPriceRequest::setPeriod(long period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string GetResourceRenewPriceRequest::getProductType() const {
  return productType_;
}

void GetResourceRenewPriceRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string GetResourceRenewPriceRequest::getPeriodUnit() const {
  return periodUnit_;
}

void GetResourceRenewPriceRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string GetResourceRenewPriceRequest::getAppInstanceGroupId() const {
  return appInstanceGroupId_;
}

void GetResourceRenewPriceRequest::setAppInstanceGroupId(const std::string &appInstanceGroupId) {
  appInstanceGroupId_ = appInstanceGroupId;
  setParameter(std::string("AppInstanceGroupId"), appInstanceGroupId);
}


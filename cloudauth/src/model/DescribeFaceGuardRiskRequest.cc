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

#include <alibabacloud/cloudauth/model/DescribeFaceGuardRiskRequest.h>

using AlibabaCloud::Cloudauth::Model::DescribeFaceGuardRiskRequest;

DescribeFaceGuardRiskRequest::DescribeFaceGuardRiskRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "DescribeFaceGuardRisk") {
  setMethod(HttpRequest::Method::Post);
}

DescribeFaceGuardRiskRequest::~DescribeFaceGuardRiskRequest() {}

std::string DescribeFaceGuardRiskRequest::getProductCode() const {
  return productCode_;
}

void DescribeFaceGuardRiskRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string DescribeFaceGuardRiskRequest::getDeviceToken() const {
  return deviceToken_;
}

void DescribeFaceGuardRiskRequest::setDeviceToken(const std::string &deviceToken) {
  deviceToken_ = deviceToken;
  setParameter(std::string("DeviceToken"), deviceToken);
}

std::string DescribeFaceGuardRiskRequest::getOuterOrderNo() const {
  return outerOrderNo_;
}

void DescribeFaceGuardRiskRequest::setOuterOrderNo(const std::string &outerOrderNo) {
  outerOrderNo_ = outerOrderNo;
  setParameter(std::string("OuterOrderNo"), outerOrderNo);
}

std::string DescribeFaceGuardRiskRequest::getBizId() const {
  return bizId_;
}

void DescribeFaceGuardRiskRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}


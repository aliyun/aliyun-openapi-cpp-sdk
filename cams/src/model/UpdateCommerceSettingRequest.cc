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

#include <alibabacloud/cams/model/UpdateCommerceSettingRequest.h>

using AlibabaCloud::Cams::Model::UpdateCommerceSettingRequest;

UpdateCommerceSettingRequest::UpdateCommerceSettingRequest()
    : RpcServiceRequest("cams", "2020-06-06", "UpdateCommerceSetting") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCommerceSettingRequest::~UpdateCommerceSettingRequest() {}

std::string UpdateCommerceSettingRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void UpdateCommerceSettingRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string UpdateCommerceSettingRequest::getApiCode() const {
  return apiCode_;
}

void UpdateCommerceSettingRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

bool UpdateCommerceSettingRequest::getCatalogVisible() const {
  return catalogVisible_;
}

void UpdateCommerceSettingRequest::setCatalogVisible(bool catalogVisible) {
  catalogVisible_ = catalogVisible;
  setParameter(std::string("CatalogVisible"), catalogVisible ? "true" : "false");
}

bool UpdateCommerceSettingRequest::getCartEnable() const {
  return cartEnable_;
}

void UpdateCommerceSettingRequest::setCartEnable(bool cartEnable) {
  cartEnable_ = cartEnable;
  setParameter(std::string("CartEnable"), cartEnable ? "true" : "false");
}

std::string UpdateCommerceSettingRequest::getProdCode() const {
  return prodCode_;
}

void UpdateCommerceSettingRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string UpdateCommerceSettingRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void UpdateCommerceSettingRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}


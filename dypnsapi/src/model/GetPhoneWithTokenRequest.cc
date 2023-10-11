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

#include <alibabacloud/dypnsapi/model/GetPhoneWithTokenRequest.h>

using AlibabaCloud::Dypnsapi::Model::GetPhoneWithTokenRequest;

GetPhoneWithTokenRequest::GetPhoneWithTokenRequest()
    : RpcServiceRequest("dypnsapi", "2017-05-25", "GetPhoneWithToken") {
  setMethod(HttpRequest::Method::Post);
}

GetPhoneWithTokenRequest::~GetPhoneWithTokenRequest() {}

long GetPhoneWithTokenRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetPhoneWithTokenRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetPhoneWithTokenRequest::getProductCode() const {
  return productCode_;
}

void GetPhoneWithTokenRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string GetPhoneWithTokenRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetPhoneWithTokenRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetPhoneWithTokenRequest::getSpToken() const {
  return spToken_;
}

void GetPhoneWithTokenRequest::setSpToken(const std::string &spToken) {
  spToken_ = spToken;
  setParameter(std::string("SpToken"), spToken);
}

std::string GetPhoneWithTokenRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetPhoneWithTokenRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long GetPhoneWithTokenRequest::getOwnerId() const {
  return ownerId_;
}

void GetPhoneWithTokenRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


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

#include <alibabacloud/dypnsapi/model/GetSmsAuthTokensRequest.h>

using AlibabaCloud::Dypnsapi::Model::GetSmsAuthTokensRequest;

GetSmsAuthTokensRequest::GetSmsAuthTokensRequest()
    : RpcServiceRequest("dypnsapi", "2017-05-25", "GetSmsAuthTokens") {
  setMethod(HttpRequest::Method::Post);
}

GetSmsAuthTokensRequest::~GetSmsAuthTokensRequest() {}

long GetSmsAuthTokensRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetSmsAuthTokensRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetSmsAuthTokensRequest::getProductCode() const {
  return productCode_;
}

void GetSmsAuthTokensRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string GetSmsAuthTokensRequest::getBundleId() const {
  return bundleId_;
}

void GetSmsAuthTokensRequest::setBundleId(const std::string &bundleId) {
  bundleId_ = bundleId;
  setParameter(std::string("BundleId"), bundleId);
}

std::string GetSmsAuthTokensRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetSmsAuthTokensRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetSmsAuthTokensRequest::getSignName() const {
  return signName_;
}

void GetSmsAuthTokensRequest::setSignName(const std::string &signName) {
  signName_ = signName;
  setParameter(std::string("SignName"), signName);
}

std::string GetSmsAuthTokensRequest::getSceneCode() const {
  return sceneCode_;
}

void GetSmsAuthTokensRequest::setSceneCode(const std::string &sceneCode) {
  sceneCode_ = sceneCode;
  setParameter(std::string("SceneCode"), sceneCode);
}

std::string GetSmsAuthTokensRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetSmsAuthTokensRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int GetSmsAuthTokensRequest::getSmsCodeExpire() const {
  return smsCodeExpire_;
}

void GetSmsAuthTokensRequest::setSmsCodeExpire(int smsCodeExpire) {
  smsCodeExpire_ = smsCodeExpire;
  setParameter(std::string("SmsCodeExpire"), std::to_string(smsCodeExpire));
}

std::string GetSmsAuthTokensRequest::getPackageName() const {
  return packageName_;
}

void GetSmsAuthTokensRequest::setPackageName(const std::string &packageName) {
  packageName_ = packageName;
  setParameter(std::string("PackageName"), packageName);
}

std::string GetSmsAuthTokensRequest::getOsType() const {
  return osType_;
}

void GetSmsAuthTokensRequest::setOsType(const std::string &osType) {
  osType_ = osType;
  setParameter(std::string("OsType"), osType);
}

long GetSmsAuthTokensRequest::getOwnerId() const {
  return ownerId_;
}

void GetSmsAuthTokensRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetSmsAuthTokensRequest::getSmsTemplateCode() const {
  return smsTemplateCode_;
}

void GetSmsAuthTokensRequest::setSmsTemplateCode(const std::string &smsTemplateCode) {
  smsTemplateCode_ = smsTemplateCode;
  setParameter(std::string("SmsTemplateCode"), smsTemplateCode);
}

long GetSmsAuthTokensRequest::getExpire() const {
  return expire_;
}

void GetSmsAuthTokensRequest::setExpire(long expire) {
  expire_ = expire;
  setParameter(std::string("Expire"), std::to_string(expire));
}


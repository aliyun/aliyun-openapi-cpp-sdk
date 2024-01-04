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

#include <alibabacloud/dypnsapi/model/JyCreateVerifySchemeRequest.h>

using AlibabaCloud::Dypnsapi::Model::JyCreateVerifySchemeRequest;

JyCreateVerifySchemeRequest::JyCreateVerifySchemeRequest()
    : RpcServiceRequest("dypnsapi", "2017-05-25", "JyCreateVerifyScheme") {
  setMethod(HttpRequest::Method::Post);
}

JyCreateVerifySchemeRequest::~JyCreateVerifySchemeRequest() {}

long JyCreateVerifySchemeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void JyCreateVerifySchemeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string JyCreateVerifySchemeRequest::getBundleId() const {
  return bundleId_;
}

void JyCreateVerifySchemeRequest::setBundleId(const std::string &bundleId) {
  bundleId_ = bundleId;
  setParameter(std::string("BundleId"), bundleId);
}

std::string JyCreateVerifySchemeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void JyCreateVerifySchemeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string JyCreateVerifySchemeRequest::getAppName() const {
  return appName_;
}

void JyCreateVerifySchemeRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string JyCreateVerifySchemeRequest::getPackSign() const {
  return packSign_;
}

void JyCreateVerifySchemeRequest::setPackSign(const std::string &packSign) {
  packSign_ = packSign;
  setParameter(std::string("PackSign"), packSign);
}

std::string JyCreateVerifySchemeRequest::getPackName() const {
  return packName_;
}

void JyCreateVerifySchemeRequest::setPackName(const std::string &packName) {
  packName_ = packName;
  setParameter(std::string("PackName"), packName);
}

long JyCreateVerifySchemeRequest::getCuApiCode() const {
  return cuApiCode_;
}

void JyCreateVerifySchemeRequest::setCuApiCode(long cuApiCode) {
  cuApiCode_ = cuApiCode;
  setParameter(std::string("CuApiCode"), std::to_string(cuApiCode));
}

std::string JyCreateVerifySchemeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void JyCreateVerifySchemeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long JyCreateVerifySchemeRequest::getCtApiCode() const {
  return ctApiCode_;
}

void JyCreateVerifySchemeRequest::setCtApiCode(long ctApiCode) {
  ctApiCode_ = ctApiCode;
  setParameter(std::string("CtApiCode"), std::to_string(ctApiCode));
}

std::string JyCreateVerifySchemeRequest::getOsType() const {
  return osType_;
}

void JyCreateVerifySchemeRequest::setOsType(const std::string &osType) {
  osType_ = osType;
  setParameter(std::string("OsType"), osType);
}

long JyCreateVerifySchemeRequest::getOwnerId() const {
  return ownerId_;
}

void JyCreateVerifySchemeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long JyCreateVerifySchemeRequest::getCmApiCode() const {
  return cmApiCode_;
}

void JyCreateVerifySchemeRequest::setCmApiCode(long cmApiCode) {
  cmApiCode_ = cmApiCode;
  setParameter(std::string("CmApiCode"), std::to_string(cmApiCode));
}

std::string JyCreateVerifySchemeRequest::getSchemeName() const {
  return schemeName_;
}

void JyCreateVerifySchemeRequest::setSchemeName(const std::string &schemeName) {
  schemeName_ = schemeName;
  setParameter(std::string("SchemeName"), schemeName);
}


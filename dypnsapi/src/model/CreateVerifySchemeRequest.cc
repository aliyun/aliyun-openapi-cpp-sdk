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

#include <alibabacloud/dypnsapi/model/CreateVerifySchemeRequest.h>

using AlibabaCloud::Dypnsapi::Model::CreateVerifySchemeRequest;

CreateVerifySchemeRequest::CreateVerifySchemeRequest()
    : RpcServiceRequest("dypnsapi", "2017-05-25", "CreateVerifyScheme") {
  setMethod(HttpRequest::Method::Post);
}

CreateVerifySchemeRequest::~CreateVerifySchemeRequest() {}

long CreateVerifySchemeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateVerifySchemeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateVerifySchemeRequest::getOrigin() const {
  return origin_;
}

void CreateVerifySchemeRequest::setOrigin(const std::string &origin) {
  origin_ = origin;
  setParameter(std::string("Origin"), origin);
}

std::string CreateVerifySchemeRequest::getBundleId() const {
  return bundleId_;
}

void CreateVerifySchemeRequest::setBundleId(const std::string &bundleId) {
  bundleId_ = bundleId;
  setParameter(std::string("BundleId"), bundleId);
}

std::string CreateVerifySchemeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateVerifySchemeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateVerifySchemeRequest::getAuthType() const {
  return authType_;
}

void CreateVerifySchemeRequest::setAuthType(const std::string &authType) {
  authType_ = authType;
  setParameter(std::string("AuthType"), authType);
}

std::string CreateVerifySchemeRequest::getAppName() const {
  return appName_;
}

void CreateVerifySchemeRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string CreateVerifySchemeRequest::getIpWhiteList() const {
  return ipWhiteList_;
}

void CreateVerifySchemeRequest::setIpWhiteList(const std::string &ipWhiteList) {
  ipWhiteList_ = ipWhiteList;
  setParameter(std::string("IpWhiteList"), ipWhiteList);
}

std::string CreateVerifySchemeRequest::getRouteName() const {
  return routeName_;
}

void CreateVerifySchemeRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string CreateVerifySchemeRequest::getEmail() const {
  return email_;
}

void CreateVerifySchemeRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

std::string CreateVerifySchemeRequest::getHmSignName() const {
  return hmSignName_;
}

void CreateVerifySchemeRequest::setHmSignName(const std::string &hmSignName) {
  hmSignName_ = hmSignName;
  setParameter(std::string("HmSignName"), hmSignName);
}

std::string CreateVerifySchemeRequest::getPackSign() const {
  return packSign_;
}

void CreateVerifySchemeRequest::setPackSign(const std::string &packSign) {
  packSign_ = packSign;
  setParameter(std::string("PackSign"), packSign);
}

std::string CreateVerifySchemeRequest::getPackName() const {
  return packName_;
}

void CreateVerifySchemeRequest::setPackName(const std::string &packName) {
  packName_ = packName;
  setParameter(std::string("PackName"), packName);
}

std::string CreateVerifySchemeRequest::getHmAppIdentifier() const {
  return hmAppIdentifier_;
}

void CreateVerifySchemeRequest::setHmAppIdentifier(const std::string &hmAppIdentifier) {
  hmAppIdentifier_ = hmAppIdentifier;
  setParameter(std::string("HmAppIdentifier"), hmAppIdentifier);
}

long CreateVerifySchemeRequest::getCuApiCode() const {
  return cuApiCode_;
}

void CreateVerifySchemeRequest::setCuApiCode(long cuApiCode) {
  cuApiCode_ = cuApiCode;
  setParameter(std::string("CuApiCode"), std::to_string(cuApiCode));
}

std::string CreateVerifySchemeRequest::getSceneType() const {
  return sceneType_;
}

void CreateVerifySchemeRequest::setSceneType(const std::string &sceneType) {
  sceneType_ = sceneType;
  setParameter(std::string("SceneType"), sceneType);
}

std::string CreateVerifySchemeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateVerifySchemeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CreateVerifySchemeRequest::getCtApiCode() const {
  return ctApiCode_;
}

void CreateVerifySchemeRequest::setCtApiCode(long ctApiCode) {
  ctApiCode_ = ctApiCode;
  setParameter(std::string("CtApiCode"), std::to_string(ctApiCode));
}

std::string CreateVerifySchemeRequest::getOsType() const {
  return osType_;
}

void CreateVerifySchemeRequest::setOsType(const std::string &osType) {
  osType_ = osType;
  setParameter(std::string("OsType"), osType);
}

long CreateVerifySchemeRequest::getOwnerId() const {
  return ownerId_;
}

void CreateVerifySchemeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateVerifySchemeRequest::getUrl() const {
  return url_;
}

void CreateVerifySchemeRequest::setUrl(const std::string &url) {
  url_ = url;
  setParameter(std::string("Url"), url);
}

long CreateVerifySchemeRequest::getCmApiCode() const {
  return cmApiCode_;
}

void CreateVerifySchemeRequest::setCmApiCode(long cmApiCode) {
  cmApiCode_ = cmApiCode;
  setParameter(std::string("CmApiCode"), std::to_string(cmApiCode));
}

std::string CreateVerifySchemeRequest::getSchemeName() const {
  return schemeName_;
}

void CreateVerifySchemeRequest::setSchemeName(const std::string &schemeName) {
  schemeName_ = schemeName;
  setParameter(std::string("SchemeName"), schemeName);
}

std::string CreateVerifySchemeRequest::getSmsSignName() const {
  return smsSignName_;
}

void CreateVerifySchemeRequest::setSmsSignName(const std::string &smsSignName) {
  smsSignName_ = smsSignName;
  setParameter(std::string("SmsSignName"), smsSignName);
}

std::string CreateVerifySchemeRequest::getHmPackageName() const {
  return hmPackageName_;
}

void CreateVerifySchemeRequest::setHmPackageName(const std::string &hmPackageName) {
  hmPackageName_ = hmPackageName;
  setParameter(std::string("HmPackageName"), hmPackageName);
}


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

#include <alibabacloud/dypnsapi/model/CreateSchemeConfigRequest.h>

using AlibabaCloud::Dypnsapi::Model::CreateSchemeConfigRequest;

CreateSchemeConfigRequest::CreateSchemeConfigRequest()
    : RpcServiceRequest("dypnsapi", "2017-05-25", "CreateSchemeConfig") {
  setMethod(HttpRequest::Method::Post);
}

CreateSchemeConfigRequest::~CreateSchemeConfigRequest() {}

long CreateSchemeConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateSchemeConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateSchemeConfigRequest::getAndroidPackageSign() const {
  return androidPackageSign_;
}

void CreateSchemeConfigRequest::setAndroidPackageSign(const std::string &androidPackageSign) {
  androidPackageSign_ = androidPackageSign;
  setParameter(std::string("AndroidPackageSign"), androidPackageSign);
}

std::string CreateSchemeConfigRequest::getPlatform() const {
  return platform_;
}

void CreateSchemeConfigRequest::setPlatform(const std::string &platform) {
  platform_ = platform;
  setParameter(std::string("Platform"), platform);
}

std::string CreateSchemeConfigRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateSchemeConfigRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateSchemeConfigRequest::getH5Url() const {
  return h5Url_;
}

void CreateSchemeConfigRequest::setH5Url(const std::string &h5Url) {
  h5Url_ = h5Url;
  setParameter(std::string("H5Url"), h5Url);
}

std::string CreateSchemeConfigRequest::getIosBundleId() const {
  return iosBundleId_;
}

void CreateSchemeConfigRequest::setIosBundleId(const std::string &iosBundleId) {
  iosBundleId_ = iosBundleId;
  setParameter(std::string("IosBundleId"), iosBundleId);
}

std::string CreateSchemeConfigRequest::getAppName() const {
  return appName_;
}

void CreateSchemeConfigRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string CreateSchemeConfigRequest::getRouteName() const {
  return routeName_;
}

void CreateSchemeConfigRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string CreateSchemeConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateSchemeConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CreateSchemeConfigRequest::getOwnerId() const {
  return ownerId_;
}

void CreateSchemeConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateSchemeConfigRequest::getH5Origin() const {
  return h5Origin_;
}

void CreateSchemeConfigRequest::setH5Origin(const std::string &h5Origin) {
  h5Origin_ = h5Origin;
  setParameter(std::string("H5Origin"), h5Origin);
}

std::string CreateSchemeConfigRequest::getSchemeName() const {
  return schemeName_;
}

void CreateSchemeConfigRequest::setSchemeName(const std::string &schemeName) {
  schemeName_ = schemeName;
  setParameter(std::string("SchemeName"), schemeName);
}

std::string CreateSchemeConfigRequest::getAndroidPackageName() const {
  return androidPackageName_;
}

void CreateSchemeConfigRequest::setAndroidPackageName(const std::string &androidPackageName) {
  androidPackageName_ = androidPackageName;
  setParameter(std::string("AndroidPackageName"), androidPackageName);
}


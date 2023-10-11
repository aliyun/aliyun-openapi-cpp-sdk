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

#include <alibabacloud/dypnsapi/model/GetFusionAuthTokenRequest.h>

using AlibabaCloud::Dypnsapi::Model::GetFusionAuthTokenRequest;

GetFusionAuthTokenRequest::GetFusionAuthTokenRequest()
    : RpcServiceRequest("dypnsapi", "2017-05-25", "GetFusionAuthToken") {
  setMethod(HttpRequest::Method::Post);
}

GetFusionAuthTokenRequest::~GetFusionAuthTokenRequest() {}

long GetFusionAuthTokenRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetFusionAuthTokenRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetFusionAuthTokenRequest::getBundleId() const {
  return bundleId_;
}

void GetFusionAuthTokenRequest::setBundleId(const std::string &bundleId) {
  bundleId_ = bundleId;
  setParameter(std::string("BundleId"), bundleId);
}

std::string GetFusionAuthTokenRequest::getPlatform() const {
  return platform_;
}

void GetFusionAuthTokenRequest::setPlatform(const std::string &platform) {
  platform_ = platform;
  setParameter(std::string("Platform"), platform);
}

std::string GetFusionAuthTokenRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetFusionAuthTokenRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetFusionAuthTokenRequest::getSchemeCode() const {
  return schemeCode_;
}

void GetFusionAuthTokenRequest::setSchemeCode(const std::string &schemeCode) {
  schemeCode_ = schemeCode;
  setParameter(std::string("SchemeCode"), schemeCode);
}

std::string GetFusionAuthTokenRequest::getRouteName() const {
  return routeName_;
}

void GetFusionAuthTokenRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string GetFusionAuthTokenRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetFusionAuthTokenRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetFusionAuthTokenRequest::getPackageName() const {
  return packageName_;
}

void GetFusionAuthTokenRequest::setPackageName(const std::string &packageName) {
  packageName_ = packageName;
  setParameter(std::string("PackageName"), packageName);
}

long GetFusionAuthTokenRequest::getOwnerId() const {
  return ownerId_;
}

void GetFusionAuthTokenRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetFusionAuthTokenRequest::getPackageSign() const {
  return packageSign_;
}

void GetFusionAuthTokenRequest::setPackageSign(const std::string &packageSign) {
  packageSign_ = packageSign;
  setParameter(std::string("PackageSign"), packageSign);
}

long GetFusionAuthTokenRequest::getDurationSeconds() const {
  return durationSeconds_;
}

void GetFusionAuthTokenRequest::setDurationSeconds(long durationSeconds) {
  durationSeconds_ = durationSeconds;
  setParameter(std::string("DurationSeconds"), std::to_string(durationSeconds));
}


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

#include <alibabacloud/ecd/model/CreateBundleRequest.h>

using AlibabaCloud::Ecd::Model::CreateBundleRequest;

CreateBundleRequest::CreateBundleRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CreateBundle") {
  setMethod(HttpRequest::Method::Post);
}

CreateBundleRequest::~CreateBundleRequest() {}

std::string CreateBundleRequest::getRootDiskPerformanceLevel() const {
  return rootDiskPerformanceLevel_;
}

void CreateBundleRequest::setRootDiskPerformanceLevel(const std::string &rootDiskPerformanceLevel) {
  rootDiskPerformanceLevel_ = rootDiskPerformanceLevel;
  setParameter(std::string("RootDiskPerformanceLevel"), rootDiskPerformanceLevel);
}

std::string CreateBundleRequest::getImageId() const {
  return imageId_;
}

void CreateBundleRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string CreateBundleRequest::getDescription() const {
  return description_;
}

void CreateBundleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateBundleRequest::getLanguage() const {
  return language_;
}

void CreateBundleRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string CreateBundleRequest::getUserDiskPerformanceLevel() const {
  return userDiskPerformanceLevel_;
}

void CreateBundleRequest::setUserDiskPerformanceLevel(const std::string &userDiskPerformanceLevel) {
  userDiskPerformanceLevel_ = userDiskPerformanceLevel;
  setParameter(std::string("UserDiskPerformanceLevel"), userDiskPerformanceLevel);
}

std::string CreateBundleRequest::getRegionId() const {
  return regionId_;
}

void CreateBundleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateBundleRequest::getDesktopType() const {
  return desktopType_;
}

void CreateBundleRequest::setDesktopType(const std::string &desktopType) {
  desktopType_ = desktopType;
  setParameter(std::string("DesktopType"), desktopType);
}

std::string CreateBundleRequest::getBundleName() const {
  return bundleName_;
}

void CreateBundleRequest::setBundleName(const std::string &bundleName) {
  bundleName_ = bundleName;
  setParameter(std::string("BundleName"), bundleName);
}

std::vector<int> CreateBundleRequest::getUserDiskSizeGib() const {
  return userDiskSizeGib_;
}

void CreateBundleRequest::setUserDiskSizeGib(const std::vector<int> &userDiskSizeGib) {
  userDiskSizeGib_ = userDiskSizeGib;
}

int CreateBundleRequest::getRootDiskSizeGib() const {
  return rootDiskSizeGib_;
}

void CreateBundleRequest::setRootDiskSizeGib(int rootDiskSizeGib) {
  rootDiskSizeGib_ = rootDiskSizeGib;
  setParameter(std::string("RootDiskSizeGib"), std::to_string(rootDiskSizeGib));
}


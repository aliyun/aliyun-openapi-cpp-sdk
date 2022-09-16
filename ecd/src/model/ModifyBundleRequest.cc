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

#include <alibabacloud/ecd/model/ModifyBundleRequest.h>

using AlibabaCloud::Ecd::Model::ModifyBundleRequest;

ModifyBundleRequest::ModifyBundleRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyBundle") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBundleRequest::~ModifyBundleRequest() {}

std::string ModifyBundleRequest::getImageId() const {
  return imageId_;
}

void ModifyBundleRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string ModifyBundleRequest::getBundleId() const {
  return bundleId_;
}

void ModifyBundleRequest::setBundleId(const std::string &bundleId) {
  bundleId_ = bundleId;
  setParameter(std::string("BundleId"), bundleId);
}

std::string ModifyBundleRequest::getDescription() const {
  return description_;
}

void ModifyBundleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyBundleRequest::getLanguage() const {
  return language_;
}

void ModifyBundleRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string ModifyBundleRequest::getBundleName() const {
  return bundleName_;
}

void ModifyBundleRequest::setBundleName(const std::string &bundleName) {
  bundleName_ = bundleName;
  setParameter(std::string("BundleName"), bundleName);
}

std::string ModifyBundleRequest::getRegionId() const {
  return regionId_;
}

void ModifyBundleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}


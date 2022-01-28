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

#include <alibabacloud/ens/model/ExportImageRequest.h>

using AlibabaCloud::Ens::Model::ExportImageRequest;

ExportImageRequest::ExportImageRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ExportImage") {
  setMethod(HttpRequest::Method::Post);
}

ExportImageRequest::~ExportImageRequest() {}

std::string ExportImageRequest::getImageId() const {
  return imageId_;
}

void ExportImageRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string ExportImageRequest::getOSSRegionId() const {
  return oSSRegionId_;
}

void ExportImageRequest::setOSSRegionId(const std::string &oSSRegionId) {
  oSSRegionId_ = oSSRegionId;
  setParameter(std::string("OSSRegionId"), oSSRegionId);
}

std::string ExportImageRequest::getOSSBucket() const {
  return oSSBucket_;
}

void ExportImageRequest::setOSSBucket(const std::string &oSSBucket) {
  oSSBucket_ = oSSBucket;
  setParameter(std::string("OSSBucket"), oSSBucket);
}

std::string ExportImageRequest::getRoleName() const {
  return roleName_;
}

void ExportImageRequest::setRoleName(const std::string &roleName) {
  roleName_ = roleName;
  setParameter(std::string("RoleName"), roleName);
}

std::string ExportImageRequest::getOSSPrefix() const {
  return oSSPrefix_;
}

void ExportImageRequest::setOSSPrefix(const std::string &oSSPrefix) {
  oSSPrefix_ = oSSPrefix;
  setParameter(std::string("OSSPrefix"), oSSPrefix);
}


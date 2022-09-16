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

#include <alibabacloud/ecd/model/CopyImageRequest.h>

using AlibabaCloud::Ecd::Model::CopyImageRequest;

CopyImageRequest::CopyImageRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CopyImage") {
  setMethod(HttpRequest::Method::Post);
}

CopyImageRequest::~CopyImageRequest() {}

std::string CopyImageRequest::getImageId() const {
  return imageId_;
}

void CopyImageRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string CopyImageRequest::getDestinationImageName() const {
  return destinationImageName_;
}

void CopyImageRequest::setDestinationImageName(const std::string &destinationImageName) {
  destinationImageName_ = destinationImageName;
  setParameter(std::string("DestinationImageName"), destinationImageName);
}

std::string CopyImageRequest::getDestinationRegionId() const {
  return destinationRegionId_;
}

void CopyImageRequest::setDestinationRegionId(const std::string &destinationRegionId) {
  destinationRegionId_ = destinationRegionId;
  setParameter(std::string("DestinationRegionId"), destinationRegionId);
}

std::string CopyImageRequest::getRegionId() const {
  return regionId_;
}

void CopyImageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CopyImageRequest::getDestinationDescription() const {
  return destinationDescription_;
}

void CopyImageRequest::setDestinationDescription(const std::string &destinationDescription) {
  destinationDescription_ = destinationDescription;
  setParameter(std::string("DestinationDescription"), destinationDescription);
}


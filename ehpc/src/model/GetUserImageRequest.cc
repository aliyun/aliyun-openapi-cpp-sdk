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

#include <alibabacloud/ehpc/model/GetUserImageRequest.h>

using AlibabaCloud::EHPC::Model::GetUserImageRequest;

GetUserImageRequest::GetUserImageRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "GetUserImage") {
  setMethod(HttpRequest::Method::Get);
}

GetUserImageRequest::~GetUserImageRequest() {}

std::string GetUserImageRequest::getOSSBucket() const {
  return oSSBucket_;
}

void GetUserImageRequest::setOSSBucket(const std::string &oSSBucket) {
  oSSBucket_ = oSSBucket;
  setParameter(std::string("OSSBucket"), oSSBucket);
}

std::string GetUserImageRequest::getOSSEndPoint() const {
  return oSSEndPoint_;
}

void GetUserImageRequest::setOSSEndPoint(const std::string &oSSEndPoint) {
  oSSEndPoint_ = oSSEndPoint;
  setParameter(std::string("OSSEndPoint"), oSSEndPoint);
}

std::string GetUserImageRequest::getClusterId() const {
  return clusterId_;
}

void GetUserImageRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GetUserImageRequest::getContainerType() const {
  return containerType_;
}

void GetUserImageRequest::setContainerType(const std::string &containerType) {
  containerType_ = containerType;
  setParameter(std::string("ContainerType"), containerType);
}

std::string GetUserImageRequest::getImagePath() const {
  return imagePath_;
}

void GetUserImageRequest::setImagePath(const std::string &imagePath) {
  imagePath_ = imagePath;
  setParameter(std::string("ImagePath"), imagePath);
}

std::string GetUserImageRequest::getImageName() const {
  return imageName_;
}

void GetUserImageRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}


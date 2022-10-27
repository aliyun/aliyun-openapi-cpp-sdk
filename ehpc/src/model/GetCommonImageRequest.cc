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

#include <alibabacloud/ehpc/model/GetCommonImageRequest.h>

using AlibabaCloud::EHPC::Model::GetCommonImageRequest;

GetCommonImageRequest::GetCommonImageRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "GetCommonImage") {
  setMethod(HttpRequest::Method::Get);
}

GetCommonImageRequest::~GetCommonImageRequest() {}

std::string GetCommonImageRequest::getContainType() const {
  return containType_;
}

void GetCommonImageRequest::setContainType(const std::string &containType) {
  containType_ = containType;
  setParameter(std::string("ContainType"), containType);
}

std::string GetCommonImageRequest::getClusterId() const {
  return clusterId_;
}

void GetCommonImageRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GetCommonImageRequest::getImageName() const {
  return imageName_;
}

void GetCommonImageRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}

std::string GetCommonImageRequest::getRegionId() const {
  return regionId_;
}

void GetCommonImageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}


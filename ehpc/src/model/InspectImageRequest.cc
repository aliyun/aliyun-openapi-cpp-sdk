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

#include <alibabacloud/ehpc/model/InspectImageRequest.h>

using AlibabaCloud::EHPC::Model::InspectImageRequest;

InspectImageRequest::InspectImageRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "InspectImage") {
  setMethod(HttpRequest::Method::Get);
}

InspectImageRequest::~InspectImageRequest() {}

std::string InspectImageRequest::getClusterId() const {
  return clusterId_;
}

void InspectImageRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string InspectImageRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void InspectImageRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string InspectImageRequest::getContainerType() const {
  return containerType_;
}

void InspectImageRequest::setContainerType(const std::string &containerType) {
  containerType_ = containerType;
  setParameter(std::string("ContainerType"), containerType);
}

std::string InspectImageRequest::getImageName() const {
  return imageName_;
}

void InspectImageRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}


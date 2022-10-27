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

#include <alibabacloud/ehpc/model/SummaryImagesInfoRequest.h>

using AlibabaCloud::EHPC::Model::SummaryImagesInfoRequest;

SummaryImagesInfoRequest::SummaryImagesInfoRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "SummaryImagesInfo") {
  setMethod(HttpRequest::Method::Get);
}

SummaryImagesInfoRequest::~SummaryImagesInfoRequest() {}

std::string SummaryImagesInfoRequest::getClusterId() const {
  return clusterId_;
}

void SummaryImagesInfoRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string SummaryImagesInfoRequest::getContainerType() const {
  return containerType_;
}

void SummaryImagesInfoRequest::setContainerType(const std::string &containerType) {
  containerType_ = containerType;
  setParameter(std::string("ContainerType"), containerType);
}

std::string SummaryImagesInfoRequest::getImageName() const {
  return imageName_;
}

void SummaryImagesInfoRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}


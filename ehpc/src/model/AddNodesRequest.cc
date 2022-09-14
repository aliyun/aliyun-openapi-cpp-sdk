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

#include <alibabacloud/ehpc/model/AddNodesRequest.h>

using AlibabaCloud::EHPC::Model::AddNodesRequest;

AddNodesRequest::AddNodesRequest()
    : RpcServiceRequest("ehpc", "2017-07-14", "AddNodes") {
  setMethod(HttpRequest::Method::Get);
}

AddNodesRequest::~AddNodesRequest() {}

std::string AddNodesRequest::getImageId() const {
  return imageId_;
}

void AddNodesRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

int AddNodesRequest::getCount() const {
  return count_;
}

void AddNodesRequest::setCount(int count) {
  count_ = count;
  setParameter(std::string("Count"), std::to_string(count));
}

std::string AddNodesRequest::getClusterId() const {
  return clusterId_;
}

void AddNodesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string AddNodesRequest::getComputeSpotStrategy() const {
  return computeSpotStrategy_;
}

void AddNodesRequest::setComputeSpotStrategy(const std::string &computeSpotStrategy) {
  computeSpotStrategy_ = computeSpotStrategy;
  setParameter(std::string("ComputeSpotStrategy"), computeSpotStrategy);
}

std::string AddNodesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddNodesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddNodesRequest::getImageOwnerAlias() const {
  return imageOwnerAlias_;
}

void AddNodesRequest::setImageOwnerAlias(const std::string &imageOwnerAlias) {
  imageOwnerAlias_ = imageOwnerAlias;
  setParameter(std::string("ImageOwnerAlias"), imageOwnerAlias);
}

std::string AddNodesRequest::getComputeSpotPriceLimit() const {
  return computeSpotPriceLimit_;
}

void AddNodesRequest::setComputeSpotPriceLimit(const std::string &computeSpotPriceLimit) {
  computeSpotPriceLimit_ = computeSpotPriceLimit;
  setParameter(std::string("ComputeSpotPriceLimit"), computeSpotPriceLimit);
}


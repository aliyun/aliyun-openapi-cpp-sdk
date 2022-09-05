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

#include <alibabacloud/arms/model/OpenVClusterRequest.h>

using AlibabaCloud::ARMS::Model::OpenVClusterRequest;

OpenVClusterRequest::OpenVClusterRequest()
    : RpcServiceRequest("arms", "2019-08-08", "OpenVCluster") {
  setMethod(HttpRequest::Method::Post);
}

OpenVClusterRequest::~OpenVClusterRequest() {}

std::string OpenVClusterRequest::getClusterType() const {
  return clusterType_;
}

void OpenVClusterRequest::setClusterType(const std::string &clusterType) {
  clusterType_ = clusterType;
  setParameter(std::string("ClusterType"), clusterType);
}

std::string OpenVClusterRequest::getProduct() const {
  return product_;
}

void OpenVClusterRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

bool OpenVClusterRequest::getRecreateSwitch() const {
  return recreateSwitch_;
}

void OpenVClusterRequest::setRecreateSwitch(bool recreateSwitch) {
  recreateSwitch_ = recreateSwitch;
  setParameter(std::string("RecreateSwitch"), recreateSwitch ? "true" : "false");
}

std::string OpenVClusterRequest::getRegionId() const {
  return regionId_;
}

void OpenVClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int OpenVClusterRequest::getLength() const {
  return length_;
}

void OpenVClusterRequest::setLength(int length) {
  length_ = length;
  setParameter(std::string("Length"), std::to_string(length));
}


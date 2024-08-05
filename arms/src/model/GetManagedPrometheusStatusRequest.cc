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

#include <alibabacloud/arms/model/GetManagedPrometheusStatusRequest.h>

using AlibabaCloud::ARMS::Model::GetManagedPrometheusStatusRequest;

GetManagedPrometheusStatusRequest::GetManagedPrometheusStatusRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetManagedPrometheusStatus") {
  setMethod(HttpRequest::Method::Post);
}

GetManagedPrometheusStatusRequest::~GetManagedPrometheusStatusRequest() {}

std::string GetManagedPrometheusStatusRequest::getClusterId() const {
  return clusterId_;
}

void GetManagedPrometheusStatusRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GetManagedPrometheusStatusRequest::getClusterType() const {
  return clusterType_;
}

void GetManagedPrometheusStatusRequest::setClusterType(const std::string &clusterType) {
  clusterType_ = clusterType;
  setParameter(std::string("ClusterType"), clusterType);
}

std::string GetManagedPrometheusStatusRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void GetManagedPrometheusStatusRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string GetManagedPrometheusStatusRequest::getRegionId() const {
  return regionId_;
}

void GetManagedPrometheusStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetManagedPrometheusStatusRequest::getVpcId() const {
  return vpcId_;
}

void GetManagedPrometheusStatusRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}


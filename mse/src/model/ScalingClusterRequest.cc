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

#include <alibabacloud/mse/model/ScalingClusterRequest.h>

using AlibabaCloud::Mse::Model::ScalingClusterRequest;

ScalingClusterRequest::ScalingClusterRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ScalingCluster") {
  setMethod(HttpRequest::Method::Post);
}

ScalingClusterRequest::~ScalingClusterRequest() {}

std::string ScalingClusterRequest::getClusterSpecification() const {
  return clusterSpecification_;
}

void ScalingClusterRequest::setClusterSpecification(const std::string &clusterSpecification) {
  clusterSpecification_ = clusterSpecification;
  setParameter(std::string("ClusterSpecification"), clusterSpecification);
}

int ScalingClusterRequest::getCpu() const {
  return cpu_;
}

void ScalingClusterRequest::setCpu(int cpu) {
  cpu_ = cpu;
  setParameter(std::string("Cpu"), std::to_string(cpu));
}

std::string ScalingClusterRequest::getClusterId() const {
  return clusterId_;
}

void ScalingClusterRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ScalingClusterRequest::getInstanceId() const {
  return instanceId_;
}

void ScalingClusterRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long ScalingClusterRequest::getMemoryCapacity() const {
  return memoryCapacity_;
}

void ScalingClusterRequest::setMemoryCapacity(long memoryCapacity) {
  memoryCapacity_ = memoryCapacity;
  setParameter(std::string("MemoryCapacity"), std::to_string(memoryCapacity));
}

int ScalingClusterRequest::getInstanceCount() const {
  return instanceCount_;
}

void ScalingClusterRequest::setInstanceCount(int instanceCount) {
  instanceCount_ = instanceCount;
  setParameter(std::string("InstanceCount"), std::to_string(instanceCount));
}

std::string ScalingClusterRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ScalingClusterRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}


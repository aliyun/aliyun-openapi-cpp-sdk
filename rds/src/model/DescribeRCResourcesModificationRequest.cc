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

#include <alibabacloud/rds/model/DescribeRCResourcesModificationRequest.h>

using AlibabaCloud::Rds::Model::DescribeRCResourcesModificationRequest;

DescribeRCResourcesModificationRequest::DescribeRCResourcesModificationRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRCResourcesModification") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRCResourcesModificationRequest::~DescribeRCResourcesModificationRequest() {}

float DescribeRCResourcesModificationRequest::getMemory() const {
  return memory_;
}

void DescribeRCResourcesModificationRequest::setMemory(float memory) {
  memory_ = memory;
  setParameter(std::string("Memory"), std::to_string(memory));
}

int DescribeRCResourcesModificationRequest::getCores() const {
  return cores_;
}

void DescribeRCResourcesModificationRequest::setCores(int cores) {
  cores_ = cores;
  setParameter(std::string("Cores"), std::to_string(cores));
}

std::string DescribeRCResourcesModificationRequest::getRegionId() const {
  return regionId_;
}

void DescribeRCResourcesModificationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRCResourcesModificationRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeRCResourcesModificationRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeRCResourcesModificationRequest::getOperationType() const {
  return operationType_;
}

void DescribeRCResourcesModificationRequest::setOperationType(const std::string &operationType) {
  operationType_ = operationType;
  setParameter(std::string("OperationType"), operationType);
}

std::string DescribeRCResourcesModificationRequest::getDestinationResource() const {
  return destinationResource_;
}

void DescribeRCResourcesModificationRequest::setDestinationResource(const std::string &destinationResource) {
  destinationResource_ = destinationResource;
  setParameter(std::string("DestinationResource"), destinationResource);
}

std::string DescribeRCResourcesModificationRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeRCResourcesModificationRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeRCResourcesModificationRequest::getZoneId() const {
  return zoneId_;
}

void DescribeRCResourcesModificationRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::vector<DescribeRCResourcesModificationRequest::std::string> DescribeRCResourcesModificationRequest::getConditionss() const {
  return conditionss_;
}

void DescribeRCResourcesModificationRequest::setConditionss(const std::vector<DescribeRCResourcesModificationRequest::std::string> &conditionss) {
  conditionss_ = conditionss;
  for(int dep1 = 0; dep1 != conditionss.size(); dep1++) {
    setParameter(std::string("Conditionss") + "." + std::to_string(dep1 + 1), conditionss[dep1]);
  }
}


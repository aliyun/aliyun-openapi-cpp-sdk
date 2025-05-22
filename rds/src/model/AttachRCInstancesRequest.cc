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

#include <alibabacloud/rds/model/AttachRCInstancesRequest.h>

using AlibabaCloud::Rds::Model::AttachRCInstancesRequest;

AttachRCInstancesRequest::AttachRCInstancesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "AttachRCInstances") {
  setMethod(HttpRequest::Method::Post);
}

AttachRCInstancesRequest::~AttachRCInstancesRequest() {}

std::string AttachRCInstancesRequest::getKeyPair() const {
  return keyPair_;
}

void AttachRCInstancesRequest::setKeyPair(const std::string &keyPair) {
  keyPair_ = keyPair;
  setParameter(std::string("KeyPair"), keyPair);
}

std::string AttachRCInstancesRequest::getPassword() const {
  return password_;
}

void AttachRCInstancesRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string AttachRCInstancesRequest::getRegionId() const {
  return regionId_;
}

void AttachRCInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<AttachRCInstancesRequest::std::string> AttachRCInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void AttachRCInstancesRequest::setInstanceIds(const std::vector<AttachRCInstancesRequest::std::string> &instanceIds) {
  instanceIds_ = instanceIds;
  for(int dep1 = 0; dep1 != instanceIds.size(); dep1++) {
    setParameter(std::string("InstanceIds") + "." + std::to_string(dep1 + 1), instanceIds[dep1]);
  }
}

std::string AttachRCInstancesRequest::getVpcId() const {
  return vpcId_;
}

void AttachRCInstancesRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}


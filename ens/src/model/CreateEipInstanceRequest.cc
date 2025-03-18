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

#include <alibabacloud/ens/model/CreateEipInstanceRequest.h>

using AlibabaCloud::Ens::Model::CreateEipInstanceRequest;

CreateEipInstanceRequest::CreateEipInstanceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateEipInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateEipInstanceRequest::~CreateEipInstanceRequest() {}

std::string CreateEipInstanceRequest::getIsp() const {
  return isp_;
}

void CreateEipInstanceRequest::setIsp(const std::string &isp) {
  isp_ = isp;
  setParameter(std::string("Isp"), isp);
}

std::string CreateEipInstanceRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void CreateEipInstanceRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::vector<CreateEipInstanceRequest::Tag> CreateEipInstanceRequest::getTag() const {
  return tag_;
}

void CreateEipInstanceRequest::setTag(const std::vector<CreateEipInstanceRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateEipInstanceRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void CreateEipInstanceRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string CreateEipInstanceRequest::getName() const {
  return name_;
}

void CreateEipInstanceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateEipInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateEipInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateEipInstanceRequest::getDescription() const {
  return description_;
}

void CreateEipInstanceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateEipInstanceRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void CreateEipInstanceRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

long CreateEipInstanceRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateEipInstanceRequest::setBandwidth(long bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}


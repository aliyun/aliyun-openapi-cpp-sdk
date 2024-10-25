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

#include <alibabacloud/ens/model/CreateNetworkRequest.h>

using AlibabaCloud::Ens::Model::CreateNetworkRequest;

CreateNetworkRequest::CreateNetworkRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateNetwork") {
  setMethod(HttpRequest::Method::Post);
}

CreateNetworkRequest::~CreateNetworkRequest() {}

std::string CreateNetworkRequest::getDescription() const {
  return description_;
}

void CreateNetworkRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateNetworkRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void CreateNetworkRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string CreateNetworkRequest::getNetworkName() const {
  return networkName_;
}

void CreateNetworkRequest::setNetworkName(const std::string &networkName) {
  networkName_ = networkName;
  setParameter(std::string("NetworkName"), networkName);
}

std::vector<CreateNetworkRequest::Tag> CreateNetworkRequest::getTag() const {
  return tag_;
}

void CreateNetworkRequest::setTag(const std::vector<CreateNetworkRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateNetworkRequest::getCidrBlock() const {
  return cidrBlock_;
}

void CreateNetworkRequest::setCidrBlock(const std::string &cidrBlock) {
  cidrBlock_ = cidrBlock;
  setParameter(std::string("CidrBlock"), cidrBlock);
}


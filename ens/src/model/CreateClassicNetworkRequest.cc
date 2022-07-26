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

#include <alibabacloud/ens/model/CreateClassicNetworkRequest.h>

using AlibabaCloud::Ens::Model::CreateClassicNetworkRequest;

CreateClassicNetworkRequest::CreateClassicNetworkRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateClassicNetwork") {
  setMethod(HttpRequest::Method::Post);
}

CreateClassicNetworkRequest::~CreateClassicNetworkRequest() {}

std::string CreateClassicNetworkRequest::getDescription() const {
  return description_;
}

void CreateClassicNetworkRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateClassicNetworkRequest::getNetworkType() const {
  return networkType_;
}

void CreateClassicNetworkRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string CreateClassicNetworkRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void CreateClassicNetworkRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string CreateClassicNetworkRequest::getNetworkName() const {
  return networkName_;
}

void CreateClassicNetworkRequest::setNetworkName(const std::string &networkName) {
  networkName_ = networkName;
  setParameter(std::string("NetworkName"), networkName);
}

std::string CreateClassicNetworkRequest::getCidrBlock() const {
  return cidrBlock_;
}

void CreateClassicNetworkRequest::setCidrBlock(const std::string &cidrBlock) {
  cidrBlock_ = cidrBlock;
  setParameter(std::string("CidrBlock"), cidrBlock);
}


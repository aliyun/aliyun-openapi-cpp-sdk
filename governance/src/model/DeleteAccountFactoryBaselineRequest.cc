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

#include <alibabacloud/governance/model/DeleteAccountFactoryBaselineRequest.h>

using AlibabaCloud::Governance::Model::DeleteAccountFactoryBaselineRequest;

DeleteAccountFactoryBaselineRequest::DeleteAccountFactoryBaselineRequest()
    : RpcServiceRequest("governance", "2021-01-20", "DeleteAccountFactoryBaseline") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAccountFactoryBaselineRequest::~DeleteAccountFactoryBaselineRequest() {}

std::string DeleteAccountFactoryBaselineRequest::getRegionId() const {
  return regionId_;
}

void DeleteAccountFactoryBaselineRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteAccountFactoryBaselineRequest::getBaselineId() const {
  return baselineId_;
}

void DeleteAccountFactoryBaselineRequest::setBaselineId(const std::string &baselineId) {
  baselineId_ = baselineId;
  setParameter(std::string("BaselineId"), baselineId);
}


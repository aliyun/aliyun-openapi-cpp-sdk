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

#include <alibabacloud/paifeaturestore/model/GetLLMConfigRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::GetLLMConfigRequest;

GetLLMConfigRequest::GetLLMConfigRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/llmconfigs/[LLMConfigId]"};
  setMethod(HttpRequest::Method::Get);
}

GetLLMConfigRequest::~GetLLMConfigRequest() {}

std::string GetLLMConfigRequest::getLLMConfigId() const {
  return lLMConfigId_;
}

void GetLLMConfigRequest::setLLMConfigId(const std::string &lLMConfigId) {
  lLMConfigId_ = lLMConfigId;
  setParameter(std::string("LLMConfigId"), lLMConfigId);
}

std::string GetLLMConfigRequest::getInstanceId() const {
  return instanceId_;
}

void GetLLMConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetLLMConfigRequest::getRegionId() const {
  return regionId_;
}

void GetLLMConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}


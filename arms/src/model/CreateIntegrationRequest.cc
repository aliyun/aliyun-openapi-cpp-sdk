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

#include <alibabacloud/arms/model/CreateIntegrationRequest.h>

using AlibabaCloud::ARMS::Model::CreateIntegrationRequest;

CreateIntegrationRequest::CreateIntegrationRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateIntegration") {
  setMethod(HttpRequest::Method::Post);
}

CreateIntegrationRequest::~CreateIntegrationRequest() {}

std::string CreateIntegrationRequest::getDescription() const {
  return description_;
}

void CreateIntegrationRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

bool CreateIntegrationRequest::getAutoRecover() const {
  return autoRecover_;
}

void CreateIntegrationRequest::setAutoRecover(bool autoRecover) {
  autoRecover_ = autoRecover;
  setBodyParameter(std::string("AutoRecover"), autoRecover ? "true" : "false");
}

long CreateIntegrationRequest::getRecoverTime() const {
  return recoverTime_;
}

void CreateIntegrationRequest::setRecoverTime(long recoverTime) {
  recoverTime_ = recoverTime;
  setBodyParameter(std::string("RecoverTime"), std::to_string(recoverTime));
}

std::string CreateIntegrationRequest::getRegionId() const {
  return regionId_;
}

void CreateIntegrationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateIntegrationRequest::getIntegrationName() const {
  return integrationName_;
}

void CreateIntegrationRequest::setIntegrationName(const std::string &integrationName) {
  integrationName_ = integrationName;
  setBodyParameter(std::string("IntegrationName"), integrationName);
}

std::string CreateIntegrationRequest::getIntegrationProductType() const {
  return integrationProductType_;
}

void CreateIntegrationRequest::setIntegrationProductType(const std::string &integrationProductType) {
  integrationProductType_ = integrationProductType;
  setBodyParameter(std::string("IntegrationProductType"), integrationProductType);
}


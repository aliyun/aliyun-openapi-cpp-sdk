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

#include <alibabacloud/arms/model/CreateOrUpdateEventBridgeIntegrationRequest.h>

using AlibabaCloud::ARMS::Model::CreateOrUpdateEventBridgeIntegrationRequest;

CreateOrUpdateEventBridgeIntegrationRequest::CreateOrUpdateEventBridgeIntegrationRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateOrUpdateEventBridgeIntegration") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrUpdateEventBridgeIntegrationRequest::~CreateOrUpdateEventBridgeIntegrationRequest() {}

std::string CreateOrUpdateEventBridgeIntegrationRequest::getAccessSecret() const {
  return accessSecret_;
}

void CreateOrUpdateEventBridgeIntegrationRequest::setAccessSecret(const std::string &accessSecret) {
  accessSecret_ = accessSecret;
  setBodyParameter(std::string("AccessSecret"), accessSecret);
}

std::string CreateOrUpdateEventBridgeIntegrationRequest::getEventBusRegionId() const {
  return eventBusRegionId_;
}

void CreateOrUpdateEventBridgeIntegrationRequest::setEventBusRegionId(const std::string &eventBusRegionId) {
  eventBusRegionId_ = eventBusRegionId;
  setBodyParameter(std::string("EventBusRegionId"), eventBusRegionId);
}

std::string CreateOrUpdateEventBridgeIntegrationRequest::getDescription() const {
  return description_;
}

void CreateOrUpdateEventBridgeIntegrationRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateOrUpdateEventBridgeIntegrationRequest::getSource() const {
  return source_;
}

void CreateOrUpdateEventBridgeIntegrationRequest::setSource(const std::string &source) {
  source_ = source;
  setBodyParameter(std::string("Source"), source);
}

std::string CreateOrUpdateEventBridgeIntegrationRequest::getEventBusName() const {
  return eventBusName_;
}

void CreateOrUpdateEventBridgeIntegrationRequest::setEventBusName(const std::string &eventBusName) {
  eventBusName_ = eventBusName;
  setBodyParameter(std::string("EventBusName"), eventBusName);
}

std::string CreateOrUpdateEventBridgeIntegrationRequest::getEndpoint() const {
  return endpoint_;
}

void CreateOrUpdateEventBridgeIntegrationRequest::setEndpoint(const std::string &endpoint) {
  endpoint_ = endpoint;
  setBodyParameter(std::string("Endpoint"), endpoint);
}

std::string CreateOrUpdateEventBridgeIntegrationRequest::getAccessKey() const {
  return accessKey_;
}

void CreateOrUpdateEventBridgeIntegrationRequest::setAccessKey(const std::string &accessKey) {
  accessKey_ = accessKey;
  setBodyParameter(std::string("AccessKey"), accessKey);
}

std::string CreateOrUpdateEventBridgeIntegrationRequest::getName() const {
  return name_;
}

void CreateOrUpdateEventBridgeIntegrationRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

long CreateOrUpdateEventBridgeIntegrationRequest::getId() const {
  return id_;
}

void CreateOrUpdateEventBridgeIntegrationRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}


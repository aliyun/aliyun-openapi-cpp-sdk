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

#include <alibabacloud/cc5g/model/ModifyWirelessCloudConnectorFeatureRequest.h>

using AlibabaCloud::CC5G::Model::ModifyWirelessCloudConnectorFeatureRequest;

ModifyWirelessCloudConnectorFeatureRequest::ModifyWirelessCloudConnectorFeatureRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "ModifyWirelessCloudConnectorFeature") {
  setMethod(HttpRequest::Method::Post);
}

ModifyWirelessCloudConnectorFeatureRequest::~ModifyWirelessCloudConnectorFeatureRequest() {}

bool ModifyWirelessCloudConnectorFeatureRequest::getDryRun() const {
  return dryRun_;
}

void ModifyWirelessCloudConnectorFeatureRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyWirelessCloudConnectorFeatureRequest::getClientToken() const {
  return clientToken_;
}

void ModifyWirelessCloudConnectorFeatureRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyWirelessCloudConnectorFeatureRequest::getFeatureName() const {
  return featureName_;
}

void ModifyWirelessCloudConnectorFeatureRequest::setFeatureName(const std::string &featureName) {
  featureName_ = featureName;
  setParameter(std::string("FeatureName"), featureName);
}

std::string ModifyWirelessCloudConnectorFeatureRequest::getFeatureValue() const {
  return featureValue_;
}

void ModifyWirelessCloudConnectorFeatureRequest::setFeatureValue(const std::string &featureValue) {
  featureValue_ = featureValue;
  setParameter(std::string("FeatureValue"), featureValue);
}

std::string ModifyWirelessCloudConnectorFeatureRequest::getWirelessCloudConnectorId() const {
  return wirelessCloudConnectorId_;
}

void ModifyWirelessCloudConnectorFeatureRequest::setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId) {
  wirelessCloudConnectorId_ = wirelessCloudConnectorId;
  setParameter(std::string("WirelessCloudConnectorId"), wirelessCloudConnectorId);
}


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

#include <alibabacloud/arms/model/UpdateIntegrationRequest.h>

using AlibabaCloud::ARMS::Model::UpdateIntegrationRequest;

UpdateIntegrationRequest::UpdateIntegrationRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdateIntegration") {
  setMethod(HttpRequest::Method::Post);
}

UpdateIntegrationRequest::~UpdateIntegrationRequest() {}

std::string UpdateIntegrationRequest::getShortToken() const {
  return shortToken_;
}

void UpdateIntegrationRequest::setShortToken(const std::string &shortToken) {
  shortToken_ = shortToken;
  setBodyParameter(std::string("ShortToken"), shortToken);
}

std::string UpdateIntegrationRequest::getInitiativeRecoverValue() const {
  return initiativeRecoverValue_;
}

void UpdateIntegrationRequest::setInitiativeRecoverValue(const std::string &initiativeRecoverValue) {
  initiativeRecoverValue_ = initiativeRecoverValue;
  setBodyParameter(std::string("InitiativeRecoverValue"), initiativeRecoverValue);
}

std::string UpdateIntegrationRequest::getLiveness() const {
  return liveness_;
}

void UpdateIntegrationRequest::setLiveness(const std::string &liveness) {
  liveness_ = liveness;
  setBodyParameter(std::string("Liveness"), liveness);
}

long UpdateIntegrationRequest::getIntegrationId() const {
  return integrationId_;
}

void UpdateIntegrationRequest::setIntegrationId(long integrationId) {
  integrationId_ = integrationId;
  setBodyParameter(std::string("IntegrationId"), std::to_string(integrationId));
}

std::string UpdateIntegrationRequest::getDescription() const {
  return description_;
}

void UpdateIntegrationRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateIntegrationRequest::getApiEndpoint() const {
  return apiEndpoint_;
}

void UpdateIntegrationRequest::setApiEndpoint(const std::string &apiEndpoint) {
  apiEndpoint_ = apiEndpoint;
  setBodyParameter(std::string("ApiEndpoint"), apiEndpoint);
}

long UpdateIntegrationRequest::getRecoverTime() const {
  return recoverTime_;
}

void UpdateIntegrationRequest::setRecoverTime(long recoverTime) {
  recoverTime_ = recoverTime;
  setBodyParameter(std::string("RecoverTime"), std::to_string(recoverTime));
}

std::string UpdateIntegrationRequest::getDuplicateKey() const {
  return duplicateKey_;
}

void UpdateIntegrationRequest::setDuplicateKey(const std::string &duplicateKey) {
  duplicateKey_ = duplicateKey;
  setBodyParameter(std::string("DuplicateKey"), duplicateKey);
}

std::string UpdateIntegrationRequest::getIntegrationName() const {
  return integrationName_;
}

void UpdateIntegrationRequest::setIntegrationName(const std::string &integrationName) {
  integrationName_ = integrationName;
  setBodyParameter(std::string("IntegrationName"), integrationName);
}

bool UpdateIntegrationRequest::getState() const {
  return state_;
}

void UpdateIntegrationRequest::setState(bool state) {
  state_ = state;
  setBodyParameter(std::string("State"), state ? "true" : "false");
}

std::string UpdateIntegrationRequest::getInitiativeRecoverField() const {
  return initiativeRecoverField_;
}

void UpdateIntegrationRequest::setInitiativeRecoverField(const std::string &initiativeRecoverField) {
  initiativeRecoverField_ = initiativeRecoverField;
  setBodyParameter(std::string("InitiativeRecoverField"), initiativeRecoverField);
}

std::string UpdateIntegrationRequest::getFieldRedefineRules() const {
  return fieldRedefineRules_;
}

void UpdateIntegrationRequest::setFieldRedefineRules(const std::string &fieldRedefineRules) {
  fieldRedefineRules_ = fieldRedefineRules;
  setBodyParameter(std::string("FieldRedefineRules"), fieldRedefineRules);
}

std::string UpdateIntegrationRequest::getStat() const {
  return stat_;
}

void UpdateIntegrationRequest::setStat(const std::string &stat) {
  stat_ = stat;
  setBodyParameter(std::string("Stat"), stat);
}

bool UpdateIntegrationRequest::getAutoRecover() const {
  return autoRecover_;
}

void UpdateIntegrationRequest::setAutoRecover(bool autoRecover) {
  autoRecover_ = autoRecover;
  setBodyParameter(std::string("AutoRecover"), autoRecover ? "true" : "false");
}

std::string UpdateIntegrationRequest::getExtendedFieldRedefineRules() const {
  return extendedFieldRedefineRules_;
}

void UpdateIntegrationRequest::setExtendedFieldRedefineRules(const std::string &extendedFieldRedefineRules) {
  extendedFieldRedefineRules_ = extendedFieldRedefineRules;
  setBodyParameter(std::string("ExtendedFieldRedefineRules"), extendedFieldRedefineRules);
}

std::string UpdateIntegrationRequest::getIntegrationProductType() const {
  return integrationProductType_;
}

void UpdateIntegrationRequest::setIntegrationProductType(const std::string &integrationProductType) {
  integrationProductType_ = integrationProductType;
  setBodyParameter(std::string("IntegrationProductType"), integrationProductType);
}


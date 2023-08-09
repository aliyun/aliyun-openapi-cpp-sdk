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

#include <alibabacloud/config/model/UpdateDeliveryChannelRequest.h>

using AlibabaCloud::Config::Model::UpdateDeliveryChannelRequest;

UpdateDeliveryChannelRequest::UpdateDeliveryChannelRequest()
    : RpcServiceRequest("config", "2020-09-07", "UpdateDeliveryChannel") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDeliveryChannelRequest::~UpdateDeliveryChannelRequest() {}

bool UpdateDeliveryChannelRequest::getNonCompliantNotification() const {
  return nonCompliantNotification_;
}

void UpdateDeliveryChannelRequest::setNonCompliantNotification(bool nonCompliantNotification) {
  nonCompliantNotification_ = nonCompliantNotification;
  setBodyParameter(std::string("NonCompliantNotification"), nonCompliantNotification ? "true" : "false");
}

std::string UpdateDeliveryChannelRequest::getClientToken() const {
  return clientToken_;
}

void UpdateDeliveryChannelRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

bool UpdateDeliveryChannelRequest::getConfigurationSnapshot() const {
  return configurationSnapshot_;
}

void UpdateDeliveryChannelRequest::setConfigurationSnapshot(bool configurationSnapshot) {
  configurationSnapshot_ = configurationSnapshot;
  setBodyParameter(std::string("ConfigurationSnapshot"), configurationSnapshot ? "true" : "false");
}

std::string UpdateDeliveryChannelRequest::getDescription() const {
  return description_;
}

void UpdateDeliveryChannelRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateDeliveryChannelRequest::getDeliveryChannelTargetArn() const {
  return deliveryChannelTargetArn_;
}

void UpdateDeliveryChannelRequest::setDeliveryChannelTargetArn(const std::string &deliveryChannelTargetArn) {
  deliveryChannelTargetArn_ = deliveryChannelTargetArn;
  setBodyParameter(std::string("DeliveryChannelTargetArn"), deliveryChannelTargetArn);
}

std::string UpdateDeliveryChannelRequest::getDeliveryChannelCondition() const {
  return deliveryChannelCondition_;
}

void UpdateDeliveryChannelRequest::setDeliveryChannelCondition(const std::string &deliveryChannelCondition) {
  deliveryChannelCondition_ = deliveryChannelCondition;
  setBodyParameter(std::string("DeliveryChannelCondition"), deliveryChannelCondition);
}

bool UpdateDeliveryChannelRequest::getConfigurationItemChangeNotification() const {
  return configurationItemChangeNotification_;
}

void UpdateDeliveryChannelRequest::setConfigurationItemChangeNotification(bool configurationItemChangeNotification) {
  configurationItemChangeNotification_ = configurationItemChangeNotification;
  setBodyParameter(std::string("ConfigurationItemChangeNotification"), configurationItemChangeNotification ? "true" : "false");
}

std::string UpdateDeliveryChannelRequest::getDeliveryChannelAssumeRoleArn() const {
  return deliveryChannelAssumeRoleArn_;
}

void UpdateDeliveryChannelRequest::setDeliveryChannelAssumeRoleArn(const std::string &deliveryChannelAssumeRoleArn) {
  deliveryChannelAssumeRoleArn_ = deliveryChannelAssumeRoleArn;
  setBodyParameter(std::string("DeliveryChannelAssumeRoleArn"), deliveryChannelAssumeRoleArn);
}

std::string UpdateDeliveryChannelRequest::getDeliveryChannelName() const {
  return deliveryChannelName_;
}

void UpdateDeliveryChannelRequest::setDeliveryChannelName(const std::string &deliveryChannelName) {
  deliveryChannelName_ = deliveryChannelName;
  setBodyParameter(std::string("DeliveryChannelName"), deliveryChannelName);
}

std::string UpdateDeliveryChannelRequest::getDeliveryChannelId() const {
  return deliveryChannelId_;
}

void UpdateDeliveryChannelRequest::setDeliveryChannelId(const std::string &deliveryChannelId) {
  deliveryChannelId_ = deliveryChannelId;
  setBodyParameter(std::string("DeliveryChannelId"), deliveryChannelId);
}

std::string UpdateDeliveryChannelRequest::getOversizedDataOSSTargetArn() const {
  return oversizedDataOSSTargetArn_;
}

void UpdateDeliveryChannelRequest::setOversizedDataOSSTargetArn(const std::string &oversizedDataOSSTargetArn) {
  oversizedDataOSSTargetArn_ = oversizedDataOSSTargetArn;
  setBodyParameter(std::string("OversizedDataOSSTargetArn"), oversizedDataOSSTargetArn);
}

long UpdateDeliveryChannelRequest::getStatus() const {
  return status_;
}

void UpdateDeliveryChannelRequest::setStatus(long status) {
  status_ = status;
  setBodyParameter(std::string("Status"), std::to_string(status));
}


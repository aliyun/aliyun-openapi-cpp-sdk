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

#include <alibabacloud/config/model/UpdateConfigDeliveryChannelRequest.h>

using AlibabaCloud::Config::Model::UpdateConfigDeliveryChannelRequest;

UpdateConfigDeliveryChannelRequest::UpdateConfigDeliveryChannelRequest()
    : RpcServiceRequest("config", "2020-09-07", "UpdateConfigDeliveryChannel") {
  setMethod(HttpRequest::Method::Post);
}

UpdateConfigDeliveryChannelRequest::~UpdateConfigDeliveryChannelRequest() {}

bool UpdateConfigDeliveryChannelRequest::getNonCompliantNotification() const {
  return nonCompliantNotification_;
}

void UpdateConfigDeliveryChannelRequest::setNonCompliantNotification(bool nonCompliantNotification) {
  nonCompliantNotification_ = nonCompliantNotification;
  setParameter(std::string("NonCompliantNotification"), nonCompliantNotification ? "true" : "false");
}

std::string UpdateConfigDeliveryChannelRequest::getClientToken() const {
  return clientToken_;
}

void UpdateConfigDeliveryChannelRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool UpdateConfigDeliveryChannelRequest::getConfigurationSnapshot() const {
  return configurationSnapshot_;
}

void UpdateConfigDeliveryChannelRequest::setConfigurationSnapshot(bool configurationSnapshot) {
  configurationSnapshot_ = configurationSnapshot;
  setParameter(std::string("ConfigurationSnapshot"), configurationSnapshot ? "true" : "false");
}

std::string UpdateConfigDeliveryChannelRequest::getDescription() const {
  return description_;
}

void UpdateConfigDeliveryChannelRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateConfigDeliveryChannelRequest::getDeliveryChannelTargetArn() const {
  return deliveryChannelTargetArn_;
}

void UpdateConfigDeliveryChannelRequest::setDeliveryChannelTargetArn(const std::string &deliveryChannelTargetArn) {
  deliveryChannelTargetArn_ = deliveryChannelTargetArn;
  setParameter(std::string("DeliveryChannelTargetArn"), deliveryChannelTargetArn);
}

std::string UpdateConfigDeliveryChannelRequest::getDeliveryChannelCondition() const {
  return deliveryChannelCondition_;
}

void UpdateConfigDeliveryChannelRequest::setDeliveryChannelCondition(const std::string &deliveryChannelCondition) {
  deliveryChannelCondition_ = deliveryChannelCondition;
  setParameter(std::string("DeliveryChannelCondition"), deliveryChannelCondition);
}

bool UpdateConfigDeliveryChannelRequest::getConfigurationItemChangeNotification() const {
  return configurationItemChangeNotification_;
}

void UpdateConfigDeliveryChannelRequest::setConfigurationItemChangeNotification(bool configurationItemChangeNotification) {
  configurationItemChangeNotification_ = configurationItemChangeNotification;
  setParameter(std::string("ConfigurationItemChangeNotification"), configurationItemChangeNotification ? "true" : "false");
}

std::string UpdateConfigDeliveryChannelRequest::getDeliveryChannelName() const {
  return deliveryChannelName_;
}

void UpdateConfigDeliveryChannelRequest::setDeliveryChannelName(const std::string &deliveryChannelName) {
  deliveryChannelName_ = deliveryChannelName;
  setParameter(std::string("DeliveryChannelName"), deliveryChannelName);
}

std::string UpdateConfigDeliveryChannelRequest::getDeliverySnapshotTime() const {
  return deliverySnapshotTime_;
}

void UpdateConfigDeliveryChannelRequest::setDeliverySnapshotTime(const std::string &deliverySnapshotTime) {
  deliverySnapshotTime_ = deliverySnapshotTime;
  setParameter(std::string("DeliverySnapshotTime"), deliverySnapshotTime);
}

std::string UpdateConfigDeliveryChannelRequest::getDeliveryChannelId() const {
  return deliveryChannelId_;
}

void UpdateConfigDeliveryChannelRequest::setDeliveryChannelId(const std::string &deliveryChannelId) {
  deliveryChannelId_ = deliveryChannelId;
  setParameter(std::string("DeliveryChannelId"), deliveryChannelId);
}

std::string UpdateConfigDeliveryChannelRequest::getOversizedDataOSSTargetArn() const {
  return oversizedDataOSSTargetArn_;
}

void UpdateConfigDeliveryChannelRequest::setOversizedDataOSSTargetArn(const std::string &oversizedDataOSSTargetArn) {
  oversizedDataOSSTargetArn_ = oversizedDataOSSTargetArn;
  setParameter(std::string("OversizedDataOSSTargetArn"), oversizedDataOSSTargetArn);
}

long UpdateConfigDeliveryChannelRequest::getStatus() const {
  return status_;
}

void UpdateConfigDeliveryChannelRequest::setStatus(long status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}


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

#include <alibabacloud/config/model/CreateConfigDeliveryChannelRequest.h>

using AlibabaCloud::Config::Model::CreateConfigDeliveryChannelRequest;

CreateConfigDeliveryChannelRequest::CreateConfigDeliveryChannelRequest()
    : RpcServiceRequest("config", "2020-09-07", "CreateConfigDeliveryChannel") {
  setMethod(HttpRequest::Method::Post);
}

CreateConfigDeliveryChannelRequest::~CreateConfigDeliveryChannelRequest() {}

bool CreateConfigDeliveryChannelRequest::getNonCompliantNotification() const {
  return nonCompliantNotification_;
}

void CreateConfigDeliveryChannelRequest::setNonCompliantNotification(bool nonCompliantNotification) {
  nonCompliantNotification_ = nonCompliantNotification;
  setParameter(std::string("NonCompliantNotification"), nonCompliantNotification ? "true" : "false");
}

std::string CreateConfigDeliveryChannelRequest::getClientToken() const {
  return clientToken_;
}

void CreateConfigDeliveryChannelRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool CreateConfigDeliveryChannelRequest::getConfigurationSnapshot() const {
  return configurationSnapshot_;
}

void CreateConfigDeliveryChannelRequest::setConfigurationSnapshot(bool configurationSnapshot) {
  configurationSnapshot_ = configurationSnapshot;
  setParameter(std::string("ConfigurationSnapshot"), configurationSnapshot ? "true" : "false");
}

std::string CreateConfigDeliveryChannelRequest::getDescription() const {
  return description_;
}

void CreateConfigDeliveryChannelRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateConfigDeliveryChannelRequest::getDeliveryChannelTargetArn() const {
  return deliveryChannelTargetArn_;
}

void CreateConfigDeliveryChannelRequest::setDeliveryChannelTargetArn(const std::string &deliveryChannelTargetArn) {
  deliveryChannelTargetArn_ = deliveryChannelTargetArn;
  setParameter(std::string("DeliveryChannelTargetArn"), deliveryChannelTargetArn);
}

std::string CreateConfigDeliveryChannelRequest::getDeliveryChannelCondition() const {
  return deliveryChannelCondition_;
}

void CreateConfigDeliveryChannelRequest::setDeliveryChannelCondition(const std::string &deliveryChannelCondition) {
  deliveryChannelCondition_ = deliveryChannelCondition;
  setParameter(std::string("DeliveryChannelCondition"), deliveryChannelCondition);
}

bool CreateConfigDeliveryChannelRequest::getConfigurationItemChangeNotification() const {
  return configurationItemChangeNotification_;
}

void CreateConfigDeliveryChannelRequest::setConfigurationItemChangeNotification(bool configurationItemChangeNotification) {
  configurationItemChangeNotification_ = configurationItemChangeNotification;
  setParameter(std::string("ConfigurationItemChangeNotification"), configurationItemChangeNotification ? "true" : "false");
}

std::string CreateConfigDeliveryChannelRequest::getDeliveryChannelName() const {
  return deliveryChannelName_;
}

void CreateConfigDeliveryChannelRequest::setDeliveryChannelName(const std::string &deliveryChannelName) {
  deliveryChannelName_ = deliveryChannelName;
  setParameter(std::string("DeliveryChannelName"), deliveryChannelName);
}

std::string CreateConfigDeliveryChannelRequest::getDeliverySnapshotTime() const {
  return deliverySnapshotTime_;
}

void CreateConfigDeliveryChannelRequest::setDeliverySnapshotTime(const std::string &deliverySnapshotTime) {
  deliverySnapshotTime_ = deliverySnapshotTime;
  setParameter(std::string("DeliverySnapshotTime"), deliverySnapshotTime);
}

std::string CreateConfigDeliveryChannelRequest::getOversizedDataOSSTargetArn() const {
  return oversizedDataOSSTargetArn_;
}

void CreateConfigDeliveryChannelRequest::setOversizedDataOSSTargetArn(const std::string &oversizedDataOSSTargetArn) {
  oversizedDataOSSTargetArn_ = oversizedDataOSSTargetArn;
  setParameter(std::string("OversizedDataOSSTargetArn"), oversizedDataOSSTargetArn);
}

std::string CreateConfigDeliveryChannelRequest::getDeliveryChannelType() const {
  return deliveryChannelType_;
}

void CreateConfigDeliveryChannelRequest::setDeliveryChannelType(const std::string &deliveryChannelType) {
  deliveryChannelType_ = deliveryChannelType;
  setParameter(std::string("DeliveryChannelType"), deliveryChannelType);
}


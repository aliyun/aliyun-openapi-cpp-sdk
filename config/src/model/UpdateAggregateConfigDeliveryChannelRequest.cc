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

#include <alibabacloud/config/model/UpdateAggregateConfigDeliveryChannelRequest.h>

using AlibabaCloud::Config::Model::UpdateAggregateConfigDeliveryChannelRequest;

UpdateAggregateConfigDeliveryChannelRequest::UpdateAggregateConfigDeliveryChannelRequest()
    : RpcServiceRequest("config", "2020-09-07", "UpdateAggregateConfigDeliveryChannel") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAggregateConfigDeliveryChannelRequest::~UpdateAggregateConfigDeliveryChannelRequest() {}

bool UpdateAggregateConfigDeliveryChannelRequest::getNonCompliantNotification() const {
  return nonCompliantNotification_;
}

void UpdateAggregateConfigDeliveryChannelRequest::setNonCompliantNotification(bool nonCompliantNotification) {
  nonCompliantNotification_ = nonCompliantNotification;
  setParameter(std::string("NonCompliantNotification"), nonCompliantNotification ? "true" : "false");
}

std::string UpdateAggregateConfigDeliveryChannelRequest::getClientToken() const {
  return clientToken_;
}

void UpdateAggregateConfigDeliveryChannelRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool UpdateAggregateConfigDeliveryChannelRequest::getConfigurationSnapshot() const {
  return configurationSnapshot_;
}

void UpdateAggregateConfigDeliveryChannelRequest::setConfigurationSnapshot(bool configurationSnapshot) {
  configurationSnapshot_ = configurationSnapshot;
  setParameter(std::string("ConfigurationSnapshot"), configurationSnapshot ? "true" : "false");
}

std::string UpdateAggregateConfigDeliveryChannelRequest::getDescription() const {
  return description_;
}

void UpdateAggregateConfigDeliveryChannelRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateAggregateConfigDeliveryChannelRequest::getAggregatorId() const {
  return aggregatorId_;
}

void UpdateAggregateConfigDeliveryChannelRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setParameter(std::string("AggregatorId"), aggregatorId);
}

std::string UpdateAggregateConfigDeliveryChannelRequest::getDeliveryChannelTargetArn() const {
  return deliveryChannelTargetArn_;
}

void UpdateAggregateConfigDeliveryChannelRequest::setDeliveryChannelTargetArn(const std::string &deliveryChannelTargetArn) {
  deliveryChannelTargetArn_ = deliveryChannelTargetArn;
  setParameter(std::string("DeliveryChannelTargetArn"), deliveryChannelTargetArn);
}

std::string UpdateAggregateConfigDeliveryChannelRequest::getDeliveryChannelCondition() const {
  return deliveryChannelCondition_;
}

void UpdateAggregateConfigDeliveryChannelRequest::setDeliveryChannelCondition(const std::string &deliveryChannelCondition) {
  deliveryChannelCondition_ = deliveryChannelCondition;
  setParameter(std::string("DeliveryChannelCondition"), deliveryChannelCondition);
}

bool UpdateAggregateConfigDeliveryChannelRequest::getConfigurationItemChangeNotification() const {
  return configurationItemChangeNotification_;
}

void UpdateAggregateConfigDeliveryChannelRequest::setConfigurationItemChangeNotification(bool configurationItemChangeNotification) {
  configurationItemChangeNotification_ = configurationItemChangeNotification;
  setParameter(std::string("ConfigurationItemChangeNotification"), configurationItemChangeNotification ? "true" : "false");
}

std::string UpdateAggregateConfigDeliveryChannelRequest::getDeliveryChannelName() const {
  return deliveryChannelName_;
}

void UpdateAggregateConfigDeliveryChannelRequest::setDeliveryChannelName(const std::string &deliveryChannelName) {
  deliveryChannelName_ = deliveryChannelName;
  setParameter(std::string("DeliveryChannelName"), deliveryChannelName);
}

std::string UpdateAggregateConfigDeliveryChannelRequest::getDeliverySnapshotTime() const {
  return deliverySnapshotTime_;
}

void UpdateAggregateConfigDeliveryChannelRequest::setDeliverySnapshotTime(const std::string &deliverySnapshotTime) {
  deliverySnapshotTime_ = deliverySnapshotTime;
  setParameter(std::string("DeliverySnapshotTime"), deliverySnapshotTime);
}

std::string UpdateAggregateConfigDeliveryChannelRequest::getDeliveryChannelId() const {
  return deliveryChannelId_;
}

void UpdateAggregateConfigDeliveryChannelRequest::setDeliveryChannelId(const std::string &deliveryChannelId) {
  deliveryChannelId_ = deliveryChannelId;
  setParameter(std::string("DeliveryChannelId"), deliveryChannelId);
}

std::string UpdateAggregateConfigDeliveryChannelRequest::getOversizedDataOSSTargetArn() const {
  return oversizedDataOSSTargetArn_;
}

void UpdateAggregateConfigDeliveryChannelRequest::setOversizedDataOSSTargetArn(const std::string &oversizedDataOSSTargetArn) {
  oversizedDataOSSTargetArn_ = oversizedDataOSSTargetArn;
  setParameter(std::string("OversizedDataOSSTargetArn"), oversizedDataOSSTargetArn);
}

long UpdateAggregateConfigDeliveryChannelRequest::getStatus() const {
  return status_;
}

void UpdateAggregateConfigDeliveryChannelRequest::setStatus(long status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}


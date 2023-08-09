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

#include <alibabacloud/config/model/CreateAggregateConfigDeliveryChannelRequest.h>

using AlibabaCloud::Config::Model::CreateAggregateConfigDeliveryChannelRequest;

CreateAggregateConfigDeliveryChannelRequest::CreateAggregateConfigDeliveryChannelRequest()
    : RpcServiceRequest("config", "2020-09-07", "CreateAggregateConfigDeliveryChannel") {
  setMethod(HttpRequest::Method::Post);
}

CreateAggregateConfigDeliveryChannelRequest::~CreateAggregateConfigDeliveryChannelRequest() {}

bool CreateAggregateConfigDeliveryChannelRequest::getNonCompliantNotification() const {
  return nonCompliantNotification_;
}

void CreateAggregateConfigDeliveryChannelRequest::setNonCompliantNotification(bool nonCompliantNotification) {
  nonCompliantNotification_ = nonCompliantNotification;
  setParameter(std::string("NonCompliantNotification"), nonCompliantNotification ? "true" : "false");
}

std::string CreateAggregateConfigDeliveryChannelRequest::getClientToken() const {
  return clientToken_;
}

void CreateAggregateConfigDeliveryChannelRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool CreateAggregateConfigDeliveryChannelRequest::getConfigurationSnapshot() const {
  return configurationSnapshot_;
}

void CreateAggregateConfigDeliveryChannelRequest::setConfigurationSnapshot(bool configurationSnapshot) {
  configurationSnapshot_ = configurationSnapshot;
  setParameter(std::string("ConfigurationSnapshot"), configurationSnapshot ? "true" : "false");
}

std::string CreateAggregateConfigDeliveryChannelRequest::getDescription() const {
  return description_;
}

void CreateAggregateConfigDeliveryChannelRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateAggregateConfigDeliveryChannelRequest::getAggregatorId() const {
  return aggregatorId_;
}

void CreateAggregateConfigDeliveryChannelRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setParameter(std::string("AggregatorId"), aggregatorId);
}

std::string CreateAggregateConfigDeliveryChannelRequest::getDeliveryChannelTargetArn() const {
  return deliveryChannelTargetArn_;
}

void CreateAggregateConfigDeliveryChannelRequest::setDeliveryChannelTargetArn(const std::string &deliveryChannelTargetArn) {
  deliveryChannelTargetArn_ = deliveryChannelTargetArn;
  setParameter(std::string("DeliveryChannelTargetArn"), deliveryChannelTargetArn);
}

std::string CreateAggregateConfigDeliveryChannelRequest::getDeliveryChannelCondition() const {
  return deliveryChannelCondition_;
}

void CreateAggregateConfigDeliveryChannelRequest::setDeliveryChannelCondition(const std::string &deliveryChannelCondition) {
  deliveryChannelCondition_ = deliveryChannelCondition;
  setParameter(std::string("DeliveryChannelCondition"), deliveryChannelCondition);
}

bool CreateAggregateConfigDeliveryChannelRequest::getConfigurationItemChangeNotification() const {
  return configurationItemChangeNotification_;
}

void CreateAggregateConfigDeliveryChannelRequest::setConfigurationItemChangeNotification(bool configurationItemChangeNotification) {
  configurationItemChangeNotification_ = configurationItemChangeNotification;
  setParameter(std::string("ConfigurationItemChangeNotification"), configurationItemChangeNotification ? "true" : "false");
}

std::string CreateAggregateConfigDeliveryChannelRequest::getDeliveryChannelName() const {
  return deliveryChannelName_;
}

void CreateAggregateConfigDeliveryChannelRequest::setDeliveryChannelName(const std::string &deliveryChannelName) {
  deliveryChannelName_ = deliveryChannelName;
  setParameter(std::string("DeliveryChannelName"), deliveryChannelName);
}

std::string CreateAggregateConfigDeliveryChannelRequest::getDeliverySnapshotTime() const {
  return deliverySnapshotTime_;
}

void CreateAggregateConfigDeliveryChannelRequest::setDeliverySnapshotTime(const std::string &deliverySnapshotTime) {
  deliverySnapshotTime_ = deliverySnapshotTime;
  setParameter(std::string("DeliverySnapshotTime"), deliverySnapshotTime);
}

std::string CreateAggregateConfigDeliveryChannelRequest::getOversizedDataOSSTargetArn() const {
  return oversizedDataOSSTargetArn_;
}

void CreateAggregateConfigDeliveryChannelRequest::setOversizedDataOSSTargetArn(const std::string &oversizedDataOSSTargetArn) {
  oversizedDataOSSTargetArn_ = oversizedDataOSSTargetArn;
  setParameter(std::string("OversizedDataOSSTargetArn"), oversizedDataOSSTargetArn);
}

std::string CreateAggregateConfigDeliveryChannelRequest::getDeliveryChannelType() const {
  return deliveryChannelType_;
}

void CreateAggregateConfigDeliveryChannelRequest::setDeliveryChannelType(const std::string &deliveryChannelType) {
  deliveryChannelType_ = deliveryChannelType;
  setParameter(std::string("DeliveryChannelType"), deliveryChannelType);
}


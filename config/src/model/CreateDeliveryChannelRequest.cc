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

#include <alibabacloud/config/model/CreateDeliveryChannelRequest.h>

using AlibabaCloud::Config::Model::CreateDeliveryChannelRequest;

CreateDeliveryChannelRequest::CreateDeliveryChannelRequest()
    : RpcServiceRequest("config", "2020-09-07", "CreateDeliveryChannel") {
  setMethod(HttpRequest::Method::Post);
}

CreateDeliveryChannelRequest::~CreateDeliveryChannelRequest() {}

bool CreateDeliveryChannelRequest::getNonCompliantNotification() const {
  return nonCompliantNotification_;
}

void CreateDeliveryChannelRequest::setNonCompliantNotification(bool nonCompliantNotification) {
  nonCompliantNotification_ = nonCompliantNotification;
  setBodyParameter(std::string("NonCompliantNotification"), nonCompliantNotification ? "true" : "false");
}

std::string CreateDeliveryChannelRequest::getClientToken() const {
  return clientToken_;
}

void CreateDeliveryChannelRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

bool CreateDeliveryChannelRequest::getConfigurationSnapshot() const {
  return configurationSnapshot_;
}

void CreateDeliveryChannelRequest::setConfigurationSnapshot(bool configurationSnapshot) {
  configurationSnapshot_ = configurationSnapshot;
  setBodyParameter(std::string("ConfigurationSnapshot"), configurationSnapshot ? "true" : "false");
}

std::string CreateDeliveryChannelRequest::getDescription() const {
  return description_;
}

void CreateDeliveryChannelRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateDeliveryChannelRequest::getDeliveryChannelTargetArn() const {
  return deliveryChannelTargetArn_;
}

void CreateDeliveryChannelRequest::setDeliveryChannelTargetArn(const std::string &deliveryChannelTargetArn) {
  deliveryChannelTargetArn_ = deliveryChannelTargetArn;
  setBodyParameter(std::string("DeliveryChannelTargetArn"), deliveryChannelTargetArn);
}

std::string CreateDeliveryChannelRequest::getDeliveryChannelCondition() const {
  return deliveryChannelCondition_;
}

void CreateDeliveryChannelRequest::setDeliveryChannelCondition(const std::string &deliveryChannelCondition) {
  deliveryChannelCondition_ = deliveryChannelCondition;
  setBodyParameter(std::string("DeliveryChannelCondition"), deliveryChannelCondition);
}

bool CreateDeliveryChannelRequest::getConfigurationItemChangeNotification() const {
  return configurationItemChangeNotification_;
}

void CreateDeliveryChannelRequest::setConfigurationItemChangeNotification(bool configurationItemChangeNotification) {
  configurationItemChangeNotification_ = configurationItemChangeNotification;
  setBodyParameter(std::string("ConfigurationItemChangeNotification"), configurationItemChangeNotification ? "true" : "false");
}

std::string CreateDeliveryChannelRequest::getDeliveryChannelAssumeRoleArn() const {
  return deliveryChannelAssumeRoleArn_;
}

void CreateDeliveryChannelRequest::setDeliveryChannelAssumeRoleArn(const std::string &deliveryChannelAssumeRoleArn) {
  deliveryChannelAssumeRoleArn_ = deliveryChannelAssumeRoleArn;
  setBodyParameter(std::string("DeliveryChannelAssumeRoleArn"), deliveryChannelAssumeRoleArn);
}

std::string CreateDeliveryChannelRequest::getDeliveryChannelName() const {
  return deliveryChannelName_;
}

void CreateDeliveryChannelRequest::setDeliveryChannelName(const std::string &deliveryChannelName) {
  deliveryChannelName_ = deliveryChannelName;
  setBodyParameter(std::string("DeliveryChannelName"), deliveryChannelName);
}

std::string CreateDeliveryChannelRequest::getOversizedDataOSSTargetArn() const {
  return oversizedDataOSSTargetArn_;
}

void CreateDeliveryChannelRequest::setOversizedDataOSSTargetArn(const std::string &oversizedDataOSSTargetArn) {
  oversizedDataOSSTargetArn_ = oversizedDataOSSTargetArn;
  setBodyParameter(std::string("OversizedDataOSSTargetArn"), oversizedDataOSSTargetArn);
}

std::string CreateDeliveryChannelRequest::getDeliveryChannelType() const {
  return deliveryChannelType_;
}

void CreateDeliveryChannelRequest::setDeliveryChannelType(const std::string &deliveryChannelType) {
  deliveryChannelType_ = deliveryChannelType;
  setBodyParameter(std::string("DeliveryChannelType"), deliveryChannelType);
}


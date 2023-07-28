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

#include <alibabacloud/dts/model/ConfigureSubscriptionInstanceRequest.h>

using AlibabaCloud::Dts::Model::ConfigureSubscriptionInstanceRequest;

ConfigureSubscriptionInstanceRequest::ConfigureSubscriptionInstanceRequest()
    : RpcServiceRequest("dts", "2016-08-01", "ConfigureSubscriptionInstance") {
  setMethod(HttpRequest::Method::Post);
}

ConfigureSubscriptionInstanceRequest::~ConfigureSubscriptionInstanceRequest() {}

std::string ConfigureSubscriptionInstanceRequest::getSourceEndpointInstanceID() const {
  return sourceEndpointInstanceID_;
}

void ConfigureSubscriptionInstanceRequest::setSourceEndpointInstanceID(const std::string &sourceEndpointInstanceID) {
  sourceEndpointInstanceID_ = sourceEndpointInstanceID;
  setParameter(std::string("SourceEndpoint.InstanceID"), sourceEndpointInstanceID);
}

std::string ConfigureSubscriptionInstanceRequest::getSourceEndpointOwnerID() const {
  return sourceEndpointOwnerID_;
}

void ConfigureSubscriptionInstanceRequest::setSourceEndpointOwnerID(const std::string &sourceEndpointOwnerID) {
  sourceEndpointOwnerID_ = sourceEndpointOwnerID;
  setParameter(std::string("SourceEndpoint.OwnerID"), sourceEndpointOwnerID);
}

bool ConfigureSubscriptionInstanceRequest::getSubscriptionDataTypeDML() const {
  return subscriptionDataTypeDML_;
}

void ConfigureSubscriptionInstanceRequest::setSubscriptionDataTypeDML(bool subscriptionDataTypeDML) {
  subscriptionDataTypeDML_ = subscriptionDataTypeDML;
  setParameter(std::string("SubscriptionDataType.DML"), subscriptionDataTypeDML ? "true" : "false");
}

std::string ConfigureSubscriptionInstanceRequest::getSubscriptionInstanceId() const {
  return subscriptionInstanceId_;
}

void ConfigureSubscriptionInstanceRequest::setSubscriptionInstanceId(const std::string &subscriptionInstanceId) {
  subscriptionInstanceId_ = subscriptionInstanceId;
  setParameter(std::string("SubscriptionInstanceId"), subscriptionInstanceId);
}

std::string ConfigureSubscriptionInstanceRequest::getSourceEndpointRole() const {
  return sourceEndpointRole_;
}

void ConfigureSubscriptionInstanceRequest::setSourceEndpointRole(const std::string &sourceEndpointRole) {
  sourceEndpointRole_ = sourceEndpointRole;
  setParameter(std::string("SourceEndpoint.Role"), sourceEndpointRole);
}

std::string ConfigureSubscriptionInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void ConfigureSubscriptionInstanceRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string ConfigureSubscriptionInstanceRequest::getSourceEndpointInstanceType() const {
  return sourceEndpointInstanceType_;
}

void ConfigureSubscriptionInstanceRequest::setSourceEndpointInstanceType(const std::string &sourceEndpointInstanceType) {
  sourceEndpointInstanceType_ = sourceEndpointInstanceType;
  setParameter(std::string("SourceEndpoint.InstanceType"), sourceEndpointInstanceType);
}

bool ConfigureSubscriptionInstanceRequest::getSubscriptionDataTypeDDL() const {
  return subscriptionDataTypeDDL_;
}

void ConfigureSubscriptionInstanceRequest::setSubscriptionDataTypeDDL(bool subscriptionDataTypeDDL) {
  subscriptionDataTypeDDL_ = subscriptionDataTypeDDL;
  setParameter(std::string("SubscriptionDataType.DDL"), subscriptionDataTypeDDL ? "true" : "false");
}

std::string ConfigureSubscriptionInstanceRequest::getSubscriptionObject() const {
  return subscriptionObject_;
}

void ConfigureSubscriptionInstanceRequest::setSubscriptionObject(const std::string &subscriptionObject) {
  subscriptionObject_ = subscriptionObject;
  setParameter(std::string("SubscriptionObject"), subscriptionObject);
}

std::string ConfigureSubscriptionInstanceRequest::getSubscriptionInstanceName() const {
  return subscriptionInstanceName_;
}

void ConfigureSubscriptionInstanceRequest::setSubscriptionInstanceName(const std::string &subscriptionInstanceName) {
  subscriptionInstanceName_ = subscriptionInstanceName;
  setParameter(std::string("SubscriptionInstanceName"), subscriptionInstanceName);
}


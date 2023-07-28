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

#include <alibabacloud/dts/model/ConfigurationSynchronizationJobRequest.h>

using AlibabaCloud::Dts::Model::ConfigurationSynchronizationJobRequest;

ConfigurationSynchronizationJobRequest::ConfigurationSynchronizationJobRequest()
    : RpcServiceRequest("dts", "2016-08-01", "ConfigurationSynchronizationJob") {
  setMethod(HttpRequest::Method::Post);
}

ConfigurationSynchronizationJobRequest::~ConfigurationSynchronizationJobRequest() {}

std::string ConfigurationSynchronizationJobRequest::getSourceEndpointInstanceID() const {
  return sourceEndpointInstanceID_;
}

void ConfigurationSynchronizationJobRequest::setSourceEndpointInstanceID(const std::string &sourceEndpointInstanceID) {
  sourceEndpointInstanceID_ = sourceEndpointInstanceID;
  setParameter(std::string("SourceEndpoint.InstanceID"), sourceEndpointInstanceID);
}

std::string ConfigurationSynchronizationJobRequest::getDestinationEndpointInstanceID() const {
  return destinationEndpointInstanceID_;
}

void ConfigurationSynchronizationJobRequest::setDestinationEndpointInstanceID(const std::string &destinationEndpointInstanceID) {
  destinationEndpointInstanceID_ = destinationEndpointInstanceID;
  setParameter(std::string("DestinationEndpoint.InstanceID"), destinationEndpointInstanceID);
}

bool ConfigurationSynchronizationJobRequest::getInitializationStructureLoad() const {
  return initializationStructureLoad_;
}

void ConfigurationSynchronizationJobRequest::setInitializationStructureLoad(bool initializationStructureLoad) {
  initializationStructureLoad_ = initializationStructureLoad;
  setParameter(std::string("Initialization.StructureLoad"), initializationStructureLoad ? "true" : "false");
}

std::string ConfigurationSynchronizationJobRequest::getSynchronizationObject() const {
  return synchronizationObject_;
}

void ConfigurationSynchronizationJobRequest::setSynchronizationObject(const std::string &synchronizationObject) {
  synchronizationObject_ = synchronizationObject;
  setParameter(std::string("SynchronizationObject"), synchronizationObject);
}

std::string ConfigurationSynchronizationJobRequest::getOwnerId() const {
  return ownerId_;
}

void ConfigurationSynchronizationJobRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string ConfigurationSynchronizationJobRequest::getSourceEndpointInstanceType() const {
  return sourceEndpointInstanceType_;
}

void ConfigurationSynchronizationJobRequest::setSourceEndpointInstanceType(const std::string &sourceEndpointInstanceType) {
  sourceEndpointInstanceType_ = sourceEndpointInstanceType;
  setParameter(std::string("SourceEndpoint.InstanceType"), sourceEndpointInstanceType);
}

std::string ConfigurationSynchronizationJobRequest::getSynchronizationJobId() const {
  return synchronizationJobId_;
}

void ConfigurationSynchronizationJobRequest::setSynchronizationJobId(const std::string &synchronizationJobId) {
  synchronizationJobId_ = synchronizationJobId;
  setParameter(std::string("SynchronizationJobId"), synchronizationJobId);
}

std::string ConfigurationSynchronizationJobRequest::getSynchronizationJobName() const {
  return synchronizationJobName_;
}

void ConfigurationSynchronizationJobRequest::setSynchronizationJobName(const std::string &synchronizationJobName) {
  synchronizationJobName_ = synchronizationJobName;
  setParameter(std::string("SynchronizationJobName"), synchronizationJobName);
}

bool ConfigurationSynchronizationJobRequest::getInitializationDataLoad() const {
  return initializationDataLoad_;
}

void ConfigurationSynchronizationJobRequest::setInitializationDataLoad(bool initializationDataLoad) {
  initializationDataLoad_ = initializationDataLoad;
  setParameter(std::string("Initialization.DataLoad"), initializationDataLoad ? "true" : "false");
}

std::string ConfigurationSynchronizationJobRequest::getDestinationEndpointInstanceType() const {
  return destinationEndpointInstanceType_;
}

void ConfigurationSynchronizationJobRequest::setDestinationEndpointInstanceType(const std::string &destinationEndpointInstanceType) {
  destinationEndpointInstanceType_ = destinationEndpointInstanceType;
  setParameter(std::string("DestinationEndpoint.InstanceType"), destinationEndpointInstanceType);
}


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

#include <alibabacloud/dts/model/CreateSynchronizationJobRequest.h>

using AlibabaCloud::Dts::Model::CreateSynchronizationJobRequest;

CreateSynchronizationJobRequest::CreateSynchronizationJobRequest()
    : RpcServiceRequest("dts", "2019-09-01", "CreateSynchronizationJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateSynchronizationJobRequest::~CreateSynchronizationJobRequest() {}

std::string CreateSynchronizationJobRequest::getPeriod() const {
  return period_;
}

void CreateSynchronizationJobRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string CreateSynchronizationJobRequest::getDestRegion() const {
  return destRegion_;
}

void CreateSynchronizationJobRequest::setDestRegion(const std::string &destRegion) {
  destRegion_ = destRegion;
  setParameter(std::string("DestRegion"), destRegion);
}

std::string CreateSynchronizationJobRequest::getClientToken() const {
  return clientToken_;
}

void CreateSynchronizationJobRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateSynchronizationJobRequest::getTopology() const {
  return topology_;
}

void CreateSynchronizationJobRequest::setTopology(const std::string &topology) {
  topology_ = topology;
  setParameter(std::string("Topology"), topology);
}

std::string CreateSynchronizationJobRequest::getNetworkType() const {
  return networkType_;
}

void CreateSynchronizationJobRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("networkType"), networkType);
}

std::string CreateSynchronizationJobRequest::getOwnerId() const {
  return ownerId_;
}

void CreateSynchronizationJobRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

int CreateSynchronizationJobRequest::getUsedTime() const {
  return usedTime_;
}

void CreateSynchronizationJobRequest::setUsedTime(int usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), std::to_string(usedTime));
}

std::string CreateSynchronizationJobRequest::getSourceEndpointInstanceType() const {
  return sourceEndpointInstanceType_;
}

void CreateSynchronizationJobRequest::setSourceEndpointInstanceType(const std::string &sourceEndpointInstanceType) {
  sourceEndpointInstanceType_ = sourceEndpointInstanceType;
  setParameter(std::string("SourceEndpoint.InstanceType"), sourceEndpointInstanceType);
}

std::string CreateSynchronizationJobRequest::getSynchronizationJobClass() const {
  return synchronizationJobClass_;
}

void CreateSynchronizationJobRequest::setSynchronizationJobClass(const std::string &synchronizationJobClass) {
  synchronizationJobClass_ = synchronizationJobClass;
  setParameter(std::string("SynchronizationJobClass"), synchronizationJobClass);
}

std::string CreateSynchronizationJobRequest::getSourceRegion() const {
  return sourceRegion_;
}

void CreateSynchronizationJobRequest::setSourceRegion(const std::string &sourceRegion) {
  sourceRegion_ = sourceRegion;
  setParameter(std::string("SourceRegion"), sourceRegion);
}

std::string CreateSynchronizationJobRequest::getPayType() const {
  return payType_;
}

void CreateSynchronizationJobRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string CreateSynchronizationJobRequest::getDestinationEndpointInstanceType() const {
  return destinationEndpointInstanceType_;
}

void CreateSynchronizationJobRequest::setDestinationEndpointInstanceType(const std::string &destinationEndpointInstanceType) {
  destinationEndpointInstanceType_ = destinationEndpointInstanceType;
  setParameter(std::string("DestinationEndpoint.InstanceType"), destinationEndpointInstanceType);
}


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

#include <alibabacloud/amqp-open/model/UpdateInstanceRequest.h>

using AlibabaCloud::Amqp_open::Model::UpdateInstanceRequest;

UpdateInstanceRequest::UpdateInstanceRequest()
    : RpcServiceRequest("amqp-open", "2019-12-12", "UpdateInstance") {
  setMethod(HttpRequest::Method::Post);
}

UpdateInstanceRequest::~UpdateInstanceRequest() {}

long UpdateInstanceRequest::getMaxPrivateTps() const {
  return maxPrivateTps_;
}

void UpdateInstanceRequest::setMaxPrivateTps(long maxPrivateTps) {
  maxPrivateTps_ = maxPrivateTps;
  setParameter(std::string("MaxPrivateTps"), std::to_string(maxPrivateTps));
}

std::string UpdateInstanceRequest::getClientToken() const {
  return clientToken_;
}

void UpdateInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int UpdateInstanceRequest::getStorageSize() const {
  return storageSize_;
}

void UpdateInstanceRequest::setStorageSize(int storageSize) {
  storageSize_ = storageSize;
  setParameter(std::string("StorageSize"), std::to_string(storageSize));
}

int UpdateInstanceRequest::getQueueCapacity() const {
  return queueCapacity_;
}

void UpdateInstanceRequest::setQueueCapacity(int queueCapacity) {
  queueCapacity_ = queueCapacity;
  setParameter(std::string("QueueCapacity"), std::to_string(queueCapacity));
}

int UpdateInstanceRequest::getTracingStorageTime() const {
  return tracingStorageTime_;
}

void UpdateInstanceRequest::setTracingStorageTime(int tracingStorageTime) {
  tracingStorageTime_ = tracingStorageTime;
  setParameter(std::string("TracingStorageTime"), std::to_string(tracingStorageTime));
}

int UpdateInstanceRequest::getMaxConnections() const {
  return maxConnections_;
}

void UpdateInstanceRequest::setMaxConnections(int maxConnections) {
  maxConnections_ = maxConnections;
  setParameter(std::string("MaxConnections"), std::to_string(maxConnections));
}

bool UpdateInstanceRequest::getSupportTracing() const {
  return supportTracing_;
}

void UpdateInstanceRequest::setSupportTracing(bool supportTracing) {
  supportTracing_ = supportTracing;
  setParameter(std::string("SupportTracing"), supportTracing ? "true" : "false");
}

std::string UpdateInstanceRequest::getServerlessChargeType() const {
  return serverlessChargeType_;
}

void UpdateInstanceRequest::setServerlessChargeType(const std::string &serverlessChargeType) {
  serverlessChargeType_ = serverlessChargeType;
  setParameter(std::string("ServerlessChargeType"), serverlessChargeType);
}

std::string UpdateInstanceRequest::getInstanceType() const {
  return instanceType_;
}

void UpdateInstanceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string UpdateInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool UpdateInstanceRequest::getSupportEip() const {
  return supportEip_;
}

void UpdateInstanceRequest::setSupportEip(bool supportEip) {
  supportEip_ = supportEip;
  setParameter(std::string("SupportEip"), supportEip ? "true" : "false");
}

std::string UpdateInstanceRequest::getModifyType() const {
  return modifyType_;
}

void UpdateInstanceRequest::setModifyType(const std::string &modifyType) {
  modifyType_ = modifyType;
  setParameter(std::string("ModifyType"), modifyType);
}

long UpdateInstanceRequest::getMaxEipTps() const {
  return maxEipTps_;
}

void UpdateInstanceRequest::setMaxEipTps(long maxEipTps) {
  maxEipTps_ = maxEipTps;
  setParameter(std::string("MaxEipTps"), std::to_string(maxEipTps));
}


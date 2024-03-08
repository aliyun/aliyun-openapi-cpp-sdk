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

#include <alibabacloud/amqp-open/model/CreateInstanceRequest.h>

using AlibabaCloud::Amqp_open::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest()
    : RpcServiceRequest("amqp-open", "2019-12-12", "CreateInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateInstanceRequest::~CreateInstanceRequest() {}

long CreateInstanceRequest::getMaxPrivateTps() const {
  return maxPrivateTps_;
}

void CreateInstanceRequest::setMaxPrivateTps(long maxPrivateTps) {
  maxPrivateTps_ = maxPrivateTps;
  setParameter(std::string("MaxPrivateTps"), std::to_string(maxPrivateTps));
}

std::string CreateInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateInstanceRequest::getPeriodCycle() const {
  return periodCycle_;
}

void CreateInstanceRequest::setPeriodCycle(const std::string &periodCycle) {
  periodCycle_ = periodCycle;
  setParameter(std::string("PeriodCycle"), periodCycle);
}

int CreateInstanceRequest::getStorageSize() const {
  return storageSize_;
}

void CreateInstanceRequest::setStorageSize(int storageSize) {
  storageSize_ = storageSize;
  setParameter(std::string("StorageSize"), std::to_string(storageSize));
}

int CreateInstanceRequest::getQueueCapacity() const {
  return queueCapacity_;
}

void CreateInstanceRequest::setQueueCapacity(int queueCapacity) {
  queueCapacity_ = queueCapacity;
  setParameter(std::string("QueueCapacity"), std::to_string(queueCapacity));
}

int CreateInstanceRequest::getTracingStorageTime() const {
  return tracingStorageTime_;
}

void CreateInstanceRequest::setTracingStorageTime(int tracingStorageTime) {
  tracingStorageTime_ = tracingStorageTime;
  setParameter(std::string("TracingStorageTime"), std::to_string(tracingStorageTime));
}

int CreateInstanceRequest::getMaxConnections() const {
  return maxConnections_;
}

void CreateInstanceRequest::setMaxConnections(int maxConnections) {
  maxConnections_ = maxConnections;
  setParameter(std::string("MaxConnections"), std::to_string(maxConnections));
}

bool CreateInstanceRequest::getSupportTracing() const {
  return supportTracing_;
}

void CreateInstanceRequest::setSupportTracing(bool supportTracing) {
  supportTracing_ = supportTracing;
  setParameter(std::string("SupportTracing"), supportTracing ? "true" : "false");
}

std::string CreateInstanceRequest::getServerlessChargeType() const {
  return serverlessChargeType_;
}

void CreateInstanceRequest::setServerlessChargeType(const std::string &serverlessChargeType) {
  serverlessChargeType_ = serverlessChargeType;
  setParameter(std::string("ServerlessChargeType"), serverlessChargeType);
}

std::string CreateInstanceRequest::getInstanceType() const {
  return instanceType_;
}

void CreateInstanceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string CreateInstanceRequest::getRenewStatus() const {
  return renewStatus_;
}

void CreateInstanceRequest::setRenewStatus(const std::string &renewStatus) {
  renewStatus_ = renewStatus;
  setParameter(std::string("RenewStatus"), renewStatus);
}

int CreateInstanceRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void CreateInstanceRequest::setAutoRenewPeriod(int autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

int CreateInstanceRequest::getPeriod() const {
  return period_;
}

void CreateInstanceRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string CreateInstanceRequest::getRenewalDurationUnit() const {
  return renewalDurationUnit_;
}

void CreateInstanceRequest::setRenewalDurationUnit(const std::string &renewalDurationUnit) {
  renewalDurationUnit_ = renewalDurationUnit;
  setParameter(std::string("RenewalDurationUnit"), renewalDurationUnit);
}

std::string CreateInstanceRequest::getInstanceName() const {
  return instanceName_;
}

void CreateInstanceRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

bool CreateInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateInstanceRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

bool CreateInstanceRequest::getSupportEip() const {
  return supportEip_;
}

void CreateInstanceRequest::setSupportEip(bool supportEip) {
  supportEip_ = supportEip;
  setParameter(std::string("SupportEip"), supportEip ? "true" : "false");
}

long CreateInstanceRequest::getMaxEipTps() const {
  return maxEipTps_;
}

void CreateInstanceRequest::setMaxEipTps(long maxEipTps) {
  maxEipTps_ = maxEipTps;
  setParameter(std::string("MaxEipTps"), std::to_string(maxEipTps));
}

std::string CreateInstanceRequest::getPaymentType() const {
  return paymentType_;
}

void CreateInstanceRequest::setPaymentType(const std::string &paymentType) {
  paymentType_ = paymentType;
  setParameter(std::string("PaymentType"), paymentType);
}


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

#include <alibabacloud/slb/model/SetLoadBalancerTCPListenerAttributeRequest.h>

using AlibabaCloud::Slb::Model::SetLoadBalancerTCPListenerAttributeRequest;

SetLoadBalancerTCPListenerAttributeRequest::SetLoadBalancerTCPListenerAttributeRequest()
    : RpcServiceRequest("slb", "2013-02-21", "SetLoadBalancerTCPListenerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

SetLoadBalancerTCPListenerAttributeRequest::~SetLoadBalancerTCPListenerAttributeRequest() {}

std::string SetLoadBalancerTCPListenerAttributeRequest::getHostId() const {
  return hostId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHostId(const std::string &hostId) {
  hostId_ = hostId;
  setParameter(std::string("HostId"), hostId);
}

int SetLoadBalancerTCPListenerAttributeRequest::getUnhealthyThreshold() const {
  return unhealthyThreshold_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setUnhealthyThreshold(int unhealthyThreshold) {
  unhealthyThreshold_ = unhealthyThreshold;
  setParameter(std::string("UnhealthyThreshold"), std::to_string(unhealthyThreshold));
}

int SetLoadBalancerTCPListenerAttributeRequest::getHealthyThreshold() const {
  return healthyThreshold_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthyThreshold(int healthyThreshold) {
  healthyThreshold_ = healthyThreshold;
  setParameter(std::string("HealthyThreshold"), std::to_string(healthyThreshold));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getScheduler() const {
  return scheduler_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setParameter(std::string("Scheduler"), scheduler);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getHealthCheck() const {
  return healthCheck_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheck(const std::string &healthCheck) {
  healthCheck_ = healthCheck;
  setParameter(std::string("HealthCheck"), healthCheck);
}

int SetLoadBalancerTCPListenerAttributeRequest::getPersistenceTimeout() const {
  return persistenceTimeout_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setPersistenceTimeout(int persistenceTimeout) {
  persistenceTimeout_ = persistenceTimeout;
  setParameter(std::string("PersistenceTimeout"), std::to_string(persistenceTimeout));
}

int SetLoadBalancerTCPListenerAttributeRequest::getConnectTimeout() const {
  return connectTimeout_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setConnectTimeout(int connectTimeout) {
  connectTimeout_ = connectTimeout;
  setParameter(std::string("ConnectTimeout"), std::to_string(connectTimeout));
}

int SetLoadBalancerTCPListenerAttributeRequest::getListenerPort() const {
  return listenerPort_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

int SetLoadBalancerTCPListenerAttributeRequest::getConnectPort() const {
  return connectPort_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setConnectPort(int connectPort) {
  connectPort_ = connectPort;
  setParameter(std::string("ConnectPort"), std::to_string(connectPort));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

int SetLoadBalancerTCPListenerAttributeRequest::getInterval() const {
  return interval_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setInterval(int interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}


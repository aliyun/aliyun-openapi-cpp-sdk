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

#include <alibabacloud/ens/model/SetLoadBalancerTCPListenerAttributeRequest.h>

using AlibabaCloud::Ens::Model::SetLoadBalancerTCPListenerAttributeRequest;

SetLoadBalancerTCPListenerAttributeRequest::SetLoadBalancerTCPListenerAttributeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "SetLoadBalancerTCPListenerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

SetLoadBalancerTCPListenerAttributeRequest::~SetLoadBalancerTCPListenerAttributeRequest() {}

std::string SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckURI() const {
  return healthCheckURI_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckURI(const std::string &healthCheckURI) {
  healthCheckURI_ = healthCheckURI;
  setParameter(std::string("HealthCheckURI"), healthCheckURI);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getProtocol() const {
  return protocol_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

int SetLoadBalancerTCPListenerAttributeRequest::getEstablishedTimeout() const {
  return establishedTimeout_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setEstablishedTimeout(int establishedTimeout) {
  establishedTimeout_ = establishedTimeout;
  setParameter(std::string("EstablishedTimeout"), std::to_string(establishedTimeout));
}

int SetLoadBalancerTCPListenerAttributeRequest::getPersistenceTimeout() const {
  return persistenceTimeout_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setPersistenceTimeout(int persistenceTimeout) {
  persistenceTimeout_ = persistenceTimeout;
  setParameter(std::string("PersistenceTimeout"), std::to_string(persistenceTimeout));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckDomain() const {
  return healthCheckDomain_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckDomain(const std::string &healthCheckDomain) {
  healthCheckDomain_ = healthCheckDomain;
  setParameter(std::string("HealthCheckDomain"), healthCheckDomain);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

int SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckInterval() const {
  return healthCheckInterval_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckInterval(int healthCheckInterval) {
  healthCheckInterval_ = healthCheckInterval;
  setParameter(std::string("HealthCheckInterval"), std::to_string(healthCheckInterval));
}

int SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckConnectTimeout() const {
  return healthCheckConnectTimeout_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckConnectTimeout(int healthCheckConnectTimeout) {
  healthCheckConnectTimeout_ = healthCheckConnectTimeout;
  setParameter(std::string("HealthCheckConnectTimeout"), std::to_string(healthCheckConnectTimeout));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getDescription() const {
  return description_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
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

std::string SetLoadBalancerTCPListenerAttributeRequest::getScheduler() const {
  return scheduler_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setParameter(std::string("Scheduler"), scheduler);
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getEipTransmit() const {
  return eipTransmit_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setEipTransmit(const std::string &eipTransmit) {
  eipTransmit_ = eipTransmit;
  setParameter(std::string("EipTransmit"), eipTransmit);
}

int SetLoadBalancerTCPListenerAttributeRequest::getListenerPort() const {
  return listenerPort_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckType() const {
  return healthCheckType_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckType(const std::string &healthCheckType) {
  healthCheckType_ = healthCheckType;
  setParameter(std::string("HealthCheckType"), healthCheckType);
}

int SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckConnectPort() const {
  return healthCheckConnectPort_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckConnectPort(int healthCheckConnectPort) {
  healthCheckConnectPort_ = healthCheckConnectPort;
  setParameter(std::string("HealthCheckConnectPort"), std::to_string(healthCheckConnectPort));
}

std::string SetLoadBalancerTCPListenerAttributeRequest::getHealthCheckHttpCode() const {
  return healthCheckHttpCode_;
}

void SetLoadBalancerTCPListenerAttributeRequest::setHealthCheckHttpCode(const std::string &healthCheckHttpCode) {
  healthCheckHttpCode_ = healthCheckHttpCode;
  setParameter(std::string("HealthCheckHttpCode"), healthCheckHttpCode);
}


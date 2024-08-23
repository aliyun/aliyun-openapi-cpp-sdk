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

#include <alibabacloud/ens/model/CreateLoadBalancerUDPListenerRequest.h>

using AlibabaCloud::Ens::Model::CreateLoadBalancerUDPListenerRequest;

CreateLoadBalancerUDPListenerRequest::CreateLoadBalancerUDPListenerRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateLoadBalancerUDPListener") {
  setMethod(HttpRequest::Method::Post);
}

CreateLoadBalancerUDPListenerRequest::~CreateLoadBalancerUDPListenerRequest() {}

std::string CreateLoadBalancerUDPListenerRequest::getProtocol() const {
  return protocol_;
}

void CreateLoadBalancerUDPListenerRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

int CreateLoadBalancerUDPListenerRequest::getEstablishedTimeout() const {
  return establishedTimeout_;
}

void CreateLoadBalancerUDPListenerRequest::setEstablishedTimeout(int establishedTimeout) {
  establishedTimeout_ = establishedTimeout;
  setParameter(std::string("EstablishedTimeout"), std::to_string(establishedTimeout));
}

std::string CreateLoadBalancerUDPListenerRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void CreateLoadBalancerUDPListenerRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string CreateLoadBalancerUDPListenerRequest::getHealthCheckReq() const {
  return healthCheckReq_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckReq(const std::string &healthCheckReq) {
  healthCheckReq_ = healthCheckReq;
  setParameter(std::string("HealthCheckReq"), healthCheckReq);
}

int CreateLoadBalancerUDPListenerRequest::getHealthCheckInterval() const {
  return healthCheckInterval_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckInterval(int healthCheckInterval) {
  healthCheckInterval_ = healthCheckInterval;
  setParameter(std::string("HealthCheckInterval"), std::to_string(healthCheckInterval));
}

int CreateLoadBalancerUDPListenerRequest::getBackendServerPort() const {
  return backendServerPort_;
}

void CreateLoadBalancerUDPListenerRequest::setBackendServerPort(int backendServerPort) {
  backendServerPort_ = backendServerPort;
  setParameter(std::string("BackendServerPort"), std::to_string(backendServerPort));
}

std::string CreateLoadBalancerUDPListenerRequest::getHealthCheckExp() const {
  return healthCheckExp_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckExp(const std::string &healthCheckExp) {
  healthCheckExp_ = healthCheckExp;
  setParameter(std::string("HealthCheckExp"), healthCheckExp);
}

int CreateLoadBalancerUDPListenerRequest::getHealthCheckConnectTimeout() const {
  return healthCheckConnectTimeout_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckConnectTimeout(int healthCheckConnectTimeout) {
  healthCheckConnectTimeout_ = healthCheckConnectTimeout;
  setParameter(std::string("HealthCheckConnectTimeout"), std::to_string(healthCheckConnectTimeout));
}

std::string CreateLoadBalancerUDPListenerRequest::getDescription() const {
  return description_;
}

void CreateLoadBalancerUDPListenerRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int CreateLoadBalancerUDPListenerRequest::getUnhealthyThreshold() const {
  return unhealthyThreshold_;
}

void CreateLoadBalancerUDPListenerRequest::setUnhealthyThreshold(int unhealthyThreshold) {
  unhealthyThreshold_ = unhealthyThreshold;
  setParameter(std::string("UnhealthyThreshold"), std::to_string(unhealthyThreshold));
}

int CreateLoadBalancerUDPListenerRequest::getHealthyThreshold() const {
  return healthyThreshold_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthyThreshold(int healthyThreshold) {
  healthyThreshold_ = healthyThreshold;
  setParameter(std::string("HealthyThreshold"), std::to_string(healthyThreshold));
}

std::string CreateLoadBalancerUDPListenerRequest::getScheduler() const {
  return scheduler_;
}

void CreateLoadBalancerUDPListenerRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setParameter(std::string("Scheduler"), scheduler);
}

std::string CreateLoadBalancerUDPListenerRequest::getEipTransmit() const {
  return eipTransmit_;
}

void CreateLoadBalancerUDPListenerRequest::setEipTransmit(const std::string &eipTransmit) {
  eipTransmit_ = eipTransmit;
  setParameter(std::string("EipTransmit"), eipTransmit);
}

int CreateLoadBalancerUDPListenerRequest::getListenerPort() const {
  return listenerPort_;
}

void CreateLoadBalancerUDPListenerRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

int CreateLoadBalancerUDPListenerRequest::getHealthCheckConnectPort() const {
  return healthCheckConnectPort_;
}

void CreateLoadBalancerUDPListenerRequest::setHealthCheckConnectPort(int healthCheckConnectPort) {
  healthCheckConnectPort_ = healthCheckConnectPort;
  setParameter(std::string("HealthCheckConnectPort"), std::to_string(healthCheckConnectPort));
}


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

#include <alibabacloud/alb/model/EnableLoadBalancerAccessLogRequest.h>

using AlibabaCloud::Alb::Model::EnableLoadBalancerAccessLogRequest;

EnableLoadBalancerAccessLogRequest::EnableLoadBalancerAccessLogRequest()
    : RpcServiceRequest("alb", "2020-06-16", "EnableLoadBalancerAccessLog") {
  setMethod(HttpRequest::Method::Post);
}

EnableLoadBalancerAccessLogRequest::~EnableLoadBalancerAccessLogRequest() {}

std::string EnableLoadBalancerAccessLogRequest::getLogProject() const {
  return logProject_;
}

void EnableLoadBalancerAccessLogRequest::setLogProject(const std::string &logProject) {
  logProject_ = logProject;
  setParameter(std::string("LogProject"), logProject);
}

std::string EnableLoadBalancerAccessLogRequest::getClientToken() const {
  return clientToken_;
}

void EnableLoadBalancerAccessLogRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool EnableLoadBalancerAccessLogRequest::getDryRun() const {
  return dryRun_;
}

void EnableLoadBalancerAccessLogRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string EnableLoadBalancerAccessLogRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void EnableLoadBalancerAccessLogRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string EnableLoadBalancerAccessLogRequest::getLogStore() const {
  return logStore_;
}

void EnableLoadBalancerAccessLogRequest::setLogStore(const std::string &logStore) {
  logStore_ = logStore;
  setParameter(std::string("LogStore"), logStore);
}


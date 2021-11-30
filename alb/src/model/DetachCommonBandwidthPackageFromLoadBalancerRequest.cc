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

#include <alibabacloud/alb/model/DetachCommonBandwidthPackageFromLoadBalancerRequest.h>

using AlibabaCloud::Alb::Model::DetachCommonBandwidthPackageFromLoadBalancerRequest;

DetachCommonBandwidthPackageFromLoadBalancerRequest::DetachCommonBandwidthPackageFromLoadBalancerRequest()
    : RpcServiceRequest("alb", "2020-06-16", "DetachCommonBandwidthPackageFromLoadBalancer") {
  setMethod(HttpRequest::Method::Post);
}

DetachCommonBandwidthPackageFromLoadBalancerRequest::~DetachCommonBandwidthPackageFromLoadBalancerRequest() {}

std::string DetachCommonBandwidthPackageFromLoadBalancerRequest::getClientToken() const {
  return clientToken_;
}

void DetachCommonBandwidthPackageFromLoadBalancerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DetachCommonBandwidthPackageFromLoadBalancerRequest::getRegionId() const {
  return regionId_;
}

void DetachCommonBandwidthPackageFromLoadBalancerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DetachCommonBandwidthPackageFromLoadBalancerRequest::getBandwidthPackageId() const {
  return bandwidthPackageId_;
}

void DetachCommonBandwidthPackageFromLoadBalancerRequest::setBandwidthPackageId(const std::string &bandwidthPackageId) {
  bandwidthPackageId_ = bandwidthPackageId;
  setParameter(std::string("BandwidthPackageId"), bandwidthPackageId);
}

bool DetachCommonBandwidthPackageFromLoadBalancerRequest::getDryRun() const {
  return dryRun_;
}

void DetachCommonBandwidthPackageFromLoadBalancerRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DetachCommonBandwidthPackageFromLoadBalancerRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DetachCommonBandwidthPackageFromLoadBalancerRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}


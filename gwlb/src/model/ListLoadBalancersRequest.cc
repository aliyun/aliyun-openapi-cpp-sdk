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

#include <alibabacloud/gwlb/model/ListLoadBalancersRequest.h>

using AlibabaCloud::Gwlb::Model::ListLoadBalancersRequest;

ListLoadBalancersRequest::ListLoadBalancersRequest()
    : RpcServiceRequest("gwlb", "2024-04-15", "ListLoadBalancers") {
  setMethod(HttpRequest::Method::Post);
}

ListLoadBalancersRequest::~ListLoadBalancersRequest() {}

std::vector<ListLoadBalancersRequest::std::string> ListLoadBalancersRequest::getLoadBalancerNames() const {
  return loadBalancerNames_;
}

void ListLoadBalancersRequest::setLoadBalancerNames(const std::vector<ListLoadBalancersRequest::std::string> &loadBalancerNames) {
  loadBalancerNames_ = loadBalancerNames;
  for(int dep1 = 0; dep1 != loadBalancerNames.size(); dep1++) {
    setBodyParameter(std::string("LoadBalancerNames") + "." + std::to_string(dep1 + 1), loadBalancerNames[dep1]);
  }
}

std::vector<ListLoadBalancersRequest::std::string> ListLoadBalancersRequest::getLoadBalancerIds() const {
  return loadBalancerIds_;
}

void ListLoadBalancersRequest::setLoadBalancerIds(const std::vector<ListLoadBalancersRequest::std::string> &loadBalancerIds) {
  loadBalancerIds_ = loadBalancerIds;
  for(int dep1 = 0; dep1 != loadBalancerIds.size(); dep1++) {
    setBodyParameter(std::string("LoadBalancerIds") + "." + std::to_string(dep1 + 1), loadBalancerIds[dep1]);
  }
}

int ListLoadBalancersRequest::getSkip() const {
  return skip_;
}

void ListLoadBalancersRequest::setSkip(int skip) {
  skip_ = skip;
  setBodyParameter(std::string("Skip"), std::to_string(skip));
}

std::string ListLoadBalancersRequest::getAddressIpVersion() const {
  return addressIpVersion_;
}

void ListLoadBalancersRequest::setAddressIpVersion(const std::string &addressIpVersion) {
  addressIpVersion_ = addressIpVersion;
  setBodyParameter(std::string("AddressIpVersion"), addressIpVersion);
}

std::string ListLoadBalancersRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListLoadBalancersRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::vector<ListLoadBalancersRequest::std::string> ListLoadBalancersRequest::getZoneIds() const {
  return zoneIds_;
}

void ListLoadBalancersRequest::setZoneIds(const std::vector<ListLoadBalancersRequest::std::string> &zoneIds) {
  zoneIds_ = zoneIds;
  for(int dep1 = 0; dep1 != zoneIds.size(); dep1++) {
    setBodyParameter(std::string("ZoneIds") + "." + std::to_string(dep1 + 1), zoneIds[dep1]);
  }
}

std::string ListLoadBalancersRequest::getNextToken() const {
  return nextToken_;
}

void ListLoadBalancersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::vector<ListLoadBalancersRequest::std::string> ListLoadBalancersRequest::getVpcIds() const {
  return vpcIds_;
}

void ListLoadBalancersRequest::setVpcIds(const std::vector<ListLoadBalancersRequest::std::string> &vpcIds) {
  vpcIds_ = vpcIds;
  for(int dep1 = 0; dep1 != vpcIds.size(); dep1++) {
    setBodyParameter(std::string("VpcIds") + "." + std::to_string(dep1 + 1), vpcIds[dep1]);
  }
}

std::vector<ListLoadBalancersRequest::Tag> ListLoadBalancersRequest::getTag() const {
  return tag_;
}

void ListLoadBalancersRequest::setTag(const std::vector<ListLoadBalancersRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setBodyParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
    setBodyParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
  }
}

std::string ListLoadBalancersRequest::getLoadBalancerBusinessStatus() const {
  return loadBalancerBusinessStatus_;
}

void ListLoadBalancersRequest::setLoadBalancerBusinessStatus(const std::string &loadBalancerBusinessStatus) {
  loadBalancerBusinessStatus_ = loadBalancerBusinessStatus;
  setBodyParameter(std::string("LoadBalancerBusinessStatus"), loadBalancerBusinessStatus);
}

std::string ListLoadBalancersRequest::getLoadBalancerStatus() const {
  return loadBalancerStatus_;
}

void ListLoadBalancersRequest::setLoadBalancerStatus(const std::string &loadBalancerStatus) {
  loadBalancerStatus_ = loadBalancerStatus;
  setBodyParameter(std::string("LoadBalancerStatus"), loadBalancerStatus);
}

int ListLoadBalancersRequest::getMaxResults() const {
  return maxResults_;
}

void ListLoadBalancersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}


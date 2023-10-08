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

#include <alibabacloud/nlb/model/ListLoadBalancersRequest.h>

using AlibabaCloud::Nlb::Model::ListLoadBalancersRequest;

ListLoadBalancersRequest::ListLoadBalancersRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "ListLoadBalancers") {
  setMethod(HttpRequest::Method::Post);
}

ListLoadBalancersRequest::~ListLoadBalancersRequest() {}

std::vector<std::string> ListLoadBalancersRequest::getLoadBalancerNames() const {
  return loadBalancerNames_;
}

void ListLoadBalancersRequest::setLoadBalancerNames(const std::vector<std::string> &loadBalancerNames) {
  loadBalancerNames_ = loadBalancerNames;
}

std::vector<std::string> ListLoadBalancersRequest::getLoadBalancerIds() const {
  return loadBalancerIds_;
}

void ListLoadBalancersRequest::setLoadBalancerIds(const std::vector<std::string> &loadBalancerIds) {
  loadBalancerIds_ = loadBalancerIds;
}

std::string ListLoadBalancersRequest::getAddressIpVersion() const {
  return addressIpVersion_;
}

void ListLoadBalancersRequest::setAddressIpVersion(const std::string &addressIpVersion) {
  addressIpVersion_ = addressIpVersion;
  setParameter(std::string("AddressIpVersion"), addressIpVersion);
}

std::string ListLoadBalancersRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListLoadBalancersRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListLoadBalancersRequest::getNextToken() const {
  return nextToken_;
}

void ListLoadBalancersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListLoadBalancersRequest::getRegionId() const {
  return regionId_;
}

void ListLoadBalancersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListLoadBalancersRequest::getDNSName() const {
  return dNSName_;
}

void ListLoadBalancersRequest::setDNSName(const std::string &dNSName) {
  dNSName_ = dNSName;
  setParameter(std::string("DNSName"), dNSName);
}

std::string ListLoadBalancersRequest::getAddressType() const {
  return addressType_;
}

void ListLoadBalancersRequest::setAddressType(const std::string &addressType) {
  addressType_ = addressType;
  setParameter(std::string("AddressType"), addressType);
}

std::vector<ListLoadBalancersRequest::Tag> ListLoadBalancersRequest::getTag() const {
  return tag_;
}

void ListLoadBalancersRequest::setTag(const std::vector<ListLoadBalancersRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
  }
}

std::vector<std::string> ListLoadBalancersRequest::getVpcIds() const {
  return vpcIds_;
}

void ListLoadBalancersRequest::setVpcIds(const std::vector<std::string> &vpcIds) {
  vpcIds_ = vpcIds;
}

std::string ListLoadBalancersRequest::getAddress() const {
  return address_;
}

void ListLoadBalancersRequest::setAddress(const std::string &address) {
  address_ = address;
  setParameter(std::string("Address"), address);
}

std::string ListLoadBalancersRequest::getLoadBalancerBusinessStatus() const {
  return loadBalancerBusinessStatus_;
}

void ListLoadBalancersRequest::setLoadBalancerBusinessStatus(const std::string &loadBalancerBusinessStatus) {
  loadBalancerBusinessStatus_ = loadBalancerBusinessStatus;
  setParameter(std::string("LoadBalancerBusinessStatus"), loadBalancerBusinessStatus);
}

std::string ListLoadBalancersRequest::getLoadBalancerStatus() const {
  return loadBalancerStatus_;
}

void ListLoadBalancersRequest::setLoadBalancerStatus(const std::string &loadBalancerStatus) {
  loadBalancerStatus_ = loadBalancerStatus;
  setParameter(std::string("LoadBalancerStatus"), loadBalancerStatus);
}

std::string ListLoadBalancersRequest::getLoadBalancerType() const {
  return loadBalancerType_;
}

void ListLoadBalancersRequest::setLoadBalancerType(const std::string &loadBalancerType) {
  loadBalancerType_ = loadBalancerType;
  setParameter(std::string("LoadBalancerType"), loadBalancerType);
}

std::string ListLoadBalancersRequest::getZoneId() const {
  return zoneId_;
}

void ListLoadBalancersRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

int ListLoadBalancersRequest::getMaxResults() const {
  return maxResults_;
}

void ListLoadBalancersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListLoadBalancersRequest::getIpv6AddressType() const {
  return ipv6AddressType_;
}

void ListLoadBalancersRequest::setIpv6AddressType(const std::string &ipv6AddressType) {
  ipv6AddressType_ = ipv6AddressType;
  setParameter(std::string("Ipv6AddressType"), ipv6AddressType);
}


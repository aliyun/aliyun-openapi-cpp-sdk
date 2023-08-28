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

#include <alibabacloud/eflo/model/ListNetworkInterfacesRequest.h>

using AlibabaCloud::Eflo::Model::ListNetworkInterfacesRequest;

ListNetworkInterfacesRequest::ListNetworkInterfacesRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListNetworkInterfaces") {
  setMethod(HttpRequest::Method::Post);
}

ListNetworkInterfacesRequest::~ListNetworkInterfacesRequest() {}

int ListNetworkInterfacesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListNetworkInterfacesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListNetworkInterfacesRequest::getRegionId() const {
  return regionId_;
}

void ListNetworkInterfacesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListNetworkInterfacesRequest::getPageSize() const {
  return pageSize_;
}

void ListNetworkInterfacesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListNetworkInterfacesRequest::getNodeId() const {
  return nodeId_;
}

void ListNetworkInterfacesRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), nodeId);
}

std::string ListNetworkInterfacesRequest::getSubnetId() const {
  return subnetId_;
}

void ListNetworkInterfacesRequest::setSubnetId(const std::string &subnetId) {
  subnetId_ = subnetId;
  setBodyParameter(std::string("SubnetId"), subnetId);
}

std::string ListNetworkInterfacesRequest::getIp() const {
  return ip_;
}

void ListNetworkInterfacesRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setBodyParameter(std::string("Ip"), ip);
}

std::string ListNetworkInterfacesRequest::getVpdId() const {
  return vpdId_;
}

void ListNetworkInterfacesRequest::setVpdId(const std::string &vpdId) {
  vpdId_ = vpdId;
  setBodyParameter(std::string("VpdId"), vpdId);
}

bool ListNetworkInterfacesRequest::getEnablePage() const {
  return enablePage_;
}

void ListNetworkInterfacesRequest::setEnablePage(bool enablePage) {
  enablePage_ = enablePage;
  setBodyParameter(std::string("EnablePage"), enablePage ? "true" : "false");
}

std::string ListNetworkInterfacesRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void ListNetworkInterfacesRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setBodyParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}


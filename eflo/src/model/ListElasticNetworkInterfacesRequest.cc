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

#include <alibabacloud/eflo/model/ListElasticNetworkInterfacesRequest.h>

using AlibabaCloud::Eflo::Model::ListElasticNetworkInterfacesRequest;

ListElasticNetworkInterfacesRequest::ListElasticNetworkInterfacesRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListElasticNetworkInterfaces") {
  setMethod(HttpRequest::Method::Post);
}

ListElasticNetworkInterfacesRequest::~ListElasticNetworkInterfacesRequest() {}

std::string ListElasticNetworkInterfacesRequest::getNetworkType() const {
  return networkType_;
}

void ListElasticNetworkInterfacesRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setBodyParameter(std::string("NetworkType"), networkType);
}

std::string ListElasticNetworkInterfacesRequest::getType() const {
  return type_;
}

void ListElasticNetworkInterfacesRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

int ListElasticNetworkInterfacesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListElasticNetworkInterfacesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListElasticNetworkInterfacesRequest::getRegionId() const {
  return regionId_;
}

void ListElasticNetworkInterfacesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListElasticNetworkInterfacesRequest::getPageSize() const {
  return pageSize_;
}

void ListElasticNetworkInterfacesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListElasticNetworkInterfacesRequest::getNodeId() const {
  return nodeId_;
}

void ListElasticNetworkInterfacesRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), nodeId);
}

std::string ListElasticNetworkInterfacesRequest::getIp() const {
  return ip_;
}

void ListElasticNetworkInterfacesRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setBodyParameter(std::string("Ip"), ip);
}

std::string ListElasticNetworkInterfacesRequest::getVSwitchId() const {
  return vSwitchId_;
}

void ListElasticNetworkInterfacesRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setBodyParameter(std::string("VSwitchId"), vSwitchId);
}

std::string ListElasticNetworkInterfacesRequest::getVpcId() const {
  return vpcId_;
}

void ListElasticNetworkInterfacesRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}

std::string ListElasticNetworkInterfacesRequest::getZoneId() const {
  return zoneId_;
}

void ListElasticNetworkInterfacesRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setBodyParameter(std::string("ZoneId"), zoneId);
}

std::string ListElasticNetworkInterfacesRequest::getElasticNetworkInterfaceId() const {
  return elasticNetworkInterfaceId_;
}

void ListElasticNetworkInterfacesRequest::setElasticNetworkInterfaceId(const std::string &elasticNetworkInterfaceId) {
  elasticNetworkInterfaceId_ = elasticNetworkInterfaceId;
  setBodyParameter(std::string("ElasticNetworkInterfaceId"), elasticNetworkInterfaceId);
}

std::string ListElasticNetworkInterfacesRequest::getStatus() const {
  return status_;
}

void ListElasticNetworkInterfacesRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}


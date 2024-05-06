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

#include <alibabacloud/eflo/model/ListLeniPrivateIpAddressesRequest.h>

using AlibabaCloud::Eflo::Model::ListLeniPrivateIpAddressesRequest;

ListLeniPrivateIpAddressesRequest::ListLeniPrivateIpAddressesRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListLeniPrivateIpAddresses") {
  setMethod(HttpRequest::Method::Post);
}

ListLeniPrivateIpAddressesRequest::~ListLeniPrivateIpAddressesRequest() {}

int ListLeniPrivateIpAddressesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListLeniPrivateIpAddressesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListLeniPrivateIpAddressesRequest::getRegionId() const {
  return regionId_;
}

void ListLeniPrivateIpAddressesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListLeniPrivateIpAddressesRequest::getPageSize() const {
  return pageSize_;
}

void ListLeniPrivateIpAddressesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListLeniPrivateIpAddressesRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void ListLeniPrivateIpAddressesRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setBodyParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string ListLeniPrivateIpAddressesRequest::getIpName() const {
  return ipName_;
}

void ListLeniPrivateIpAddressesRequest::setIpName(const std::string &ipName) {
  ipName_ = ipName;
  setBodyParameter(std::string("IpName"), ipName);
}

std::string ListLeniPrivateIpAddressesRequest::getElasticNetworkInterfaceId() const {
  return elasticNetworkInterfaceId_;
}

void ListLeniPrivateIpAddressesRequest::setElasticNetworkInterfaceId(const std::string &elasticNetworkInterfaceId) {
  elasticNetworkInterfaceId_ = elasticNetworkInterfaceId;
  setBodyParameter(std::string("ElasticNetworkInterfaceId"), elasticNetworkInterfaceId);
}

std::string ListLeniPrivateIpAddressesRequest::getStatus() const {
  return status_;
}

void ListLeniPrivateIpAddressesRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}


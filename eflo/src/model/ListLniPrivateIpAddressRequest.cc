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

#include <alibabacloud/eflo/model/ListLniPrivateIpAddressRequest.h>

using AlibabaCloud::Eflo::Model::ListLniPrivateIpAddressRequest;

ListLniPrivateIpAddressRequest::ListLniPrivateIpAddressRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListLniPrivateIpAddress") {
  setMethod(HttpRequest::Method::Post);
}

ListLniPrivateIpAddressRequest::~ListLniPrivateIpAddressRequest() {}

std::string ListLniPrivateIpAddressRequest::getDescription() const {
  return description_;
}

void ListLniPrivateIpAddressRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

int ListLniPrivateIpAddressRequest::getPageNumber() const {
  return pageNumber_;
}

void ListLniPrivateIpAddressRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListLniPrivateIpAddressRequest::getRegionId() const {
  return regionId_;
}

void ListLniPrivateIpAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListLniPrivateIpAddressRequest::getPageSize() const {
  return pageSize_;
}

void ListLniPrivateIpAddressRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListLniPrivateIpAddressRequest::getIp() const {
  return ip_;
}

void ListLniPrivateIpAddressRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setBodyParameter(std::string("Ip"), ip);
}

bool ListLniPrivateIpAddressRequest::getEnablePage() const {
  return enablePage_;
}

void ListLniPrivateIpAddressRequest::setEnablePage(bool enablePage) {
  enablePage_ = enablePage;
  setBodyParameter(std::string("EnablePage"), enablePage ? "true" : "false");
}

std::string ListLniPrivateIpAddressRequest::getIpName() const {
  return ipName_;
}

void ListLniPrivateIpAddressRequest::setIpName(const std::string &ipName) {
  ipName_ = ipName;
  setBodyParameter(std::string("IpName"), ipName);
}

std::string ListLniPrivateIpAddressRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void ListLniPrivateIpAddressRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setBodyParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}


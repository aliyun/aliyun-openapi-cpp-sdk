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

#include <alibabacloud/cbn/model/DescribeRouteServicesInCenRequest.h>

using AlibabaCloud::Cbn::Model::DescribeRouteServicesInCenRequest;

DescribeRouteServicesInCenRequest::DescribeRouteServicesInCenRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DescribeRouteServicesInCen") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRouteServicesInCenRequest::~DescribeRouteServicesInCenRequest() {}

long DescribeRouteServicesInCenRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRouteServicesInCenRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRouteServicesInCenRequest::getCenId() const {
  return cenId_;
}

void DescribeRouteServicesInCenRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string DescribeRouteServicesInCenRequest::getAccessRegionId() const {
  return accessRegionId_;
}

void DescribeRouteServicesInCenRequest::setAccessRegionId(const std::string &accessRegionId) {
  accessRegionId_ = accessRegionId;
  setParameter(std::string("AccessRegionId"), accessRegionId);
}

int DescribeRouteServicesInCenRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRouteServicesInCenRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeRouteServicesInCenRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRouteServicesInCenRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRouteServicesInCenRequest::getHost() const {
  return host_;
}

void DescribeRouteServicesInCenRequest::setHost(const std::string &host) {
  host_ = host;
  setParameter(std::string("Host"), host);
}

std::string DescribeRouteServicesInCenRequest::getHostRegionId() const {
  return hostRegionId_;
}

void DescribeRouteServicesInCenRequest::setHostRegionId(const std::string &hostRegionId) {
  hostRegionId_ = hostRegionId;
  setParameter(std::string("HostRegionId"), hostRegionId);
}

std::string DescribeRouteServicesInCenRequest::getHostVpcId() const {
  return hostVpcId_;
}

void DescribeRouteServicesInCenRequest::setHostVpcId(const std::string &hostVpcId) {
  hostVpcId_ = hostVpcId;
  setParameter(std::string("HostVpcId"), hostVpcId);
}

std::string DescribeRouteServicesInCenRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRouteServicesInCenRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRouteServicesInCenRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeRouteServicesInCenRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeRouteServicesInCenRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRouteServicesInCenRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRouteServicesInCenRequest::getVersion() const {
  return version_;
}

void DescribeRouteServicesInCenRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}


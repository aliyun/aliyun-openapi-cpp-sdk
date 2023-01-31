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

#include <alibabacloud/vpc/model/ListVpnCertificateAssociationsRequest.h>

using AlibabaCloud::Vpc::Model::ListVpnCertificateAssociationsRequest;

ListVpnCertificateAssociationsRequest::ListVpnCertificateAssociationsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListVpnCertificateAssociations") {
  setMethod(HttpRequest::Method::Post);
}

ListVpnCertificateAssociationsRequest::~ListVpnCertificateAssociationsRequest() {}

long ListVpnCertificateAssociationsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListVpnCertificateAssociationsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<std::string> ListVpnCertificateAssociationsRequest::getCertificateId() const {
  return certificateId_;
}

void ListVpnCertificateAssociationsRequest::setCertificateId(const std::vector<std::string> &certificateId) {
  certificateId_ = certificateId;
}

std::vector<std::string> ListVpnCertificateAssociationsRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void ListVpnCertificateAssociationsRequest::setVpnGatewayId(const std::vector<std::string> &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
}

std::string ListVpnCertificateAssociationsRequest::getCallerBid() const {
  return callerBid_;
}

void ListVpnCertificateAssociationsRequest::setCallerBid(const std::string &callerBid) {
  callerBid_ = callerBid;
  setParameter(std::string("callerBid"), callerBid);
}

std::string ListVpnCertificateAssociationsRequest::getCertificateType() const {
  return certificateType_;
}

void ListVpnCertificateAssociationsRequest::setCertificateType(const std::string &certificateType) {
  certificateType_ = certificateType;
  setParameter(std::string("CertificateType"), certificateType);
}

std::string ListVpnCertificateAssociationsRequest::getRegionId() const {
  return regionId_;
}

void ListVpnCertificateAssociationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListVpnCertificateAssociationsRequest::getNextToken() const {
  return nextToken_;
}

void ListVpnCertificateAssociationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListVpnCertificateAssociationsRequest::getMaxResults() const {
  return maxResults_;
}

void ListVpnCertificateAssociationsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}


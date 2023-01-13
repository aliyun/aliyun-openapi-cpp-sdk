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

#include <alibabacloud/cbn/model/DescribeTransitRouteTableAggregationDetailRequest.h>

using AlibabaCloud::Cbn::Model::DescribeTransitRouteTableAggregationDetailRequest;

DescribeTransitRouteTableAggregationDetailRequest::DescribeTransitRouteTableAggregationDetailRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DescribeTransitRouteTableAggregationDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTransitRouteTableAggregationDetailRequest::~DescribeTransitRouteTableAggregationDetailRequest() {}

long DescribeTransitRouteTableAggregationDetailRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeTransitRouteTableAggregationDetailRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeTransitRouteTableAggregationDetailRequest::getClientToken() const {
  return clientToken_;
}

void DescribeTransitRouteTableAggregationDetailRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeTransitRouteTableAggregationDetailRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeTransitRouteTableAggregationDetailRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeTransitRouteTableAggregationDetailRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeTransitRouteTableAggregationDetailRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeTransitRouteTableAggregationDetailRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTransitRouteTableAggregationDetailRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeTransitRouteTableAggregationDetailRequest::getVersion() const {
  return version_;
}

void DescribeTransitRouteTableAggregationDetailRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DescribeTransitRouteTableAggregationDetailRequest::getTransitRouteTableId() const {
  return transitRouteTableId_;
}

void DescribeTransitRouteTableAggregationDetailRequest::setTransitRouteTableId(const std::string &transitRouteTableId) {
  transitRouteTableId_ = transitRouteTableId;
  setParameter(std::string("TransitRouteTableId"), transitRouteTableId);
}

std::string DescribeTransitRouteTableAggregationDetailRequest::getTransitRouteTableAggregationCidr() const {
  return transitRouteTableAggregationCidr_;
}

void DescribeTransitRouteTableAggregationDetailRequest::setTransitRouteTableAggregationCidr(const std::string &transitRouteTableAggregationCidr) {
  transitRouteTableAggregationCidr_ = transitRouteTableAggregationCidr;
  setParameter(std::string("TransitRouteTableAggregationCidr"), transitRouteTableAggregationCidr);
}


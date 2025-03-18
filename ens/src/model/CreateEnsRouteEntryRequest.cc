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

#include <alibabacloud/ens/model/CreateEnsRouteEntryRequest.h>

using AlibabaCloud::Ens::Model::CreateEnsRouteEntryRequest;

CreateEnsRouteEntryRequest::CreateEnsRouteEntryRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateEnsRouteEntry") {
  setMethod(HttpRequest::Method::Post);
}

CreateEnsRouteEntryRequest::~CreateEnsRouteEntryRequest() {}

std::string CreateEnsRouteEntryRequest::getRouteEntryName() const {
  return routeEntryName_;
}

void CreateEnsRouteEntryRequest::setRouteEntryName(const std::string &routeEntryName) {
  routeEntryName_ = routeEntryName;
  setParameter(std::string("RouteEntryName"), routeEntryName);
}

std::string CreateEnsRouteEntryRequest::getNextHopId() const {
  return nextHopId_;
}

void CreateEnsRouteEntryRequest::setNextHopId(const std::string &nextHopId) {
  nextHopId_ = nextHopId;
  setParameter(std::string("NextHopId"), nextHopId);
}

std::string CreateEnsRouteEntryRequest::getNextHopType() const {
  return nextHopType_;
}

void CreateEnsRouteEntryRequest::setNextHopType(const std::string &nextHopType) {
  nextHopType_ = nextHopType;
  setParameter(std::string("NextHopType"), nextHopType);
}

std::string CreateEnsRouteEntryRequest::getRouteTableId() const {
  return routeTableId_;
}

void CreateEnsRouteEntryRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

std::string CreateEnsRouteEntryRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void CreateEnsRouteEntryRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

std::string CreateEnsRouteEntryRequest::getDescription() const {
  return description_;
}

void CreateEnsRouteEntryRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateEnsRouteEntryRequest::getSourceCidrBlock() const {
  return sourceCidrBlock_;
}

void CreateEnsRouteEntryRequest::setSourceCidrBlock(const std::string &sourceCidrBlock) {
  sourceCidrBlock_ = sourceCidrBlock;
  setParameter(std::string("SourceCidrBlock"), sourceCidrBlock);
}


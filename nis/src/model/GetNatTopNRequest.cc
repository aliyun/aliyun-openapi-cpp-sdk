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

#include <alibabacloud/nis/model/GetNatTopNRequest.h>

using AlibabaCloud::Nis::Model::GetNatTopNRequest;

GetNatTopNRequest::GetNatTopNRequest()
    : RpcServiceRequest("nis", "2021-12-16", "GetNatTopN") {
  setMethod(HttpRequest::Method::Post);
}

GetNatTopNRequest::~GetNatTopNRequest() {}

std::string GetNatTopNRequest::getIp() const {
  return ip_;
}

void GetNatTopNRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

long GetNatTopNRequest::getEndTime() const {
  return endTime_;
}

void GetNatTopNRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string GetNatTopNRequest::getOrderBy() const {
  return orderBy_;
}

void GetNatTopNRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

long GetNatTopNRequest::getBeginTime() const {
  return beginTime_;
}

void GetNatTopNRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

int GetNatTopNRequest::getTopN() const {
  return topN_;
}

void GetNatTopNRequest::setTopN(int topN) {
  topN_ = topN;
  setParameter(std::string("TopN"), std::to_string(topN));
}

std::string GetNatTopNRequest::getRegionId() const {
  return regionId_;
}

void GetNatTopNRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetNatTopNRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void GetNatTopNRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}


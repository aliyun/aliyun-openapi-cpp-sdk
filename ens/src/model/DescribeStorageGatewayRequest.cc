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

#include <alibabacloud/ens/model/DescribeStorageGatewayRequest.h>

using AlibabaCloud::Ens::Model::DescribeStorageGatewayRequest;

DescribeStorageGatewayRequest::DescribeStorageGatewayRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeStorageGateway") {
  setMethod(HttpRequest::Method::Post);
}

DescribeStorageGatewayRequest::~DescribeStorageGatewayRequest() {}

std::string DescribeStorageGatewayRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeStorageGatewayRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeStorageGatewayRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeStorageGatewayRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeStorageGatewayRequest::getPageSize() const {
  return pageSize_;
}

void DescribeStorageGatewayRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeStorageGatewayRequest::getGatewayId() const {
  return gatewayId_;
}

void DescribeStorageGatewayRequest::setGatewayId(const std::string &gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), gatewayId);
}

std::string DescribeStorageGatewayRequest::getGatewayType() const {
  return gatewayType_;
}

void DescribeStorageGatewayRequest::setGatewayType(const std::string &gatewayType) {
  gatewayType_ = gatewayType;
  setParameter(std::string("GatewayType"), gatewayType);
}

std::string DescribeStorageGatewayRequest::getVpcId() const {
  return vpcId_;
}

void DescribeStorageGatewayRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}


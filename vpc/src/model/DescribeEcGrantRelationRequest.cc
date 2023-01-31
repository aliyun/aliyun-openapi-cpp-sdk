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

#include <alibabacloud/vpc/model/DescribeEcGrantRelationRequest.h>

using AlibabaCloud::Vpc::Model::DescribeEcGrantRelationRequest;

DescribeEcGrantRelationRequest::DescribeEcGrantRelationRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeEcGrantRelation") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEcGrantRelationRequest::~DescribeEcGrantRelationRequest() {}

std::string DescribeEcGrantRelationRequest::getVbrRegionNo() const {
  return vbrRegionNo_;
}

void DescribeEcGrantRelationRequest::setVbrRegionNo(const std::string &vbrRegionNo) {
  vbrRegionNo_ = vbrRegionNo;
  setParameter(std::string("VbrRegionNo"), vbrRegionNo);
}

long DescribeEcGrantRelationRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeEcGrantRelationRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeEcGrantRelationRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeEcGrantRelationRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long DescribeEcGrantRelationRequest::getPageSize() const {
  return pageSize_;
}

void DescribeEcGrantRelationRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeEcGrantRelationRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeEcGrantRelationRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}


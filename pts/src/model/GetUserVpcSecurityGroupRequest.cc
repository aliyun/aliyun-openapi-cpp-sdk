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

#include <alibabacloud/pts/model/GetUserVpcSecurityGroupRequest.h>

using AlibabaCloud::PTS::Model::GetUserVpcSecurityGroupRequest;

GetUserVpcSecurityGroupRequest::GetUserVpcSecurityGroupRequest()
    : RpcServiceRequest("pts", "2020-10-20", "GetUserVpcSecurityGroup") {
  setMethod(HttpRequest::Method::Post);
}

GetUserVpcSecurityGroupRequest::~GetUserVpcSecurityGroupRequest() {}

std::string GetUserVpcSecurityGroupRequest::getRegionId() const {
  return regionId_;
}

void GetUserVpcSecurityGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetUserVpcSecurityGroupRequest::getVpcId() const {
  return vpcId_;
}

void GetUserVpcSecurityGroupRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

int GetUserVpcSecurityGroupRequest::getPageSize() const {
  return pageSize_;
}

void GetUserVpcSecurityGroupRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int GetUserVpcSecurityGroupRequest::getPageNumber() const {
  return pageNumber_;
}

void GetUserVpcSecurityGroupRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}


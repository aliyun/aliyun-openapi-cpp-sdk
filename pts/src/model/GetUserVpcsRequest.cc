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

#include <alibabacloud/pts/model/GetUserVpcsRequest.h>

using AlibabaCloud::PTS::Model::GetUserVpcsRequest;

GetUserVpcsRequest::GetUserVpcsRequest()
    : RpcServiceRequest("pts", "2020-10-20", "GetUserVpcs") {
  setMethod(HttpRequest::Method::Post);
}

GetUserVpcsRequest::~GetUserVpcsRequest() {}

std::string GetUserVpcsRequest::getRegionId() const {
  return regionId_;
}

void GetUserVpcsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetUserVpcsRequest::getVpcId() const {
  return vpcId_;
}

void GetUserVpcsRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

int GetUserVpcsRequest::getPageSize() const {
  return pageSize_;
}

void GetUserVpcsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int GetUserVpcsRequest::getPageNumber() const {
  return pageNumber_;
}

void GetUserVpcsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}


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

#include <alibabacloud/pts/model/GetUserVpcVSwitchRequest.h>

using AlibabaCloud::PTS::Model::GetUserVpcVSwitchRequest;

GetUserVpcVSwitchRequest::GetUserVpcVSwitchRequest()
    : RpcServiceRequest("pts", "2020-10-20", "GetUserVpcVSwitch") {
  setMethod(HttpRequest::Method::Post);
}

GetUserVpcVSwitchRequest::~GetUserVpcVSwitchRequest() {}

std::string GetUserVpcVSwitchRequest::getRegionId() const {
  return regionId_;
}

void GetUserVpcVSwitchRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetUserVpcVSwitchRequest::getVpcId() const {
  return vpcId_;
}

void GetUserVpcVSwitchRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

int GetUserVpcVSwitchRequest::getPageSize() const {
  return pageSize_;
}

void GetUserVpcVSwitchRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int GetUserVpcVSwitchRequest::getPageNumber() const {
  return pageNumber_;
}

void GetUserVpcVSwitchRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}


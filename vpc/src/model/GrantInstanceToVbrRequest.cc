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

#include <alibabacloud/vpc/model/GrantInstanceToVbrRequest.h>

using AlibabaCloud::Vpc::Model::GrantInstanceToVbrRequest;

GrantInstanceToVbrRequest::GrantInstanceToVbrRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "GrantInstanceToVbr") {
  setMethod(HttpRequest::Method::Post);
}

GrantInstanceToVbrRequest::~GrantInstanceToVbrRequest() {}

long GrantInstanceToVbrRequest::getVbrOwnerUid() const {
  return vbrOwnerUid_;
}

void GrantInstanceToVbrRequest::setVbrOwnerUid(long vbrOwnerUid) {
  vbrOwnerUid_ = vbrOwnerUid;
  setParameter(std::string("VbrOwnerUid"), std::to_string(vbrOwnerUid));
}

std::string GrantInstanceToVbrRequest::getVbrRegionNo() const {
  return vbrRegionNo_;
}

void GrantInstanceToVbrRequest::setVbrRegionNo(const std::string &vbrRegionNo) {
  vbrRegionNo_ = vbrRegionNo;
  setParameter(std::string("VbrRegionNo"), vbrRegionNo);
}

std::vector<GrantInstanceToVbrRequest::std::string> GrantInstanceToVbrRequest::getVbrInstanceIds() const {
  return vbrInstanceIds_;
}

void GrantInstanceToVbrRequest::setVbrInstanceIds(const std::vector<GrantInstanceToVbrRequest::std::string> &vbrInstanceIds) {
  vbrInstanceIds_ = vbrInstanceIds;
  for(int dep1 = 0; dep1 != vbrInstanceIds.size(); dep1++) {
    setParameter(std::string("VbrInstanceIds") + "." + std::to_string(dep1 + 1), vbrInstanceIds[dep1]);
  }
}

std::string GrantInstanceToVbrRequest::getGrantType() const {
  return grantType_;
}

void GrantInstanceToVbrRequest::setGrantType(const std::string &grantType) {
  grantType_ = grantType;
  setParameter(std::string("GrantType"), grantType);
}

std::string GrantInstanceToVbrRequest::getInstanceId() const {
  return instanceId_;
}

void GrantInstanceToVbrRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GrantInstanceToVbrRequest::getRegionId() const {
  return regionId_;
}

void GrantInstanceToVbrRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}


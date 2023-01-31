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

#include <alibabacloud/vpc/model/RevokeInstanceFromVbrRequest.h>

using AlibabaCloud::Vpc::Model::RevokeInstanceFromVbrRequest;

RevokeInstanceFromVbrRequest::RevokeInstanceFromVbrRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "RevokeInstanceFromVbr") {
  setMethod(HttpRequest::Method::Post);
}

RevokeInstanceFromVbrRequest::~RevokeInstanceFromVbrRequest() {}

std::string RevokeInstanceFromVbrRequest::getVbrOwnerUid() const {
  return vbrOwnerUid_;
}

void RevokeInstanceFromVbrRequest::setVbrOwnerUid(const std::string &vbrOwnerUid) {
  vbrOwnerUid_ = vbrOwnerUid;
  setParameter(std::string("VbrOwnerUid"), vbrOwnerUid);
}

std::string RevokeInstanceFromVbrRequest::getVbrRegionNo() const {
  return vbrRegionNo_;
}

void RevokeInstanceFromVbrRequest::setVbrRegionNo(const std::string &vbrRegionNo) {
  vbrRegionNo_ = vbrRegionNo;
  setParameter(std::string("VbrRegionNo"), vbrRegionNo);
}

std::vector<RevokeInstanceFromVbrRequest::std::string> RevokeInstanceFromVbrRequest::getVbrInstanceIds() const {
  return vbrInstanceIds_;
}

void RevokeInstanceFromVbrRequest::setVbrInstanceIds(const std::vector<RevokeInstanceFromVbrRequest::std::string> &vbrInstanceIds) {
  vbrInstanceIds_ = vbrInstanceIds;
  for(int dep1 = 0; dep1 != vbrInstanceIds.size(); dep1++) {
    setParameter(std::string("VbrInstanceIds") + "." + std::to_string(dep1 + 1), vbrInstanceIds[dep1]);
  }
}

std::string RevokeInstanceFromVbrRequest::getGrantType() const {
  return grantType_;
}

void RevokeInstanceFromVbrRequest::setGrantType(const std::string &grantType) {
  grantType_ = grantType;
  setParameter(std::string("GrantType"), grantType);
}

std::string RevokeInstanceFromVbrRequest::getInstanceId() const {
  return instanceId_;
}

void RevokeInstanceFromVbrRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string RevokeInstanceFromVbrRequest::getRegionId() const {
  return regionId_;
}

void RevokeInstanceFromVbrRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}


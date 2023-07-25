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

#include <alibabacloud/rds/model/DetachGadInstanceMemberRequest.h>

using AlibabaCloud::Rds::Model::DetachGadInstanceMemberRequest;

DetachGadInstanceMemberRequest::DetachGadInstanceMemberRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DetachGadInstanceMember") {
  setMethod(HttpRequest::Method::Post);
}

DetachGadInstanceMemberRequest::~DetachGadInstanceMemberRequest() {}

std::string DetachGadInstanceMemberRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DetachGadInstanceMemberRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DetachGadInstanceMemberRequest::getMemberInstanceName() const {
  return memberInstanceName_;
}

void DetachGadInstanceMemberRequest::setMemberInstanceName(const std::string &memberInstanceName) {
  memberInstanceName_ = memberInstanceName;
  setParameter(std::string("MemberInstanceName"), memberInstanceName);
}

std::string DetachGadInstanceMemberRequest::getRegionId() const {
  return regionId_;
}

void DetachGadInstanceMemberRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DetachGadInstanceMemberRequest::getGadInstanceName() const {
  return gadInstanceName_;
}

void DetachGadInstanceMemberRequest::setGadInstanceName(const std::string &gadInstanceName) {
  gadInstanceName_ = gadInstanceName;
  setParameter(std::string("GadInstanceName"), gadInstanceName);
}


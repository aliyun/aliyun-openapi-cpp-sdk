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

#include <alibabacloud/ga/model/GetAclRequest.h>

using AlibabaCloud::Ga::Model::GetAclRequest;

GetAclRequest::GetAclRequest()
    : RpcServiceRequest("ga", "2019-11-20", "GetAcl") {
  setMethod(HttpRequest::Method::Post);
}

GetAclRequest::~GetAclRequest() {}

std::string GetAclRequest::getAclId() const {
  return aclId_;
}

void GetAclRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::string GetAclRequest::getRegionId() const {
  return regionId_;
}

void GetAclRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}


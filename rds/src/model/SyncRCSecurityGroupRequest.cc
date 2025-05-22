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

#include <alibabacloud/rds/model/SyncRCSecurityGroupRequest.h>

using AlibabaCloud::Rds::Model::SyncRCSecurityGroupRequest;

SyncRCSecurityGroupRequest::SyncRCSecurityGroupRequest()
    : RpcServiceRequest("rds", "2014-08-15", "SyncRCSecurityGroup") {
  setMethod(HttpRequest::Method::Post);
}

SyncRCSecurityGroupRequest::~SyncRCSecurityGroupRequest() {}

std::string SyncRCSecurityGroupRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void SyncRCSecurityGroupRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string SyncRCSecurityGroupRequest::getInstanceId() const {
  return instanceId_;
}

void SyncRCSecurityGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string SyncRCSecurityGroupRequest::getRegionId() const {
  return regionId_;
}

void SyncRCSecurityGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}


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

#include <alibabacloud/rds/model/DeleteRCInstanceRequest.h>

using AlibabaCloud::Rds::Model::DeleteRCInstanceRequest;

DeleteRCInstanceRequest::DeleteRCInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteRCInstance") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRCInstanceRequest::~DeleteRCInstanceRequest() {}

std::string DeleteRCInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteRCInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteRCInstanceRequest::getRegionId() const {
  return regionId_;
}

void DeleteRCInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteRCInstanceRequest::getForce() const {
  return force_;
}

void DeleteRCInstanceRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}


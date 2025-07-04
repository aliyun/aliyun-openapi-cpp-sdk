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

#include <alibabacloud/rds/model/RedeployRCInstanceRequest.h>

using AlibabaCloud::Rds::Model::RedeployRCInstanceRequest;

RedeployRCInstanceRequest::RedeployRCInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "RedeployRCInstance") {
  setMethod(HttpRequest::Method::Post);
}

RedeployRCInstanceRequest::~RedeployRCInstanceRequest() {}

bool RedeployRCInstanceRequest::getForceStop() const {
  return forceStop_;
}

void RedeployRCInstanceRequest::setForceStop(bool forceStop) {
  forceStop_ = forceStop;
  setParameter(std::string("ForceStop"), forceStop ? "true" : "false");
}

std::string RedeployRCInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void RedeployRCInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string RedeployRCInstanceRequest::getRegionId() const {
  return regionId_;
}

void RedeployRCInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}


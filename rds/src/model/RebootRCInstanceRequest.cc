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

#include <alibabacloud/rds/model/RebootRCInstanceRequest.h>

using AlibabaCloud::Rds::Model::RebootRCInstanceRequest;

RebootRCInstanceRequest::RebootRCInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "RebootRCInstance") {
  setMethod(HttpRequest::Method::Post);
}

RebootRCInstanceRequest::~RebootRCInstanceRequest() {}

bool RebootRCInstanceRequest::getDryRun() const {
  return dryRun_;
}

void RebootRCInstanceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

bool RebootRCInstanceRequest::getForceStop() const {
  return forceStop_;
}

void RebootRCInstanceRequest::setForceStop(bool forceStop) {
  forceStop_ = forceStop;
  setParameter(std::string("ForceStop"), forceStop ? "true" : "false");
}

std::string RebootRCInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void RebootRCInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string RebootRCInstanceRequest::getRegionId() const {
  return regionId_;
}

void RebootRCInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}


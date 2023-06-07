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

#include <alibabacloud/swas-open/model/StopInstancesRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::StopInstancesRequest;

StopInstancesRequest::StopInstancesRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "StopInstances") {
  setMethod(HttpRequest::Method::Post);
}

StopInstancesRequest::~StopInstancesRequest() {}

std::string StopInstancesRequest::getClientToken() const {
  return clientToken_;
}

void StopInstancesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool StopInstancesRequest::getForceStop() const {
  return forceStop_;
}

void StopInstancesRequest::setForceStop(bool forceStop) {
  forceStop_ = forceStop;
  setParameter(std::string("ForceStop"), forceStop ? "true" : "false");
}

std::string StopInstancesRequest::getRegionId() const {
  return regionId_;
}

void StopInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string StopInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void StopInstancesRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}


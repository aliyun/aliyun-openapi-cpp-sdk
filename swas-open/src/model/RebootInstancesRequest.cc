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

#include <alibabacloud/swas-open/model/RebootInstancesRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::RebootInstancesRequest;

RebootInstancesRequest::RebootInstancesRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "RebootInstances") {
  setMethod(HttpRequest::Method::Post);
}

RebootInstancesRequest::~RebootInstancesRequest() {}

std::string RebootInstancesRequest::getClientToken() const {
  return clientToken_;
}

void RebootInstancesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool RebootInstancesRequest::getForceReboot() const {
  return forceReboot_;
}

void RebootInstancesRequest::setForceReboot(bool forceReboot) {
  forceReboot_ = forceReboot;
  setParameter(std::string("ForceReboot"), forceReboot ? "true" : "false");
}

std::string RebootInstancesRequest::getRegionId() const {
  return regionId_;
}

void RebootInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RebootInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void RebootInstancesRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}


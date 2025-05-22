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

#include <alibabacloud/rds/model/ModifyRCInstanceDescriptionRequest.h>

using AlibabaCloud::Rds::Model::ModifyRCInstanceDescriptionRequest;

ModifyRCInstanceDescriptionRequest::ModifyRCInstanceDescriptionRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyRCInstanceDescription") {
  setMethod(HttpRequest::Method::Post);
}

ModifyRCInstanceDescriptionRequest::~ModifyRCInstanceDescriptionRequest() {}

std::string ModifyRCInstanceDescriptionRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyRCInstanceDescriptionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyRCInstanceDescriptionRequest::getRegionId() const {
  return regionId_;
}

void ModifyRCInstanceDescriptionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyRCInstanceDescriptionRequest::getInstanceDescription() const {
  return instanceDescription_;
}

void ModifyRCInstanceDescriptionRequest::setInstanceDescription(const std::string &instanceDescription) {
  instanceDescription_ = instanceDescription;
  setParameter(std::string("InstanceDescription"), instanceDescription);
}


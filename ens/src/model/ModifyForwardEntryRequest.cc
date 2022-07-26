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

#include <alibabacloud/ens/model/ModifyForwardEntryRequest.h>

using AlibabaCloud::Ens::Model::ModifyForwardEntryRequest;

ModifyForwardEntryRequest::ModifyForwardEntryRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ModifyForwardEntry") {
  setMethod(HttpRequest::Method::Post);
}

ModifyForwardEntryRequest::~ModifyForwardEntryRequest() {}

std::string ModifyForwardEntryRequest::getForwardEntryId() const {
  return forwardEntryId_;
}

void ModifyForwardEntryRequest::setForwardEntryId(const std::string &forwardEntryId) {
  forwardEntryId_ = forwardEntryId;
  setParameter(std::string("ForwardEntryId"), forwardEntryId);
}

std::string ModifyForwardEntryRequest::getForwardEntryName() const {
  return forwardEntryName_;
}

void ModifyForwardEntryRequest::setForwardEntryName(const std::string &forwardEntryName) {
  forwardEntryName_ = forwardEntryName;
  setParameter(std::string("ForwardEntryName"), forwardEntryName);
}

int ModifyForwardEntryRequest::getHealthCheckPort() const {
  return healthCheckPort_;
}

void ModifyForwardEntryRequest::setHealthCheckPort(int healthCheckPort) {
  healthCheckPort_ = healthCheckPort;
  setParameter(std::string("HealthCheckPort"), std::to_string(healthCheckPort));
}


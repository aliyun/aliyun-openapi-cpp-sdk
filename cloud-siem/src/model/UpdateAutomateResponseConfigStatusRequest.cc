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

#include <alibabacloud/cloud-siem/model/UpdateAutomateResponseConfigStatusRequest.h>

using AlibabaCloud::Cloud_siem::Model::UpdateAutomateResponseConfigStatusRequest;

UpdateAutomateResponseConfigStatusRequest::UpdateAutomateResponseConfigStatusRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "UpdateAutomateResponseConfigStatus") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAutomateResponseConfigStatusRequest::~UpdateAutomateResponseConfigStatusRequest() {}

std::string UpdateAutomateResponseConfigStatusRequest::getRegionId() const {
  return regionId_;
}

void UpdateAutomateResponseConfigStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string UpdateAutomateResponseConfigStatusRequest::getIds() const {
  return ids_;
}

void UpdateAutomateResponseConfigStatusRequest::setIds(const std::string &ids) {
  ids_ = ids;
  setBodyParameter(std::string("Ids"), ids);
}

bool UpdateAutomateResponseConfigStatusRequest::getInUse() const {
  return inUse_;
}

void UpdateAutomateResponseConfigStatusRequest::setInUse(bool inUse) {
  inUse_ = inUse;
  setBodyParameter(std::string("InUse"), inUse ? "true" : "false");
}


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

#include <alibabacloud/dataworks-public/model/StartDIJobRequest.h>

using AlibabaCloud::Dataworks_public::Model::StartDIJobRequest;

StartDIJobRequest::StartDIJobRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "StartDIJob") {
  setMethod(HttpRequest::Method::Post);
}

StartDIJobRequest::~StartDIJobRequest() {}

bool StartDIJobRequest::getForceToRerun() const {
  return forceToRerun_;
}

void StartDIJobRequest::setForceToRerun(bool forceToRerun) {
  forceToRerun_ = forceToRerun;
  setBodyParameter(std::string("ForceToRerun"), forceToRerun ? "true" : "false");
}

long StartDIJobRequest::getDIJobId() const {
  return dIJobId_;
}

void StartDIJobRequest::setDIJobId(long dIJobId) {
  dIJobId_ = dIJobId;
  setBodyParameter(std::string("DIJobId"), std::to_string(dIJobId));
}

std::string StartDIJobRequest::getRealtimeStartSettings() const {
  return realtimeStartSettings_;
}

void StartDIJobRequest::setRealtimeStartSettings(const std::string &realtimeStartSettings) {
  realtimeStartSettings_ = realtimeStartSettings;
  setBodyParameter(std::string("RealtimeStartSettings"), realtimeStartSettings);
}


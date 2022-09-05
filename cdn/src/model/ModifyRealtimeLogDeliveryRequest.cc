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

#include <alibabacloud/cdn/model/ModifyRealtimeLogDeliveryRequest.h>

using AlibabaCloud::Cdn::Model::ModifyRealtimeLogDeliveryRequest;

ModifyRealtimeLogDeliveryRequest::ModifyRealtimeLogDeliveryRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "ModifyRealtimeLogDelivery") {
  setMethod(HttpRequest::Method::Get);
}

ModifyRealtimeLogDeliveryRequest::~ModifyRealtimeLogDeliveryRequest() {}

std::string ModifyRealtimeLogDeliveryRequest::getProject() const {
  return project_;
}

void ModifyRealtimeLogDeliveryRequest::setProject(const std::string &project) {
  project_ = project;
  setParameter(std::string("Project"), project);
}

long ModifyRealtimeLogDeliveryRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyRealtimeLogDeliveryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyRealtimeLogDeliveryRequest::getDomain() const {
  return domain_;
}

void ModifyRealtimeLogDeliveryRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string ModifyRealtimeLogDeliveryRequest::getRegion() const {
  return region_;
}

void ModifyRealtimeLogDeliveryRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string ModifyRealtimeLogDeliveryRequest::getLogstore() const {
  return logstore_;
}

void ModifyRealtimeLogDeliveryRequest::setLogstore(const std::string &logstore) {
  logstore_ = logstore;
  setParameter(std::string("Logstore"), logstore);
}


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

#include <alibabacloud/cdn/model/DeleteRealtimeLogDeliveryRequest.h>

using AlibabaCloud::Cdn::Model::DeleteRealtimeLogDeliveryRequest;

DeleteRealtimeLogDeliveryRequest::DeleteRealtimeLogDeliveryRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DeleteRealtimeLogDelivery") {
  setMethod(HttpRequest::Method::Get);
}

DeleteRealtimeLogDeliveryRequest::~DeleteRealtimeLogDeliveryRequest() {}

std::string DeleteRealtimeLogDeliveryRequest::getProject() const {
  return project_;
}

void DeleteRealtimeLogDeliveryRequest::setProject(const std::string &project) {
  project_ = project;
  setParameter(std::string("Project"), project);
}

long DeleteRealtimeLogDeliveryRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteRealtimeLogDeliveryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteRealtimeLogDeliveryRequest::getDomain() const {
  return domain_;
}

void DeleteRealtimeLogDeliveryRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string DeleteRealtimeLogDeliveryRequest::getRegion() const {
  return region_;
}

void DeleteRealtimeLogDeliveryRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string DeleteRealtimeLogDeliveryRequest::getLogstore() const {
  return logstore_;
}

void DeleteRealtimeLogDeliveryRequest::setLogstore(const std::string &logstore) {
  logstore_ = logstore;
  setParameter(std::string("Logstore"), logstore);
}


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

#include <alibabacloud/live/model/CreateLiveRealTimeLogDeliveryRequest.h>

using AlibabaCloud::Live::Model::CreateLiveRealTimeLogDeliveryRequest;

CreateLiveRealTimeLogDeliveryRequest::CreateLiveRealTimeLogDeliveryRequest()
    : RpcServiceRequest("live", "2016-11-01", "CreateLiveRealTimeLogDelivery") {
  setMethod(HttpRequest::Method::Get);
}

CreateLiveRealTimeLogDeliveryRequest::~CreateLiveRealTimeLogDeliveryRequest() {}

std::string CreateLiveRealTimeLogDeliveryRequest::getProject() const {
  return project_;
}

void CreateLiveRealTimeLogDeliveryRequest::setProject(const std::string &project) {
  project_ = project;
  setParameter(std::string("Project"), project);
}

std::string CreateLiveRealTimeLogDeliveryRequest::getDomainName() const {
  return domainName_;
}

void CreateLiveRealTimeLogDeliveryRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long CreateLiveRealTimeLogDeliveryRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLiveRealTimeLogDeliveryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateLiveRealTimeLogDeliveryRequest::getRegion() const {
  return region_;
}

void CreateLiveRealTimeLogDeliveryRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string CreateLiveRealTimeLogDeliveryRequest::getLogstore() const {
  return logstore_;
}

void CreateLiveRealTimeLogDeliveryRequest::setLogstore(const std::string &logstore) {
  logstore_ = logstore;
  setParameter(std::string("Logstore"), logstore);
}


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

#include <alibabacloud/live/model/ListLiveRealtimeLogDeliveryDomainsRequest.h>

using AlibabaCloud::Live::Model::ListLiveRealtimeLogDeliveryDomainsRequest;

ListLiveRealtimeLogDeliveryDomainsRequest::ListLiveRealtimeLogDeliveryDomainsRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListLiveRealtimeLogDeliveryDomains") {
  setMethod(HttpRequest::Method::Get);
}

ListLiveRealtimeLogDeliveryDomainsRequest::~ListLiveRealtimeLogDeliveryDomainsRequest() {}

std::string ListLiveRealtimeLogDeliveryDomainsRequest::getProject() const {
  return project_;
}

void ListLiveRealtimeLogDeliveryDomainsRequest::setProject(const std::string &project) {
  project_ = project;
  setParameter(std::string("Project"), project);
}

std::string ListLiveRealtimeLogDeliveryDomainsRequest::getRegionId() const {
  return regionId_;
}

void ListLiveRealtimeLogDeliveryDomainsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long ListLiveRealtimeLogDeliveryDomainsRequest::getOwnerId() const {
  return ownerId_;
}

void ListLiveRealtimeLogDeliveryDomainsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListLiveRealtimeLogDeliveryDomainsRequest::getRegion() const {
  return region_;
}

void ListLiveRealtimeLogDeliveryDomainsRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string ListLiveRealtimeLogDeliveryDomainsRequest::getLogstore() const {
  return logstore_;
}

void ListLiveRealtimeLogDeliveryDomainsRequest::setLogstore(const std::string &logstore) {
  logstore_ = logstore;
  setParameter(std::string("Logstore"), logstore);
}


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

#include <alibabacloud/cdn/model/ListFCTriggerRequest.h>

using AlibabaCloud::Cdn::Model::ListFCTriggerRequest;

ListFCTriggerRequest::ListFCTriggerRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "ListFCTrigger") {
  setMethod(HttpRequest::Method::Get);
}

ListFCTriggerRequest::~ListFCTriggerRequest() {}

std::string ListFCTriggerRequest::getEventMetaVersion() const {
  return eventMetaVersion_;
}

void ListFCTriggerRequest::setEventMetaVersion(const std::string &eventMetaVersion) {
  eventMetaVersion_ = eventMetaVersion;
  setParameter(std::string("EventMetaVersion"), eventMetaVersion);
}

long ListFCTriggerRequest::getOwnerId() const {
  return ownerId_;
}

void ListFCTriggerRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListFCTriggerRequest::getEventMetaName() const {
  return eventMetaName_;
}

void ListFCTriggerRequest::setEventMetaName(const std::string &eventMetaName) {
  eventMetaName_ = eventMetaName;
  setParameter(std::string("EventMetaName"), eventMetaName);
}


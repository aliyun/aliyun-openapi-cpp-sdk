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

#include <alibabacloud/cloud-siem/model/PostEventDisposeAndWhiteruleListRequest.h>

using AlibabaCloud::Cloud_siem::Model::PostEventDisposeAndWhiteruleListRequest;

PostEventDisposeAndWhiteruleListRequest::PostEventDisposeAndWhiteruleListRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "PostEventDisposeAndWhiteruleList") {
  setMethod(HttpRequest::Method::Post);
}

PostEventDisposeAndWhiteruleListRequest::~PostEventDisposeAndWhiteruleListRequest() {}

std::string PostEventDisposeAndWhiteruleListRequest::getRemark() const {
  return remark_;
}

void PostEventDisposeAndWhiteruleListRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setBodyParameter(std::string("Remark"), remark);
}

std::string PostEventDisposeAndWhiteruleListRequest::getEventDispose() const {
  return eventDispose_;
}

void PostEventDisposeAndWhiteruleListRequest::setEventDispose(const std::string &eventDispose) {
  eventDispose_ = eventDispose;
  setBodyParameter(std::string("EventDispose"), eventDispose);
}

std::string PostEventDisposeAndWhiteruleListRequest::getReceiverInfo() const {
  return receiverInfo_;
}

void PostEventDisposeAndWhiteruleListRequest::setReceiverInfo(const std::string &receiverInfo) {
  receiverInfo_ = receiverInfo;
  setBodyParameter(std::string("ReceiverInfo"), receiverInfo);
}

std::string PostEventDisposeAndWhiteruleListRequest::getRegionId() const {
  return regionId_;
}

void PostEventDisposeAndWhiteruleListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string PostEventDisposeAndWhiteruleListRequest::getIncidentUuid() const {
  return incidentUuid_;
}

void PostEventDisposeAndWhiteruleListRequest::setIncidentUuid(const std::string &incidentUuid) {
  incidentUuid_ = incidentUuid;
  setBodyParameter(std::string("IncidentUuid"), incidentUuid);
}

int PostEventDisposeAndWhiteruleListRequest::getStatus() const {
  return status_;
}

void PostEventDisposeAndWhiteruleListRequest::setStatus(int status) {
  status_ = status;
  setBodyParameter(std::string("Status"), std::to_string(status));
}


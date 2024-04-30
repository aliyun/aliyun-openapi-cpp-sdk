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

#include <alibabacloud/rds/model/ModifyEventInfoRequest.h>

using AlibabaCloud::Rds::Model::ModifyEventInfoRequest;

ModifyEventInfoRequest::ModifyEventInfoRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyEventInfo") {
  setMethod(HttpRequest::Method::Post);
}

ModifyEventInfoRequest::~ModifyEventInfoRequest() {}

std::string ModifyEventInfoRequest::getEventId() const {
  return eventId_;
}

void ModifyEventInfoRequest::setEventId(const std::string &eventId) {
  eventId_ = eventId;
  setParameter(std::string("EventId"), eventId);
}

std::string ModifyEventInfoRequest::getEventAction() const {
  return eventAction_;
}

void ModifyEventInfoRequest::setEventAction(const std::string &eventAction) {
  eventAction_ = eventAction;
  setParameter(std::string("EventAction"), eventAction);
}

std::string ModifyEventInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyEventInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyEventInfoRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyEventInfoRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyEventInfoRequest::getRegionId() const {
  return regionId_;
}

void ModifyEventInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyEventInfoRequest::getActionParams() const {
  return actionParams_;
}

void ModifyEventInfoRequest::setActionParams(const std::string &actionParams) {
  actionParams_ = actionParams;
  setParameter(std::string("ActionParams"), actionParams);
}


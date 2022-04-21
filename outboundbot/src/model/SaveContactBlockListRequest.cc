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

#include <alibabacloud/outboundbot/model/SaveContactBlockListRequest.h>

using AlibabaCloud::OutboundBot::Model::SaveContactBlockListRequest;

SaveContactBlockListRequest::SaveContactBlockListRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "SaveContactBlockList") {
  setMethod(HttpRequest::Method::Post);
}

SaveContactBlockListRequest::~SaveContactBlockListRequest() {}

std::vector<std::string> SaveContactBlockListRequest::getContactBlockListList() const {
  return contactBlockListList_;
}

void SaveContactBlockListRequest::setContactBlockListList(const std::vector<std::string> &contactBlockListList) {
  contactBlockListList_ = contactBlockListList;
}

std::string SaveContactBlockListRequest::getInstanceId() const {
  return instanceId_;
}

void SaveContactBlockListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string SaveContactBlockListRequest::getContactBlockListsJson() const {
  return contactBlockListsJson_;
}

void SaveContactBlockListRequest::setContactBlockListsJson(const std::string &contactBlockListsJson) {
  contactBlockListsJson_ = contactBlockListsJson;
  setParameter(std::string("ContactBlockListsJson"), contactBlockListsJson);
}


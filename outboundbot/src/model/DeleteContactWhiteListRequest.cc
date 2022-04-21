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

#include <alibabacloud/outboundbot/model/DeleteContactWhiteListRequest.h>

using AlibabaCloud::OutboundBot::Model::DeleteContactWhiteListRequest;

DeleteContactWhiteListRequest::DeleteContactWhiteListRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "DeleteContactWhiteList") {
  setMethod(HttpRequest::Method::Post);
}

DeleteContactWhiteListRequest::~DeleteContactWhiteListRequest() {}

std::string DeleteContactWhiteListRequest::get_Operator() const {
  return _operator_;
}

void DeleteContactWhiteListRequest::set_Operator(const std::string &_operator) {
  _operator_ = _operator;
  setParameter(std::string("Operator"), _operator);
}

std::string DeleteContactWhiteListRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteContactWhiteListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteContactWhiteListRequest::getContactWhiteListId() const {
  return contactWhiteListId_;
}

void DeleteContactWhiteListRequest::setContactWhiteListId(const std::string &contactWhiteListId) {
  contactWhiteListId_ = contactWhiteListId;
  setParameter(std::string("ContactWhiteListId"), contactWhiteListId);
}


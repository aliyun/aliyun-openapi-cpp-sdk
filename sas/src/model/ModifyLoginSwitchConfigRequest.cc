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

#include <alibabacloud/sas/model/ModifyLoginSwitchConfigRequest.h>

using AlibabaCloud::Sas::Model::ModifyLoginSwitchConfigRequest;

ModifyLoginSwitchConfigRequest::ModifyLoginSwitchConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyLoginSwitchConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyLoginSwitchConfigRequest::~ModifyLoginSwitchConfigRequest() {}

std::string ModifyLoginSwitchConfigRequest::getItem() const {
  return item_;
}

void ModifyLoginSwitchConfigRequest::setItem(const std::string &item) {
  item_ = item;
  setParameter(std::string("Item"), item);
}

std::string ModifyLoginSwitchConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyLoginSwitchConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ModifyLoginSwitchConfigRequest::getStatus() const {
  return status_;
}

void ModifyLoginSwitchConfigRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}


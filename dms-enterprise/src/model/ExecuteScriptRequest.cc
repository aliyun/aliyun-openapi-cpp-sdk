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

#include <alibabacloud/dms-enterprise/model/ExecuteScriptRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ExecuteScriptRequest;

ExecuteScriptRequest::ExecuteScriptRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ExecuteScript") {
  setMethod(HttpRequest::Method::Post);
}

ExecuteScriptRequest::~ExecuteScriptRequest() {}

long ExecuteScriptRequest::getTid() const {
  return tid_;
}

void ExecuteScriptRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string ExecuteScriptRequest::getScript() const {
  return script_;
}

void ExecuteScriptRequest::setScript(const std::string &script) {
  script_ = script;
  setParameter(std::string("Script"), script);
}

int ExecuteScriptRequest::getDbId() const {
  return dbId_;
}

void ExecuteScriptRequest::setDbId(int dbId) {
  dbId_ = dbId;
  setParameter(std::string("DbId"), std::to_string(dbId));
}

bool ExecuteScriptRequest::getLogic() const {
  return logic_;
}

void ExecuteScriptRequest::setLogic(bool logic) {
  logic_ = logic;
  setParameter(std::string("Logic"), logic ? "true" : "false");
}


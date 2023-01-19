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

#include <alibabacloud/sas/model/ListPluginForUuidRequest.h>

using AlibabaCloud::Sas::Model::ListPluginForUuidRequest;

ListPluginForUuidRequest::ListPluginForUuidRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListPluginForUuid") {
  setMethod(HttpRequest::Method::Post);
}

ListPluginForUuidRequest::~ListPluginForUuidRequest() {}

std::vector<ListPluginForUuidRequest::std::string> ListPluginForUuidRequest::getTypes() const {
  return types_;
}

void ListPluginForUuidRequest::setTypes(const std::vector<ListPluginForUuidRequest::std::string> &types) {
  types_ = types;
  for(int dep1 = 0; dep1 != types.size(); dep1++) {
    setParameter(std::string("Types") + "." + std::to_string(dep1 + 1), types[dep1]);
  }
}

std::string ListPluginForUuidRequest::getUuid() const {
  return uuid_;
}

void ListPluginForUuidRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string ListPluginForUuidRequest::getSourceIp() const {
  return sourceIp_;
}

void ListPluginForUuidRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}


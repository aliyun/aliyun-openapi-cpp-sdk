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

#include <alibabacloud/sas/model/GetHoneypotNodeRequest.h>

using AlibabaCloud::Sas::Model::GetHoneypotNodeRequest;

GetHoneypotNodeRequest::GetHoneypotNodeRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetHoneypotNode") {
  setMethod(HttpRequest::Method::Post);
}

GetHoneypotNodeRequest::~GetHoneypotNodeRequest() {}

std::string GetHoneypotNodeRequest::getLang() const {
  return lang_;
}

void GetHoneypotNodeRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string GetHoneypotNodeRequest::getNodeId() const {
  return nodeId_;
}

void GetHoneypotNodeRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}


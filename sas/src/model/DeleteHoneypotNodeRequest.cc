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

#include <alibabacloud/sas/model/DeleteHoneypotNodeRequest.h>

using AlibabaCloud::Sas::Model::DeleteHoneypotNodeRequest;

DeleteHoneypotNodeRequest::DeleteHoneypotNodeRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DeleteHoneypotNode") {
  setMethod(HttpRequest::Method::Post);
}

DeleteHoneypotNodeRequest::~DeleteHoneypotNodeRequest() {}

std::string DeleteHoneypotNodeRequest::getLang() const {
  return lang_;
}

void DeleteHoneypotNodeRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DeleteHoneypotNodeRequest::getNodeId() const {
  return nodeId_;
}

void DeleteHoneypotNodeRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}


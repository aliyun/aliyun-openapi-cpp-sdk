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

#include <alibabacloud/qianzhou/model/AICreateSessionMessageRequest.h>

using AlibabaCloud::Qianzhou::Model::AICreateSessionMessageRequest;

AICreateSessionMessageRequest::AICreateSessionMessageRequest()
    : RoaServiceRequest("qianzhou", "2021-11-11") {
  setResourcePath("/popapi/AICreateSessionMessage"};
  setMethod(HttpRequest::Method::Post);
}

AICreateSessionMessageRequest::~AICreateSessionMessageRequest() {}

std::string AICreateSessionMessageRequest::getEmployee_id() const {
  return employee_id_;
}

void AICreateSessionMessageRequest::setEmployee_id(const std::string &employee_id) {
  employee_id_ = employee_id;
  setParameter(std::string("employee_id"), employee_id);
}

AICreateSessionMessageRequest::body AICreateSessionMessageRequest::getBody() const {
  return body_;
}

void AICreateSessionMessageRequest::setBody(const AICreateSessionMessageRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".context.cluster_id", body.context.cluster_id);
  setBodyParameter(std::string("body") + ".context.kind", body.context.kind);
  setBodyParameter(std::string("body") + ".context.namespace", body.context._namespace);
  setBodyParameter(std::string("body") + ".context.name", body.context.name);
  setBodyParameter(std::string("body") + ".context.error", body.context.error);
  setBodyParameter(std::string("body") + ".context.uuid", body.context.uuid);
  setBodyParameter(std::string("body") + ".session_id", body.session_id);
  setBodyParameter(std::string("body") + ".language", body.language);
  setBodyParameter(std::string("body") + ".type", body.type);
  setBodyParameter(std::string("body") + ".message", body.message);
}


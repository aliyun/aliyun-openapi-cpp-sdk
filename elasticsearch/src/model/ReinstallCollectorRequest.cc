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

#include <alibabacloud/elasticsearch/model/ReinstallCollectorRequest.h>

using AlibabaCloud::Elasticsearch::Model::ReinstallCollectorRequest;

ReinstallCollectorRequest::ReinstallCollectorRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/collectors/[ResId]/actions/reinstall"};
  setMethod(HttpRequest::Method::Post);
}

ReinstallCollectorRequest::~ReinstallCollectorRequest() {}

string ReinstallCollectorRequest::getClientToken() const {
  return clientToken_;
}

void ReinstallCollectorRequest::setClientToken(string clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), std::to_string(clientToken));
}

string ReinstallCollectorRequest::getBody() const {
  return body_;
}

void ReinstallCollectorRequest::setBody(string body) {
  body_ = body;
  setBodyParameter(std::string("body"), std::to_string(body));
}

string ReinstallCollectorRequest::getResId() const {
  return resId_;
}

void ReinstallCollectorRequest::setResId(string resId) {
  resId_ = resId;
  setParameter(std::string("ResId"), std::to_string(resId));
}


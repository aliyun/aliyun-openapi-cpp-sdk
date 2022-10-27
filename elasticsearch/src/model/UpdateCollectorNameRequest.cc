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

#include <alibabacloud/elasticsearch/model/UpdateCollectorNameRequest.h>

using AlibabaCloud::Elasticsearch::Model::UpdateCollectorNameRequest;

UpdateCollectorNameRequest::UpdateCollectorNameRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/collectors/[ResId]/actions/rename"};
  setMethod(HttpRequest::Method::Post);
}

UpdateCollectorNameRequest::~UpdateCollectorNameRequest() {}

string UpdateCollectorNameRequest::getClientToken() const {
  return clientToken_;
}

void UpdateCollectorNameRequest::setClientToken(string clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), std::to_string(clientToken));
}

string UpdateCollectorNameRequest::getBody() const {
  return body_;
}

void UpdateCollectorNameRequest::setBody(string body) {
  body_ = body;
  setBodyParameter(std::string("body"), std::to_string(body));
}

string UpdateCollectorNameRequest::getResId() const {
  return resId_;
}

void UpdateCollectorNameRequest::setResId(string resId) {
  resId_ = resId;
  setParameter(std::string("ResId"), std::to_string(resId));
}


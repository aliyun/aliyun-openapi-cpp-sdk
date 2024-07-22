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

#include <alibabacloud/elasticsearch/model/RestartCollectorRequest.h>

using AlibabaCloud::Elasticsearch::Model::RestartCollectorRequest;

RestartCollectorRequest::RestartCollectorRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/collectors/[ResId]/actions/restart"};
  setMethod(HttpRequest::Method::Post);
}

RestartCollectorRequest::~RestartCollectorRequest() {}

std::string RestartCollectorRequest::getClientToken() const {
  return clientToken_;
}

void RestartCollectorRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RestartCollectorRequest::getResId() const {
  return resId_;
}

void RestartCollectorRequest::setResId(const std::string &resId) {
  resId_ = resId;
  setParameter(std::string("ResId"), resId);
}


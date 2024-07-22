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

#include <alibabacloud/elasticsearch/model/ModifyWhiteIpsRequest.h>

using AlibabaCloud::Elasticsearch::Model::ModifyWhiteIpsRequest;

ModifyWhiteIpsRequest::ModifyWhiteIpsRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/actions/modify-white-ips"};
  setMethod(HttpRequest::Method::Post);
}

ModifyWhiteIpsRequest::~ModifyWhiteIpsRequest() {}

std::string ModifyWhiteIpsRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyWhiteIpsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyWhiteIpsRequest::getClientToken() const {
  return clientToken_;
}

void ModifyWhiteIpsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("clientToken"), clientToken);
}

std::string ModifyWhiteIpsRequest::getBody() const {
  return body_;
}

void ModifyWhiteIpsRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}


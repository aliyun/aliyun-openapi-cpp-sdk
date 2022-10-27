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

#include <alibabacloud/elasticsearch/model/CreateVpcEndpointRequest.h>

using AlibabaCloud::Elasticsearch::Model::CreateVpcEndpointRequest;

CreateVpcEndpointRequest::CreateVpcEndpointRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/vpc-endpoints"};
  setMethod(HttpRequest::Method::Post);
}

CreateVpcEndpointRequest::~CreateVpcEndpointRequest() {}

string CreateVpcEndpointRequest::getInstanceId() const {
  return instanceId_;
}

void CreateVpcEndpointRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

boolean CreateVpcEndpointRequest::getDryRun() const {
  return dryRun_;
}

void CreateVpcEndpointRequest::setDryRun(boolean dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("dryRun"), std::to_string(dryRun));
}

string CreateVpcEndpointRequest::getClientToken() const {
  return clientToken_;
}

void CreateVpcEndpointRequest::setClientToken(string clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), std::to_string(clientToken));
}

std::string CreateVpcEndpointRequest::getBody() const {
  return body_;
}

void CreateVpcEndpointRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}


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

#include <alibabacloud/elasticsearch/model/DeleteVpcEndpointRequest.h>

using AlibabaCloud::Elasticsearch::Model::DeleteVpcEndpointRequest;

DeleteVpcEndpointRequest::DeleteVpcEndpointRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/vpc-endpoints/[EndpointId]"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteVpcEndpointRequest::~DeleteVpcEndpointRequest() {}

std::string DeleteVpcEndpointRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteVpcEndpointRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteVpcEndpointRequest::getClientToken() const {
  return clientToken_;
}

void DeleteVpcEndpointRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteVpcEndpointRequest::getEndpointId() const {
  return endpointId_;
}

void DeleteVpcEndpointRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}


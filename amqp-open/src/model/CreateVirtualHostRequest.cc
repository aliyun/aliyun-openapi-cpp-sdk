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

#include <alibabacloud/amqp-open/model/CreateVirtualHostRequest.h>

using AlibabaCloud::Amqp_open::Model::CreateVirtualHostRequest;

CreateVirtualHostRequest::CreateVirtualHostRequest()
    : RpcServiceRequest("amqp-open", "2019-12-12", "CreateVirtualHost") {
  setMethod(HttpRequest::Method::Post);
}

CreateVirtualHostRequest::~CreateVirtualHostRequest() {}

std::string CreateVirtualHostRequest::getInstanceId() const {
  return instanceId_;
}

void CreateVirtualHostRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string CreateVirtualHostRequest::getVirtualHost() const {
  return virtualHost_;
}

void CreateVirtualHostRequest::setVirtualHost(const std::string &virtualHost) {
  virtualHost_ = virtualHost;
  setBodyParameter(std::string("VirtualHost"), virtualHost);
}


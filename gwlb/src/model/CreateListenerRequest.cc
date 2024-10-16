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

#include <alibabacloud/gwlb/model/CreateListenerRequest.h>

using AlibabaCloud::Gwlb::Model::CreateListenerRequest;

CreateListenerRequest::CreateListenerRequest()
    : RpcServiceRequest("gwlb", "2024-04-15", "CreateListener") {
  setMethod(HttpRequest::Method::Post);
}

CreateListenerRequest::~CreateListenerRequest() {}

std::string CreateListenerRequest::getClientToken() const {
  return clientToken_;
}

void CreateListenerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string CreateListenerRequest::getServerGroupId() const {
  return serverGroupId_;
}

void CreateListenerRequest::setServerGroupId(const std::string &serverGroupId) {
  serverGroupId_ = serverGroupId;
  setBodyParameter(std::string("ServerGroupId"), serverGroupId);
}

std::vector<CreateListenerRequest::Tag> CreateListenerRequest::getTag() const {
  return tag_;
}

void CreateListenerRequest::setTag(const std::vector<CreateListenerRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setBodyParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
    setBodyParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
  }
}

bool CreateListenerRequest::getDryRun() const {
  return dryRun_;
}

void CreateListenerRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateListenerRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void CreateListenerRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setBodyParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string CreateListenerRequest::getListenerDescription() const {
  return listenerDescription_;
}

void CreateListenerRequest::setListenerDescription(const std::string &listenerDescription) {
  listenerDescription_ = listenerDescription;
  setBodyParameter(std::string("ListenerDescription"), listenerDescription);
}


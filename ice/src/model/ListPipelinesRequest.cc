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

#include <alibabacloud/ice/model/ListPipelinesRequest.h>

using AlibabaCloud::ICE::Model::ListPipelinesRequest;

ListPipelinesRequest::ListPipelinesRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListPipelines") {
  setMethod(HttpRequest::Method::Post);
}

ListPipelinesRequest::~ListPipelinesRequest() {}

long ListPipelinesRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void ListPipelinesRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string ListPipelinesRequest::getSpeed() const {
  return speed_;
}

void ListPipelinesRequest::setSpeed(const std::string &speed) {
  speed_ = speed;
  setParameter(std::string("Speed"), speed);
}

std::string ListPipelinesRequest::getAppId() const {
  return appId_;
}

void ListPipelinesRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string ListPipelinesRequest::getStatus() const {
  return status_;
}

void ListPipelinesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}


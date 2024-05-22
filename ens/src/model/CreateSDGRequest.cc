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

#include <alibabacloud/ens/model/CreateSDGRequest.h>

using AlibabaCloud::Ens::Model::CreateSDGRequest;

CreateSDGRequest::CreateSDGRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateSDG") {
  setMethod(HttpRequest::Method::Get);
}

CreateSDGRequest::~CreateSDGRequest() {}

std::string CreateSDGRequest::getFromSDGId() const {
  return fromSDGId_;
}

void CreateSDGRequest::setFromSDGId(const std::string &fromSDGId) {
  fromSDGId_ = fromSDGId;
  setParameter(std::string("FromSDGId"), fromSDGId);
}

std::string CreateSDGRequest::getDescription() const {
  return description_;
}

void CreateSDGRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateSDGRequest::getInstanceId() const {
  return instanceId_;
}

void CreateSDGRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateSDGRequest::getSize() const {
  return size_;
}

void CreateSDGRequest::setSize(const std::string &size) {
  size_ = size;
  setParameter(std::string("Size"), size);
}


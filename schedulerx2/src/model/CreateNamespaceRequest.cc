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

#include <alibabacloud/schedulerx2/model/CreateNamespaceRequest.h>

using AlibabaCloud::Schedulerx2::Model::CreateNamespaceRequest;

CreateNamespaceRequest::CreateNamespaceRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "CreateNamespace") {
  setMethod(HttpRequest::Method::Post);
}

CreateNamespaceRequest::~CreateNamespaceRequest() {}

std::string CreateNamespaceRequest::getDescription() const {
  return description_;
}

void CreateNamespaceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateNamespaceRequest::getSource() const {
  return source_;
}

void CreateNamespaceRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string CreateNamespaceRequest::getUid() const {
  return uid_;
}

void CreateNamespaceRequest::setUid(const std::string &uid) {
  uid_ = uid;
  setParameter(std::string("Uid"), uid);
}

std::string CreateNamespaceRequest::getRegionId() const {
  return regionId_;
}

void CreateNamespaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateNamespaceRequest::getName() const {
  return name_;
}

void CreateNamespaceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}


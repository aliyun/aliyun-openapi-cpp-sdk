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

#include <alibabacloud/ddoscoo/model/AttachSceneDefenseObjectRequest.h>

using AlibabaCloud::Ddoscoo::Model::AttachSceneDefenseObjectRequest;

AttachSceneDefenseObjectRequest::AttachSceneDefenseObjectRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "AttachSceneDefenseObject") {
  setMethod(HttpRequest::Method::Post);
}

AttachSceneDefenseObjectRequest::~AttachSceneDefenseObjectRequest() {}

std::string AttachSceneDefenseObjectRequest::getObjects() const {
  return objects_;
}

void AttachSceneDefenseObjectRequest::setObjects(const std::string &objects) {
  objects_ = objects;
  setParameter(std::string("Objects"), objects);
}

std::string AttachSceneDefenseObjectRequest::getSourceIp() const {
  return sourceIp_;
}

void AttachSceneDefenseObjectRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string AttachSceneDefenseObjectRequest::getPolicyId() const {
  return policyId_;
}

void AttachSceneDefenseObjectRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

std::string AttachSceneDefenseObjectRequest::getObjectType() const {
  return objectType_;
}

void AttachSceneDefenseObjectRequest::setObjectType(const std::string &objectType) {
  objectType_ = objectType;
  setParameter(std::string("ObjectType"), objectType);
}


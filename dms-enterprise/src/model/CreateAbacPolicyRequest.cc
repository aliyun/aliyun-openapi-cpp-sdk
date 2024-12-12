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

#include <alibabacloud/dms-enterprise/model/CreateAbacPolicyRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateAbacPolicyRequest;

CreateAbacPolicyRequest::CreateAbacPolicyRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateAbacPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateAbacPolicyRequest::~CreateAbacPolicyRequest() {}

std::string CreateAbacPolicyRequest::getAbacPolicyContent() const {
  return abacPolicyContent_;
}

void CreateAbacPolicyRequest::setAbacPolicyContent(const std::string &abacPolicyContent) {
  abacPolicyContent_ = abacPolicyContent;
  setParameter(std::string("AbacPolicyContent"), abacPolicyContent);
}

long CreateAbacPolicyRequest::getTid() const {
  return tid_;
}

void CreateAbacPolicyRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string CreateAbacPolicyRequest::getAbacPolicyDesc() const {
  return abacPolicyDesc_;
}

void CreateAbacPolicyRequest::setAbacPolicyDesc(const std::string &abacPolicyDesc) {
  abacPolicyDesc_ = abacPolicyDesc;
  setParameter(std::string("AbacPolicyDesc"), abacPolicyDesc);
}

std::string CreateAbacPolicyRequest::getAbacPolicyName() const {
  return abacPolicyName_;
}

void CreateAbacPolicyRequest::setAbacPolicyName(const std::string &abacPolicyName) {
  abacPolicyName_ = abacPolicyName;
  setParameter(std::string("AbacPolicyName"), abacPolicyName);
}


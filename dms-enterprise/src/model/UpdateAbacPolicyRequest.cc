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

#include <alibabacloud/dms-enterprise/model/UpdateAbacPolicyRequest.h>

using AlibabaCloud::Dms_enterprise::Model::UpdateAbacPolicyRequest;

UpdateAbacPolicyRequest::UpdateAbacPolicyRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "UpdateAbacPolicy") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAbacPolicyRequest::~UpdateAbacPolicyRequest() {}

std::string UpdateAbacPolicyRequest::getAbacPolicyContent() const {
  return abacPolicyContent_;
}

void UpdateAbacPolicyRequest::setAbacPolicyContent(const std::string &abacPolicyContent) {
  abacPolicyContent_ = abacPolicyContent;
  setParameter(std::string("AbacPolicyContent"), abacPolicyContent);
}

long UpdateAbacPolicyRequest::getTid() const {
  return tid_;
}

void UpdateAbacPolicyRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long UpdateAbacPolicyRequest::getAbacPolicyId() const {
  return abacPolicyId_;
}

void UpdateAbacPolicyRequest::setAbacPolicyId(long abacPolicyId) {
  abacPolicyId_ = abacPolicyId;
  setParameter(std::string("AbacPolicyId"), std::to_string(abacPolicyId));
}

std::string UpdateAbacPolicyRequest::getAbacPolicyDesc() const {
  return abacPolicyDesc_;
}

void UpdateAbacPolicyRequest::setAbacPolicyDesc(const std::string &abacPolicyDesc) {
  abacPolicyDesc_ = abacPolicyDesc;
  setParameter(std::string("AbacPolicyDesc"), abacPolicyDesc);
}

std::string UpdateAbacPolicyRequest::getAbacPolicyName() const {
  return abacPolicyName_;
}

void UpdateAbacPolicyRequest::setAbacPolicyName(const std::string &abacPolicyName) {
  abacPolicyName_ = abacPolicyName;
  setParameter(std::string("AbacPolicyName"), abacPolicyName);
}


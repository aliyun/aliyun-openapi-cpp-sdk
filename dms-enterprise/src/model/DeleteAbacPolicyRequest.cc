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

#include <alibabacloud/dms-enterprise/model/DeleteAbacPolicyRequest.h>

using AlibabaCloud::Dms_enterprise::Model::DeleteAbacPolicyRequest;

DeleteAbacPolicyRequest::DeleteAbacPolicyRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "DeleteAbacPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAbacPolicyRequest::~DeleteAbacPolicyRequest() {}

long DeleteAbacPolicyRequest::getTid() const {
  return tid_;
}

void DeleteAbacPolicyRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long DeleteAbacPolicyRequest::getAbacPolicyId() const {
  return abacPolicyId_;
}

void DeleteAbacPolicyRequest::setAbacPolicyId(long abacPolicyId) {
  abacPolicyId_ = abacPolicyId;
  setParameter(std::string("AbacPolicyId"), std::to_string(abacPolicyId));
}


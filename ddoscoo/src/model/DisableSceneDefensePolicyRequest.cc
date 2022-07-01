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

#include <alibabacloud/ddoscoo/model/DisableSceneDefensePolicyRequest.h>

using AlibabaCloud::Ddoscoo::Model::DisableSceneDefensePolicyRequest;

DisableSceneDefensePolicyRequest::DisableSceneDefensePolicyRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DisableSceneDefensePolicy") {
  setMethod(HttpRequest::Method::Post);
}

DisableSceneDefensePolicyRequest::~DisableSceneDefensePolicyRequest() {}

std::string DisableSceneDefensePolicyRequest::getSourceIp() const {
  return sourceIp_;
}

void DisableSceneDefensePolicyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DisableSceneDefensePolicyRequest::getPolicyId() const {
  return policyId_;
}

void DisableSceneDefensePolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}


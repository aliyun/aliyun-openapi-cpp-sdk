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

#include <alibabacloud/mse/model/RemoveAuthPolicyRequest.h>

using AlibabaCloud::Mse::Model::RemoveAuthPolicyRequest;

RemoveAuthPolicyRequest::RemoveAuthPolicyRequest()
    : RpcServiceRequest("mse", "2019-05-31", "RemoveAuthPolicy") {
  setMethod(HttpRequest::Method::Post);
}

RemoveAuthPolicyRequest::~RemoveAuthPolicyRequest() {}

std::string RemoveAuthPolicyRequest::getMseSessionId() const {
  return mseSessionId_;
}

void RemoveAuthPolicyRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string RemoveAuthPolicyRequest::getPolicyId() const {
  return policyId_;
}

void RemoveAuthPolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

std::string RemoveAuthPolicyRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void RemoveAuthPolicyRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}


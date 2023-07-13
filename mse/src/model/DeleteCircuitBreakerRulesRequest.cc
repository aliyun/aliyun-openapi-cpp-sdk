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

#include <alibabacloud/mse/model/DeleteCircuitBreakerRulesRequest.h>

using AlibabaCloud::Mse::Model::DeleteCircuitBreakerRulesRequest;

DeleteCircuitBreakerRulesRequest::DeleteCircuitBreakerRulesRequest()
    : RpcServiceRequest("mse", "2019-05-31", "DeleteCircuitBreakerRules") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCircuitBreakerRulesRequest::~DeleteCircuitBreakerRulesRequest() {}

std::string DeleteCircuitBreakerRulesRequest::getMseSessionId() const {
  return mseSessionId_;
}

void DeleteCircuitBreakerRulesRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string DeleteCircuitBreakerRulesRequest::getAppName() const {
  return appName_;
}

void DeleteCircuitBreakerRulesRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DeleteCircuitBreakerRulesRequest::get_Namespace() const {
  return _namespace_;
}

void DeleteCircuitBreakerRulesRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string DeleteCircuitBreakerRulesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DeleteCircuitBreakerRulesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::vector<DeleteCircuitBreakerRulesRequest::long> DeleteCircuitBreakerRulesRequest::getIds() const {
  return ids_;
}

void DeleteCircuitBreakerRulesRequest::setIds(const std::vector<DeleteCircuitBreakerRulesRequest::long> &ids) {
  ids_ = ids;
  for(int dep1 = 0; dep1 != ids.size(); dep1++) {
    setParameter(std::string("Ids") + "." + std::to_string(dep1 + 1), std::to_string(ids[dep1]));
  }
}


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

#include <alibabacloud/mse/model/DeleteFlowRulesRequest.h>

using AlibabaCloud::Mse::Model::DeleteFlowRulesRequest;

DeleteFlowRulesRequest::DeleteFlowRulesRequest()
    : RpcServiceRequest("mse", "2019-05-31", "DeleteFlowRules") {
  setMethod(HttpRequest::Method::Post);
}

DeleteFlowRulesRequest::~DeleteFlowRulesRequest() {}

std::string DeleteFlowRulesRequest::getMseSessionId() const {
  return mseSessionId_;
}

void DeleteFlowRulesRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string DeleteFlowRulesRequest::getAppName() const {
  return appName_;
}

void DeleteFlowRulesRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DeleteFlowRulesRequest::get_Namespace() const {
  return _namespace_;
}

void DeleteFlowRulesRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string DeleteFlowRulesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DeleteFlowRulesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::vector<DeleteFlowRulesRequest::long> DeleteFlowRulesRequest::getIds() const {
  return ids_;
}

void DeleteFlowRulesRequest::setIds(const std::vector<DeleteFlowRulesRequest::long> &ids) {
  ids_ = ids;
  for(int dep1 = 0; dep1 != ids.size(); dep1++) {
    setParameter(std::string("Ids") + "." + std::to_string(dep1 + 1), std::to_string(ids[dep1]));
  }
}


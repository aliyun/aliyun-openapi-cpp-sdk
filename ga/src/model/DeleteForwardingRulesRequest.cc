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

#include <alibabacloud/ga/model/DeleteForwardingRulesRequest.h>

using AlibabaCloud::Ga::Model::DeleteForwardingRulesRequest;

DeleteForwardingRulesRequest::DeleteForwardingRulesRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DeleteForwardingRules") {
  setMethod(HttpRequest::Method::Post);
}

DeleteForwardingRulesRequest::~DeleteForwardingRulesRequest() {}

std::string DeleteForwardingRulesRequest::getClientToken() const {
  return clientToken_;
}

void DeleteForwardingRulesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteForwardingRulesRequest::getListenerId() const {
  return listenerId_;
}

void DeleteForwardingRulesRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string DeleteForwardingRulesRequest::getRegionId() const {
  return regionId_;
}

void DeleteForwardingRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteForwardingRulesRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void DeleteForwardingRulesRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

std::vector<DeleteForwardingRulesRequest::std::string> DeleteForwardingRulesRequest::getForwardingRuleIds() const {
  return forwardingRuleIds_;
}

void DeleteForwardingRulesRequest::setForwardingRuleIds(const std::vector<DeleteForwardingRulesRequest::std::string> &forwardingRuleIds) {
  forwardingRuleIds_ = forwardingRuleIds;
  for(int dep1 = 0; dep1 != forwardingRuleIds.size(); dep1++) {
    setParameter(std::string("ForwardingRuleIds") + "." + std::to_string(dep1 + 1), forwardingRuleIds[dep1]);
  }
}


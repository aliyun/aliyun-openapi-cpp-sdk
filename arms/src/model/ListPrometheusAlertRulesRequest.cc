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

#include <alibabacloud/arms/model/ListPrometheusAlertRulesRequest.h>

using AlibabaCloud::ARMS::Model::ListPrometheusAlertRulesRequest;

ListPrometheusAlertRulesRequest::ListPrometheusAlertRulesRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListPrometheusAlertRules") {
  setMethod(HttpRequest::Method::Post);
}

ListPrometheusAlertRulesRequest::~ListPrometheusAlertRulesRequest() {}

std::string ListPrometheusAlertRulesRequest::getClusterId() const {
  return clusterId_;
}

void ListPrometheusAlertRulesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListPrometheusAlertRulesRequest::getProxyUserId() const {
  return proxyUserId_;
}

void ListPrometheusAlertRulesRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string ListPrometheusAlertRulesRequest::getType() const {
  return type_;
}

void ListPrometheusAlertRulesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::vector<ListPrometheusAlertRulesRequest::Tags> ListPrometheusAlertRulesRequest::getTags() const {
  return tags_;
}

void ListPrometheusAlertRulesRequest::setTags(const std::vector<ListPrometheusAlertRulesRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

std::string ListPrometheusAlertRulesRequest::getRegionId() const {
  return regionId_;
}

void ListPrometheusAlertRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListPrometheusAlertRulesRequest::getName() const {
  return name_;
}

void ListPrometheusAlertRulesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListPrometheusAlertRulesRequest::getMatchExpressions() const {
  return matchExpressions_;
}

void ListPrometheusAlertRulesRequest::setMatchExpressions(const std::string &matchExpressions) {
  matchExpressions_ = matchExpressions;
  setParameter(std::string("MatchExpressions"), matchExpressions);
}

int ListPrometheusAlertRulesRequest::getStatus() const {
  return status_;
}

void ListPrometheusAlertRulesRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}


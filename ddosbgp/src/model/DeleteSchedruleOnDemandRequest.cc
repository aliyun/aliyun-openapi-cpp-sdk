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

#include <alibabacloud/ddosbgp/model/DeleteSchedruleOnDemandRequest.h>

using AlibabaCloud::Ddosbgp::Model::DeleteSchedruleOnDemandRequest;

DeleteSchedruleOnDemandRequest::DeleteSchedruleOnDemandRequest()
    : RpcServiceRequest("ddosbgp", "2018-07-20", "DeleteSchedruleOnDemand") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSchedruleOnDemandRequest::~DeleteSchedruleOnDemandRequest() {}

std::string DeleteSchedruleOnDemandRequest::getRuleName() const {
  return ruleName_;
}

void DeleteSchedruleOnDemandRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string DeleteSchedruleOnDemandRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteSchedruleOnDemandRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteSchedruleOnDemandRequest::getSourceIp() const {
  return sourceIp_;
}

void DeleteSchedruleOnDemandRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DeleteSchedruleOnDemandRequest::getRegionId() const {
  return regionId_;
}

void DeleteSchedruleOnDemandRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}


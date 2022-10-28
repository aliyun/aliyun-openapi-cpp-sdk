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

#include <alibabacloud/dms-enterprise/model/UpdateSLARulesRequest.h>

using AlibabaCloud::Dms_enterprise::Model::UpdateSLARulesRequest;

UpdateSLARulesRequest::UpdateSLARulesRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "UpdateSLARules") {
  setMethod(HttpRequest::Method::Post);
}

UpdateSLARulesRequest::~UpdateSLARulesRequest() {}

long UpdateSLARulesRequest::getDagId() const {
  return dagId_;
}

void UpdateSLARulesRequest::setDagId(long dagId) {
  dagId_ = dagId;
  setParameter(std::string("DagId"), std::to_string(dagId));
}

long UpdateSLARulesRequest::getTid() const {
  return tid_;
}

void UpdateSLARulesRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::vector<UpdateSLARulesRequest::SlaRuleList> UpdateSLARulesRequest::getSlaRuleList() const {
  return slaRuleList_;
}

void UpdateSLARulesRequest::setSlaRuleList(const std::vector<UpdateSLARulesRequest::SlaRuleList> &slaRuleList) {
  slaRuleList_ = slaRuleList;
  for(int dep1 = 0; dep1 != slaRuleList.size(); dep1++) {
    setParameter(std::string("SlaRuleList") + "." + std::to_string(dep1 + 1) + ".IntervalMinutes", std::to_string(slaRuleList[dep1].intervalMinutes));
    setParameter(std::string("SlaRuleList") + "." + std::to_string(dep1 + 1) + ".InfoAction", slaRuleList[dep1].infoAction ? "true" : "false");
    setParameter(std::string("SlaRuleList") + "." + std::to_string(dep1 + 1) + ".DagId", std::to_string(slaRuleList[dep1].dagId));
    setParameter(std::string("SlaRuleList") + "." + std::to_string(dep1 + 1) + ".Type", std::to_string(slaRuleList[dep1].type));
    setParameter(std::string("SlaRuleList") + "." + std::to_string(dep1 + 1) + ".NodeId", std::to_string(slaRuleList[dep1].nodeId));
  }
}


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

#include <alibabacloud/dataworks-public/model/DsgWhiteListAddOrUpdateRequest.h>

using AlibabaCloud::Dataworks_public::Model::DsgWhiteListAddOrUpdateRequest;

DsgWhiteListAddOrUpdateRequest::DsgWhiteListAddOrUpdateRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DsgWhiteListAddOrUpdate") {
  setMethod(HttpRequest::Method::Post);
}

DsgWhiteListAddOrUpdateRequest::~DsgWhiteListAddOrUpdateRequest() {}

std::vector<DsgWhiteListAddOrUpdateRequest::WhiteLists> DsgWhiteListAddOrUpdateRequest::getWhiteLists() const {
  return whiteLists_;
}

void DsgWhiteListAddOrUpdateRequest::setWhiteLists(const std::vector<DsgWhiteListAddOrUpdateRequest::WhiteLists> &whiteLists) {
  whiteLists_ = whiteLists;
  for(int dep1 = 0; dep1 != whiteLists.size(); dep1++) {
    setParameter(std::string("WhiteLists") + "." + std::to_string(dep1 + 1) + ".EndTime", whiteLists[dep1].endTime);
    for(int dep2 = 0; dep2 != whiteLists[dep1].userGroupIds.size(); dep2++) {
      setParameter(std::string("WhiteLists") + "." + std::to_string(dep1 + 1) + ".UserGroupIds." + std::to_string(dep2 + 1), std::to_string(whiteLists[dep1].userGroupIds[dep2]));
    }
    setParameter(std::string("WhiteLists") + "." + std::to_string(dep1 + 1) + ".Id", std::to_string(whiteLists[dep1].id));
    setParameter(std::string("WhiteLists") + "." + std::to_string(dep1 + 1) + ".StartTime", whiteLists[dep1].startTime);
    setParameter(std::string("WhiteLists") + "." + std::to_string(dep1 + 1) + ".RuleId", std::to_string(whiteLists[dep1].ruleId));
  }
}


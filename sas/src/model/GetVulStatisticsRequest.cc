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

#include <alibabacloud/sas/model/GetVulStatisticsRequest.h>

using AlibabaCloud::Sas::Model::GetVulStatisticsRequest;

GetVulStatisticsRequest::GetVulStatisticsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetVulStatistics") {
  setMethod(HttpRequest::Method::Post);
}

GetVulStatisticsRequest::~GetVulStatisticsRequest() {}

std::string GetVulStatisticsRequest::getTypeList() const {
  return typeList_;
}

void GetVulStatisticsRequest::setTypeList(const std::string &typeList) {
  typeList_ = typeList;
  setParameter(std::string("TypeList"), typeList);
}

std::string GetVulStatisticsRequest::getGroupIdList() const {
  return groupIdList_;
}

void GetVulStatisticsRequest::setGroupIdList(const std::string &groupIdList) {
  groupIdList_ = groupIdList;
  setParameter(std::string("GroupIdList"), groupIdList);
}

std::string GetVulStatisticsRequest::getSourceIp() const {
  return sourceIp_;
}

void GetVulStatisticsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}


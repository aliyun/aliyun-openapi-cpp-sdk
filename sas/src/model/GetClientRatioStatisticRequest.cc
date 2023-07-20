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

#include <alibabacloud/sas/model/GetClientRatioStatisticRequest.h>

using AlibabaCloud::Sas::Model::GetClientRatioStatisticRequest;

GetClientRatioStatisticRequest::GetClientRatioStatisticRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetClientRatioStatistic") {
  setMethod(HttpRequest::Method::Post);
}

GetClientRatioStatisticRequest::~GetClientRatioStatisticRequest() {}

long GetClientRatioStatisticRequest::getTimeEnd() const {
  return timeEnd_;
}

void GetClientRatioStatisticRequest::setTimeEnd(long timeEnd) {
  timeEnd_ = timeEnd;
  setParameter(std::string("TimeEnd"), std::to_string(timeEnd));
}

long GetClientRatioStatisticRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void GetClientRatioStatisticRequest::setResourceDirectoryAccountId(long resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), std::to_string(resourceDirectoryAccountId));
}

std::vector<GetClientRatioStatisticRequest::std::string> GetClientRatioStatisticRequest::getStatisticTypes() const {
  return statisticTypes_;
}

void GetClientRatioStatisticRequest::setStatisticTypes(const std::vector<GetClientRatioStatisticRequest::std::string> &statisticTypes) {
  statisticTypes_ = statisticTypes;
  for(int dep1 = 0; dep1 != statisticTypes.size(); dep1++) {
    setParameter(std::string("StatisticTypes") + "." + std::to_string(dep1 + 1), statisticTypes[dep1]);
  }
}

long GetClientRatioStatisticRequest::getTimeStart() const {
  return timeStart_;
}

void GetClientRatioStatisticRequest::setTimeStart(long timeStart) {
  timeStart_ = timeStart;
  setParameter(std::string("TimeStart"), std::to_string(timeStart));
}


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

#include <alibabacloud/sas/model/DescribeTotalStatisticsRequest.h>

using AlibabaCloud::Sas::Model::DescribeTotalStatisticsRequest;

DescribeTotalStatisticsRequest::DescribeTotalStatisticsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeTotalStatistics") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTotalStatisticsRequest::~DescribeTotalStatisticsRequest() {}

long DescribeTotalStatisticsRequest::getGroupId() const {
  return groupId_;
}

void DescribeTotalStatisticsRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

std::string DescribeTotalStatisticsRequest::getRemark() const {
  return remark_;
}

void DescribeTotalStatisticsRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string DescribeTotalStatisticsRequest::getFrom() const {
  return from_;
}

void DescribeTotalStatisticsRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}


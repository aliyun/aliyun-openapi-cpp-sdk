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

#include <alibabacloud/outboundbot/model/DescribeDialogueNodeStatisticsRequest.h>

using AlibabaCloud::OutboundBot::Model::DescribeDialogueNodeStatisticsRequest;

DescribeDialogueNodeStatisticsRequest::DescribeDialogueNodeStatisticsRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "DescribeDialogueNodeStatistics") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDialogueNodeStatisticsRequest::~DescribeDialogueNodeStatisticsRequest() {}

std::string DescribeDialogueNodeStatisticsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeDialogueNodeStatisticsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeDialogueNodeStatisticsRequest::getJobGroupId() const {
  return jobGroupId_;
}

void DescribeDialogueNodeStatisticsRequest::setJobGroupId(const std::string &jobGroupId) {
  jobGroupId_ = jobGroupId;
  setParameter(std::string("JobGroupId"), jobGroupId);
}

int DescribeDialogueNodeStatisticsRequest::getLimit() const {
  return limit_;
}

void DescribeDialogueNodeStatisticsRequest::setLimit(int limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}


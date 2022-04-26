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

#include <alibabacloud/ccc/model/ListCampaignTrendingReportRequest.h>

using AlibabaCloud::CCC::Model::ListCampaignTrendingReportRequest;

ListCampaignTrendingReportRequest::ListCampaignTrendingReportRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListCampaignTrendingReport") {
  setMethod(HttpRequest::Method::Get);
}

ListCampaignTrendingReportRequest::~ListCampaignTrendingReportRequest() {}

std::string ListCampaignTrendingReportRequest::getCampaignId() const {
  return campaignId_;
}

void ListCampaignTrendingReportRequest::setCampaignId(const std::string &campaignId) {
  campaignId_ = campaignId;
  setParameter(std::string("CampaignId"), campaignId);
}

long ListCampaignTrendingReportRequest::getEndTime() const {
  return endTime_;
}

void ListCampaignTrendingReportRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long ListCampaignTrendingReportRequest::getStartTime() const {
  return startTime_;
}

void ListCampaignTrendingReportRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ListCampaignTrendingReportRequest::getInstanceId() const {
  return instanceId_;
}

void ListCampaignTrendingReportRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


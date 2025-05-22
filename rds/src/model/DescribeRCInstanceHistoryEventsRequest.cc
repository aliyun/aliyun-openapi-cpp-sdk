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

#include <alibabacloud/rds/model/DescribeRCInstanceHistoryEventsRequest.h>

using AlibabaCloud::Rds::Model::DescribeRCInstanceHistoryEventsRequest;

DescribeRCInstanceHistoryEventsRequest::DescribeRCInstanceHistoryEventsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRCInstanceHistoryEvents") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRCInstanceHistoryEventsRequest::~DescribeRCInstanceHistoryEventsRequest() {}

std::vector<std::string> DescribeRCInstanceHistoryEventsRequest::getEventId() const {
  return eventId_;
}

void DescribeRCInstanceHistoryEventsRequest::setEventId(const std::vector<std::string> &eventId) {
  eventId_ = eventId;
}

std::string DescribeRCInstanceHistoryEventsRequest::getEventCycleStatus() const {
  return eventCycleStatus_;
}

void DescribeRCInstanceHistoryEventsRequest::setEventCycleStatus(const std::string &eventCycleStatus) {
  eventCycleStatus_ = eventCycleStatus;
  setParameter(std::string("EventCycleStatus"), eventCycleStatus);
}

std::string DescribeRCInstanceHistoryEventsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRCInstanceHistoryEventsRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeRCInstanceHistoryEventsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeRCInstanceHistoryEventsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeRCInstanceHistoryEventsRequest::getImpactLevel() const {
  return impactLevel_;
}

void DescribeRCInstanceHistoryEventsRequest::setImpactLevel(const std::string &impactLevel) {
  impactLevel_ = impactLevel;
  setParameter(std::string("ImpactLevel"), impactLevel);
}

std::string DescribeRCInstanceHistoryEventsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeRCInstanceHistoryEventsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeRCInstanceHistoryEventsRequest::getRegionId() const {
  return regionId_;
}

void DescribeRCInstanceHistoryEventsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRCInstanceHistoryEventsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRCInstanceHistoryEventsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::vector<std::string> DescribeRCInstanceHistoryEventsRequest::getInstanceEventCycleStatus() const {
  return instanceEventCycleStatus_;
}

void DescribeRCInstanceHistoryEventsRequest::setInstanceEventCycleStatus(const std::vector<std::string> &instanceEventCycleStatus) {
  instanceEventCycleStatus_ = instanceEventCycleStatus;
}

std::vector<DescribeRCInstanceHistoryEventsRequest::Tag> DescribeRCInstanceHistoryEventsRequest::getTag() const {
  return tag_;
}

void DescribeRCInstanceHistoryEventsRequest::setTag(const std::vector<DescribeRCInstanceHistoryEventsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeRCInstanceHistoryEventsRequest::getEventPublishTimeEnd() const {
  return eventPublishTimeEnd_;
}

void DescribeRCInstanceHistoryEventsRequest::setEventPublishTimeEnd(const std::string &eventPublishTimeEnd) {
  eventPublishTimeEnd_ = eventPublishTimeEnd;
  setParameter(std::string("EventPublishTime.End"), eventPublishTimeEnd);
}

std::vector<std::string> DescribeRCInstanceHistoryEventsRequest::getResourceId() const {
  return resourceId_;
}

void DescribeRCInstanceHistoryEventsRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::vector<std::string> DescribeRCInstanceHistoryEventsRequest::getInstanceEventType() const {
  return instanceEventType_;
}

void DescribeRCInstanceHistoryEventsRequest::setInstanceEventType(const std::vector<std::string> &instanceEventType) {
  instanceEventType_ = instanceEventType;
}

std::string DescribeRCInstanceHistoryEventsRequest::getNotBeforeStart() const {
  return notBeforeStart_;
}

void DescribeRCInstanceHistoryEventsRequest::setNotBeforeStart(const std::string &notBeforeStart) {
  notBeforeStart_ = notBeforeStart;
  setParameter(std::string("NotBefore.Start"), notBeforeStart);
}

std::string DescribeRCInstanceHistoryEventsRequest::getEventPublishTimeStart() const {
  return eventPublishTimeStart_;
}

void DescribeRCInstanceHistoryEventsRequest::setEventPublishTimeStart(const std::string &eventPublishTimeStart) {
  eventPublishTimeStart_ = eventPublishTimeStart;
  setParameter(std::string("EventPublishTime.Start"), eventPublishTimeStart);
}

std::string DescribeRCInstanceHistoryEventsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeRCInstanceHistoryEventsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeRCInstanceHistoryEventsRequest::getNotBeforeEnd() const {
  return notBeforeEnd_;
}

void DescribeRCInstanceHistoryEventsRequest::setNotBeforeEnd(const std::string &notBeforeEnd) {
  notBeforeEnd_ = notBeforeEnd;
  setParameter(std::string("NotBefore.End"), notBeforeEnd);
}

std::string DescribeRCInstanceHistoryEventsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeRCInstanceHistoryEventsRequest::setMaxResults(const std::string &maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), maxResults);
}

std::string DescribeRCInstanceHistoryEventsRequest::getEventType() const {
  return eventType_;
}

void DescribeRCInstanceHistoryEventsRequest::setEventType(const std::string &eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), eventType);
}


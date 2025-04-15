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

#include <alibabacloud/ecs/model/DescribeInstanceHistoryEventsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceHistoryEventsRequest;

DescribeInstanceHistoryEventsRequest::DescribeInstanceHistoryEventsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceHistoryEvents") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceHistoryEventsRequest::~DescribeInstanceHistoryEventsRequest() {}

long DescribeInstanceHistoryEventsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeInstanceHistoryEventsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeInstanceHistoryEventsRequest::getImpactLevel() const {
  return impactLevel_;
}

void DescribeInstanceHistoryEventsRequest::setImpactLevel(const std::string &impactLevel) {
  impactLevel_ = impactLevel;
  setParameter(std::string("ImpactLevel"), impactLevel);
}

std::string DescribeInstanceHistoryEventsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeInstanceHistoryEventsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::vector<std::string> DescribeInstanceHistoryEventsRequest::getInstanceEventCycleStatus() const {
  return instanceEventCycleStatus_;
}

void DescribeInstanceHistoryEventsRequest::setInstanceEventCycleStatus(const std::vector<std::string> &instanceEventCycleStatus) {
  instanceEventCycleStatus_ = instanceEventCycleStatus;
}

std::vector<DescribeInstanceHistoryEventsRequest::Tag> DescribeInstanceHistoryEventsRequest::getTag() const {
  return tag_;
}

void DescribeInstanceHistoryEventsRequest::setTag(const std::vector<DescribeInstanceHistoryEventsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string DescribeInstanceHistoryEventsRequest::getNotBeforeStart() const {
  return notBeforeStart_;
}

void DescribeInstanceHistoryEventsRequest::setNotBeforeStart(const std::string &notBeforeStart) {
  notBeforeStart_ = notBeforeStart;
  setParameter(std::string("NotBefore.Start"), notBeforeStart);
}

long DescribeInstanceHistoryEventsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeInstanceHistoryEventsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeInstanceHistoryEventsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceHistoryEventsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInstanceHistoryEventsRequest::getNotBeforeEnd() const {
  return notBeforeEnd_;
}

void DescribeInstanceHistoryEventsRequest::setNotBeforeEnd(const std::string &notBeforeEnd) {
  notBeforeEnd_ = notBeforeEnd;
  setParameter(std::string("NotBefore.End"), notBeforeEnd);
}

long DescribeInstanceHistoryEventsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeInstanceHistoryEventsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeInstanceHistoryEventsRequest::getEventType() const {
  return eventType_;
}

void DescribeInstanceHistoryEventsRequest::setEventType(const std::string &eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), eventType);
}

std::vector<std::string> DescribeInstanceHistoryEventsRequest::getEventId() const {
  return eventId_;
}

void DescribeInstanceHistoryEventsRequest::setEventId(const std::vector<std::string> &eventId) {
  eventId_ = eventId;
}

std::string DescribeInstanceHistoryEventsRequest::getEventCycleStatus() const {
  return eventCycleStatus_;
}

void DescribeInstanceHistoryEventsRequest::setEventCycleStatus(const std::string &eventCycleStatus) {
  eventCycleStatus_ = eventCycleStatus;
  setParameter(std::string("EventCycleStatus"), eventCycleStatus);
}

int DescribeInstanceHistoryEventsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeInstanceHistoryEventsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeInstanceHistoryEventsRequest::getRegionId() const {
  return regionId_;
}

void DescribeInstanceHistoryEventsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeInstanceHistoryEventsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeInstanceHistoryEventsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeInstanceHistoryEventsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstanceHistoryEventsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeInstanceHistoryEventsRequest::getEventPublishTimeEnd() const {
  return eventPublishTimeEnd_;
}

void DescribeInstanceHistoryEventsRequest::setEventPublishTimeEnd(const std::string &eventPublishTimeEnd) {
  eventPublishTimeEnd_ = eventPublishTimeEnd;
  setParameter(std::string("EventPublishTime.End"), eventPublishTimeEnd);
}

std::vector<std::string> DescribeInstanceHistoryEventsRequest::getResourceId() const {
  return resourceId_;
}

void DescribeInstanceHistoryEventsRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::vector<std::string> DescribeInstanceHistoryEventsRequest::getInstanceEventType() const {
  return instanceEventType_;
}

void DescribeInstanceHistoryEventsRequest::setInstanceEventType(const std::vector<std::string> &instanceEventType) {
  instanceEventType_ = instanceEventType;
}

std::string DescribeInstanceHistoryEventsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeInstanceHistoryEventsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeInstanceHistoryEventsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeInstanceHistoryEventsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeInstanceHistoryEventsRequest::getResourceType() const {
  return resourceType_;
}

void DescribeInstanceHistoryEventsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DescribeInstanceHistoryEventsRequest::getEventPublishTimeStart() const {
  return eventPublishTimeStart_;
}

void DescribeInstanceHistoryEventsRequest::setEventPublishTimeStart(const std::string &eventPublishTimeStart) {
  eventPublishTimeStart_ = eventPublishTimeStart;
  setParameter(std::string("EventPublishTime.Start"), eventPublishTimeStart);
}


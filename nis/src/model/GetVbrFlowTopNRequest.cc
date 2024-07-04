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

#include <alibabacloud/nis/model/GetVbrFlowTopNRequest.h>

using AlibabaCloud::Nis::Model::GetVbrFlowTopNRequest;

GetVbrFlowTopNRequest::GetVbrFlowTopNRequest()
    : RpcServiceRequest("nis", "2021-12-16", "GetVbrFlowTopN") {
  setMethod(HttpRequest::Method::Post);
}

GetVbrFlowTopNRequest::~GetVbrFlowTopNRequest() {}

std::string GetVbrFlowTopNRequest::getOtherPort() const {
  return otherPort_;
}

void GetVbrFlowTopNRequest::setOtherPort(const std::string &otherPort) {
  otherPort_ = otherPort;
  setParameter(std::string("OtherPort"), otherPort);
}

int GetVbrFlowTopNRequest::getTopN() const {
  return topN_;
}

void GetVbrFlowTopNRequest::setTopN(int topN) {
  topN_ = topN;
  setParameter(std::string("TopN"), std::to_string(topN));
}

std::string GetVbrFlowTopNRequest::getCloudPort() const {
  return cloudPort_;
}

void GetVbrFlowTopNRequest::setCloudPort(const std::string &cloudPort) {
  cloudPort_ = cloudPort;
  setParameter(std::string("CloudPort"), cloudPort);
}

std::string GetVbrFlowTopNRequest::getProtocol() const {
  return protocol_;
}

void GetVbrFlowTopNRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string GetVbrFlowTopNRequest::getOtherIp() const {
  return otherIp_;
}

void GetVbrFlowTopNRequest::setOtherIp(const std::string &otherIp) {
  otherIp_ = otherIp;
  setParameter(std::string("OtherIp"), otherIp);
}

std::string GetVbrFlowTopNRequest::getOrderBy() const {
  return orderBy_;
}

void GetVbrFlowTopNRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string GetVbrFlowTopNRequest::getSort() const {
  return sort_;
}

void GetVbrFlowTopNRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("Sort"), sort);
}

bool GetVbrFlowTopNRequest::getUseMultiAccount() const {
  return useMultiAccount_;
}

void GetVbrFlowTopNRequest::setUseMultiAccount(bool useMultiAccount) {
  useMultiAccount_ = useMultiAccount;
  setParameter(std::string("UseMultiAccount"), useMultiAccount ? "true" : "false");
}

std::string GetVbrFlowTopNRequest::getCloudIp() const {
  return cloudIp_;
}

void GetVbrFlowTopNRequest::setCloudIp(const std::string &cloudIp) {
  cloudIp_ = cloudIp;
  setParameter(std::string("CloudIp"), cloudIp);
}

std::string GetVbrFlowTopNRequest::getCenId() const {
  return cenId_;
}

void GetVbrFlowTopNRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string GetVbrFlowTopNRequest::getRegionId() const {
  return regionId_;
}

void GetVbrFlowTopNRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetVbrFlowTopNRequest::getVirtualBorderRouterId() const {
  return virtualBorderRouterId_;
}

void GetVbrFlowTopNRequest::setVirtualBorderRouterId(const std::string &virtualBorderRouterId) {
  virtualBorderRouterId_ = virtualBorderRouterId;
  setParameter(std::string("VirtualBorderRouterId"), virtualBorderRouterId);
}

std::string GetVbrFlowTopNRequest::getDirection() const {
  return direction_;
}

void GetVbrFlowTopNRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

long GetVbrFlowTopNRequest::getEndTime() const {
  return endTime_;
}

void GetVbrFlowTopNRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long GetVbrFlowTopNRequest::getBeginTime() const {
  return beginTime_;
}

void GetVbrFlowTopNRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

std::string GetVbrFlowTopNRequest::getGroupBy() const {
  return groupBy_;
}

void GetVbrFlowTopNRequest::setGroupBy(const std::string &groupBy) {
  groupBy_ = groupBy;
  setParameter(std::string("GroupBy"), groupBy);
}

std::vector<GetVbrFlowTopNRequest::long> GetVbrFlowTopNRequest::getAccountIds() const {
  return accountIds_;
}

void GetVbrFlowTopNRequest::setAccountIds(const std::vector<GetVbrFlowTopNRequest::long> &accountIds) {
  accountIds_ = accountIds;
  for(int dep1 = 0; dep1 != accountIds.size(); dep1++) {
    setParameter(std::string("AccountIds") + "." + std::to_string(dep1 + 1), std::to_string(accountIds[dep1]));
  }
}

std::string GetVbrFlowTopNRequest::getAttachmentId() const {
  return attachmentId_;
}

void GetVbrFlowTopNRequest::setAttachmentId(const std::string &attachmentId) {
  attachmentId_ = attachmentId;
  setParameter(std::string("AttachmentId"), attachmentId);
}


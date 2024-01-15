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

#include <alibabacloud/linkvisual/model/QueryCarProcessEventsRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryCarProcessEventsRequest;

QueryCarProcessEventsRequest::QueryCarProcessEventsRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryCarProcessEvents") {
  setMethod(HttpRequest::Method::Post);
}

QueryCarProcessEventsRequest::~QueryCarProcessEventsRequest() {}

int QueryCarProcessEventsRequest::getActionType() const {
  return actionType_;
}

void QueryCarProcessEventsRequest::setActionType(int actionType) {
  actionType_ = actionType;
  setParameter(std::string("ActionType"), std::to_string(actionType));
}

std::string QueryCarProcessEventsRequest::getSubProductKey() const {
  return subProductKey_;
}

void QueryCarProcessEventsRequest::setSubProductKey(const std::string &subProductKey) {
  subProductKey_ = subProductKey;
  setParameter(std::string("SubProductKey"), subProductKey);
}

std::string QueryCarProcessEventsRequest::getPlateNo() const {
  return plateNo_;
}

void QueryCarProcessEventsRequest::setPlateNo(const std::string &plateNo) {
  plateNo_ = plateNo;
  setParameter(std::string("PlateNo"), plateNo);
}

std::string QueryCarProcessEventsRequest::getIotId() const {
  return iotId_;
}

void QueryCarProcessEventsRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryCarProcessEventsRequest::getSubDeviceName() const {
  return subDeviceName_;
}

void QueryCarProcessEventsRequest::setSubDeviceName(const std::string &subDeviceName) {
  subDeviceName_ = subDeviceName;
  setParameter(std::string("SubDeviceName"), subDeviceName);
}

std::string QueryCarProcessEventsRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryCarProcessEventsRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int QueryCarProcessEventsRequest::getPageSize() const {
  return pageSize_;
}

void QueryCarProcessEventsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long QueryCarProcessEventsRequest::getEndTime() const {
  return endTime_;
}

void QueryCarProcessEventsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long QueryCarProcessEventsRequest::getBeginTime() const {
  return beginTime_;
}

void QueryCarProcessEventsRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

int QueryCarProcessEventsRequest::getCurrentPage() const {
  return currentPage_;
}

void QueryCarProcessEventsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

int QueryCarProcessEventsRequest::getAreaIndex() const {
  return areaIndex_;
}

void QueryCarProcessEventsRequest::setAreaIndex(int areaIndex) {
  areaIndex_ = areaIndex;
  setParameter(std::string("AreaIndex"), std::to_string(areaIndex));
}

std::string QueryCarProcessEventsRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryCarProcessEventsRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryCarProcessEventsRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryCarProcessEventsRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryCarProcessEventsRequest::getSubIotId() const {
  return subIotId_;
}

void QueryCarProcessEventsRequest::setSubIotId(const std::string &subIotId) {
  subIotId_ = subIotId;
  setParameter(std::string("SubIotId"), subIotId);
}


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

#include <alibabacloud/sas/model/DescribeSuspEventsRequest.h>

using AlibabaCloud::Sas::Model::DescribeSuspEventsRequest;

DescribeSuspEventsRequest::DescribeSuspEventsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeSuspEvents") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSuspEventsRequest::~DescribeSuspEventsRequest() {}

std::string DescribeSuspEventsRequest::getSource() const {
  return source_;
}

void DescribeSuspEventsRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string DescribeSuspEventsRequest::getContainerFieldName() const {
  return containerFieldName_;
}

void DescribeSuspEventsRequest::setContainerFieldName(const std::string &containerFieldName) {
  containerFieldName_ = containerFieldName;
  setParameter(std::string("ContainerFieldName"), containerFieldName);
}

std::string DescribeSuspEventsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeSuspEventsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeSuspEventsRequest::getEventNames() const {
  return eventNames_;
}

void DescribeSuspEventsRequest::setEventNames(const std::string &eventNames) {
  eventNames_ = eventNames;
  setParameter(std::string("EventNames"), eventNames);
}

std::string DescribeSuspEventsRequest::getFrom() const {
  return from_;
}

void DescribeSuspEventsRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

long DescribeSuspEventsRequest::getId() const {
  return id_;
}

void DescribeSuspEventsRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string DescribeSuspEventsRequest::getTacticId() const {
  return tacticId_;
}

void DescribeSuspEventsRequest::setTacticId(const std::string &tacticId) {
  tacticId_ = tacticId;
  setBodyParameter(std::string("TacticId"), tacticId);
}

std::string DescribeSuspEventsRequest::getAlarmUniqueInfo() const {
  return alarmUniqueInfo_;
}

void DescribeSuspEventsRequest::setAlarmUniqueInfo(const std::string &alarmUniqueInfo) {
  alarmUniqueInfo_ = alarmUniqueInfo;
  setParameter(std::string("AlarmUniqueInfo"), alarmUniqueInfo);
}

std::string DescribeSuspEventsRequest::getUniqueInfo() const {
  return uniqueInfo_;
}

void DescribeSuspEventsRequest::setUniqueInfo(const std::string &uniqueInfo) {
  uniqueInfo_ = uniqueInfo;
  setParameter(std::string("UniqueInfo"), uniqueInfo);
}

long DescribeSuspEventsRequest::getGroupId() const {
  return groupId_;
}

void DescribeSuspEventsRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

std::string DescribeSuspEventsRequest::getOperateTimeEnd() const {
  return operateTimeEnd_;
}

void DescribeSuspEventsRequest::setOperateTimeEnd(const std::string &operateTimeEnd) {
  operateTimeEnd_ = operateTimeEnd;
  setParameter(std::string("OperateTimeEnd"), operateTimeEnd);
}

std::string DescribeSuspEventsRequest::getName() const {
  return name_;
}

void DescribeSuspEventsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeSuspEventsRequest::getStatus() const {
  return status_;
}

void DescribeSuspEventsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

std::string DescribeSuspEventsRequest::getUuids() const {
  return uuids_;
}

void DescribeSuspEventsRequest::setUuids(const std::string &uuids) {
  uuids_ = uuids;
  setParameter(std::string("Uuids"), uuids);
}

std::string DescribeSuspEventsRequest::getTimeEnd() const {
  return timeEnd_;
}

void DescribeSuspEventsRequest::setTimeEnd(const std::string &timeEnd) {
  timeEnd_ = timeEnd;
  setParameter(std::string("TimeEnd"), timeEnd);
}

std::string DescribeSuspEventsRequest::getTargetType() const {
  return targetType_;
}

void DescribeSuspEventsRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string DescribeSuspEventsRequest::getSortType() const {
  return sortType_;
}

void DescribeSuspEventsRequest::setSortType(const std::string &sortType) {
  sortType_ = sortType;
  setParameter(std::string("SortType"), sortType);
}

std::string DescribeSuspEventsRequest::getRemark() const {
  return remark_;
}

void DescribeSuspEventsRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string DescribeSuspEventsRequest::getContainerFieldValue() const {
  return containerFieldValue_;
}

void DescribeSuspEventsRequest::setContainerFieldValue(const std::string &containerFieldValue) {
  containerFieldValue_ = containerFieldValue;
  setParameter(std::string("ContainerFieldValue"), containerFieldValue);
}

std::string DescribeSuspEventsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSuspEventsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeSuspEventsRequest::getLang() const {
  return lang_;
}

void DescribeSuspEventsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long DescribeSuspEventsRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void DescribeSuspEventsRequest::setResourceDirectoryAccountId(long resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), std::to_string(resourceDirectoryAccountId));
}

std::string DescribeSuspEventsRequest::getDealed() const {
  return dealed_;
}

void DescribeSuspEventsRequest::setDealed(const std::string &dealed) {
  dealed_ = dealed;
  setParameter(std::string("Dealed"), dealed);
}

std::string DescribeSuspEventsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeSuspEventsRequest::setCurrentPage(const std::string &currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), currentPage);
}

std::string DescribeSuspEventsRequest::getClusterId() const {
  return clusterId_;
}

void DescribeSuspEventsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::vector<std::string> DescribeSuspEventsRequest::getOperateErrorCodeList() const {
  return operateErrorCodeList_;
}

void DescribeSuspEventsRequest::setOperateErrorCodeList(const std::vector<std::string> &operateErrorCodeList) {
  operateErrorCodeList_ = operateErrorCodeList;
}

std::string DescribeSuspEventsRequest::getSortColumn() const {
  return sortColumn_;
}

void DescribeSuspEventsRequest::setSortColumn(const std::string &sortColumn) {
  sortColumn_ = sortColumn;
  setParameter(std::string("SortColumn"), sortColumn);
}

std::vector<std::string> DescribeSuspEventsRequest::getAssetsTypeList() const {
  return assetsTypeList_;
}

void DescribeSuspEventsRequest::setAssetsTypeList(const std::vector<std::string> &assetsTypeList) {
  assetsTypeList_ = assetsTypeList;
}

std::string DescribeSuspEventsRequest::getOperateTimeStart() const {
  return operateTimeStart_;
}

void DescribeSuspEventsRequest::setOperateTimeStart(const std::string &operateTimeStart) {
  operateTimeStart_ = operateTimeStart;
  setParameter(std::string("OperateTimeStart"), operateTimeStart);
}

std::string DescribeSuspEventsRequest::getTimeStart() const {
  return timeStart_;
}

void DescribeSuspEventsRequest::setTimeStart(const std::string &timeStart) {
  timeStart_ = timeStart;
  setParameter(std::string("TimeStart"), timeStart);
}

std::string DescribeSuspEventsRequest::getLevels() const {
  return levels_;
}

void DescribeSuspEventsRequest::setLevels(const std::string &levels) {
  levels_ = levels;
  setParameter(std::string("Levels"), levels);
}

std::string DescribeSuspEventsRequest::getParentEventTypes() const {
  return parentEventTypes_;
}

void DescribeSuspEventsRequest::setParentEventTypes(const std::string &parentEventTypes) {
  parentEventTypes_ = parentEventTypes;
  setParameter(std::string("ParentEventTypes"), parentEventTypes);
}


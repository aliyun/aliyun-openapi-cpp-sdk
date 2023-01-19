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

#include <alibabacloud/sas/model/ExportSuspEventsRequest.h>

using AlibabaCloud::Sas::Model::ExportSuspEventsRequest;

ExportSuspEventsRequest::ExportSuspEventsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ExportSuspEvents") {
  setMethod(HttpRequest::Method::Post);
}

ExportSuspEventsRequest::~ExportSuspEventsRequest() {}

std::string ExportSuspEventsRequest::getTimeEnd() const {
  return timeEnd_;
}

void ExportSuspEventsRequest::setTimeEnd(const std::string &timeEnd) {
  timeEnd_ = timeEnd;
  setParameter(std::string("TimeEnd"), timeEnd);
}

std::string ExportSuspEventsRequest::getTargetType() const {
  return targetType_;
}

void ExportSuspEventsRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string ExportSuspEventsRequest::getRemark() const {
  return remark_;
}

void ExportSuspEventsRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string ExportSuspEventsRequest::getContainerFieldName() const {
  return containerFieldName_;
}

void ExportSuspEventsRequest::setContainerFieldName(const std::string &containerFieldName) {
  containerFieldName_ = containerFieldName;
  setParameter(std::string("ContainerFieldName"), containerFieldName);
}

std::string ExportSuspEventsRequest::getSourceIp() const {
  return sourceIp_;
}

void ExportSuspEventsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ExportSuspEventsRequest::getContainerFieldValue() const {
  return containerFieldValue_;
}

void ExportSuspEventsRequest::setContainerFieldValue(const std::string &containerFieldValue) {
  containerFieldValue_ = containerFieldValue;
  setParameter(std::string("ContainerFieldValue"), containerFieldValue);
}

std::string ExportSuspEventsRequest::getPageSize() const {
  return pageSize_;
}

void ExportSuspEventsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string ExportSuspEventsRequest::getFrom() const {
  return from_;
}

void ExportSuspEventsRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

std::string ExportSuspEventsRequest::getLang() const {
  return lang_;
}

void ExportSuspEventsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string ExportSuspEventsRequest::getDealed() const {
  return dealed_;
}

void ExportSuspEventsRequest::setDealed(const std::string &dealed) {
  dealed_ = dealed;
  setParameter(std::string("Dealed"), dealed);
}

std::string ExportSuspEventsRequest::getCurrentPage() const {
  return currentPage_;
}

void ExportSuspEventsRequest::setCurrentPage(const std::string &currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), currentPage);
}

std::string ExportSuspEventsRequest::getClusterId() const {
  return clusterId_;
}

void ExportSuspEventsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::vector<std::string> ExportSuspEventsRequest::getAssetsTypeList() const {
  return assetsTypeList_;
}

void ExportSuspEventsRequest::setAssetsTypeList(const std::vector<std::string> &assetsTypeList) {
  assetsTypeList_ = assetsTypeList;
}

std::string ExportSuspEventsRequest::getName() const {
  return name_;
}

void ExportSuspEventsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ExportSuspEventsRequest::getTimeStart() const {
  return timeStart_;
}

void ExportSuspEventsRequest::setTimeStart(const std::string &timeStart) {
  timeStart_ = timeStart;
  setParameter(std::string("TimeStart"), timeStart);
}

std::string ExportSuspEventsRequest::getLevels() const {
  return levels_;
}

void ExportSuspEventsRequest::setLevels(const std::string &levels) {
  levels_ = levels;
  setParameter(std::string("Levels"), levels);
}

std::string ExportSuspEventsRequest::getParentEventTypes() const {
  return parentEventTypes_;
}

void ExportSuspEventsRequest::setParentEventTypes(const std::string &parentEventTypes) {
  parentEventTypes_ = parentEventTypes;
  setParameter(std::string("ParentEventTypes"), parentEventTypes);
}

std::string ExportSuspEventsRequest::getStatus() const {
  return status_;
}

void ExportSuspEventsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}


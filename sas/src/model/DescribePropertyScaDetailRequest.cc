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

#include <alibabacloud/sas/model/DescribePropertyScaDetailRequest.h>

using AlibabaCloud::Sas::Model::DescribePropertyScaDetailRequest;

DescribePropertyScaDetailRequest::DescribePropertyScaDetailRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribePropertyScaDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribePropertyScaDetailRequest::~DescribePropertyScaDetailRequest() {}

std::string DescribePropertyScaDetailRequest::getSearchItemSub() const {
  return searchItemSub_;
}

void DescribePropertyScaDetailRequest::setSearchItemSub(const std::string &searchItemSub) {
  searchItemSub_ = searchItemSub;
  setParameter(std::string("SearchItemSub"), searchItemSub);
}

std::string DescribePropertyScaDetailRequest::getRemark() const {
  return remark_;
}

void DescribePropertyScaDetailRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string DescribePropertyScaDetailRequest::getPid() const {
  return pid_;
}

void DescribePropertyScaDetailRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

std::string DescribePropertyScaDetailRequest::getSearchItem() const {
  return searchItem_;
}

void DescribePropertyScaDetailRequest::setSearchItem(const std::string &searchItem) {
  searchItem_ = searchItem;
  setParameter(std::string("SearchItem"), searchItem);
}

std::string DescribePropertyScaDetailRequest::getUuid() const {
  return uuid_;
}

void DescribePropertyScaDetailRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string DescribePropertyScaDetailRequest::getBiz() const {
  return biz_;
}

void DescribePropertyScaDetailRequest::setBiz(const std::string &biz) {
  biz_ = biz;
  setParameter(std::string("Biz"), biz);
}

std::string DescribePropertyScaDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribePropertyScaDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribePropertyScaDetailRequest::getPageSize() const {
  return pageSize_;
}

void DescribePropertyScaDetailRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribePropertyScaDetailRequest::getProcessStartedStart() const {
  return processStartedStart_;
}

void DescribePropertyScaDetailRequest::setProcessStartedStart(long processStartedStart) {
  processStartedStart_ = processStartedStart;
  setParameter(std::string("ProcessStartedStart"), std::to_string(processStartedStart));
}

long DescribePropertyScaDetailRequest::getProcessStartedEnd() const {
  return processStartedEnd_;
}

void DescribePropertyScaDetailRequest::setProcessStartedEnd(long processStartedEnd) {
  processStartedEnd_ = processStartedEnd;
  setParameter(std::string("ProcessStartedEnd"), std::to_string(processStartedEnd));
}

std::string DescribePropertyScaDetailRequest::getLang() const {
  return lang_;
}

void DescribePropertyScaDetailRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribePropertyScaDetailRequest::getScaVersion() const {
  return scaVersion_;
}

void DescribePropertyScaDetailRequest::setScaVersion(const std::string &scaVersion) {
  scaVersion_ = scaVersion;
  setParameter(std::string("ScaVersion"), scaVersion);
}

std::string DescribePropertyScaDetailRequest::getSearchInfoSub() const {
  return searchInfoSub_;
}

void DescribePropertyScaDetailRequest::setSearchInfoSub(const std::string &searchInfoSub) {
  searchInfoSub_ = searchInfoSub;
  setParameter(std::string("SearchInfoSub"), searchInfoSub);
}

std::string DescribePropertyScaDetailRequest::getSearchInfo() const {
  return searchInfo_;
}

void DescribePropertyScaDetailRequest::setSearchInfo(const std::string &searchInfo) {
  searchInfo_ = searchInfo;
  setParameter(std::string("SearchInfo"), searchInfo);
}

int DescribePropertyScaDetailRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribePropertyScaDetailRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribePropertyScaDetailRequest::getBizType() const {
  return bizType_;
}

void DescribePropertyScaDetailRequest::setBizType(const std::string &bizType) {
  bizType_ = bizType;
  setParameter(std::string("BizType"), bizType);
}

std::string DescribePropertyScaDetailRequest::getPort() const {
  return port_;
}

void DescribePropertyScaDetailRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

long DescribePropertyScaDetailRequest::getName() const {
  return name_;
}

void DescribePropertyScaDetailRequest::setName(long name) {
  name_ = name;
  setParameter(std::string("Name"), std::to_string(name));
}

std::string DescribePropertyScaDetailRequest::getScaName() const {
  return scaName_;
}

void DescribePropertyScaDetailRequest::setScaName(const std::string &scaName) {
  scaName_ = scaName;
  setParameter(std::string("ScaName"), scaName);
}

std::string DescribePropertyScaDetailRequest::getScaNamePattern() const {
  return scaNamePattern_;
}

void DescribePropertyScaDetailRequest::setScaNamePattern(const std::string &scaNamePattern) {
  scaNamePattern_ = scaNamePattern;
  setParameter(std::string("ScaNamePattern"), scaNamePattern);
}

std::string DescribePropertyScaDetailRequest::getUser() const {
  return user_;
}

void DescribePropertyScaDetailRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}


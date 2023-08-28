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

#include <alibabacloud/eflo/model/ListVccsRequest.h>

using AlibabaCloud::Eflo::Model::ListVccsRequest;

ListVccsRequest::ListVccsRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListVccs") {
  setMethod(HttpRequest::Method::Post);
}

ListVccsRequest::~ListVccsRequest() {}

std::string ListVccsRequest::getCenId() const {
  return cenId_;
}

void ListVccsRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setBodyParameter(std::string("CenId"), cenId);
}

int ListVccsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListVccsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListVccsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListVccsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListVccsRequest::getRegionId() const {
  return regionId_;
}

void ListVccsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListVccsRequest::getPageSize() const {
  return pageSize_;
}

void ListVccsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<ListVccsRequest::Tag> ListVccsRequest::getTag() const {
  return tag_;
}

void ListVccsRequest::setTag(const std::vector<ListVccsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setBodyParameter(tagObjStr + ".Value", tagObj.value);
    setBodyParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string ListVccsRequest::getVccId() const {
  return vccId_;
}

void ListVccsRequest::setVccId(const std::string &vccId) {
  vccId_ = vccId;
  setBodyParameter(std::string("VccId"), vccId);
}

int ListVccsRequest::getBandwidth() const {
  return bandwidth_;
}

void ListVccsRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setBodyParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string ListVccsRequest::getExStatus() const {
  return exStatus_;
}

void ListVccsRequest::setExStatus(const std::string &exStatus) {
  exStatus_ = exStatus;
  setBodyParameter(std::string("ExStatus"), exStatus);
}

std::string ListVccsRequest::getFilterErId() const {
  return filterErId_;
}

void ListVccsRequest::setFilterErId(const std::string &filterErId) {
  filterErId_ = filterErId;
  setBodyParameter(std::string("FilterErId"), filterErId);
}

std::string ListVccsRequest::getVpdId() const {
  return vpdId_;
}

void ListVccsRequest::setVpdId(const std::string &vpdId) {
  vpdId_ = vpdId;
  setBodyParameter(std::string("VpdId"), vpdId);
}

std::string ListVccsRequest::getVpcId() const {
  return vpcId_;
}

void ListVccsRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}

bool ListVccsRequest::getEnablePage() const {
  return enablePage_;
}

void ListVccsRequest::setEnablePage(bool enablePage) {
  enablePage_ = enablePage;
  setBodyParameter(std::string("EnablePage"), enablePage ? "true" : "false");
}

std::string ListVccsRequest::getStatus() const {
  return status_;
}

void ListVccsRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}


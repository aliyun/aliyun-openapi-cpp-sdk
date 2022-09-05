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

#include <alibabacloud/arms/model/GetSourceMapInfoRequest.h>

using AlibabaCloud::ARMS::Model::GetSourceMapInfoRequest;

GetSourceMapInfoRequest::GetSourceMapInfoRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetSourceMapInfo") {
  setMethod(HttpRequest::Method::Post);
}

GetSourceMapInfoRequest::~GetSourceMapInfoRequest() {}

std::string GetSourceMapInfoRequest::getEdition() const {
  return edition_;
}

void GetSourceMapInfoRequest::setEdition(const std::string &edition) {
  edition_ = edition;
  setParameter(std::string("Edition"), edition);
}

std::string GetSourceMapInfoRequest::getVersion() const {
  return version_;
}

void GetSourceMapInfoRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string GetSourceMapInfoRequest::getRegionId() const {
  return regionId_;
}

void GetSourceMapInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetSourceMapInfoRequest::getID() const {
  return iD_;
}

void GetSourceMapInfoRequest::setID(const std::string &iD) {
  iD_ = iD;
  setParameter(std::string("ID"), iD);
}

std::string GetSourceMapInfoRequest::getKeyword() const {
  return keyword_;
}

void GetSourceMapInfoRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

bool GetSourceMapInfoRequest::getAscendingSequence() const {
  return ascendingSequence_;
}

void GetSourceMapInfoRequest::setAscendingSequence(bool ascendingSequence) {
  ascendingSequence_ = ascendingSequence;
  setParameter(std::string("AscendingSequence"), ascendingSequence ? "true" : "false");
}

std::string GetSourceMapInfoRequest::getOrderField() const {
  return orderField_;
}

void GetSourceMapInfoRequest::setOrderField(const std::string &orderField) {
  orderField_ = orderField;
  setParameter(std::string("OrderField"), orderField);
}


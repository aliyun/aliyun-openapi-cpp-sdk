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

#include <alibabacloud/devops/model/ListUserDrawRecordByPkRequest.h>

using AlibabaCloud::Devops::Model::ListUserDrawRecordByPkRequest;

ListUserDrawRecordByPkRequest::ListUserDrawRecordByPkRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/listUserDrawRecords"};
  setMethod(HttpRequest::Method::Get);
}

ListUserDrawRecordByPkRequest::~ListUserDrawRecordByPkRequest() {}

std::string ListUserDrawRecordByPkRequest::getAliyunPk() const {
  return aliyunPk_;
}

void ListUserDrawRecordByPkRequest::setAliyunPk(const std::string &aliyunPk) {
  aliyunPk_ = aliyunPk;
  setParameter(std::string("aliyunPk"), aliyunPk);
}

std::string ListUserDrawRecordByPkRequest::getDrawGroup() const {
  return drawGroup_;
}

void ListUserDrawRecordByPkRequest::setDrawGroup(const std::string &drawGroup) {
  drawGroup_ = drawGroup;
  setParameter(std::string("drawGroup"), drawGroup);
}

std::string ListUserDrawRecordByPkRequest::getDrawPoolName() const {
  return drawPoolName_;
}

void ListUserDrawRecordByPkRequest::setDrawPoolName(const std::string &drawPoolName) {
  drawPoolName_ = drawPoolName;
  setParameter(std::string("drawPoolName"), drawPoolName);
}


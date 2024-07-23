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

#include <alibabacloud/rds/model/ConfirmNotifyRequest.h>

using AlibabaCloud::Rds::Model::ConfirmNotifyRequest;

ConfirmNotifyRequest::ConfirmNotifyRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ConfirmNotify") {
  setMethod(HttpRequest::Method::Post);
}

ConfirmNotifyRequest::~ConfirmNotifyRequest() {}

std::vector<ConfirmNotifyRequest::long> ConfirmNotifyRequest::getNotifyIdList() const {
  return notifyIdList_;
}

void ConfirmNotifyRequest::setNotifyIdList(const std::vector<ConfirmNotifyRequest::long> &notifyIdList) {
  notifyIdList_ = notifyIdList;
  for(int dep1 = 0; dep1 != notifyIdList.size(); dep1++) {
    setBodyParameter(std::string("NotifyIdList") + "." + std::to_string(dep1 + 1), std::to_string(notifyIdList[dep1]));
  }
}

std::string ConfirmNotifyRequest::getRegionId() const {
  return regionId_;
}

void ConfirmNotifyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long ConfirmNotifyRequest::getConfirmor() const {
  return confirmor_;
}

void ConfirmNotifyRequest::setConfirmor(long confirmor) {
  confirmor_ = confirmor;
  setBodyParameter(std::string("Confirmor"), std::to_string(confirmor));
}


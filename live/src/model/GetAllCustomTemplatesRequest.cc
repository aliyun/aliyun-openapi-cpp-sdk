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

#include <alibabacloud/live/model/GetAllCustomTemplatesRequest.h>

using AlibabaCloud::Live::Model::GetAllCustomTemplatesRequest;

GetAllCustomTemplatesRequest::GetAllCustomTemplatesRequest()
    : RpcServiceRequest("live", "2016-11-01", "GetAllCustomTemplates") {
  setMethod(HttpRequest::Method::Post);
}

GetAllCustomTemplatesRequest::~GetAllCustomTemplatesRequest() {}

std::string GetAllCustomTemplatesRequest::getUserId() const {
  return userId_;
}

void GetAllCustomTemplatesRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string GetAllCustomTemplatesRequest::getRegionId() const {
  return regionId_;
}

void GetAllCustomTemplatesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long GetAllCustomTemplatesRequest::getOwnerId() const {
  return ownerId_;
}

void GetAllCustomTemplatesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


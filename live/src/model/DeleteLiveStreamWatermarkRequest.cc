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

#include <alibabacloud/live/model/DeleteLiveStreamWatermarkRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveStreamWatermarkRequest;

DeleteLiveStreamWatermarkRequest::DeleteLiveStreamWatermarkRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteLiveStreamWatermark") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLiveStreamWatermarkRequest::~DeleteLiveStreamWatermarkRequest() {}

std::string DeleteLiveStreamWatermarkRequest::getRegionId() const {
  return regionId_;
}

void DeleteLiveStreamWatermarkRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DeleteLiveStreamWatermarkRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteLiveStreamWatermarkRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteLiveStreamWatermarkRequest::getTemplateId() const {
  return templateId_;
}

void DeleteLiveStreamWatermarkRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}


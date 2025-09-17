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

#include <alibabacloud/marketplaceintl/model/NoticeInstanceUserRequest.h>

using AlibabaCloud::MarketplaceIntl::Model::NoticeInstanceUserRequest;

NoticeInstanceUserRequest::NoticeInstanceUserRequest()
    : RpcServiceRequest("marketplaceintl", "2022-12-30", "NoticeInstanceUser") {
  setMethod(HttpRequest::Method::Post);
}

NoticeInstanceUserRequest::~NoticeInstanceUserRequest() {}

std::string NoticeInstanceUserRequest::getNoticeParam() const {
  return noticeParam_;
}

void NoticeInstanceUserRequest::setNoticeParam(const std::string &noticeParam) {
  noticeParam_ = noticeParam;
  setBodyParameter(std::string("NoticeParam"), noticeParam);
}

long NoticeInstanceUserRequest::getInstanceId() const {
  return instanceId_;
}

void NoticeInstanceUserRequest::setInstanceId(long instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), std::to_string(instanceId));
}

long NoticeInstanceUserRequest::getNoticeType() const {
  return noticeType_;
}

void NoticeInstanceUserRequest::setNoticeType(long noticeType) {
  noticeType_ = noticeType;
  setBodyParameter(std::string("NoticeType"), std::to_string(noticeType));
}


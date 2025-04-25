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

#include <alibabacloud/ess/model/DescribeNotificationTypesRequest.h>

using AlibabaCloud::Ess::Model::DescribeNotificationTypesRequest;

DescribeNotificationTypesRequest::DescribeNotificationTypesRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DescribeNotificationTypes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNotificationTypesRequest::~DescribeNotificationTypesRequest() {}

std::string DescribeNotificationTypesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeNotificationTypesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeNotificationTypesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeNotificationTypesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeNotificationTypesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeNotificationTypesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}


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

#include <alibabacloud/quickbi-public/model/TransferUsergroupRequest.h>

using AlibabaCloud::Quickbi_public::Model::TransferUsergroupRequest;

TransferUsergroupRequest::TransferUsergroupRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "TransferUsergroup") {
  setMethod(HttpRequest::Method::Post);
}

TransferUsergroupRequest::~TransferUsergroupRequest() {}

std::string TransferUsergroupRequest::getAccessPoint() const {
  return accessPoint_;
}

void TransferUsergroupRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string TransferUsergroupRequest::getParentUserGroupId() const {
  return parentUserGroupId_;
}

void TransferUsergroupRequest::setParentUserGroupId(const std::string &parentUserGroupId) {
  parentUserGroupId_ = parentUserGroupId;
  setParameter(std::string("ParentUserGroupId"), parentUserGroupId);
}

std::string TransferUsergroupRequest::getUserGroupId() const {
  return userGroupId_;
}

void TransferUsergroupRequest::setUserGroupId(const std::string &userGroupId) {
  userGroupId_ = userGroupId;
  setParameter(std::string("UserGroupId"), userGroupId);
}

std::string TransferUsergroupRequest::getSignType() const {
  return signType_;
}

void TransferUsergroupRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}


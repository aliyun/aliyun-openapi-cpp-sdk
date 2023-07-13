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

#include <alibabacloud/mse/model/ListAppBySwimmingLaneGroupTagRequest.h>

using AlibabaCloud::Mse::Model::ListAppBySwimmingLaneGroupTagRequest;

ListAppBySwimmingLaneGroupTagRequest::ListAppBySwimmingLaneGroupTagRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListAppBySwimmingLaneGroupTag") {
  setMethod(HttpRequest::Method::Post);
}

ListAppBySwimmingLaneGroupTagRequest::~ListAppBySwimmingLaneGroupTagRequest() {}

std::string ListAppBySwimmingLaneGroupTagRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListAppBySwimmingLaneGroupTagRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListAppBySwimmingLaneGroupTagRequest::getTag() const {
  return tag_;
}

void ListAppBySwimmingLaneGroupTagRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setParameter(std::string("Tag"), tag);
}

long ListAppBySwimmingLaneGroupTagRequest::getGroupId() const {
  return groupId_;
}

void ListAppBySwimmingLaneGroupTagRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

std::string ListAppBySwimmingLaneGroupTagRequest::get_Namespace() const {
  return _namespace_;
}

void ListAppBySwimmingLaneGroupTagRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string ListAppBySwimmingLaneGroupTagRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListAppBySwimmingLaneGroupTagRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}


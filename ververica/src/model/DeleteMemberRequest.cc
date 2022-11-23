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

#include <alibabacloud/ververica/model/DeleteMemberRequest.h>

using AlibabaCloud::Ververica::Model::DeleteMemberRequest;

DeleteMemberRequest::DeleteMemberRequest()
    : RoaServiceRequest("ververica", "2020-05-01") {
  setResourcePath("/pop/workspaces/[workspace]/members/v1/namespaces/[namespace]/members/[member]"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteMemberRequest::~DeleteMemberRequest() {}

std::string DeleteMemberRequest::getWorkspace() const {
  return workspace_;
}

void DeleteMemberRequest::setWorkspace(const std::string &workspace) {
  workspace_ = workspace;
  setParameter(std::string("workspace"), workspace);
}

std::string DeleteMemberRequest::get_Namespace() const {
  return _namespace_;
}

void DeleteMemberRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("namespace"), _namespace);
}

std::string DeleteMemberRequest::getMember() const {
  return member_;
}

void DeleteMemberRequest::setMember(const std::string &member) {
  member_ = member;
  setParameter(std::string("member"), member);
}


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

#include <alibabacloud/csas/model/ListPolicesForPrivateAccessTagRequest.h>

using AlibabaCloud::Csas::Model::ListPolicesForPrivateAccessTagRequest;

ListPolicesForPrivateAccessTagRequest::ListPolicesForPrivateAccessTagRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListPolicesForPrivateAccessTag") {
  setMethod(HttpRequest::Method::Get);
}

ListPolicesForPrivateAccessTagRequest::~ListPolicesForPrivateAccessTagRequest() {}

std::vector<ListPolicesForPrivateAccessTagRequest::std::string> ListPolicesForPrivateAccessTagRequest::getTagIds() const {
  return tagIds_;
}

void ListPolicesForPrivateAccessTagRequest::setTagIds(const std::vector<ListPolicesForPrivateAccessTagRequest::std::string> &tagIds) {
  tagIds_ = tagIds;
  for(int dep1 = 0; dep1 != tagIds.size(); dep1++) {
    setParameter(std::string("TagIds") + "." + std::to_string(dep1 + 1), tagIds[dep1]);
  }
}

std::string ListPolicesForPrivateAccessTagRequest::getSourceIp() const {
  return sourceIp_;
}

void ListPolicesForPrivateAccessTagRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}


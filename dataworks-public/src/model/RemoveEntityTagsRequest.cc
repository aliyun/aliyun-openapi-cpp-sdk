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

#include <alibabacloud/dataworks-public/model/RemoveEntityTagsRequest.h>

using AlibabaCloud::Dataworks_public::Model::RemoveEntityTagsRequest;

RemoveEntityTagsRequest::RemoveEntityTagsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "RemoveEntityTags") {
  setMethod(HttpRequest::Method::Post);
}

RemoveEntityTagsRequest::~RemoveEntityTagsRequest() {}

std::string RemoveEntityTagsRequest::getQualifiedName() const {
  return qualifiedName_;
}

void RemoveEntityTagsRequest::setQualifiedName(const std::string &qualifiedName) {
  qualifiedName_ = qualifiedName;
  setParameter(std::string("QualifiedName"), qualifiedName);
}

std::vector<RemoveEntityTagsRequest::std::string> RemoveEntityTagsRequest::getTagKeys() const {
  return tagKeys_;
}

void RemoveEntityTagsRequest::setTagKeys(const std::vector<RemoveEntityTagsRequest::std::string> &tagKeys) {
  tagKeys_ = tagKeys;
  for(int dep1 = 0; dep1 != tagKeys.size(); dep1++) {
    setBodyParameter(std::string("TagKeys") + "." + std::to_string(dep1 + 1), tagKeys[dep1]);
  }
}


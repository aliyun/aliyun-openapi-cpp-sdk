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

#include <alibabacloud/dataworks-public/model/SetEntityTagsRequest.h>

using AlibabaCloud::Dataworks_public::Model::SetEntityTagsRequest;

SetEntityTagsRequest::SetEntityTagsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "SetEntityTags") {
  setMethod(HttpRequest::Method::Post);
}

SetEntityTagsRequest::~SetEntityTagsRequest() {}

std::string SetEntityTagsRequest::getQualifiedName() const {
  return qualifiedName_;
}

void SetEntityTagsRequest::setQualifiedName(const std::string &qualifiedName) {
  qualifiedName_ = qualifiedName;
  setParameter(std::string("QualifiedName"), qualifiedName);
}

std::vector<SetEntityTagsRequest::Tags> SetEntityTagsRequest::getTags() const {
  return tags_;
}

void SetEntityTagsRequest::setTags(const std::vector<SetEntityTagsRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
    setBodyParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".TagValue", tags[dep1].tagValue);
    setBodyParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".TagKey", tags[dep1].tagKey);
  }
}


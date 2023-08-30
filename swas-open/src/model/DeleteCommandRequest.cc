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

#include <alibabacloud/swas-open/model/DeleteCommandRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DeleteCommandRequest;

DeleteCommandRequest::DeleteCommandRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DeleteCommand") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCommandRequest::~DeleteCommandRequest() {}

std::string DeleteCommandRequest::getCommandId() const {
  return commandId_;
}

void DeleteCommandRequest::setCommandId(const std::string &commandId) {
  commandId_ = commandId;
  setParameter(std::string("CommandId"), commandId);
}

std::string DeleteCommandRequest::getRegionId() const {
  return regionId_;
}

void DeleteCommandRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}


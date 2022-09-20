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

#include <alibabacloud/mns-open/model/GetQueueAttributesRequest.h>

using AlibabaCloud::Mns_open::Model::GetQueueAttributesRequest;

GetQueueAttributesRequest::GetQueueAttributesRequest()
    : RpcServiceRequest("mns-open", "2022-01-19", "GetQueueAttributes") {
  setMethod(HttpRequest::Method::Post);
}

GetQueueAttributesRequest::~GetQueueAttributesRequest() {}

std::string GetQueueAttributesRequest::getQueueName() const {
  return queueName_;
}

void GetQueueAttributesRequest::setQueueName(const std::string &queueName) {
  queueName_ = queueName;
  setParameter(std::string("QueueName"), queueName);
}


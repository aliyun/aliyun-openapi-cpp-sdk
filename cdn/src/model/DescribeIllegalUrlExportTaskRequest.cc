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

#include <alibabacloud/cdn/model/DescribeIllegalUrlExportTaskRequest.h>

using AlibabaCloud::Cdn::Model::DescribeIllegalUrlExportTaskRequest;

DescribeIllegalUrlExportTaskRequest::DescribeIllegalUrlExportTaskRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeIllegalUrlExportTask") {
  setMethod(HttpRequest::Method::Post);
}

DescribeIllegalUrlExportTaskRequest::~DescribeIllegalUrlExportTaskRequest() {}

std::string DescribeIllegalUrlExportTaskRequest::getTaskId() const {
  return taskId_;
}

void DescribeIllegalUrlExportTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

long DescribeIllegalUrlExportTaskRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeIllegalUrlExportTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}


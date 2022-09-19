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

#include <alibabacloud/viapi-regen/model/DownloadLabelFileRequest.h>

using AlibabaCloud::Viapi_regen::Model::DownloadLabelFileRequest;

DownloadLabelFileRequest::DownloadLabelFileRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "DownloadLabelFile") {
  setMethod(HttpRequest::Method::Post);
}

DownloadLabelFileRequest::~DownloadLabelFileRequest() {}

long DownloadLabelFileRequest::getLabelId() const {
  return labelId_;
}

void DownloadLabelFileRequest::setLabelId(long labelId) {
  labelId_ = labelId;
  setBodyParameter(std::string("LabelId"), std::to_string(labelId));
}


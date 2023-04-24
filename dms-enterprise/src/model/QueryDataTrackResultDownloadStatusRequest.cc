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

#include <alibabacloud/dms-enterprise/model/QueryDataTrackResultDownloadStatusRequest.h>

using AlibabaCloud::Dms_enterprise::Model::QueryDataTrackResultDownloadStatusRequest;

QueryDataTrackResultDownloadStatusRequest::QueryDataTrackResultDownloadStatusRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "QueryDataTrackResultDownloadStatus") {
  setMethod(HttpRequest::Method::Post);
}

QueryDataTrackResultDownloadStatusRequest::~QueryDataTrackResultDownloadStatusRequest() {}

long QueryDataTrackResultDownloadStatusRequest::getTid() const {
  return tid_;
}

void QueryDataTrackResultDownloadStatusRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long QueryDataTrackResultDownloadStatusRequest::getOrderId() const {
  return orderId_;
}

void QueryDataTrackResultDownloadStatusRequest::setOrderId(long orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), std::to_string(orderId));
}

std::string QueryDataTrackResultDownloadStatusRequest::getDownloadKeyId() const {
  return downloadKeyId_;
}

void QueryDataTrackResultDownloadStatusRequest::setDownloadKeyId(const std::string &downloadKeyId) {
  downloadKeyId_ = downloadKeyId;
  setParameter(std::string("DownloadKeyId"), downloadKeyId);
}


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

#include <alibabacloud/sas/model/PublicSyncAndCreateImageScanTaskRequest.h>

using AlibabaCloud::Sas::Model::PublicSyncAndCreateImageScanTaskRequest;

PublicSyncAndCreateImageScanTaskRequest::PublicSyncAndCreateImageScanTaskRequest()
    : RpcServiceRequest("sas", "2018-12-03", "PublicSyncAndCreateImageScanTask") {
  setMethod(HttpRequest::Method::Post);
}

PublicSyncAndCreateImageScanTaskRequest::~PublicSyncAndCreateImageScanTaskRequest() {}

std::string PublicSyncAndCreateImageScanTaskRequest::getImages() const {
  return images_;
}

void PublicSyncAndCreateImageScanTaskRequest::setImages(const std::string &images) {
  images_ = images;
  setParameter(std::string("Images"), images);
}

std::string PublicSyncAndCreateImageScanTaskRequest::getImageItems() const {
  return imageItems_;
}

void PublicSyncAndCreateImageScanTaskRequest::setImageItems(const std::string &imageItems) {
  imageItems_ = imageItems;
  setParameter(std::string("ImageItems"), imageItems);
}

std::string PublicSyncAndCreateImageScanTaskRequest::getSourceIp() const {
  return sourceIp_;
}

void PublicSyncAndCreateImageScanTaskRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}


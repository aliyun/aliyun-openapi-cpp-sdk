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

#include <alibabacloud/ocr/model/RecognizeTaxiInvoiceRequest.h>

using AlibabaCloud::Ocr::Model::RecognizeTaxiInvoiceRequest;

RecognizeTaxiInvoiceRequest::RecognizeTaxiInvoiceRequest()
    : RpcServiceRequest("ocr", "2019-12-30", "RecognizeTaxiInvoice") {
  setMethod(HttpRequest::Method::Post);
}

RecognizeTaxiInvoiceRequest::~RecognizeTaxiInvoiceRequest() {}

int RecognizeTaxiInvoiceRequest::getImageType() const {
  return imageType_;
}

void RecognizeTaxiInvoiceRequest::setImageType(int imageType) {
  imageType_ = imageType;
  setBodyParameter(std::string("ImageType"), std::to_string(imageType));
}

std::string RecognizeTaxiInvoiceRequest::getImageURL() const {
  return imageURL_;
}

void RecognizeTaxiInvoiceRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}


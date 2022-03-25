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

#include <alibabacloud/iot/model/RecognizePictureGeneralRequest.h>

using AlibabaCloud::Iot::Model::RecognizePictureGeneralRequest;

RecognizePictureGeneralRequest::RecognizePictureGeneralRequest() :
	RpcServiceRequest("iot", "2018-01-20", "RecognizePictureGeneral")
{
	setMethod(HttpRequest::Method::Post);
}

RecognizePictureGeneralRequest::~RecognizePictureGeneralRequest()
{}

std::string RecognizePictureGeneralRequest::getUrl()const
{
	return url_;
}

void RecognizePictureGeneralRequest::setUrl(const std::string& url)
{
	url_ = url;
	setParameter("Url", url);
}

std::string RecognizePictureGeneralRequest::getApiProduct()const
{
	return apiProduct_;
}

void RecognizePictureGeneralRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string RecognizePictureGeneralRequest::getApiRevision()const
{
	return apiRevision_;
}

void RecognizePictureGeneralRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}


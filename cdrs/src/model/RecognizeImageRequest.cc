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

#include <alibabacloud/cdrs/model/RecognizeImageRequest.h>

using AlibabaCloud::CDRS::Model::RecognizeImageRequest;

RecognizeImageRequest::RecognizeImageRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "RecognizeImage")
{
	setMethod(HttpRequest::Method::Post);
}

RecognizeImageRequest::~RecognizeImageRequest()
{}

bool RecognizeImageRequest::getRequireCropImage()const
{
	return requireCropImage_;
}

void RecognizeImageRequest::setRequireCropImage(bool requireCropImage)
{
	requireCropImage_ = requireCropImage;
	setBodyParameter("RequireCropImage", requireCropImage ? "true" : "false");
}

std::string RecognizeImageRequest::getCorpId()const
{
	return corpId_;
}

void RecognizeImageRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string RecognizeImageRequest::getRecognizeType()const
{
	return recognizeType_;
}

void RecognizeImageRequest::setRecognizeType(const std::string& recognizeType)
{
	recognizeType_ = recognizeType;
	setBodyParameter("RecognizeType", recognizeType);
}

std::string RecognizeImageRequest::getVendor()const
{
	return vendor_;
}

void RecognizeImageRequest::setVendor(const std::string& vendor)
{
	vendor_ = vendor;
	setBodyParameter("Vendor", vendor);
}

std::string RecognizeImageRequest::getImageUrl()const
{
	return imageUrl_;
}

void RecognizeImageRequest::setImageUrl(const std::string& imageUrl)
{
	imageUrl_ = imageUrl;
	setBodyParameter("ImageUrl", imageUrl);
}

std::string RecognizeImageRequest::getImageContent()const
{
	return imageContent_;
}

void RecognizeImageRequest::setImageContent(const std::string& imageContent)
{
	imageContent_ = imageContent;
	setBodyParameter("ImageContent", imageContent);
}


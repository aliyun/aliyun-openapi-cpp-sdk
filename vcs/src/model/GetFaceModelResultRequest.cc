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

#include <alibabacloud/vcs/model/GetFaceModelResultRequest.h>

using AlibabaCloud::Vcs::Model::GetFaceModelResultRequest;

GetFaceModelResultRequest::GetFaceModelResultRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "GetFaceModelResult")
{
	setMethod(HttpRequest::Method::Post);
}

GetFaceModelResultRequest::~GetFaceModelResultRequest()
{}

std::string GetFaceModelResultRequest::getPictureUrl()const
{
	return pictureUrl_;
}

void GetFaceModelResultRequest::setPictureUrl(const std::string& pictureUrl)
{
	pictureUrl_ = pictureUrl;
	setBodyParameter("PictureUrl", pictureUrl);
}

std::string GetFaceModelResultRequest::getPictureContent()const
{
	return pictureContent_;
}

void GetFaceModelResultRequest::setPictureContent(const std::string& pictureContent)
{
	pictureContent_ = pictureContent;
	setBodyParameter("PictureContent", pictureContent);
}

std::string GetFaceModelResultRequest::getPictureId()const
{
	return pictureId_;
}

void GetFaceModelResultRequest::setPictureId(const std::string& pictureId)
{
	pictureId_ = pictureId;
	setBodyParameter("PictureId", pictureId);
}


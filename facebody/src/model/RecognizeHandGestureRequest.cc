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

#include <alibabacloud/facebody/model/RecognizeHandGestureRequest.h>

using AlibabaCloud::Facebody::Model::RecognizeHandGestureRequest;

RecognizeHandGestureRequest::RecognizeHandGestureRequest() :
	RpcServiceRequest("facebody", "2019-12-30", "RecognizeHandGesture")
{
	setMethod(HttpRequest::Method::Post);
}

RecognizeHandGestureRequest::~RecognizeHandGestureRequest()
{}

std::string RecognizeHandGestureRequest::getGestureType()const
{
	return gestureType_;
}

void RecognizeHandGestureRequest::setGestureType(const std::string& gestureType)
{
	gestureType_ = gestureType;
	setBodyParameter("GestureType", gestureType);
}

std::string RecognizeHandGestureRequest::getAppId()const
{
	return appId_;
}

void RecognizeHandGestureRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setBodyParameter("AppId", appId);
}

std::string RecognizeHandGestureRequest::getImageURL()const
{
	return imageURL_;
}

void RecognizeHandGestureRequest::setImageURL(const std::string& imageURL)
{
	imageURL_ = imageURL;
	setBodyParameter("ImageURL", imageURL);
}


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

#include <alibabacloud/objectdet/model/DetectVideoFrameRequest.h>

using AlibabaCloud::Objectdet::Model::DetectVideoFrameRequest;

DetectVideoFrameRequest::DetectVideoFrameRequest() :
	RpcServiceRequest("objectdet", "2019-12-30", "DetectVideoFrame")
{
	setMethod(HttpRequest::Method::Post);
}

DetectVideoFrameRequest::~DetectVideoFrameRequest()
{}

Array DetectVideoFrameRequest::getFeatures()const
{
	return features_;
}

void DetectVideoFrameRequest::setFeatures(const Array& features)
{
	features_ = features;
	setBodyParameter("Features", std::to_string(features));
}

long DetectVideoFrameRequest::getHeight()const
{
	return height_;
}

void DetectVideoFrameRequest::setHeight(long height)
{
	height_ = height;
	setBodyParameter("Height", std::to_string(height));
}

long DetectVideoFrameRequest::getCreateTime()const
{
	return createTime_;
}

void DetectVideoFrameRequest::setCreateTime(long createTime)
{
	createTime_ = createTime;
	setBodyParameter("CreateTime", std::to_string(createTime));
}

std::string DetectVideoFrameRequest::getFeatureConfig()const
{
	return featureConfig_;
}

void DetectVideoFrameRequest::setFeatureConfig(const std::string& featureConfig)
{
	featureConfig_ = featureConfig;
	setBodyParameter("FeatureConfig", featureConfig);
}

long DetectVideoFrameRequest::getOwnerId()const
{
	return ownerId_;
}

void DetectVideoFrameRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setBodyParameter("OwnerId", std::to_string(ownerId));
}

std::string DetectVideoFrameRequest::getStreamArn()const
{
	return streamArn_;
}

void DetectVideoFrameRequest::setStreamArn(const std::string& streamArn)
{
	streamArn_ = streamArn;
	setBodyParameter("StreamArn", streamArn);
}

std::string DetectVideoFrameRequest::getImageURL()const
{
	return imageURL_;
}

void DetectVideoFrameRequest::setImageURL(const std::string& imageURL)
{
	imageURL_ = imageURL;
	setBodyParameter("ImageURL", imageURL);
}

long DetectVideoFrameRequest::getWidth()const
{
	return width_;
}

void DetectVideoFrameRequest::setWidth(long width)
{
	width_ = width;
	setBodyParameter("Width", std::to_string(width));
}


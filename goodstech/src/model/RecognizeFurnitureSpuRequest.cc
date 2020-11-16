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

#include <alibabacloud/goodstech/model/RecognizeFurnitureSpuRequest.h>

using AlibabaCloud::Goodstech::Model::RecognizeFurnitureSpuRequest;

RecognizeFurnitureSpuRequest::RecognizeFurnitureSpuRequest() :
	RpcServiceRequest("goodstech", "2019-12-30", "RecognizeFurnitureSpu")
{
	setMethod(HttpRequest::Method::Post);
}

RecognizeFurnitureSpuRequest::~RecognizeFurnitureSpuRequest()
{}

float RecognizeFurnitureSpuRequest::getXLength()const
{
	return xLength_;
}

void RecognizeFurnitureSpuRequest::setXLength(float xLength)
{
	xLength_ = xLength;
	setBodyParameter("XLength", std::to_string(xLength));
}

float RecognizeFurnitureSpuRequest::getZLength()const
{
	return zLength_;
}

void RecognizeFurnitureSpuRequest::setZLength(float zLength)
{
	zLength_ = zLength;
	setBodyParameter("ZLength", std::to_string(zLength));
}

std::string RecognizeFurnitureSpuRequest::getImageURL()const
{
	return imageURL_;
}

void RecognizeFurnitureSpuRequest::setImageURL(const std::string& imageURL)
{
	imageURL_ = imageURL;
	setBodyParameter("ImageURL", imageURL);
}

float RecognizeFurnitureSpuRequest::getYLength()const
{
	return yLength_;
}

void RecognizeFurnitureSpuRequest::setYLength(float yLength)
{
	yLength_ = yLength;
	setBodyParameter("YLength", std::to_string(yLength));
}


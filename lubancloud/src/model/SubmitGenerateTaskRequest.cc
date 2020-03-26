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

#include <alibabacloud/lubancloud/model/SubmitGenerateTaskRequest.h>

using AlibabaCloud::Lubancloud::Model::SubmitGenerateTaskRequest;

SubmitGenerateTaskRequest::SubmitGenerateTaskRequest() :
	RpcServiceRequest("lubancloud", "2018-05-09", "SubmitGenerateTask")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitGenerateTaskRequest::~SubmitGenerateTaskRequest()
{}

int SubmitGenerateTaskRequest::getImageCount()const
{
	return imageCount_;
}

void SubmitGenerateTaskRequest::setImageCount(int imageCount)
{
	imageCount_ = imageCount;
	setParameter("ImageCount", std::to_string(imageCount));
}

std::string SubmitGenerateTaskRequest::getActionPoint()const
{
	return actionPoint_;
}

void SubmitGenerateTaskRequest::setActionPoint(const std::string& actionPoint)
{
	actionPoint_ = actionPoint;
	setParameter("ActionPoint", actionPoint);
}

std::string SubmitGenerateTaskRequest::getLogoImagePath()const
{
	return logoImagePath_;
}

void SubmitGenerateTaskRequest::setLogoImagePath(const std::string& logoImagePath)
{
	logoImagePath_ = logoImagePath;
	setParameter("LogoImagePath", logoImagePath);
}

int SubmitGenerateTaskRequest::getType()const
{
	return type_;
}

void SubmitGenerateTaskRequest::setType(int type)
{
	type_ = type;
	setParameter("Type", std::to_string(type));
}

std::vector<std::string> SubmitGenerateTaskRequest::getMajorImagePath()const
{
	return majorImagePath_;
}

void SubmitGenerateTaskRequest::setMajorImagePath(const std::vector<std::string>& majorImagePath)
{
	majorImagePath_ = majorImagePath;
	for(int dep1 = 0; dep1!= majorImagePath.size(); dep1++) {
		setParameter("MajorImagePath."+ std::to_string(dep1), majorImagePath.at(dep1));
	}
}

int SubmitGenerateTaskRequest::getWidth()const
{
	return width_;
}

void SubmitGenerateTaskRequest::setWidth(int width)
{
	width_ = width;
	setParameter("Width", std::to_string(width));
}

std::vector<std::string> SubmitGenerateTaskRequest::getCopyWrite()const
{
	return copyWrite_;
}

void SubmitGenerateTaskRequest::setCopyWrite(const std::vector<std::string>& copyWrite)
{
	copyWrite_ = copyWrite;
	for(int dep1 = 0; dep1!= copyWrite.size(); dep1++) {
		setParameter("CopyWrite."+ std::to_string(dep1), copyWrite.at(dep1));
	}
}

std::vector<long> SubmitGenerateTaskRequest::getPropertyId()const
{
	return propertyId_;
}

void SubmitGenerateTaskRequest::setPropertyId(const std::vector<long>& propertyId)
{
	propertyId_ = propertyId;
	for(int dep1 = 0; dep1!= propertyId.size(); dep1++) {
		setParameter("PropertyId."+ std::to_string(dep1), std::to_string(propertyId.at(dep1)));
	}
}

int SubmitGenerateTaskRequest::getHeight()const
{
	return height_;
}

void SubmitGenerateTaskRequest::setHeight(int height)
{
	height_ = height;
	setParameter("Height", std::to_string(height));
}


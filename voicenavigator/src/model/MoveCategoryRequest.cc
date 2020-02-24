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

#include <alibabacloud/voicenavigator/model/MoveCategoryRequest.h>

using AlibabaCloud::VoiceNavigator::Model::MoveCategoryRequest;

MoveCategoryRequest::MoveCategoryRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "MoveCategory")
{
	setMethod(HttpRequest::Method::Post);
}

MoveCategoryRequest::~MoveCategoryRequest()
{}

std::string MoveCategoryRequest::getInstanceId()const
{
	return instanceId_;
}

void MoveCategoryRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string MoveCategoryRequest::getTargetPreviousSiblingId()const
{
	return targetPreviousSiblingId_;
}

void MoveCategoryRequest::setTargetPreviousSiblingId(const std::string& targetPreviousSiblingId)
{
	targetPreviousSiblingId_ = targetPreviousSiblingId;
	setParameter("TargetPreviousSiblingId", targetPreviousSiblingId);
}

std::string MoveCategoryRequest::getTargetParentId()const
{
	return targetParentId_;
}

void MoveCategoryRequest::setTargetParentId(const std::string& targetParentId)
{
	targetParentId_ = targetParentId;
	setParameter("TargetParentId", targetParentId);
}

std::string MoveCategoryRequest::getCategoryId()const
{
	return categoryId_;
}

void MoveCategoryRequest::setCategoryId(const std::string& categoryId)
{
	categoryId_ = categoryId;
	setParameter("CategoryId", categoryId);
}


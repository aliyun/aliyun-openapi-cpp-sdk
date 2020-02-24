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

#include <alibabacloud/voicenavigator/model/ListCategoriesRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ListCategoriesRequest;

ListCategoriesRequest::ListCategoriesRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "ListCategories")
{
	setMethod(HttpRequest::Method::Get);
}

ListCategoriesRequest::~ListCategoriesRequest()
{}

std::string ListCategoriesRequest::getParentId()const
{
	return parentId_;
}

void ListCategoriesRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setParameter("ParentId", parentId);
}

std::string ListCategoriesRequest::getInstanceId()const
{
	return instanceId_;
}

void ListCategoriesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}


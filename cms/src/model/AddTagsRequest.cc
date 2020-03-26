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

#include <alibabacloud/cms/model/AddTagsRequest.h>

using AlibabaCloud::Cms::Model::AddTagsRequest;

AddTagsRequest::AddTagsRequest() :
	RpcServiceRequest("cms", "2019-01-01", "AddTags")
{
	setMethod(HttpRequest::Method::Post);
}

AddTagsRequest::~AddTagsRequest()
{}

std::vector<std::string> AddTagsRequest::getGroupIds()const
{
	return groupIds_;
}

void AddTagsRequest::setGroupIds(const std::vector<std::string>& groupIds)
{
	groupIds_ = groupIds;
	for(int dep1 = 0; dep1!= groupIds.size(); dep1++) {
		setParameter("GroupIds."+ std::to_string(dep1), groupIds.at(dep1));
	}
}

std::vector<AddTagsRequest::Tag> AddTagsRequest::getTag()const
{
	return tag_;
}

void AddTagsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}


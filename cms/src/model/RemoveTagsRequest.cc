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

#include <alibabacloud/cms/model/RemoveTagsRequest.h>

using AlibabaCloud::Cms::Model::RemoveTagsRequest;

RemoveTagsRequest::RemoveTagsRequest() :
	RpcServiceRequest("cms", "2019-01-01", "RemoveTags")
{
	setMethod(HttpRequest::Method::Post);
}

RemoveTagsRequest::~RemoveTagsRequest()
{}

std::vector<std::string> RemoveTagsRequest::getGroupIds()const
{
	return groupIds_;
}

void RemoveTagsRequest::setGroupIds(const std::vector<std::string>& groupIds)
{
	groupIds_ = groupIds;
	for(int dep1 = 0; dep1!= groupIds.size(); dep1++) {
		setCoreParameter("GroupIds."+ std::to_string(dep1), groupIds.at(dep1));
	}
}

std::vector<RemoveTagsRequest::Tag> RemoveTagsRequest::getTag()const
{
	return tag_;
}

void RemoveTagsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1);
		setCoreParameter(tagObjStr + ".Value", tagObj.value);
		setCoreParameter(tagObjStr + ".Key", tagObj.key);
	}
}


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

#include <alibabacloud/linkface/model/SearchFaceRequest.h>

using AlibabaCloud::LinkFace::Model::SearchFaceRequest;

SearchFaceRequest::SearchFaceRequest() :
	RpcServiceRequest("linkface", "2018-07-20", "SearchFace")
{}

SearchFaceRequest::~SearchFaceRequest()
{}

std::string SearchFaceRequest::getImage()const
{
	return image_;
}

void SearchFaceRequest::setImage(const std::string& image)
{
	image_ = image;
	setCoreParameter("Image", image);
}

std::string SearchFaceRequest::getGroupId()const
{
	return groupId_;
}

void SearchFaceRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}


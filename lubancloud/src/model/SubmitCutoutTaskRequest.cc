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

#include <alibabacloud/lubancloud/model/SubmitCutoutTaskRequest.h>

using AlibabaCloud::Lubancloud::Model::SubmitCutoutTaskRequest;

SubmitCutoutTaskRequest::SubmitCutoutTaskRequest() :
	RpcServiceRequest("lubancloud", "2018-05-09", "SubmitCutoutTask")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitCutoutTaskRequest::~SubmitCutoutTaskRequest()
{}

std::vector<std::string> SubmitCutoutTaskRequest::getPictureUrl()const
{
	return pictureUrl_;
}

void SubmitCutoutTaskRequest::setPictureUrl(const std::vector<std::string>& pictureUrl)
{
	pictureUrl_ = pictureUrl;
	for(int dep1 = 0; dep1!= pictureUrl.size(); dep1++) {
		setParameter("PictureUrl."+ std::to_string(dep1), pictureUrl.at(dep1));
	}
}


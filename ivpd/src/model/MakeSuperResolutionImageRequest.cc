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

#include <alibabacloud/ivpd/model/MakeSuperResolutionImageRequest.h>

using AlibabaCloud::Ivpd::Model::MakeSuperResolutionImageRequest;

MakeSuperResolutionImageRequest::MakeSuperResolutionImageRequest() :
	RpcServiceRequest("ivpd", "2019-06-25", "MakeSuperResolutionImage")
{
	setMethod(HttpRequest::Method::Post);
}

MakeSuperResolutionImageRequest::~MakeSuperResolutionImageRequest()
{}

std::string MakeSuperResolutionImageRequest::getUrl()const
{
	return url_;
}

void MakeSuperResolutionImageRequest::setUrl(const std::string& url)
{
	url_ = url;
	setCoreParameter("Url", url);
}


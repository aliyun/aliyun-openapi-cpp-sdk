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

#include <alibabacloud/rsimganalys/model/DeleteImageRequest.h>

using AlibabaCloud::Rsimganalys::Model::DeleteImageRequest;

DeleteImageRequest::DeleteImageRequest() :
	RpcServiceRequest("rsimganalys", "2019-08-01", "DeleteImage")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteImageRequest::~DeleteImageRequest()
{}

long DeleteImageRequest::getImageId()const
{
	return imageId_;
}

void DeleteImageRequest::setImageId(long imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", std::to_string(imageId));
}


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

#include <alibabacloud/lubancloud/model/BuyOriginPicturesRequest.h>

using AlibabaCloud::Lubancloud::Model::BuyOriginPicturesRequest;

BuyOriginPicturesRequest::BuyOriginPicturesRequest() :
	RpcServiceRequest("lubancloud", "2018-05-09", "BuyOriginPictures")
{
	setMethod(HttpRequest::Method::Post);
}

BuyOriginPicturesRequest::~BuyOriginPicturesRequest()
{}

std::vector<long> BuyOriginPicturesRequest::getPictureId()const
{
	return pictureId_;
}

void BuyOriginPicturesRequest::setPictureId(const std::vector<long>& pictureId)
{
	pictureId_ = pictureId;
	for(int dep1 = 0; dep1!= pictureId.size(); dep1++) {
		setParameter("PictureId."+ std::to_string(dep1), std::to_string(pictureId.at(dep1)));
	}
}


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

#include <alibabacloud/cloudphoto/model/TagPhotoRequest.h>

using AlibabaCloud::CloudPhoto::Model::TagPhotoRequest;

TagPhotoRequest::TagPhotoRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "TagPhoto")
{
	setMethod(HttpRequest::Method::Post);
}

TagPhotoRequest::~TagPhotoRequest()
{}

std::string TagPhotoRequest::getLibraryId()const
{
	return libraryId_;
}

void TagPhotoRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", libraryId);
}

std::vector<float> TagPhotoRequest::getConfidence()const
{
	return confidence_;
}

void TagPhotoRequest::setConfidence(const std::vector<float>& confidence)
{
	confidence_ = confidence;
	for(int dep1 = 0; dep1!= confidence.size(); dep1++) {
		setCoreParameter("Confidence."+ std::to_string(dep1), std::to_string(confidence.at(dep1)));
	}
}

std::string TagPhotoRequest::getStoreName()const
{
	return storeName_;
}

void TagPhotoRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", storeName);
}

long TagPhotoRequest::getPhotoId()const
{
	return photoId_;
}

void TagPhotoRequest::setPhotoId(long photoId)
{
	photoId_ = photoId;
	setCoreParameter("PhotoId", std::to_string(photoId));
}

std::vector<std::string> TagPhotoRequest::getTagKey()const
{
	return tagKey_;
}

void TagPhotoRequest::setTagKey(const std::vector<std::string>& tagKey)
{
	tagKey_ = tagKey;
	for(int dep1 = 0; dep1!= tagKey.size(); dep1++) {
		setCoreParameter("TagKey."+ std::to_string(dep1), tagKey.at(dep1));
	}
}


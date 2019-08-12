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

#include <alibabacloud/cloudphoto/model/MergeFacesRequest.h>

using AlibabaCloud::CloudPhoto::Model::MergeFacesRequest;

MergeFacesRequest::MergeFacesRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "MergeFaces")
{}

MergeFacesRequest::~MergeFacesRequest()
{}

std::string MergeFacesRequest::getLibraryId()const
{
	return libraryId_;
}

void MergeFacesRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", libraryId);
}

long MergeFacesRequest::getTargetFaceId()const
{
	return targetFaceId_;
}

void MergeFacesRequest::setTargetFaceId(long targetFaceId)
{
	targetFaceId_ = targetFaceId;
	setCoreParameter("TargetFaceId", std::to_string(targetFaceId));
}

std::string MergeFacesRequest::getStoreName()const
{
	return storeName_;
}

void MergeFacesRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", storeName);
}

std::vector<long> MergeFacesRequest::getFaceId()const
{
	return faceId_;
}

void MergeFacesRequest::setFaceId(const std::vector<long>& faceId)
{
	faceId_ = faceId;
	for(int i = 0; i!= faceId.size(); i++)
		setCoreParameter("FaceId."+ std::to_string(i), std::to_string(faceId.at(i)));
}


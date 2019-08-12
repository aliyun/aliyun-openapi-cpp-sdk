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

#include <alibabacloud/imm/model/CompareImageFacesRequest.h>

using AlibabaCloud::Imm::Model::CompareImageFacesRequest;

CompareImageFacesRequest::CompareImageFacesRequest() :
	RpcServiceRequest("imm", "2017-09-06", "CompareImageFaces")
{}

CompareImageFacesRequest::~CompareImageFacesRequest()
{}

std::string CompareImageFacesRequest::getRegionId()const
{
	return regionId_;
}

void CompareImageFacesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CompareImageFacesRequest::getImageUriB()const
{
	return imageUriB_;
}

void CompareImageFacesRequest::setImageUriB(const std::string& imageUriB)
{
	imageUriB_ = imageUriB;
	setCoreParameter("ImageUriB", imageUriB);
}

std::string CompareImageFacesRequest::getImageUriA()const
{
	return imageUriA_;
}

void CompareImageFacesRequest::setImageUriA(const std::string& imageUriA)
{
	imageUriA_ = imageUriA;
	setCoreParameter("ImageUriA", imageUriA);
}

std::string CompareImageFacesRequest::getProject()const
{
	return project_;
}

void CompareImageFacesRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string CompareImageFacesRequest::getSetId()const
{
	return setId_;
}

void CompareImageFacesRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", setId);
}

std::string CompareImageFacesRequest::getFaceIdA()const
{
	return faceIdA_;
}

void CompareImageFacesRequest::setFaceIdA(const std::string& faceIdA)
{
	faceIdA_ = faceIdA;
	setCoreParameter("FaceIdA", faceIdA);
}

std::string CompareImageFacesRequest::getFaceIdB()const
{
	return faceIdB_;
}

void CompareImageFacesRequest::setFaceIdB(const std::string& faceIdB)
{
	faceIdB_ = faceIdB;
	setCoreParameter("FaceIdB", faceIdB);
}

std::string CompareImageFacesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CompareImageFacesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}


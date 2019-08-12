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

#include <alibabacloud/imm/model/FindSimilarFacesRequest.h>

using AlibabaCloud::Imm::Model::FindSimilarFacesRequest;

FindSimilarFacesRequest::FindSimilarFacesRequest() :
	RpcServiceRequest("imm", "2017-09-06", "FindSimilarFaces")
{}

FindSimilarFacesRequest::~FindSimilarFacesRequest()
{}

std::string FindSimilarFacesRequest::getImageUri()const
{
	return imageUri_;
}

void FindSimilarFacesRequest::setImageUri(const std::string& imageUri)
{
	imageUri_ = imageUri;
	setCoreParameter("ImageUri", std::to_string(imageUri));
}

std::string FindSimilarFacesRequest::getRegionId()const
{
	return regionId_;
}

void FindSimilarFacesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

float FindSimilarFacesRequest::getMinSimilarity()const
{
	return minSimilarity_;
}

void FindSimilarFacesRequest::setMinSimilarity(float minSimilarity)
{
	minSimilarity_ = minSimilarity;
	setCoreParameter("MinSimilarity", minSimilarity);
}

std::string FindSimilarFacesRequest::getResponseFormat()const
{
	return responseFormat_;
}

void FindSimilarFacesRequest::setResponseFormat(const std::string& responseFormat)
{
	responseFormat_ = responseFormat;
	setCoreParameter("ResponseFormat", std::to_string(responseFormat));
}

int FindSimilarFacesRequest::getLimit()const
{
	return limit_;
}

void FindSimilarFacesRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", limit);
}

std::string FindSimilarFacesRequest::getProject()const
{
	return project_;
}

void FindSimilarFacesRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string FindSimilarFacesRequest::getSetId()const
{
	return setId_;
}

void FindSimilarFacesRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", std::to_string(setId));
}

std::string FindSimilarFacesRequest::getFaceId()const
{
	return faceId_;
}

void FindSimilarFacesRequest::setFaceId(const std::string& faceId)
{
	faceId_ = faceId;
	setCoreParameter("FaceId", std::to_string(faceId));
}

std::string FindSimilarFacesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void FindSimilarFacesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}


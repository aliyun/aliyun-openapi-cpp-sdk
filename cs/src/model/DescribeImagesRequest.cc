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

#include <alibabacloud/cs/model/DescribeImagesRequest.h>

using AlibabaCloud::CS::Model::DescribeImagesRequest;

DescribeImagesRequest::DescribeImagesRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{}

DescribeImagesRequest::~DescribeImagesRequest()
{}

std::string DescribeImagesRequest::getRegionID()const
{
	return regionID_;
}

void DescribeImagesRequest::setRegionID(const std::string& regionID)
{
	regionID_ = regionID;
	setParameter("RegionID", regionID);
}

std::string DescribeImagesRequest::getImageName()const
{
	return imageName_;
}

void DescribeImagesRequest::setImageName(const std::string& imageName)
{
	imageName_ = imageName;
	setParameter("ImageName", imageName);
}

std::string DescribeImagesRequest::getDockerVersion()const
{
	return dockerVersion_;
}

void DescribeImagesRequest::setDockerVersion(const std::string& dockerVersion)
{
	dockerVersion_ = dockerVersion;
	setParameter("DockerVersion", dockerVersion);
}


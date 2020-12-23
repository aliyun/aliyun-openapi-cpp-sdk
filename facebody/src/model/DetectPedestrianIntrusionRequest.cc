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

#include <alibabacloud/facebody/model/DetectPedestrianIntrusionRequest.h>

using AlibabaCloud::Facebody::Model::DetectPedestrianIntrusionRequest;

DetectPedestrianIntrusionRequest::DetectPedestrianIntrusionRequest() :
	RpcServiceRequest("facebody", "2019-12-30", "DetectPedestrianIntrusion")
{
	setMethod(HttpRequest::Method::Post);
}

DetectPedestrianIntrusionRequest::~DetectPedestrianIntrusionRequest()
{}

Array DetectPedestrianIntrusionRequest::getDetectRegion()const
{
	return detectRegion_;
}

void DetectPedestrianIntrusionRequest::setDetectRegion(const Array& detectRegion)
{
	detectRegion_ = detectRegion;
	setBodyParameter("DetectRegion", std::to_string(detectRegion));
}

std::string DetectPedestrianIntrusionRequest::getRegionType()const
{
	return regionType_;
}

void DetectPedestrianIntrusionRequest::setRegionType(const std::string& regionType)
{
	regionType_ = regionType;
	setBodyParameter("RegionType", regionType);
}

std::string DetectPedestrianIntrusionRequest::getImageURL()const
{
	return imageURL_;
}

void DetectPedestrianIntrusionRequest::setImageURL(const std::string& imageURL)
{
	imageURL_ = imageURL;
	setBodyParameter("ImageURL", imageURL);
}


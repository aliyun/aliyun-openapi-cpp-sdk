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

#include <alibabacloud/objectdet/model/DetectVehicleICongestionRequest.h>

using AlibabaCloud::Objectdet::Model::DetectVehicleICongestionRequest;

DetectVehicleICongestionRequest::DetectVehicleICongestionRequest() :
	RpcServiceRequest("objectdet", "2019-12-30", "DetectVehicleICongestion")
{
	setMethod(HttpRequest::Method::Post);
}

DetectVehicleICongestionRequest::~DetectVehicleICongestionRequest()
{}

Array DetectVehicleICongestionRequest::getRoadRegions()const
{
	return roadRegions_;
}

void DetectVehicleICongestionRequest::setRoadRegions(const Array& roadRegions)
{
	roadRegions_ = roadRegions;
	setBodyParameter("RoadRegions", std::to_string(roadRegions));
}

std::string DetectVehicleICongestionRequest::getOriginRequestId()const
{
	return originRequestId_;
}

void DetectVehicleICongestionRequest::setOriginRequestId(const std::string& originRequestId)
{
	originRequestId_ = originRequestId;
	setParameter("OriginRequestId", originRequestId);
}

Array DetectVehicleICongestionRequest::getPreRegionIntersectFeatures()const
{
	return preRegionIntersectFeatures_;
}

void DetectVehicleICongestionRequest::setPreRegionIntersectFeatures(const Array& preRegionIntersectFeatures)
{
	preRegionIntersectFeatures_ = preRegionIntersectFeatures;
	setBodyParameter("PreRegionIntersectFeatures", std::to_string(preRegionIntersectFeatures));
}

std::string DetectVehicleICongestionRequest::getStreamArn()const
{
	return streamArn_;
}

void DetectVehicleICongestionRequest::setStreamArn(const std::string& streamArn)
{
	streamArn_ = streamArn;
	setParameter("StreamArn", streamArn);
}

std::string DetectVehicleICongestionRequest::getImageURL()const
{
	return imageURL_;
}

void DetectVehicleICongestionRequest::setImageURL(const std::string& imageURL)
{
	imageURL_ = imageURL;
	setBodyParameter("ImageURL", imageURL);
}


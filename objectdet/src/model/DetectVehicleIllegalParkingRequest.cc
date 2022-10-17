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

#include <alibabacloud/objectdet/model/DetectVehicleIllegalParkingRequest.h>

using AlibabaCloud::Objectdet::Model::DetectVehicleIllegalParkingRequest;

DetectVehicleIllegalParkingRequest::DetectVehicleIllegalParkingRequest() :
	RpcServiceRequest("objectdet", "2019-12-30", "DetectVehicleIllegalParking")
{
	setMethod(HttpRequest::Method::Post);
}

DetectVehicleIllegalParkingRequest::~DetectVehicleIllegalParkingRequest()
{}

bool DetectVehicleIllegalParkingRequest::getFormatResultToJson()const
{
	return formatResultToJson_;
}

void DetectVehicleIllegalParkingRequest::setFormatResultToJson(bool formatResultToJson)
{
	formatResultToJson_ = formatResultToJson;
	setParameter("FormatResultToJson", formatResultToJson ? "true" : "false");
}

Array DetectVehicleIllegalParkingRequest::getRoadRegions()const
{
	return roadRegions_;
}

void DetectVehicleIllegalParkingRequest::setRoadRegions(const Array& roadRegions)
{
	roadRegions_ = roadRegions;
	setBodyParameter("RoadRegions", std::to_string(roadRegions));
}

std::string DetectVehicleIllegalParkingRequest::getOriginRequestId()const
{
	return originRequestId_;
}

void DetectVehicleIllegalParkingRequest::setOriginRequestId(const std::string& originRequestId)
{
	originRequestId_ = originRequestId;
	setParameter("OriginRequestId", originRequestId);
}

std::string DetectVehicleIllegalParkingRequest::getOssFile()const
{
	return ossFile_;
}

void DetectVehicleIllegalParkingRequest::setOssFile(const std::string& ossFile)
{
	ossFile_ = ossFile;
	setParameter("OssFile", ossFile);
}

std::string DetectVehicleIllegalParkingRequest::getRequestProxyBy()const
{
	return requestProxyBy_;
}

void DetectVehicleIllegalParkingRequest::setRequestProxyBy(const std::string& requestProxyBy)
{
	requestProxyBy_ = requestProxyBy;
	setParameter("RequestProxyBy", requestProxyBy);
}

std::string DetectVehicleIllegalParkingRequest::getStreamArn()const
{
	return streamArn_;
}

void DetectVehicleIllegalParkingRequest::setStreamArn(const std::string& streamArn)
{
	streamArn_ = streamArn;
	setParameter("StreamArn", streamArn);
}

std::string DetectVehicleIllegalParkingRequest::getImageURL()const
{
	return imageURL_;
}

void DetectVehicleIllegalParkingRequest::setImageURL(const std::string& imageURL)
{
	imageURL_ = imageURL;
	setBodyParameter("ImageURL", imageURL);
}


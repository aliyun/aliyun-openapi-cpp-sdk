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

#include <alibabacloud/live/model/DescribeLiveDetectPornDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDetectPornDataRequest;

DescribeLiveDetectPornDataRequest::DescribeLiveDetectPornDataRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveDetectPornData")
{}

DescribeLiveDetectPornDataRequest::~DescribeLiveDetectPornDataRequest()
{}

std::string DescribeLiveDetectPornDataRequest::getFee()const
{
	return fee_;
}

void DescribeLiveDetectPornDataRequest::setFee(const std::string& fee)
{
	fee_ = fee;
	setCoreParameter("Fee", fee);
}

std::string DescribeLiveDetectPornDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveDetectPornDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeLiveDetectPornDataRequest::getScene()const
{
	return scene_;
}

void DescribeLiveDetectPornDataRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setCoreParameter("Scene", scene);
}

std::string DescribeLiveDetectPornDataRequest::getStream()const
{
	return stream_;
}

void DescribeLiveDetectPornDataRequest::setStream(const std::string& stream)
{
	stream_ = stream;
	setCoreParameter("Stream", stream);
}

std::string DescribeLiveDetectPornDataRequest::getSplitBy()const
{
	return splitBy_;
}

void DescribeLiveDetectPornDataRequest::setSplitBy(const std::string& splitBy)
{
	splitBy_ = splitBy;
	setCoreParameter("SplitBy", splitBy);
}

std::string DescribeLiveDetectPornDataRequest::getApp()const
{
	return app_;
}

void DescribeLiveDetectPornDataRequest::setApp(const std::string& app)
{
	app_ = app;
	setCoreParameter("App", app);
}

std::string DescribeLiveDetectPornDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveDetectPornDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeLiveDetectPornDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveDetectPornDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeLiveDetectPornDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveDetectPornDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveDetectPornDataRequest::getRegion()const
{
	return region_;
}

void DescribeLiveDetectPornDataRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", region);
}


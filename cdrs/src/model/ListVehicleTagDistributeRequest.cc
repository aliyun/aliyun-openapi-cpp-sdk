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

#include <alibabacloud/cdrs/model/ListVehicleTagDistributeRequest.h>

using AlibabaCloud::CDRS::Model::ListVehicleTagDistributeRequest;

ListVehicleTagDistributeRequest::ListVehicleTagDistributeRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListVehicleTagDistribute")
{
	setMethod(HttpRequest::Method::Post);
}

ListVehicleTagDistributeRequest::~ListVehicleTagDistributeRequest()
{}

std::string ListVehicleTagDistributeRequest::getCorpId()const
{
	return corpId_;
}

void ListVehicleTagDistributeRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListVehicleTagDistributeRequest::getEndTime()const
{
	return endTime_;
}

void ListVehicleTagDistributeRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListVehicleTagDistributeRequest::getStartTime()const
{
	return startTime_;
}

void ListVehicleTagDistributeRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string ListVehicleTagDistributeRequest::getTagCode()const
{
	return tagCode_;
}

void ListVehicleTagDistributeRequest::setTagCode(const std::string& tagCode)
{
	tagCode_ = tagCode;
	setBodyParameter("TagCode", tagCode);
}


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

#include <alibabacloud/cdrs/model/ValidateTrajectoryRequest.h>

using AlibabaCloud::CDRS::Model::ValidateTrajectoryRequest;

ValidateTrajectoryRequest::ValidateTrajectoryRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ValidateTrajectory")
{
	setMethod(HttpRequest::Method::Post);
}

ValidateTrajectoryRequest::~ValidateTrajectoryRequest()
{}

std::string ValidateTrajectoryRequest::getCorpId()const
{
	return corpId_;
}

void ValidateTrajectoryRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ValidateTrajectoryRequest::getEndTime()const
{
	return endTime_;
}

void ValidateTrajectoryRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ValidateTrajectoryRequest::getIdValue()const
{
	return idValue_;
}

void ValidateTrajectoryRequest::setIdValue(const std::string& idValue)
{
	idValue_ = idValue;
	setBodyParameter("IdValue", idValue);
}

std::string ValidateTrajectoryRequest::getStartTime()const
{
	return startTime_;
}

void ValidateTrajectoryRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string ValidateTrajectoryRequest::getIdType()const
{
	return idType_;
}

void ValidateTrajectoryRequest::setIdType(const std::string& idType)
{
	idType_ = idType;
	setBodyParameter("IdType", idType);
}


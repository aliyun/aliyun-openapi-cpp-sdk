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

#include <alibabacloud/cdrs/model/RecallTrajectoryByIdRequest.h>

using AlibabaCloud::CDRS::Model::RecallTrajectoryByIdRequest;

RecallTrajectoryByIdRequest::RecallTrajectoryByIdRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "RecallTrajectoryById")
{
	setMethod(HttpRequest::Method::Post);
}

RecallTrajectoryByIdRequest::~RecallTrajectoryByIdRequest()
{}

std::string RecallTrajectoryByIdRequest::getCorpId()const
{
	return corpId_;
}

void RecallTrajectoryByIdRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string RecallTrajectoryByIdRequest::getEndTime()const
{
	return endTime_;
}

void RecallTrajectoryByIdRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string RecallTrajectoryByIdRequest::getIdValue()const
{
	return idValue_;
}

void RecallTrajectoryByIdRequest::setIdValue(const std::string& idValue)
{
	idValue_ = idValue;
	setBodyParameter("IdValue", idValue);
}

int RecallTrajectoryByIdRequest::getDeltaDistance()const
{
	return deltaDistance_;
}

void RecallTrajectoryByIdRequest::setDeltaDistance(int deltaDistance)
{
	deltaDistance_ = deltaDistance;
	setBodyParameter("DeltaDistance", std::to_string(deltaDistance));
}

std::string RecallTrajectoryByIdRequest::getStartTime()const
{
	return startTime_;
}

void RecallTrajectoryByIdRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string RecallTrajectoryByIdRequest::getIdType()const
{
	return idType_;
}

void RecallTrajectoryByIdRequest::setIdType(const std::string& idType)
{
	idType_ = idType;
	setBodyParameter("IdType", idType);
}

std::vector<std::string> RecallTrajectoryByIdRequest::getOutputIdTypeList()const
{
	return outputIdTypeList_;
}

void RecallTrajectoryByIdRequest::setOutputIdTypeList(const std::vector<std::string>& outputIdTypeList)
{
	outputIdTypeList_ = outputIdTypeList;
	for(int dep1 = 0; dep1!= outputIdTypeList.size(); dep1++) {
		setBodyParameter("OutputIdTypeList."+ std::to_string(dep1), outputIdTypeList.at(dep1));
	}
}

int RecallTrajectoryByIdRequest::getDeltaTime()const
{
	return deltaTime_;
}

void RecallTrajectoryByIdRequest::setDeltaTime(int deltaTime)
{
	deltaTime_ = deltaTime;
	setBodyParameter("DeltaTime", std::to_string(deltaTime));
}

int RecallTrajectoryByIdRequest::getOutputIdCount()const
{
	return outputIdCount_;
}

void RecallTrajectoryByIdRequest::setOutputIdCount(int outputIdCount)
{
	outputIdCount_ = outputIdCount;
	setBodyParameter("OutputIdCount", std::to_string(outputIdCount));
}


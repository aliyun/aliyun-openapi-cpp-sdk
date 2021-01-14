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

#include <alibabacloud/cdrs/model/IntersectTrajectoryRequest.h>

using AlibabaCloud::CDRS::Model::IntersectTrajectoryRequest;

IntersectTrajectoryRequest::IntersectTrajectoryRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "IntersectTrajectory")
{
	setMethod(HttpRequest::Method::Post);
}

IntersectTrajectoryRequest::~IntersectTrajectoryRequest()
{}

std::string IntersectTrajectoryRequest::getCorpId()const
{
	return corpId_;
}

void IntersectTrajectoryRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string IntersectTrajectoryRequest::getEndTime()const
{
	return endTime_;
}

void IntersectTrajectoryRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

int IntersectTrajectoryRequest::getDeltaDistance()const
{
	return deltaDistance_;
}

void IntersectTrajectoryRequest::setDeltaDistance(int deltaDistance)
{
	deltaDistance_ = deltaDistance;
	setBodyParameter("DeltaDistance", std::to_string(deltaDistance));
}

std::string IntersectTrajectoryRequest::getStartTime()const
{
	return startTime_;
}

void IntersectTrajectoryRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

int IntersectTrajectoryRequest::getDeltaTime()const
{
	return deltaTime_;
}

void IntersectTrajectoryRequest::setDeltaTime(int deltaTime)
{
	deltaTime_ = deltaTime;
	setBodyParameter("DeltaTime", std::to_string(deltaTime));
}

std::vector<IntersectTrajectoryRequest::IdList> IntersectTrajectoryRequest::getIdList()const
{
	return idList_;
}

void IntersectTrajectoryRequest::setIdList(const std::vector<IdList>& idList)
{
	idList_ = idList;
	for(int dep1 = 0; dep1!= idList.size(); dep1++) {
		auto idListObj = idList.at(dep1);
		std::string idListObjStr = "IdList." + std::to_string(dep1 + 1);
		setParameter(idListObjStr + ".IdType", idListObj.idType);
		setParameter(idListObjStr + ".IdValue", idListObj.idValue);
	}
}


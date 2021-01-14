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

#include <alibabacloud/cdrs/model/RecallTrajectoryByCoordinateRequest.h>

using AlibabaCloud::CDRS::Model::RecallTrajectoryByCoordinateRequest;

RecallTrajectoryByCoordinateRequest::RecallTrajectoryByCoordinateRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "RecallTrajectoryByCoordinate")
{
	setMethod(HttpRequest::Method::Post);
}

RecallTrajectoryByCoordinateRequest::~RecallTrajectoryByCoordinateRequest()
{}

std::string RecallTrajectoryByCoordinateRequest::getCorpId()const
{
	return corpId_;
}

void RecallTrajectoryByCoordinateRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::vector<RecallTrajectoryByCoordinateRequest::PointList> RecallTrajectoryByCoordinateRequest::getPointList()const
{
	return pointList_;
}

void RecallTrajectoryByCoordinateRequest::setPointList(const std::vector<PointList>& pointList)
{
	pointList_ = pointList;
	for(int dep1 = 0; dep1!= pointList.size(); dep1++) {
		auto pointListObj = pointList.at(dep1);
		std::string pointListObjStr = "PointList." + std::to_string(dep1 + 1);
		setParameter(pointListObjStr + ".Latitude", std::to_string(pointListObj.latitude));
		setParameter(pointListObjStr + ".Longitude", std::to_string(pointListObj.longitude));
	}
}

std::string RecallTrajectoryByCoordinateRequest::getEndTime()const
{
	return endTime_;
}

void RecallTrajectoryByCoordinateRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

int RecallTrajectoryByCoordinateRequest::getDeltaDistance()const
{
	return deltaDistance_;
}

void RecallTrajectoryByCoordinateRequest::setDeltaDistance(int deltaDistance)
{
	deltaDistance_ = deltaDistance;
	setBodyParameter("DeltaDistance", std::to_string(deltaDistance));
}

std::string RecallTrajectoryByCoordinateRequest::getStartTime()const
{
	return startTime_;
}

void RecallTrajectoryByCoordinateRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::vector<std::string> RecallTrajectoryByCoordinateRequest::getOutputIdTypeList()const
{
	return outputIdTypeList_;
}

void RecallTrajectoryByCoordinateRequest::setOutputIdTypeList(const std::vector<std::string>& outputIdTypeList)
{
	outputIdTypeList_ = outputIdTypeList;
	for(int dep1 = 0; dep1!= outputIdTypeList.size(); dep1++) {
		setBodyParameter("OutputIdTypeList."+ std::to_string(dep1), outputIdTypeList.at(dep1));
	}
}

int RecallTrajectoryByCoordinateRequest::getDeltaTime()const
{
	return deltaTime_;
}

void RecallTrajectoryByCoordinateRequest::setDeltaTime(int deltaTime)
{
	deltaTime_ = deltaTime;
	setBodyParameter("DeltaTime", std::to_string(deltaTime));
}

int RecallTrajectoryByCoordinateRequest::getOutputIdCount()const
{
	return outputIdCount_;
}

void RecallTrajectoryByCoordinateRequest::setOutputIdCount(int outputIdCount)
{
	outputIdCount_ = outputIdCount;
	setBodyParameter("OutputIdCount", std::to_string(outputIdCount));
}


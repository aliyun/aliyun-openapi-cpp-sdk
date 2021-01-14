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

#include <alibabacloud/cdrs/model/QueryTrajectoryByIdRequest.h>

using AlibabaCloud::CDRS::Model::QueryTrajectoryByIdRequest;

QueryTrajectoryByIdRequest::QueryTrajectoryByIdRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "QueryTrajectoryById")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTrajectoryByIdRequest::~QueryTrajectoryByIdRequest()
{}

std::string QueryTrajectoryByIdRequest::getCorpId()const
{
	return corpId_;
}

void QueryTrajectoryByIdRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string QueryTrajectoryByIdRequest::getEndTime()const
{
	return endTime_;
}

void QueryTrajectoryByIdRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string QueryTrajectoryByIdRequest::getStartTime()const
{
	return startTime_;
}

void QueryTrajectoryByIdRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::vector<QueryTrajectoryByIdRequest::DeviceList> QueryTrajectoryByIdRequest::getDeviceList()const
{
	return deviceList_;
}

void QueryTrajectoryByIdRequest::setDeviceList(const std::vector<DeviceList>& deviceList)
{
	deviceList_ = deviceList;
	for(int dep1 = 0; dep1!= deviceList.size(); dep1++) {
		auto deviceListObj = deviceList.at(dep1);
		std::string deviceListObjStr = "DeviceList." + std::to_string(dep1 + 1);
		setParameter(deviceListObjStr + ".DeviceId", deviceListObj.deviceId);
	}
}

std::vector<QueryTrajectoryByIdRequest::IdList> QueryTrajectoryByIdRequest::getIdList()const
{
	return idList_;
}

void QueryTrajectoryByIdRequest::setIdList(const std::vector<IdList>& idList)
{
	idList_ = idList;
	for(int dep1 = 0; dep1!= idList.size(); dep1++) {
		auto idListObj = idList.at(dep1);
		std::string idListObjStr = "IdList." + std::to_string(dep1 + 1);
		setParameter(idListObjStr + ".IdType", idListObj.idType);
		setParameter(idListObjStr + ".IdValue", idListObj.idValue);
	}
}


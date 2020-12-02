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

#include <alibabacloud/idrsservice/model/CreateStatisticsRecordRequest.h>

using AlibabaCloud::Idrsservice::Model::CreateStatisticsRecordRequest;

CreateStatisticsRecordRequest::CreateStatisticsRecordRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "CreateStatisticsRecord")
{
	setMethod(HttpRequest::Method::Post);
}

CreateStatisticsRecordRequest::~CreateStatisticsRecordRequest()
{}

std::string CreateStatisticsRecordRequest::getBeginAt()const
{
	return beginAt_;
}

void CreateStatisticsRecordRequest::setBeginAt(const std::string& beginAt)
{
	beginAt_ = beginAt;
	setParameter("BeginAt", beginAt);
}

std::string CreateStatisticsRecordRequest::getClientToken()const
{
	return clientToken_;
}

void CreateStatisticsRecordRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateStatisticsRecordRequest::getEndAt()const
{
	return endAt_;
}

void CreateStatisticsRecordRequest::setEndAt(const std::string& endAt)
{
	endAt_ = endAt;
	setParameter("EndAt", endAt);
}

std::string CreateStatisticsRecordRequest::getDeviceId()const
{
	return deviceId_;
}

void CreateStatisticsRecordRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

int CreateStatisticsRecordRequest::getDeviceType()const
{
	return deviceType_;
}

void CreateStatisticsRecordRequest::setDeviceType(int deviceType)
{
	deviceType_ = deviceType;
	setParameter("DeviceType", std::to_string(deviceType));
}

std::string CreateStatisticsRecordRequest::getAppId()const
{
	return appId_;
}

void CreateStatisticsRecordRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}


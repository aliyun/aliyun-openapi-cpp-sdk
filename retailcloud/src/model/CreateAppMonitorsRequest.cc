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

#include <alibabacloud/retailcloud/model/CreateAppMonitorsRequest.h>

using AlibabaCloud::Retailcloud::Model::CreateAppMonitorsRequest;

CreateAppMonitorsRequest::CreateAppMonitorsRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "CreateAppMonitors")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAppMonitorsRequest::~CreateAppMonitorsRequest()
{}

std::vector<long> CreateAppMonitorsRequest::getAppIds()const
{
	return appIds_;
}

void CreateAppMonitorsRequest::setAppIds(const std::vector<long>& appIds)
{
	appIds_ = appIds;
	for(int dep1 = 0; dep1!= appIds.size(); dep1++) {
		setBodyParameter("AppIds."+ std::to_string(dep1), std::to_string(appIds.at(dep1)));
	}
}

long CreateAppMonitorsRequest::getMainUserId()const
{
	return mainUserId_;
}

void CreateAppMonitorsRequest::setMainUserId(long mainUserId)
{
	mainUserId_ = mainUserId;
	setParameter("MainUserId", std::to_string(mainUserId));
}

int CreateAppMonitorsRequest::getEnvType()const
{
	return envType_;
}

void CreateAppMonitorsRequest::setEnvType(int envType)
{
	envType_ = envType;
	setParameter("EnvType", std::to_string(envType));
}

long CreateAppMonitorsRequest::getAlarmTemplateId()const
{
	return alarmTemplateId_;
}

void CreateAppMonitorsRequest::setAlarmTemplateId(long alarmTemplateId)
{
	alarmTemplateId_ = alarmTemplateId;
	setParameter("AlarmTemplateId", std::to_string(alarmTemplateId));
}

std::string CreateAppMonitorsRequest::getSilenceTime()const
{
	return silenceTime_;
}

void CreateAppMonitorsRequest::setSilenceTime(const std::string& silenceTime)
{
	silenceTime_ = silenceTime;
	setParameter("SilenceTime", silenceTime);
}


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

#include <alibabacloud/retailcloud/model/UpdateAppMonitorsRequest.h>

using AlibabaCloud::Retailcloud::Model::UpdateAppMonitorsRequest;

UpdateAppMonitorsRequest::UpdateAppMonitorsRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "UpdateAppMonitors")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateAppMonitorsRequest::~UpdateAppMonitorsRequest()
{}

long UpdateAppMonitorsRequest::getMainUserId()const
{
	return mainUserId_;
}

void UpdateAppMonitorsRequest::setMainUserId(long mainUserId)
{
	mainUserId_ = mainUserId;
	setBodyParameter("MainUserId", std::to_string(mainUserId));
}

std::string UpdateAppMonitorsRequest::getSilenceTime()const
{
	return silenceTime_;
}

void UpdateAppMonitorsRequest::setSilenceTime(const std::string& silenceTime)
{
	silenceTime_ = silenceTime;
	setBodyParameter("SilenceTime", silenceTime);
}

std::vector<long> UpdateAppMonitorsRequest::getMonitorIds()const
{
	return monitorIds_;
}

void UpdateAppMonitorsRequest::setMonitorIds(const std::vector<long>& monitorIds)
{
	monitorIds_ = monitorIds;
	for(int dep1 = 0; dep1!= monitorIds.size(); dep1++) {
		setBodyParameter("MonitorIds."+ std::to_string(dep1), std::to_string(monitorIds.at(dep1)));
	}
}

long UpdateAppMonitorsRequest::getTemplateId()const
{
	return templateId_;
}

void UpdateAppMonitorsRequest::setTemplateId(long templateId)
{
	templateId_ = templateId;
	setBodyParameter("TemplateId", std::to_string(templateId));
}


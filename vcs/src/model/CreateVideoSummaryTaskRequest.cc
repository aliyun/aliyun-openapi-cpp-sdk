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

#include <alibabacloud/vcs/model/CreateVideoSummaryTaskRequest.h>

using AlibabaCloud::Vcs::Model::CreateVideoSummaryTaskRequest;

CreateVideoSummaryTaskRequest::CreateVideoSummaryTaskRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "CreateVideoSummaryTask")
{
	setMethod(HttpRequest::Method::Post);
}

CreateVideoSummaryTaskRequest::~CreateVideoSummaryTaskRequest()
{}

std::string CreateVideoSummaryTaskRequest::getCorpId()const
{
	return corpId_;
}

void CreateVideoSummaryTaskRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string CreateVideoSummaryTaskRequest::getLiveVideoSummary()const
{
	return liveVideoSummary_;
}

void CreateVideoSummaryTaskRequest::setLiveVideoSummary(const std::string& liveVideoSummary)
{
	liveVideoSummary_ = liveVideoSummary;
	setBodyParameter("LiveVideoSummary", liveVideoSummary);
}

long CreateVideoSummaryTaskRequest::getStartTimeStamp()const
{
	return startTimeStamp_;
}

void CreateVideoSummaryTaskRequest::setStartTimeStamp(long startTimeStamp)
{
	startTimeStamp_ = startTimeStamp;
	setBodyParameter("StartTimeStamp", std::to_string(startTimeStamp));
}

std::string CreateVideoSummaryTaskRequest::getDeviceId()const
{
	return deviceId_;
}

void CreateVideoSummaryTaskRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setBodyParameter("DeviceId", deviceId);
}

long CreateVideoSummaryTaskRequest::getEndTimeStamp()const
{
	return endTimeStamp_;
}

void CreateVideoSummaryTaskRequest::setEndTimeStamp(long endTimeStamp)
{
	endTimeStamp_ = endTimeStamp;
	setBodyParameter("EndTimeStamp", std::to_string(endTimeStamp));
}

std::string CreateVideoSummaryTaskRequest::getOptionList()const
{
	return optionList_;
}

void CreateVideoSummaryTaskRequest::setOptionList(const std::string& optionList)
{
	optionList_ = optionList;
	setBodyParameter("OptionList", optionList);
}


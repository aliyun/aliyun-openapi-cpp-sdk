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

#include <alibabacloud/ccc/model/GetSurveyRequest.h>

using AlibabaCloud::CCC::Model::GetSurveyRequest;

GetSurveyRequest::GetSurveyRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetSurvey")
{}

GetSurveyRequest::~GetSurveyRequest()
{}

std::string GetSurveyRequest::getSurveyId()const
{
	return surveyId_;
}

void GetSurveyRequest::setSurveyId(const std::string& surveyId)
{
	surveyId_ = surveyId;
	setCoreParameter("SurveyId", surveyId);
}

std::string GetSurveyRequest::getInstanceId()const
{
	return instanceId_;
}

void GetSurveyRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string GetSurveyRequest::getScenarioId()const
{
	return scenarioId_;
}

void GetSurveyRequest::setScenarioId(const std::string& scenarioId)
{
	scenarioId_ = scenarioId;
	setCoreParameter("ScenarioId", scenarioId);
}


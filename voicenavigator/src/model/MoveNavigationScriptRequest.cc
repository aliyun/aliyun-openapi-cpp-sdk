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

#include <alibabacloud/voicenavigator/model/MoveNavigationScriptRequest.h>

using AlibabaCloud::VoiceNavigator::Model::MoveNavigationScriptRequest;

MoveNavigationScriptRequest::MoveNavigationScriptRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "MoveNavigationScript")
{
	setMethod(HttpRequest::Method::Post);
}

MoveNavigationScriptRequest::~MoveNavigationScriptRequest()
{}

std::string MoveNavigationScriptRequest::getInstanceId()const
{
	return instanceId_;
}

void MoveNavigationScriptRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string MoveNavigationScriptRequest::getNavigationScriptId()const
{
	return navigationScriptId_;
}

void MoveNavigationScriptRequest::setNavigationScriptId(const std::string& navigationScriptId)
{
	navigationScriptId_ = navigationScriptId;
	setParameter("NavigationScriptId", navigationScriptId);
}

std::string MoveNavigationScriptRequest::getTargetCategoryId()const
{
	return targetCategoryId_;
}

void MoveNavigationScriptRequest::setTargetCategoryId(const std::string& targetCategoryId)
{
	targetCategoryId_ = targetCategoryId;
	setParameter("TargetCategoryId", targetCategoryId);
}


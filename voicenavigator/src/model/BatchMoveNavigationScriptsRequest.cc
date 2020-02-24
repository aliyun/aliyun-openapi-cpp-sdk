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

#include <alibabacloud/voicenavigator/model/BatchMoveNavigationScriptsRequest.h>

using AlibabaCloud::VoiceNavigator::Model::BatchMoveNavigationScriptsRequest;

BatchMoveNavigationScriptsRequest::BatchMoveNavigationScriptsRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "BatchMoveNavigationScripts")
{
	setMethod(HttpRequest::Method::Post);
}

BatchMoveNavigationScriptsRequest::~BatchMoveNavigationScriptsRequest()
{}

std::vector<std::string> BatchMoveNavigationScriptsRequest::getNavigationScriptIds()const
{
	return navigationScriptIds_;
}

void BatchMoveNavigationScriptsRequest::setNavigationScriptIds(const std::vector<std::string>& navigationScriptIds)
{
	navigationScriptIds_ = navigationScriptIds;
	for(int dep1 = 0; dep1!= navigationScriptIds.size(); dep1++) {
		setParameter("NavigationScriptIds."+ std::to_string(dep1), navigationScriptIds.at(dep1));
	}
}

std::string BatchMoveNavigationScriptsRequest::getInstanceId()const
{
	return instanceId_;
}

void BatchMoveNavigationScriptsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string BatchMoveNavigationScriptsRequest::getTargetCategoryId()const
{
	return targetCategoryId_;
}

void BatchMoveNavigationScriptsRequest::setTargetCategoryId(const std::string& targetCategoryId)
{
	targetCategoryId_ = targetCategoryId;
	setParameter("TargetCategoryId", targetCategoryId);
}


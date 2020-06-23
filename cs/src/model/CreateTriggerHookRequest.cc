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

#include <alibabacloud/cs/model/CreateTriggerHookRequest.h>

using AlibabaCloud::CS::Model::CreateTriggerHookRequest;

CreateTriggerHookRequest::CreateTriggerHookRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/hook/trigger");
	setMethod(HttpRequest::Method::Put);
}

CreateTriggerHookRequest::~CreateTriggerHookRequest()
{}

std::string CreateTriggerHookRequest::getCluster_id()const
{
	return cluster_id_;
}

void CreateTriggerHookRequest::setCluster_id(const std::string& cluster_id)
{
	cluster_id_ = cluster_id;
	setBodyParameter("Cluster_id", cluster_id);
}

std::string CreateTriggerHookRequest::getProject_id()const
{
	return project_id_;
}

void CreateTriggerHookRequest::setProject_id(const std::string& project_id)
{
	project_id_ = project_id;
	setBodyParameter("Project_id", project_id);
}

std::string CreateTriggerHookRequest::getTrigger_url()const
{
	return trigger_url_;
}

void CreateTriggerHookRequest::setTrigger_url(const std::string& trigger_url)
{
	trigger_url_ = trigger_url;
	setBodyParameter("Trigger_url", trigger_url);
}

std::string CreateTriggerHookRequest::getRegion_id()const
{
	return region_id_;
}

void CreateTriggerHookRequest::setRegion_id(const std::string& region_id)
{
	region_id_ = region_id;
	setBodyParameter("Region_id", region_id);
}

std::string CreateTriggerHookRequest::getAction()const
{
	return action_;
}

void CreateTriggerHookRequest::setAction(const std::string& action)
{
	action_ = action;
	setBodyParameter("Action", action);
}


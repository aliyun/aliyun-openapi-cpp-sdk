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

#include <alibabacloud/airec/model/ListRulesRequest.h>

using AlibabaCloud::Airec::Model::ListRulesRequest;

ListRulesRequest::ListRulesRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/rules");
	setMethod(HttpRequest::Method::Get);
}

ListRulesRequest::~ListRulesRequest()
{}

std::string ListRulesRequest::getInstanceId()const
{
	return instanceId_;
}

void ListRulesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListRulesRequest::getSize()const
{
	return size_;
}

void ListRulesRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string ListRulesRequest::getRuleType()const
{
	return ruleType_;
}

void ListRulesRequest::setRuleType(const std::string& ruleType)
{
	ruleType_ = ruleType;
	setParameter("RuleType", ruleType);
}

std::string ListRulesRequest::getSceneId()const
{
	return sceneId_;
}

void ListRulesRequest::setSceneId(const std::string& sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", sceneId);
}

long ListRulesRequest::getEndTime()const
{
	return endTime_;
}

void ListRulesRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

int ListRulesRequest::getPage()const
{
	return page_;
}

void ListRulesRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

long ListRulesRequest::getStartTime()const
{
	return startTime_;
}

void ListRulesRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string ListRulesRequest::getStatus()const
{
	return status_;
}

void ListRulesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}


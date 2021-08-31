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

#include <alibabacloud/edas/model/UpdateMockRuleRequest.h>

using AlibabaCloud::Edas::Model::UpdateMockRuleRequest;

UpdateMockRuleRequest::UpdateMockRuleRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/sp/api/mock/updateMockRule");
	setMethod(HttpRequest::Method::Post);
}

UpdateMockRuleRequest::~UpdateMockRuleRequest()
{}

std::string UpdateMockRuleRequest::getScMockItemJson()const
{
	return scMockItemJson_;
}

void UpdateMockRuleRequest::setScMockItemJson(const std::string& scMockItemJson)
{
	scMockItemJson_ = scMockItemJson;
	setParameter("ScMockItemJson", scMockItemJson);
}

std::string UpdateMockRuleRequest::getDubboMockItemJson()const
{
	return dubboMockItemJson_;
}

void UpdateMockRuleRequest::setDubboMockItemJson(const std::string& dubboMockItemJson)
{
	dubboMockItemJson_ = dubboMockItemJson;
	setParameter("DubboMockItemJson", dubboMockItemJson);
}

std::string UpdateMockRuleRequest::getExtraJson()const
{
	return extraJson_;
}

void UpdateMockRuleRequest::setExtraJson(const std::string& extraJson)
{
	extraJson_ = extraJson;
	setParameter("ExtraJson", extraJson);
}

std::string UpdateMockRuleRequest::getName()const
{
	return name_;
}

void UpdateMockRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateMockRuleRequest::getId()const
{
	return id_;
}

void UpdateMockRuleRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string UpdateMockRuleRequest::getRegion()const
{
	return region_;
}

void UpdateMockRuleRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}


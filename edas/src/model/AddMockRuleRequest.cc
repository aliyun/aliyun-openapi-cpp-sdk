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

#include <alibabacloud/edas/model/AddMockRuleRequest.h>

using AlibabaCloud::Edas::Model::AddMockRuleRequest;

AddMockRuleRequest::AddMockRuleRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/sp/api/mock/addMockRule");
	setMethod(HttpRequest::Method::Post);
}

AddMockRuleRequest::~AddMockRuleRequest()
{}

std::string AddMockRuleRequest::getScMockItemJson()const
{
	return scMockItemJson_;
}

void AddMockRuleRequest::setScMockItemJson(const std::string& scMockItemJson)
{
	scMockItemJson_ = scMockItemJson;
	setParameter("ScMockItemJson", scMockItemJson);
}

std::string AddMockRuleRequest::getDubboMockItemJson()const
{
	return dubboMockItemJson_;
}

void AddMockRuleRequest::setDubboMockItemJson(const std::string& dubboMockItemJson)
{
	dubboMockItemJson_ = dubboMockItemJson;
	setParameter("DubboMockItemJson", dubboMockItemJson);
}

std::string AddMockRuleRequest::getExtraJson()const
{
	return extraJson_;
}

void AddMockRuleRequest::setExtraJson(const std::string& extraJson)
{
	extraJson_ = extraJson;
	setParameter("ExtraJson", extraJson);
}

std::string AddMockRuleRequest::getProviderAppId()const
{
	return providerAppId_;
}

void AddMockRuleRequest::setProviderAppId(const std::string& providerAppId)
{
	providerAppId_ = providerAppId;
	setParameter("ProviderAppId", providerAppId);
}

std::string AddMockRuleRequest::getSource()const
{
	return source_;
}

void AddMockRuleRequest::setSource(const std::string& source)
{
	source_ = source;
	setParameter("Source", source);
}

std::string AddMockRuleRequest::getProviderAppName()const
{
	return providerAppName_;
}

void AddMockRuleRequest::setProviderAppName(const std::string& providerAppName)
{
	providerAppName_ = providerAppName;
	setParameter("ProviderAppName", providerAppName);
}

bool AddMockRuleRequest::getEnable()const
{
	return enable_;
}

void AddMockRuleRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", enable ? "true" : "false");
}

std::string AddMockRuleRequest::getName()const
{
	return name_;
}

void AddMockRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string AddMockRuleRequest::get_Namespace()const
{
	return _namespace_;
}

void AddMockRuleRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string AddMockRuleRequest::getConsumerAppsJson()const
{
	return consumerAppsJson_;
}

void AddMockRuleRequest::setConsumerAppsJson(const std::string& consumerAppsJson)
{
	consumerAppsJson_ = consumerAppsJson;
	setParameter("ConsumerAppsJson", consumerAppsJson);
}

std::string AddMockRuleRequest::getRegion()const
{
	return region_;
}

void AddMockRuleRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}


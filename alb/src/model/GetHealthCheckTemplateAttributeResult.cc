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

#include <alibabacloud/alb/model/GetHealthCheckTemplateAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

GetHealthCheckTemplateAttributeResult::GetHealthCheckTemplateAttributeResult() :
	ServiceResult()
{}

GetHealthCheckTemplateAttributeResult::GetHealthCheckTemplateAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHealthCheckTemplateAttributeResult::~GetHealthCheckTemplateAttributeResult()
{}

void GetHealthCheckTemplateAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["Key"].isNull())
			tagsObject.key = valueTagsTag["Key"].asString();
		if(!valueTagsTag["Value"].isNull())
			tagsObject.value = valueTagsTag["Value"].asString();
		tags_.push_back(tagsObject);
	}
	auto allHealthCheckHttpCodes = value["HealthCheckHttpCodes"]["httpCode"];
	for (const auto &item : allHealthCheckHttpCodes)
		healthCheckHttpCodes_.push_back(item.asString());
	auto allHealthCheckCodes = value["HealthCheckCodes"]["HealthCheckCode"];
	for (const auto &item : allHealthCheckCodes)
		healthCheckCodes_.push_back(item.asString());
	if(!value["HealthCheckConnectPort"].isNull())
		healthCheckConnectPort_ = std::stoi(value["HealthCheckConnectPort"].asString());
	if(!value["HealthCheckHost"].isNull())
		healthCheckHost_ = value["HealthCheckHost"].asString();
	if(!value["HealthCheckHttpVersion"].isNull())
		healthCheckHttpVersion_ = value["HealthCheckHttpVersion"].asString();
	if(!value["HealthCheckTemplateId"].isNull())
		healthCheckTemplateId_ = value["HealthCheckTemplateId"].asString();
	if(!value["HealthCheckInterval"].isNull())
		healthCheckInterval_ = std::stoi(value["HealthCheckInterval"].asString());
	if(!value["HealthCheckMethod"].isNull())
		healthCheckMethod_ = value["HealthCheckMethod"].asString();
	if(!value["HealthCheckPath"].isNull())
		healthCheckPath_ = value["HealthCheckPath"].asString();
	if(!value["HealthCheckProtocol"].isNull())
		healthCheckProtocol_ = value["HealthCheckProtocol"].asString();
	if(!value["HealthCheckTemplateName"].isNull())
		healthCheckTemplateName_ = value["HealthCheckTemplateName"].asString();
	if(!value["HealthCheckTimeout"].isNull())
		healthCheckTimeout_ = std::stoi(value["HealthCheckTimeout"].asString());
	if(!value["HealthyThreshold"].isNull())
		healthyThreshold_ = std::stoi(value["HealthyThreshold"].asString());
	if(!value["UnhealthyThreshold"].isNull())
		unhealthyThreshold_ = std::stoi(value["UnhealthyThreshold"].asString());
	if(!value["HealthCheckTcpFastCloseEnabled"].isNull())
		healthCheckTcpFastCloseEnabled_ = value["HealthCheckTcpFastCloseEnabled"].asString() == "true";
	if(!value["ServiceManagedEnabled"].isNull())
		serviceManagedEnabled_ = value["ServiceManagedEnabled"].asString() == "true";
	if(!value["ServiceManagedMode"].isNull())
		serviceManagedMode_ = value["ServiceManagedMode"].asString();

}

std::string GetHealthCheckTemplateAttributeResult::getHealthCheckTemplateId()const
{
	return healthCheckTemplateId_;
}

bool GetHealthCheckTemplateAttributeResult::getServiceManagedEnabled()const
{
	return serviceManagedEnabled_;
}

int GetHealthCheckTemplateAttributeResult::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

int GetHealthCheckTemplateAttributeResult::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

std::string GetHealthCheckTemplateAttributeResult::getHealthCheckHost()const
{
	return healthCheckHost_;
}

std::string GetHealthCheckTemplateAttributeResult::getHealthCheckPath()const
{
	return healthCheckPath_;
}

std::string GetHealthCheckTemplateAttributeResult::getHealthCheckTemplateName()const
{
	return healthCheckTemplateName_;
}

std::string GetHealthCheckTemplateAttributeResult::getHealthCheckHttpVersion()const
{
	return healthCheckHttpVersion_;
}

int GetHealthCheckTemplateAttributeResult::getHealthCheckTimeout()const
{
	return healthCheckTimeout_;
}

bool GetHealthCheckTemplateAttributeResult::getHealthCheckTcpFastCloseEnabled()const
{
	return healthCheckTcpFastCloseEnabled_;
}

std::vector<std::string> GetHealthCheckTemplateAttributeResult::getHealthCheckHttpCodes()const
{
	return healthCheckHttpCodes_;
}

std::vector<std::string> GetHealthCheckTemplateAttributeResult::getHealthCheckCodes()const
{
	return healthCheckCodes_;
}

int GetHealthCheckTemplateAttributeResult::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

std::string GetHealthCheckTemplateAttributeResult::getHealthCheckMethod()const
{
	return healthCheckMethod_;
}

int GetHealthCheckTemplateAttributeResult::getHealthyThreshold()const
{
	return healthyThreshold_;
}

std::string GetHealthCheckTemplateAttributeResult::getServiceManagedMode()const
{
	return serviceManagedMode_;
}

std::string GetHealthCheckTemplateAttributeResult::getHealthCheckProtocol()const
{
	return healthCheckProtocol_;
}

std::vector<GetHealthCheckTemplateAttributeResult::Tag> GetHealthCheckTemplateAttributeResult::getTags()const
{
	return tags_;
}


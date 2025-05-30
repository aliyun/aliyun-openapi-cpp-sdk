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

#include <alibabacloud/alb/model/ListHealthCheckTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

ListHealthCheckTemplatesResult::ListHealthCheckTemplatesResult() :
	ServiceResult()
{}

ListHealthCheckTemplatesResult::ListHealthCheckTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHealthCheckTemplatesResult::~ListHealthCheckTemplatesResult()
{}

void ListHealthCheckTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHealthCheckTemplatesNode = value["HealthCheckTemplates"]["HealthCheckTemplate"];
	for (auto valueHealthCheckTemplatesHealthCheckTemplate : allHealthCheckTemplatesNode)
	{
		HealthCheckTemplate healthCheckTemplatesObject;
		if(!valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckConnectPort"].isNull())
			healthCheckTemplatesObject.healthCheckConnectPort = std::stoi(valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckConnectPort"].asString());
		if(!valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckHost"].isNull())
			healthCheckTemplatesObject.healthCheckHost = valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckHost"].asString();
		if(!valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckHttpVersion"].isNull())
			healthCheckTemplatesObject.healthCheckHttpVersion = valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckHttpVersion"].asString();
		if(!valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckInterval"].isNull())
			healthCheckTemplatesObject.healthCheckInterval = std::stoi(valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckInterval"].asString());
		if(!valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckMethod"].isNull())
			healthCheckTemplatesObject.healthCheckMethod = valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckMethod"].asString();
		if(!valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckPath"].isNull())
			healthCheckTemplatesObject.healthCheckPath = valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckPath"].asString();
		if(!valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckProtocol"].isNull())
			healthCheckTemplatesObject.healthCheckProtocol = valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckProtocol"].asString();
		if(!valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckTemplateId"].isNull())
			healthCheckTemplatesObject.healthCheckTemplateId = valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckTemplateId"].asString();
		if(!valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckTemplateName"].isNull())
			healthCheckTemplatesObject.healthCheckTemplateName = valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckTemplateName"].asString();
		if(!valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckTimeout"].isNull())
			healthCheckTemplatesObject.healthCheckTimeout = std::stoi(valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckTimeout"].asString());
		if(!valueHealthCheckTemplatesHealthCheckTemplate["HealthyThreshold"].isNull())
			healthCheckTemplatesObject.healthyThreshold = std::stoi(valueHealthCheckTemplatesHealthCheckTemplate["HealthyThreshold"].asString());
		if(!valueHealthCheckTemplatesHealthCheckTemplate["UnhealthyThreshold"].isNull())
			healthCheckTemplatesObject.unhealthyThreshold = std::stoi(valueHealthCheckTemplatesHealthCheckTemplate["UnhealthyThreshold"].asString());
		if(!valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckTcpFastCloseEnabled"].isNull())
			healthCheckTemplatesObject.healthCheckTcpFastCloseEnabled = valueHealthCheckTemplatesHealthCheckTemplate["HealthCheckTcpFastCloseEnabled"].asString() == "true";
		if(!valueHealthCheckTemplatesHealthCheckTemplate["ServiceManagedEnabled"].isNull())
			healthCheckTemplatesObject.serviceManagedEnabled = valueHealthCheckTemplatesHealthCheckTemplate["ServiceManagedEnabled"].asString() == "true";
		if(!valueHealthCheckTemplatesHealthCheckTemplate["ServiceManagedMode"].isNull())
			healthCheckTemplatesObject.serviceManagedMode = valueHealthCheckTemplatesHealthCheckTemplate["ServiceManagedMode"].asString();
		auto allTagsNode = valueHealthCheckTemplatesHealthCheckTemplate["Tags"]["Tag"];
		for (auto valueHealthCheckTemplatesHealthCheckTemplateTagsTag : allTagsNode)
		{
			HealthCheckTemplate::Tag tagsObject;
			if(!valueHealthCheckTemplatesHealthCheckTemplateTagsTag["Key"].isNull())
				tagsObject.key = valueHealthCheckTemplatesHealthCheckTemplateTagsTag["Key"].asString();
			if(!valueHealthCheckTemplatesHealthCheckTemplateTagsTag["Value"].isNull())
				tagsObject.value = valueHealthCheckTemplatesHealthCheckTemplateTagsTag["Value"].asString();
			healthCheckTemplatesObject.tags.push_back(tagsObject);
		}
		auto allHealthCheckHttpCodes = value["HealthCheckHttpCodes"]["httpCode"];
		for (auto value : allHealthCheckHttpCodes)
			healthCheckTemplatesObject.healthCheckHttpCodes.push_back(value.asString());
		auto allHealthCheckCodes = value["HealthCheckCodes"]["HealthCheckCode"];
		for (auto value : allHealthCheckCodes)
			healthCheckTemplatesObject.healthCheckCodes.push_back(value.asString());
		healthCheckTemplates_.push_back(healthCheckTemplatesObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListHealthCheckTemplatesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListHealthCheckTemplatesResult::HealthCheckTemplate> ListHealthCheckTemplatesResult::getHealthCheckTemplates()const
{
	return healthCheckTemplates_;
}

std::string ListHealthCheckTemplatesResult::getNextToken()const
{
	return nextToken_;
}

int ListHealthCheckTemplatesResult::getMaxResults()const
{
	return maxResults_;
}


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

#include <alibabacloud/eiam/model/GetInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetInstanceResult::GetInstanceResult() :
	ServiceResult()
{}

GetInstanceResult::GetInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceResult::~GetInstanceResult()
{}

void GetInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceNode = value["Instance"];
	if(!instanceNode["InstanceId"].isNull())
		instance_.instanceId = instanceNode["InstanceId"].asString();
	if(!instanceNode["CreateTime"].isNull())
		instance_.createTime = std::stol(instanceNode["CreateTime"].asString());
	if(!instanceNode["Status"].isNull())
		instance_.status = instanceNode["Status"].asString();
	if(!instanceNode["Description"].isNull())
		instance_.description = instanceNode["Description"].asString();
	if(!instanceNode["LogoUrl"].isNull())
		instance_.logoUrl = instanceNode["LogoUrl"].asString();
	if(!instanceNode["FaviconUrl"].isNull())
		instance_.faviconUrl = instanceNode["FaviconUrl"].asString();
	if(!instanceNode["Title"].isNull())
		instance_.title = instanceNode["Title"].asString();
	auto allCustomEndpointsNode = instanceNode["CustomEndpoints"]["CustomEndpoint"];
	for (auto instanceNodeCustomEndpointsCustomEndpoint : allCustomEndpointsNode)
	{
		Instance::CustomEndpoint customEndpointObject;
		if(!instanceNodeCustomEndpointsCustomEndpoint["Endpoint"].isNull())
			customEndpointObject.endpoint = instanceNodeCustomEndpointsCustomEndpoint["Endpoint"].asString();
		if(!instanceNodeCustomEndpointsCustomEndpoint["Status"].isNull())
			customEndpointObject.status = instanceNodeCustomEndpointsCustomEndpoint["Status"].asString();
		instance_.customEndpoints.push_back(customEndpointObject);
	}
	auto defaultEndpointNode = instanceNode["DefaultEndpoint"];
	if(!defaultEndpointNode["Endpoint"].isNull())
		instance_.defaultEndpoint.endpoint = defaultEndpointNode["Endpoint"].asString();
	if(!defaultEndpointNode["Status"].isNull())
		instance_.defaultEndpoint.status = defaultEndpointNode["Status"].asString();
	auto domainConfigNode = instanceNode["DomainConfig"];
	if(!domainConfigNode["InitDomainAutoRedirectStatus"].isNull())
		instance_.domainConfig.initDomainAutoRedirectStatus = domainConfigNode["InitDomainAutoRedirectStatus"].asString();
	if(!domainConfigNode["DefaultDomain"].isNull())
		instance_.domainConfig.defaultDomain = domainConfigNode["DefaultDomain"].asString();
	if(!domainConfigNode["InitDomain"].isNull())
		instance_.domainConfig.initDomain = domainConfigNode["InitDomain"].asString();
		auto allEgressAddresses = instanceNode["EgressAddresses"]["EgressAddress"];
		for (auto value : allEgressAddresses)
			instance_.egressAddresses.push_back(value.asString());

}

GetInstanceResult::Instance GetInstanceResult::getInstance()const
{
	return instance_;
}


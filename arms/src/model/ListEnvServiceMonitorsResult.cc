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

#include <alibabacloud/arms/model/ListEnvServiceMonitorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListEnvServiceMonitorsResult::ListEnvServiceMonitorsResult() :
	ServiceResult()
{}

ListEnvServiceMonitorsResult::ListEnvServiceMonitorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEnvServiceMonitorsResult::~ListEnvServiceMonitorsResult()
{}

void ListEnvServiceMonitorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Monitoring"];
	for (auto valueDataMonitoring : allDataNode)
	{
		Monitoring dataObject;
		if(!valueDataMonitoring["RegionId"].isNull())
			dataObject.regionId = valueDataMonitoring["RegionId"].asString();
		if(!valueDataMonitoring["EnvironmentId"].isNull())
			dataObject.environmentId = valueDataMonitoring["EnvironmentId"].asString();
		if(!valueDataMonitoring["Namespace"].isNull())
			dataObject._namespace = valueDataMonitoring["Namespace"].asString();
		if(!valueDataMonitoring["ServiceMonitorName"].isNull())
			dataObject.serviceMonitorName = valueDataMonitoring["ServiceMonitorName"].asString();
		if(!valueDataMonitoring["ConfigYaml"].isNull())
			dataObject.configYaml = valueDataMonitoring["ConfigYaml"].asString();
		if(!valueDataMonitoring["Status"].isNull())
			dataObject.status = valueDataMonitoring["Status"].asString();
		if(!valueDataMonitoring["CreationTimestamp"].isNull())
			dataObject.creationTimestamp = valueDataMonitoring["CreationTimestamp"].asString();
		if(!valueDataMonitoring["AddonName"].isNull())
			dataObject.addonName = valueDataMonitoring["AddonName"].asString();
		if(!valueDataMonitoring["AddonReleaseName"].isNull())
			dataObject.addonReleaseName = valueDataMonitoring["AddonReleaseName"].asString();
		if(!valueDataMonitoring["AddonVersion"].isNull())
			dataObject.addonVersion = valueDataMonitoring["AddonVersion"].asString();
		if(!valueDataMonitoring["MatchedServiceCount"].isNull())
			dataObject.matchedServiceCount = std::stoi(valueDataMonitoring["MatchedServiceCount"].asString());
		auto allEndpointsNode = valueDataMonitoring["Endpoints"]["Endpoint"];
		for (auto valueDataMonitoringEndpointsEndpoint : allEndpointsNode)
		{
			Monitoring::Endpoint endpointsObject;
			if(!valueDataMonitoringEndpointsEndpoint["Port"].isNull())
				endpointsObject.port = valueDataMonitoringEndpointsEndpoint["Port"].asString();
			if(!valueDataMonitoringEndpointsEndpoint["TargetPort"].isNull())
				endpointsObject.targetPort = std::stoi(valueDataMonitoringEndpointsEndpoint["TargetPort"].asString());
			if(!valueDataMonitoringEndpointsEndpoint["Path"].isNull())
				endpointsObject.path = valueDataMonitoringEndpointsEndpoint["Path"].asString();
			if(!valueDataMonitoringEndpointsEndpoint["Interval"].isNull())
				endpointsObject.interval = valueDataMonitoringEndpointsEndpoint["Interval"].asString();
			if(!valueDataMonitoringEndpointsEndpoint["MatchedTargetCount"].isNull())
				endpointsObject.matchedTargetCount = std::stoi(valueDataMonitoringEndpointsEndpoint["MatchedTargetCount"].asString());
			dataObject.endpoints.push_back(endpointsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListEnvServiceMonitorsResult::getMessage()const
{
	return message_;
}

std::vector<ListEnvServiceMonitorsResult::Monitoring> ListEnvServiceMonitorsResult::getData()const
{
	return data_;
}

int ListEnvServiceMonitorsResult::getCode()const
{
	return code_;
}


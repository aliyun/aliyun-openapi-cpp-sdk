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

#include <alibabacloud/arms/model/ListEnvCustomJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListEnvCustomJobsResult::ListEnvCustomJobsResult() :
	ServiceResult()
{}

ListEnvCustomJobsResult::ListEnvCustomJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEnvCustomJobsResult::~ListEnvCustomJobsResult()
{}

void ListEnvCustomJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Monitoring"];
	for (auto valueDataMonitoring : allDataNode)
	{
		Monitoring dataObject;
		if(!valueDataMonitoring["EnvironmentId"].isNull())
			dataObject.environmentId = valueDataMonitoring["EnvironmentId"].asString();
		if(!valueDataMonitoring["RegionId"].isNull())
			dataObject.regionId = valueDataMonitoring["RegionId"].asString();
		if(!valueDataMonitoring["CustomJobName"].isNull())
			dataObject.customJobName = valueDataMonitoring["CustomJobName"].asString();
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
		auto allScrapeConfigsNode = valueDataMonitoring["ScrapeConfigs"]["scrapeConfig"];
		for (auto valueDataMonitoringScrapeConfigsscrapeConfig : allScrapeConfigsNode)
		{
			Monitoring::ScrapeConfig scrapeConfigsObject;
			if(!valueDataMonitoringScrapeConfigsscrapeConfig["JobName"].isNull())
				scrapeConfigsObject.jobName = valueDataMonitoringScrapeConfigsscrapeConfig["JobName"].asString();
			if(!valueDataMonitoringScrapeConfigsscrapeConfig["ScrapeInterval"].isNull())
				scrapeConfigsObject.scrapeInterval = valueDataMonitoringScrapeConfigsscrapeConfig["ScrapeInterval"].asString();
			if(!valueDataMonitoringScrapeConfigsscrapeConfig["MetricsPath"].isNull())
				scrapeConfigsObject.metricsPath = valueDataMonitoringScrapeConfigsscrapeConfig["MetricsPath"].asString();
			auto allScrapeDiscoverys = value["ScrapeDiscoverys"]["scrapeDiscovery"];
			for (auto value : allScrapeDiscoverys)
				scrapeConfigsObject.scrapeDiscoverys.push_back(value.asString());
			dataObject.scrapeConfigs.push_back(scrapeConfigsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListEnvCustomJobsResult::getMessage()const
{
	return message_;
}

std::vector<ListEnvCustomJobsResult::Monitoring> ListEnvCustomJobsResult::getData()const
{
	return data_;
}

int ListEnvCustomJobsResult::getCode()const
{
	return code_;
}


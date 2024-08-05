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

#include <alibabacloud/arms/model/ListTimingSyntheticTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListTimingSyntheticTasksResult::ListTimingSyntheticTasksResult() :
	ServiceResult()
{}

ListTimingSyntheticTasksResult::ListTimingSyntheticTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTimingSyntheticTasksResult::~ListTimingSyntheticTasksResult()
{}

void ListTimingSyntheticTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["Page"].isNull())
		data_.page = std::stoi(dataNode["Page"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allItemsNode = dataNode["Items"]["Item"];
	for (auto dataNodeItemsItem : allItemsNode)
	{
		Data::Item itemObject;
		if(!dataNodeItemsItem["TaskId"].isNull())
			itemObject.taskId = dataNodeItemsItem["TaskId"].asString();
		if(!dataNodeItemsItem["RegionId"].isNull())
			itemObject.regionId = dataNodeItemsItem["RegionId"].asString();
		if(!dataNodeItemsItem["Name"].isNull())
			itemObject.name = dataNodeItemsItem["Name"].asString();
		if(!dataNodeItemsItem["TaskType"].isNull())
			itemObject.taskType = std::stoi(dataNodeItemsItem["TaskType"].asString());
		if(!dataNodeItemsItem["Url"].isNull())
			itemObject.url = dataNodeItemsItem["Url"].asString();
		if(!dataNodeItemsItem["MonitorCategory"].isNull())
			itemObject.monitorCategory = std::stoi(dataNodeItemsItem["MonitorCategory"].asString());
		if(!dataNodeItemsItem["Frequency"].isNull())
			itemObject.frequency = dataNodeItemsItem["Frequency"].asString();
		if(!dataNodeItemsItem["MonitorNum"].isNull())
			itemObject.monitorNum = dataNodeItemsItem["MonitorNum"].asString();
		if(!dataNodeItemsItem["Status"].isNull())
			itemObject.status = dataNodeItemsItem["Status"].asString();
		if(!dataNodeItemsItem["GmtCreate"].isNull())
			itemObject.gmtCreate = dataNodeItemsItem["GmtCreate"].asString();
		if(!dataNodeItemsItem["GmtModified"].isNull())
			itemObject.gmtModified = dataNodeItemsItem["GmtModified"].asString();
		if(!dataNodeItemsItem["ResourceGroupId"].isNull())
			itemObject.resourceGroupId = dataNodeItemsItem["ResourceGroupId"].asString();
		auto allTagsNode = dataNodeItemsItem["Tags"]["tag"];
		for (auto dataNodeItemsItemTagstag : allTagsNode)
		{
			Data::Item::Tag tagsObject;
			if(!dataNodeItemsItemTagstag["Key"].isNull())
				tagsObject.key = dataNodeItemsItemTagstag["Key"].asString();
			if(!dataNodeItemsItemTagstag["Value"].isNull())
				tagsObject.value = dataNodeItemsItemTagstag["Value"].asString();
			itemObject.tags.push_back(tagsObject);
		}
		auto commonSettingNode = value["CommonSetting"];
		if(!commonSettingNode["IpType"].isNull())
			itemObject.commonSetting.ipType = std::stoi(commonSettingNode["IpType"].asString());
		if(!commonSettingNode["MonitorSamples"].isNull())
			itemObject.commonSetting.monitorSamples = std::stoi(commonSettingNode["MonitorSamples"].asString());
		if(!commonSettingNode["IsOpenTrace"].isNull())
			itemObject.commonSetting.isOpenTrace = commonSettingNode["IsOpenTrace"].asString() == "true";
		if(!commonSettingNode["TraceClientType"].isNull())
			itemObject.commonSetting.traceClientType = std::stoi(commonSettingNode["TraceClientType"].asString());
		if(!commonSettingNode["XtraceRegion"].isNull())
			itemObject.commonSetting.xtraceRegion = commonSettingNode["XtraceRegion"].asString();
		auto customHostNode = commonSettingNode["CustomHost"];
		if(!customHostNode["SelectType"].isNull())
			itemObject.commonSetting.customHost.selectType = std::stoi(customHostNode["SelectType"].asString());
		auto allHostsNode = customHostNode["Hosts"]["host"];
		for (auto customHostNodeHostshost : allHostsNode)
		{
			Data::Item::CommonSetting::CustomHost::Host hostObject;
			if(!customHostNodeHostshost["Domain"].isNull())
				hostObject.domain = customHostNodeHostshost["Domain"].asString();
			if(!customHostNodeHostshost["IpType"].isNull())
				hostObject.ipType = std::stoi(customHostNodeHostshost["IpType"].asString());
			auto allIps = value["Ips"]["ip"];
			for (auto value : allIps)
				hostObject.ips.push_back(value.asString());
			itemObject.commonSetting.customHost.hosts.push_back(hostObject);
		}
		auto customVPCSettingNode = commonSettingNode["CustomVPCSetting"];
		if(!customVPCSettingNode["RegionId"].isNull())
			itemObject.commonSetting.customVPCSetting.regionId = customVPCSettingNode["RegionId"].asString();
		if(!customVPCSettingNode["VpcId"].isNull())
			itemObject.commonSetting.customVPCSetting.vpcId = customVPCSettingNode["VpcId"].asString();
		if(!customVPCSettingNode["VSwitchId"].isNull())
			itemObject.commonSetting.customVPCSetting.vSwitchId = customVPCSettingNode["VSwitchId"].asString();
		if(!customVPCSettingNode["SecureGroupId"].isNull())
			itemObject.commonSetting.customVPCSetting.secureGroupId = customVPCSettingNode["SecureGroupId"].asString();
		auto customPrometheusSettingNode = commonSettingNode["CustomPrometheusSetting"];
		if(!customPrometheusSettingNode["PrometheusLabels"].isNull())
			itemObject.commonSetting.customPrometheusSetting.prometheusLabels = customPrometheusSettingNode["PrometheusLabels"].asString();
		if(!customPrometheusSettingNode["PrometheusClusterId"].isNull())
			itemObject.commonSetting.customPrometheusSetting.prometheusClusterId = customPrometheusSettingNode["PrometheusClusterId"].asString();
		if(!customPrometheusSettingNode["PrometheusClusterRegion"].isNull())
			itemObject.commonSetting.customPrometheusSetting.prometheusClusterRegion = customPrometheusSettingNode["PrometheusClusterRegion"].asString();
		data_.items.push_back(itemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListTimingSyntheticTasksResult::getMessage()const
{
	return message_;
}

ListTimingSyntheticTasksResult::Data ListTimingSyntheticTasksResult::getData()const
{
	return data_;
}

long ListTimingSyntheticTasksResult::getCode()const
{
	return code_;
}


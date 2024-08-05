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

#include <alibabacloud/arms/model/ListDashboardsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListDashboardsResult::ListDashboardsResult() :
	ServiceResult()
{}

ListDashboardsResult::ListDashboardsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDashboardsResult::~ListDashboardsResult()
{}

void ListDashboardsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDashboardVosNode = value["DashboardVos"]["DashboardVosItem"];
	for (auto valueDashboardVosDashboardVosItem : allDashboardVosNode)
	{
		DashboardVosItem dashboardVosObject;
		if(!valueDashboardVosDashboardVosItem["Type"].isNull())
			dashboardVosObject.type = valueDashboardVosDashboardVosItem["Type"].asString();
		if(!valueDashboardVosDashboardVosItem["Time"].isNull())
			dashboardVosObject.time = valueDashboardVosDashboardVosItem["Time"].asString();
		if(!valueDashboardVosDashboardVosItem["NeedUpdate"].isNull())
			dashboardVosObject.needUpdate = valueDashboardVosDashboardVosItem["NeedUpdate"].asString() == "true";
		if(!valueDashboardVosDashboardVosItem["Kind"].isNull())
			dashboardVosObject.kind = valueDashboardVosDashboardVosItem["Kind"].asString();
		if(!valueDashboardVosDashboardVosItem["Language"].isNull())
			dashboardVosObject.language = valueDashboardVosDashboardVosItem["Language"].asString();
		if(!valueDashboardVosDashboardVosItem["Url"].isNull())
			dashboardVosObject.url = valueDashboardVosDashboardVosItem["Url"].asString();
		if(!valueDashboardVosDashboardVosItem["HttpsUrl"].isNull())
			dashboardVosObject.httpsUrl = valueDashboardVosDashboardVosItem["HttpsUrl"].asString();
		if(!valueDashboardVosDashboardVosItem["DashboardType"].isNull())
			dashboardVosObject.dashboardType = valueDashboardVosDashboardVosItem["DashboardType"].asString();
		if(!valueDashboardVosDashboardVosItem["Exporter"].isNull())
			dashboardVosObject.exporter = valueDashboardVosDashboardVosItem["Exporter"].asString();
		if(!valueDashboardVosDashboardVosItem["Version"].isNull())
			dashboardVosObject.version = valueDashboardVosDashboardVosItem["Version"].asString();
		if(!valueDashboardVosDashboardVosItem["IsArmsExporter"].isNull())
			dashboardVosObject.isArmsExporter = valueDashboardVosDashboardVosItem["IsArmsExporter"].asString() == "true";
		if(!valueDashboardVosDashboardVosItem["HttpUrl"].isNull())
			dashboardVosObject.httpUrl = valueDashboardVosDashboardVosItem["HttpUrl"].asString();
		if(!valueDashboardVosDashboardVosItem["Title"].isNull())
			dashboardVosObject.title = valueDashboardVosDashboardVosItem["Title"].asString();
		if(!valueDashboardVosDashboardVosItem["Name"].isNull())
			dashboardVosObject.name = valueDashboardVosDashboardVosItem["Name"].asString();
		if(!valueDashboardVosDashboardVosItem["Id"].isNull())
			dashboardVosObject.id = valueDashboardVosDashboardVosItem["Id"].asString();
		if(!valueDashboardVosDashboardVosItem["Uid"].isNull())
			dashboardVosObject.uid = valueDashboardVosDashboardVosItem["Uid"].asString();
		auto i18nChildNode = value["I18nChild"];
		if(!i18nChildNode["Type"].isNull())
			dashboardVosObject.i18nChild.type = i18nChildNode["Type"].asString();
		if(!i18nChildNode["Time"].isNull())
			dashboardVosObject.i18nChild.time = i18nChildNode["Time"].asString();
		if(!i18nChildNode["NeedUpdate"].isNull())
			dashboardVosObject.i18nChild.needUpdate = i18nChildNode["NeedUpdate"].asString() == "true";
		if(!i18nChildNode["Kind"].isNull())
			dashboardVosObject.i18nChild.kind = i18nChildNode["Kind"].asString();
		if(!i18nChildNode["Language"].isNull())
			dashboardVosObject.i18nChild.language = i18nChildNode["Language"].asString();
		if(!i18nChildNode["Url"].isNull())
			dashboardVosObject.i18nChild.url = i18nChildNode["Url"].asString();
		if(!i18nChildNode["HttpsUrl"].isNull())
			dashboardVosObject.i18nChild.httpsUrl = i18nChildNode["HttpsUrl"].asString();
		if(!i18nChildNode["DashboardType"].isNull())
			dashboardVosObject.i18nChild.dashboardType = i18nChildNode["DashboardType"].asString();
		if(!i18nChildNode["Exporter"].isNull())
			dashboardVosObject.i18nChild.exporter = i18nChildNode["Exporter"].asString();
		if(!i18nChildNode["Version"].isNull())
			dashboardVosObject.i18nChild.version = i18nChildNode["Version"].asString();
		if(!i18nChildNode["IsArmsExporter"].isNull())
			dashboardVosObject.i18nChild.isArmsExporter = i18nChildNode["IsArmsExporter"].asString() == "true";
		if(!i18nChildNode["HttpUrl"].isNull())
			dashboardVosObject.i18nChild.httpUrl = i18nChildNode["HttpUrl"].asString();
		if(!i18nChildNode["Title"].isNull())
			dashboardVosObject.i18nChild.title = i18nChildNode["Title"].asString();
		if(!i18nChildNode["Name"].isNull())
			dashboardVosObject.i18nChild.name = i18nChildNode["Name"].asString();
		if(!i18nChildNode["Id"].isNull())
			dashboardVosObject.i18nChild.id = i18nChildNode["Id"].asString();
		if(!i18nChildNode["Uid"].isNull())
			dashboardVosObject.i18nChild.uid = i18nChildNode["Uid"].asString();
			auto allTags1 = i18nChildNode["Tags"]["Tags"];
			for (auto value : allTags1)
				dashboardVosObject.i18nChild.tags1.push_back(value.asString());
		auto allTags = value["Tags"]["Tags"];
		for (auto value : allTags)
			dashboardVosObject.tags.push_back(value.asString());
		dashboardVos_.push_back(dashboardVosObject);
	}
	if(!value["PrometheusServiceOpened"].isNull())
		prometheusServiceOpened_ = value["PrometheusServiceOpened"].asString();
	if(!value["EnvironmentId"].isNull())
		environmentId_ = value["EnvironmentId"].asString();
	if(!value["GrafanaServiceOpened"].isNull())
		grafanaServiceOpened_ = value["GrafanaServiceOpened"].asString();

}

std::vector<ListDashboardsResult::DashboardVosItem> ListDashboardsResult::getDashboardVos()const
{
	return dashboardVos_;
}

std::string ListDashboardsResult::getEnvironmentId()const
{
	return environmentId_;
}

std::string ListDashboardsResult::getPrometheusServiceOpened()const
{
	return prometheusServiceOpened_;
}

std::string ListDashboardsResult::getGrafanaServiceOpened()const
{
	return grafanaServiceOpened_;
}


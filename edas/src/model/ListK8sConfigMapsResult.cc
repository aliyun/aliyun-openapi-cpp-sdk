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

#include <alibabacloud/edas/model/ListK8sConfigMapsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListK8sConfigMapsResult::ListK8sConfigMapsResult() :
	ServiceResult()
{}

ListK8sConfigMapsResult::ListK8sConfigMapsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListK8sConfigMapsResult::~ListK8sConfigMapsResult()
{}

void ListK8sConfigMapsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["Total"].isNull())
			resultObject.total = std::stoi(valueResultResultItem["Total"].asString());
		auto allConfigMapsNode = valueResultResultItem["ConfigMaps"]["ConfigMapsItem"];
		for (auto valueResultResultItemConfigMapsConfigMapsItem : allConfigMapsNode)
		{
			ResultItem::ConfigMapsItem configMapsObject;
			if(!valueResultResultItemConfigMapsConfigMapsItem["Name"].isNull())
				configMapsObject.name = valueResultResultItemConfigMapsConfigMapsItem["Name"].asString();
			if(!valueResultResultItemConfigMapsConfigMapsItem["Namespace"].isNull())
				configMapsObject._namespace = valueResultResultItemConfigMapsConfigMapsItem["Namespace"].asString();
			if(!valueResultResultItemConfigMapsConfigMapsItem["ClusterId"].isNull())
				configMapsObject.clusterId = valueResultResultItemConfigMapsConfigMapsItem["ClusterId"].asString();
			if(!valueResultResultItemConfigMapsConfigMapsItem["ClusterName"].isNull())
				configMapsObject.clusterName = valueResultResultItemConfigMapsConfigMapsItem["ClusterName"].asString();
			if(!valueResultResultItemConfigMapsConfigMapsItem["CreationTime"].isNull())
				configMapsObject.creationTime = valueResultResultItemConfigMapsConfigMapsItem["CreationTime"].asString();
			auto allDataNode = valueResultResultItemConfigMapsConfigMapsItem["Data"]["DataItem"];
			for (auto valueResultResultItemConfigMapsConfigMapsItemDataDataItem : allDataNode)
			{
				ResultItem::ConfigMapsItem::DataItem dataObject;
				if(!valueResultResultItemConfigMapsConfigMapsItemDataDataItem["Key"].isNull())
					dataObject.key = valueResultResultItemConfigMapsConfigMapsItemDataDataItem["Key"].asString();
				if(!valueResultResultItemConfigMapsConfigMapsItemDataDataItem["Value"].isNull())
					dataObject.value = valueResultResultItemConfigMapsConfigMapsItemDataDataItem["Value"].asString();
				configMapsObject.data.push_back(dataObject);
			}
			auto allRelatedAppsNode = valueResultResultItemConfigMapsConfigMapsItem["RelatedApps"]["RelatedAppsItem"];
			for (auto valueResultResultItemConfigMapsConfigMapsItemRelatedAppsRelatedAppsItem : allRelatedAppsNode)
			{
				ResultItem::ConfigMapsItem::RelatedAppsItem relatedAppsObject;
				if(!valueResultResultItemConfigMapsConfigMapsItemRelatedAppsRelatedAppsItem["AppName"].isNull())
					relatedAppsObject.appName = valueResultResultItemConfigMapsConfigMapsItemRelatedAppsRelatedAppsItem["AppName"].asString();
				if(!valueResultResultItemConfigMapsConfigMapsItemRelatedAppsRelatedAppsItem["AppId"].isNull())
					relatedAppsObject.appId = valueResultResultItemConfigMapsConfigMapsItemRelatedAppsRelatedAppsItem["AppId"].asString();
				configMapsObject.relatedApps.push_back(relatedAppsObject);
			}
			resultObject.configMaps.push_back(configMapsObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListK8sConfigMapsResult::getMessage()const
{
	return message_;
}

int ListK8sConfigMapsResult::getCode()const
{
	return code_;
}

std::vector<ListK8sConfigMapsResult::ResultItem> ListK8sConfigMapsResult::getResult()const
{
	return result_;
}


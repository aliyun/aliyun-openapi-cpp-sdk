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

#include <alibabacloud/edas/model/ListK8sIngressRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListK8sIngressRulesResult::ListK8sIngressRulesResult() :
	ServiceResult()
{}

ListK8sIngressRulesResult::ListK8sIngressRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListK8sIngressRulesResult::~ListK8sIngressRulesResult()
{}

void ListK8sIngressRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["ClusterName"].isNull())
			dataObject.clusterName = valueDataDataItem["ClusterName"].asString();
		if(!valueDataDataItem["ClusterId"].isNull())
			dataObject.clusterId = valueDataDataItem["ClusterId"].asString();
		if(!valueDataDataItem["RegionId"].isNull())
			dataObject.regionId = valueDataDataItem["RegionId"].asString();
		auto allIngressConfsNode = valueDataDataItem["IngressConfs"]["IngressConfsItem"];
		for (auto valueDataDataItemIngressConfsIngressConfsItem : allIngressConfsNode)
		{
			DataItem::IngressConfsItem ingressConfsObject;
			if(!valueDataDataItemIngressConfsIngressConfsItem["CreationTime"].isNull())
				ingressConfsObject.creationTime = valueDataDataItemIngressConfsIngressConfsItem["CreationTime"].asString();
			if(!valueDataDataItemIngressConfsIngressConfsItem["SslRedirect"].isNull())
				ingressConfsObject.sslRedirect = valueDataDataItemIngressConfsIngressConfsItem["SslRedirect"].asString() == "true";
			if(!valueDataDataItemIngressConfsIngressConfsItem["Endpoint"].isNull())
				ingressConfsObject.endpoint = valueDataDataItemIngressConfsIngressConfsItem["Endpoint"].asString();
			if(!valueDataDataItemIngressConfsIngressConfsItem["Namespace"].isNull())
				ingressConfsObject._namespace = valueDataDataItemIngressConfsIngressConfsItem["Namespace"].asString();
			if(!valueDataDataItemIngressConfsIngressConfsItem["Name"].isNull())
				ingressConfsObject.name = valueDataDataItemIngressConfsIngressConfsItem["Name"].asString();
			if(!valueDataDataItemIngressConfsIngressConfsItem["DashboardUrl"].isNull())
				ingressConfsObject.dashboardUrl = valueDataDataItemIngressConfsIngressConfsItem["DashboardUrl"].asString();
			auto allRulesNode = valueDataDataItemIngressConfsIngressConfsItem["Rules"]["RulesItem"];
			for (auto valueDataDataItemIngressConfsIngressConfsItemRulesRulesItem : allRulesNode)
			{
				DataItem::IngressConfsItem::RulesItem rulesObject;
				if(!valueDataDataItemIngressConfsIngressConfsItemRulesRulesItem["SecretName"].isNull())
					rulesObject.secretName = valueDataDataItemIngressConfsIngressConfsItemRulesRulesItem["SecretName"].asString();
				if(!valueDataDataItemIngressConfsIngressConfsItemRulesRulesItem["Host"].isNull())
					rulesObject.host = valueDataDataItemIngressConfsIngressConfsItemRulesRulesItem["Host"].asString();
				auto allPathsNode = valueDataDataItemIngressConfsIngressConfsItemRulesRulesItem["Paths"]["PathsItem"];
				for (auto valueDataDataItemIngressConfsIngressConfsItemRulesRulesItemPathsPathsItem : allPathsNode)
				{
					DataItem::IngressConfsItem::RulesItem::PathsItem pathsObject;
					if(!valueDataDataItemIngressConfsIngressConfsItemRulesRulesItemPathsPathsItem["Status"].isNull())
						pathsObject.status = valueDataDataItemIngressConfsIngressConfsItemRulesRulesItemPathsPathsItem["Status"].asString();
					if(!valueDataDataItemIngressConfsIngressConfsItemRulesRulesItemPathsPathsItem["Path"].isNull())
						pathsObject.path = valueDataDataItemIngressConfsIngressConfsItemRulesRulesItemPathsPathsItem["Path"].asString();
					if(!valueDataDataItemIngressConfsIngressConfsItemRulesRulesItemPathsPathsItem["AppName"].isNull())
						pathsObject.appName = valueDataDataItemIngressConfsIngressConfsItemRulesRulesItemPathsPathsItem["AppName"].asString();
					if(!valueDataDataItemIngressConfsIngressConfsItemRulesRulesItemPathsPathsItem["AppId"].isNull())
						pathsObject.appId = valueDataDataItemIngressConfsIngressConfsItemRulesRulesItemPathsPathsItem["AppId"].asString();
					auto backendNode = value["Backend"];
					if(!backendNode["ServiceName"].isNull())
						pathsObject.backend.serviceName = backendNode["ServiceName"].asString();
					if(!backendNode["ServicePort"].isNull())
						pathsObject.backend.servicePort = backendNode["ServicePort"].asString();
					rulesObject.paths.push_back(pathsObject);
				}
				ingressConfsObject.rules.push_back(rulesObject);
			}
			dataObject.ingressConfs.push_back(ingressConfsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListK8sIngressRulesResult::getMessage()const
{
	return message_;
}

std::vector<ListK8sIngressRulesResult::DataItem> ListK8sIngressRulesResult::getData()const
{
	return data_;
}

int ListK8sIngressRulesResult::getCode()const
{
	return code_;
}


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

#include <alibabacloud/arms/model/ListPrometheusInstanceByTagAndResourceGroupIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListPrometheusInstanceByTagAndResourceGroupIdResult::ListPrometheusInstanceByTagAndResourceGroupIdResult() :
	ServiceResult()
{}

ListPrometheusInstanceByTagAndResourceGroupIdResult::ListPrometheusInstanceByTagAndResourceGroupIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPrometheusInstanceByTagAndResourceGroupIdResult::~ListPrometheusInstanceByTagAndResourceGroupIdResult()
{}

void ListPrometheusInstanceByTagAndResourceGroupIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allPrometheusInstancesNode = dataNode["PrometheusInstances"]["PrometheusInstancesItem"];
	for (auto dataNodePrometheusInstancesPrometheusInstancesItem : allPrometheusInstancesNode)
	{
		Data::PrometheusInstancesItem prometheusInstancesItemObject;
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["ClusterId"].isNull())
			prometheusInstancesItemObject.clusterId = dataNodePrometheusInstancesPrometheusInstancesItem["ClusterId"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["RegionId"].isNull())
			prometheusInstancesItemObject.regionId = dataNodePrometheusInstancesPrometheusInstancesItem["RegionId"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["UserId"].isNull())
			prometheusInstancesItemObject.userId = dataNodePrometheusInstancesPrometheusInstancesItem["UserId"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["ClusterName"].isNull())
			prometheusInstancesItemObject.clusterName = dataNodePrometheusInstancesPrometheusInstancesItem["ClusterName"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["ClusterType"].isNull())
			prometheusInstancesItemObject.clusterType = dataNodePrometheusInstancesPrometheusInstancesItem["ClusterType"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["VpcId"].isNull())
			prometheusInstancesItemObject.vpcId = dataNodePrometheusInstancesPrometheusInstancesItem["VpcId"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["VSwitchId"].isNull())
			prometheusInstancesItemObject.vSwitchId = dataNodePrometheusInstancesPrometheusInstancesItem["VSwitchId"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["SecurityGroupId"].isNull())
			prometheusInstancesItemObject.securityGroupId = dataNodePrometheusInstancesPrometheusInstancesItem["SecurityGroupId"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["SubClustersJson"].isNull())
			prometheusInstancesItemObject.subClustersJson = dataNodePrometheusInstancesPrometheusInstancesItem["SubClustersJson"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["RemoteReadIntraUrl"].isNull())
			prometheusInstancesItemObject.remoteReadIntraUrl = dataNodePrometheusInstancesPrometheusInstancesItem["RemoteReadIntraUrl"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["RemoteReadInterUrl"].isNull())
			prometheusInstancesItemObject.remoteReadInterUrl = dataNodePrometheusInstancesPrometheusInstancesItem["RemoteReadInterUrl"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["RemoteWriteIntraUrl"].isNull())
			prometheusInstancesItemObject.remoteWriteIntraUrl = dataNodePrometheusInstancesPrometheusInstancesItem["RemoteWriteIntraUrl"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["RemoteWriteInterUrl"].isNull())
			prometheusInstancesItemObject.remoteWriteInterUrl = dataNodePrometheusInstancesPrometheusInstancesItem["RemoteWriteInterUrl"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["PushGatewayIntraUrl"].isNull())
			prometheusInstancesItemObject.pushGatewayIntraUrl = dataNodePrometheusInstancesPrometheusInstancesItem["PushGatewayIntraUrl"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["PushGatewayInterUrl"].isNull())
			prometheusInstancesItemObject.pushGatewayInterUrl = dataNodePrometheusInstancesPrometheusInstancesItem["PushGatewayInterUrl"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["HttpApiIntraUrl"].isNull())
			prometheusInstancesItemObject.httpApiIntraUrl = dataNodePrometheusInstancesPrometheusInstancesItem["HttpApiIntraUrl"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["HttpApiInterUrl"].isNull())
			prometheusInstancesItemObject.httpApiInterUrl = dataNodePrometheusInstancesPrometheusInstancesItem["HttpApiInterUrl"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["AuthToken"].isNull())
			prometheusInstancesItemObject.authToken = dataNodePrometheusInstancesPrometheusInstancesItem["AuthToken"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["PaymentType"].isNull())
			prometheusInstancesItemObject.paymentType = dataNodePrometheusInstancesPrometheusInstancesItem["PaymentType"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["GrafanaInstanceId"].isNull())
			prometheusInstancesItemObject.grafanaInstanceId = dataNodePrometheusInstancesPrometheusInstancesItem["GrafanaInstanceId"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["ResourceGroupId"].isNull())
			prometheusInstancesItemObject.resourceGroupId = dataNodePrometheusInstancesPrometheusInstancesItem["ResourceGroupId"].asString();
		if(!dataNodePrometheusInstancesPrometheusInstancesItem["ResourceType"].isNull())
			prometheusInstancesItemObject.resourceType = dataNodePrometheusInstancesPrometheusInstancesItem["ResourceType"].asString();
		auto allTagsNode = dataNodePrometheusInstancesPrometheusInstancesItem["Tags"]["tagsItem"];
		for (auto dataNodePrometheusInstancesPrometheusInstancesItemTagstagsItem : allTagsNode)
		{
			Data::PrometheusInstancesItem::TagsItem tagsObject;
			if(!dataNodePrometheusInstancesPrometheusInstancesItemTagstagsItem["TagKey"].isNull())
				tagsObject.tagKey = dataNodePrometheusInstancesPrometheusInstancesItemTagstagsItem["TagKey"].asString();
			if(!dataNodePrometheusInstancesPrometheusInstancesItemTagstagsItem["TagValue"].isNull())
				tagsObject.tagValue = dataNodePrometheusInstancesPrometheusInstancesItemTagstagsItem["TagValue"].asString();
			prometheusInstancesItemObject.tags.push_back(tagsObject);
		}
		data_.prometheusInstances.push_back(prometheusInstancesItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListPrometheusInstanceByTagAndResourceGroupIdResult::getMessage()const
{
	return message_;
}

ListPrometheusInstanceByTagAndResourceGroupIdResult::Data ListPrometheusInstanceByTagAndResourceGroupIdResult::getData()const
{
	return data_;
}

std::string ListPrometheusInstanceByTagAndResourceGroupIdResult::getCode()const
{
	return code_;
}


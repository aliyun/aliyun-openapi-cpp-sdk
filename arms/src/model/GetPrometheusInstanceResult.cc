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

#include <alibabacloud/arms/model/GetPrometheusInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetPrometheusInstanceResult::GetPrometheusInstanceResult() :
	ServiceResult()
{}

GetPrometheusInstanceResult::GetPrometheusInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPrometheusInstanceResult::~GetPrometheusInstanceResult()
{}

void GetPrometheusInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ClusterId"].isNull())
		data_.clusterId = dataNode["ClusterId"].asString();
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!dataNode["UserId"].isNull())
		data_.userId = dataNode["UserId"].asString();
	if(!dataNode["ClusterName"].isNull())
		data_.clusterName = dataNode["ClusterName"].asString();
	if(!dataNode["ClusterType"].isNull())
		data_.clusterType = dataNode["ClusterType"].asString();
	if(!dataNode["VpcId"].isNull())
		data_.vpcId = dataNode["VpcId"].asString();
	if(!dataNode["VSwitchId"].isNull())
		data_.vSwitchId = dataNode["VSwitchId"].asString();
	if(!dataNode["SecurityGroupId"].isNull())
		data_.securityGroupId = dataNode["SecurityGroupId"].asString();
	if(!dataNode["SubClustersJson"].isNull())
		data_.subClustersJson = dataNode["SubClustersJson"].asString();
	if(!dataNode["RemoteReadIntraUrl"].isNull())
		data_.remoteReadIntraUrl = dataNode["RemoteReadIntraUrl"].asString();
	if(!dataNode["RemoteReadInterUrl"].isNull())
		data_.remoteReadInterUrl = dataNode["RemoteReadInterUrl"].asString();
	if(!dataNode["RemoteWriteIntraUrl"].isNull())
		data_.remoteWriteIntraUrl = dataNode["RemoteWriteIntraUrl"].asString();
	if(!dataNode["RemoteWriteInterUrl"].isNull())
		data_.remoteWriteInterUrl = dataNode["RemoteWriteInterUrl"].asString();
	if(!dataNode["PushGatewayIntraUrl"].isNull())
		data_.pushGatewayIntraUrl = dataNode["PushGatewayIntraUrl"].asString();
	if(!dataNode["PushGatewayInterUrl"].isNull())
		data_.pushGatewayInterUrl = dataNode["PushGatewayInterUrl"].asString();
	if(!dataNode["HttpApiIntraUrl"].isNull())
		data_.httpApiIntraUrl = dataNode["HttpApiIntraUrl"].asString();
	if(!dataNode["HttpApiInterUrl"].isNull())
		data_.httpApiInterUrl = dataNode["HttpApiInterUrl"].asString();
	if(!dataNode["AuthToken"].isNull())
		data_.authToken = dataNode["AuthToken"].asString();
	if(!dataNode["AccessType"].isNull())
		data_.accessType = dataNode["AccessType"].asString();
	if(!dataNode["PaymentType"].isNull())
		data_.paymentType = dataNode["PaymentType"].asString();
	if(!dataNode["StorageDuration"].isNull())
		data_.storageDuration = std::stoi(dataNode["StorageDuration"].asString());
	if(!dataNode["ArchiveDuration"].isNull())
		data_.archiveDuration = std::stoi(dataNode["ArchiveDuration"].asString());
	if(!dataNode["GrafanaInstanceId"].isNull())
		data_.grafanaInstanceId = dataNode["GrafanaInstanceId"].asString();
	if(!dataNode["ResourceGroupId"].isNull())
		data_.resourceGroupId = dataNode["ResourceGroupId"].asString();
	if(!dataNode["ResourceType"].isNull())
		data_.resourceType = dataNode["ResourceType"].asString();
	if(!dataNode["EnableAuthToken"].isNull())
		data_.enableAuthToken = dataNode["EnableAuthToken"].asString();
	if(!dataNode["Product"].isNull())
		data_.product = dataNode["Product"].asString();
	if(!dataNode["DbInstanceStatus"].isNull())
		data_.dbInstanceStatus = dataNode["DbInstanceStatus"].asString();
	auto allTagsNode = dataNode["Tags"]["tagsItem"];
	for (auto dataNodeTagstagsItem : allTagsNode)
	{
		Data::TagsItem tagsItemObject;
		if(!dataNodeTagstagsItem["TagKey"].isNull())
			tagsItemObject.tagKey = dataNodeTagstagsItem["TagKey"].asString();
		if(!dataNodeTagstagsItem["TagValue"].isNull())
			tagsItemObject.tagValue = dataNodeTagstagsItem["TagValue"].asString();
		data_.tags.push_back(tagsItemObject);
	}
		auto allSupportAuthTypes = dataNode["SupportAuthTypes"]["SupportAuthType"];
		for (auto value : allSupportAuthTypes)
			data_.supportAuthTypes.push_back(value.asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

std::string GetPrometheusInstanceResult::getMessage()const
{
	return message_;
}

GetPrometheusInstanceResult::Data GetPrometheusInstanceResult::getData()const
{
	return data_;
}

int GetPrometheusInstanceResult::getCode()const
{
	return code_;
}


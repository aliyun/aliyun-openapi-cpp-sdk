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

#include <alibabacloud/arms/model/DescribeEnvironmentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

DescribeEnvironmentResult::DescribeEnvironmentResult() :
	ServiceResult()
{}

DescribeEnvironmentResult::DescribeEnvironmentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEnvironmentResult::~DescribeEnvironmentResult()
{}

void DescribeEnvironmentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["EnvironmentId"].isNull())
		data_.environmentId = dataNode["EnvironmentId"].asString();
	if(!dataNode["EnvironmentType"].isNull())
		data_.environmentType = dataNode["EnvironmentType"].asString();
	if(!dataNode["EnvironmentName"].isNull())
		data_.environmentName = dataNode["EnvironmentName"].asString();
	if(!dataNode["EnvironmentSubType"].isNull())
		data_.environmentSubType = dataNode["EnvironmentSubType"].asString();
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!dataNode["UserId"].isNull())
		data_.userId = dataNode["UserId"].asString();
	if(!dataNode["BindResourceId"].isNull())
		data_.bindResourceId = dataNode["BindResourceId"].asString();
	if(!dataNode["BindResourceType"].isNull())
		data_.bindResourceType = dataNode["BindResourceType"].asString();
	if(!dataNode["BindResourceStatus"].isNull())
		data_.bindResourceStatus = dataNode["BindResourceStatus"].asString();
	if(!dataNode["BindResourceProfile"].isNull())
		data_.bindResourceProfile = dataNode["BindResourceProfile"].asString();
	if(!dataNode["BindVpcCidr"].isNull())
		data_.bindVpcCidr = dataNode["BindVpcCidr"].asString();
	if(!dataNode["PrometheusInstanceId"].isNull())
		data_.prometheusInstanceId = dataNode["PrometheusInstanceId"].asString();
	if(!dataNode["PrometheusInstanceName"].isNull())
		data_.prometheusInstanceName = dataNode["PrometheusInstanceName"].asString();
	if(!dataNode["GrafanaWorkspaceId"].isNull())
		data_.grafanaWorkspaceId = dataNode["GrafanaWorkspaceId"].asString();
	if(!dataNode["GrafanaFolderUid"].isNull())
		data_.grafanaFolderUid = dataNode["GrafanaFolderUid"].asString();
	if(!dataNode["GrafanaDatasourceUid"].isNull())
		data_.grafanaDatasourceUid = dataNode["GrafanaDatasourceUid"].asString();
	if(!dataNode["VpcId"].isNull())
		data_.vpcId = dataNode["VpcId"].asString();
	if(!dataNode["GrafanaFolderUrl"].isNull())
		data_.grafanaFolderUrl = dataNode["GrafanaFolderUrl"].asString();
	if(!dataNode["BindResourceStoreDuration"].isNull())
		data_.bindResourceStoreDuration = dataNode["BindResourceStoreDuration"].asString();
	if(!dataNode["GrafaDataSourceName"].isNull())
		data_.grafaDataSourceName = dataNode["GrafaDataSourceName"].asString();
	if(!dataNode["GrafanaFolderTitle"].isNull())
		data_.grafanaFolderTitle = dataNode["GrafanaFolderTitle"].asString();
	if(!dataNode["ManagedType"].isNull())
		data_.managedType = dataNode["ManagedType"].asString();
	if(!dataNode["FeePackage"].isNull())
		data_.feePackage = dataNode["FeePackage"].asString();
	if(!dataNode["DbInstanceStatus"].isNull())
		data_.dbInstanceStatus = dataNode["DbInstanceStatus"].asString();
	if(!dataNode["SecurityGroupId"].isNull())
		data_.securityGroupId = dataNode["SecurityGroupId"].asString();
	if(!dataNode["VswitchId"].isNull())
		data_.vswitchId = dataNode["VswitchId"].asString();
	if(!dataNode["ResourceGroupId"].isNull())
		data_.resourceGroupId = dataNode["ResourceGroupId"].asString();
	auto allTagsNode = dataNode["Tags"]["tagsItem"];
	for (auto dataNodeTagstagsItem : allTagsNode)
	{
		Data::TagsItem tagsItemObject;
		if(!dataNodeTagstagsItem["Key"].isNull())
			tagsItemObject.key = dataNodeTagstagsItem["Key"].asString();
		if(!dataNodeTagstagsItem["Value"].isNull())
			tagsItemObject.value = dataNodeTagstagsItem["Value"].asString();
		data_.tags.push_back(tagsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeEnvironmentResult::getMessage()const
{
	return message_;
}

DescribeEnvironmentResult::Data DescribeEnvironmentResult::getData()const
{
	return data_;
}

int DescribeEnvironmentResult::getCode()const
{
	return code_;
}


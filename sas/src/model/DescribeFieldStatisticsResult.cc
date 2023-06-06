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

#include <alibabacloud/sas/model/DescribeFieldStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeFieldStatisticsResult::DescribeFieldStatisticsResult() :
	ServiceResult()
{}

DescribeFieldStatisticsResult::DescribeFieldStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFieldStatisticsResult::~DescribeFieldStatisticsResult()
{}

void DescribeFieldStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto groupedFieldsNode = value["GroupedFields"];
	if(!groupedFieldsNode["OfflineInstanceCount"].isNull())
		groupedFields_.offlineInstanceCount = std::stoi(groupedFieldsNode["OfflineInstanceCount"].asString());
	if(!groupedFieldsNode["NoRiskInstanceCount"].isNull())
		groupedFields_.noRiskInstanceCount = std::stoi(groupedFieldsNode["NoRiskInstanceCount"].asString());
	if(!groupedFieldsNode["UnKnowStatusInstanceCount"].isNull())
		groupedFields_.unKnowStatusInstanceCount = std::stoi(groupedFieldsNode["UnKnowStatusInstanceCount"].asString());
	if(!groupedFieldsNode["RegionCount"].isNull())
		groupedFields_.regionCount = std::stoi(groupedFieldsNode["RegionCount"].asString());
	if(!groupedFieldsNode["NewInstanceCount"].isNull())
		groupedFields_.newInstanceCount = std::stoi(groupedFieldsNode["NewInstanceCount"].asString());
	if(!groupedFieldsNode["ExposedInstanceCount"].isNull())
		groupedFields_.exposedInstanceCount = std::stoi(groupedFieldsNode["ExposedInstanceCount"].asString());
	if(!groupedFieldsNode["GroupCount"].isNull())
		groupedFields_.groupCount = std::stoi(groupedFieldsNode["GroupCount"].asString());
	if(!groupedFieldsNode["TencentInstanceCount"].isNull())
		groupedFields_.tencentInstanceCount = std::stoi(groupedFieldsNode["TencentInstanceCount"].asString());
	if(!groupedFieldsNode["GeneralAssetCount"].isNull())
		groupedFields_.generalAssetCount = std::stoi(groupedFieldsNode["GeneralAssetCount"].asString());
	if(!groupedFieldsNode["InstanceSyncTaskCount"].isNull())
		groupedFields_.instanceSyncTaskCount = std::stoi(groupedFieldsNode["InstanceSyncTaskCount"].asString());
	if(!groupedFieldsNode["UnprotectedInstanceCount"].isNull())
		groupedFields_.unprotectedInstanceCount = std::stoi(groupedFieldsNode["UnprotectedInstanceCount"].asString());
	if(!groupedFieldsNode["ImportantAssetCount"].isNull())
		groupedFields_.importantAssetCount = std::stoi(groupedFieldsNode["ImportantAssetCount"].asString());
	if(!groupedFieldsNode["TestAssetCount"].isNull())
		groupedFields_.testAssetCount = std::stoi(groupedFieldsNode["TestAssetCount"].asString());
	if(!groupedFieldsNode["VpcCount"].isNull())
		groupedFields_.vpcCount = std::stoi(groupedFieldsNode["VpcCount"].asString());
	if(!groupedFieldsNode["InstanceCount"].isNull())
		groupedFields_.instanceCount = std::stoi(groupedFieldsNode["InstanceCount"].asString());
	if(!groupedFieldsNode["PauseInstanceCount"].isNull())
		groupedFields_.pauseInstanceCount = std::stoi(groupedFieldsNode["PauseInstanceCount"].asString());
	if(!groupedFieldsNode["IdcInstanceCount"].isNull())
		groupedFields_.idcInstanceCount = std::stoi(groupedFieldsNode["IdcInstanceCount"].asString());
	if(!groupedFieldsNode["NotRunningStatusCount"].isNull())
		groupedFields_.notRunningStatusCount = std::stoi(groupedFieldsNode["NotRunningStatusCount"].asString());
	if(!groupedFieldsNode["AliYunInstanceCount"].isNull())
		groupedFields_.aliYunInstanceCount = std::stoi(groupedFieldsNode["AliYunInstanceCount"].asString());
	if(!groupedFieldsNode["RiskInstanceCount"].isNull())
		groupedFields_.riskInstanceCount = std::stoi(groupedFieldsNode["RiskInstanceCount"].asString());
	if(!groupedFieldsNode["HuaweiInstanceCount"].isNull())
		groupedFields_.huaweiInstanceCount = std::stoi(groupedFieldsNode["HuaweiInstanceCount"].asString());
	if(!groupedFieldsNode["AwsInstanceCount"].isNull())
		groupedFields_.awsInstanceCount = std::stoi(groupedFieldsNode["AwsInstanceCount"].asString());
	if(!groupedFieldsNode["OutMachineInstanceCount"].isNull())
		groupedFields_.outMachineInstanceCount = std::stoi(groupedFieldsNode["OutMachineInstanceCount"].asString());
	if(!groupedFieldsNode["TripartiteInstanceCount"].isNull())
		groupedFields_.tripartiteInstanceCount = std::stoi(groupedFieldsNode["TripartiteInstanceCount"].asString());
	if(!groupedFieldsNode["AzureInstanceCount"].isNull())
		groupedFields_.azureInstanceCount = std::stoi(groupedFieldsNode["AzureInstanceCount"].asString());

}

DescribeFieldStatisticsResult::GroupedFields DescribeFieldStatisticsResult::getGroupedFields()const
{
	return groupedFields_;
}


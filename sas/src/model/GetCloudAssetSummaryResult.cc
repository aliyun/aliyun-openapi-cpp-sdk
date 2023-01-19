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

#include <alibabacloud/sas/model/GetCloudAssetSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetCloudAssetSummaryResult::GetCloudAssetSummaryResult() :
	ServiceResult()
{}

GetCloudAssetSummaryResult::GetCloudAssetSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCloudAssetSummaryResult::~GetCloudAssetSummaryResult()
{}

void GetCloudAssetSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto groupedFieldsNode = value["GroupedFields"];
	if(!groupedFieldsNode["InstanceCountTotal"].isNull())
		groupedFields_.instanceCountTotal = std::stoi(groupedFieldsNode["InstanceCountTotal"].asString());
	if(!groupedFieldsNode["InstanceRiskCountTotal"].isNull())
		groupedFields_.instanceRiskCountTotal = std::stoi(groupedFieldsNode["InstanceRiskCountTotal"].asString());
	auto allCloudAssetSummaryMetasNode = groupedFieldsNode["CloudAssetSummaryMetas"]["CloudAssetSummaryMetasItem"];
	for (auto groupedFieldsNodeCloudAssetSummaryMetasCloudAssetSummaryMetasItem : allCloudAssetSummaryMetasNode)
	{
		GroupedFields::CloudAssetSummaryMetasItem cloudAssetSummaryMetasItemObject;
		if(!groupedFieldsNodeCloudAssetSummaryMetasCloudAssetSummaryMetasItem["AssetType"].isNull())
			cloudAssetSummaryMetasItemObject.assetType = std::stoi(groupedFieldsNodeCloudAssetSummaryMetasCloudAssetSummaryMetasItem["AssetType"].asString());
		if(!groupedFieldsNodeCloudAssetSummaryMetasCloudAssetSummaryMetasItem["AssetSubType"].isNull())
			cloudAssetSummaryMetasItemObject.assetSubType = std::stoi(groupedFieldsNodeCloudAssetSummaryMetasCloudAssetSummaryMetasItem["AssetSubType"].asString());
		if(!groupedFieldsNodeCloudAssetSummaryMetasCloudAssetSummaryMetasItem["InstanceCount"].isNull())
			cloudAssetSummaryMetasItemObject.instanceCount = std::stoi(groupedFieldsNodeCloudAssetSummaryMetasCloudAssetSummaryMetasItem["InstanceCount"].asString());
		if(!groupedFieldsNodeCloudAssetSummaryMetasCloudAssetSummaryMetasItem["InstanceRiskCount"].isNull())
			cloudAssetSummaryMetasItemObject.instanceRiskCount = std::stoi(groupedFieldsNodeCloudAssetSummaryMetasCloudAssetSummaryMetasItem["InstanceRiskCount"].asString());
		groupedFields_.cloudAssetSummaryMetas.push_back(cloudAssetSummaryMetasItemObject);
	}

}

GetCloudAssetSummaryResult::GroupedFields GetCloudAssetSummaryResult::getGroupedFields()const
{
	return groupedFields_;
}


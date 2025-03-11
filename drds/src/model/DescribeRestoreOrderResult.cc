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

#include <alibabacloud/drds/model/DescribeRestoreOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeRestoreOrderResult::DescribeRestoreOrderResult() :
	ServiceResult()
{}

DescribeRestoreOrderResult::DescribeRestoreOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRestoreOrderResult::~DescribeRestoreOrderResult()
{}

void DescribeRestoreOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto restoreOrderDONode = value["RestoreOrderDO"];
	auto allDrdsOrderDOListNode = restoreOrderDONode["DrdsOrderDOList"]["DrdsOrderDOListItem"];
	for (auto restoreOrderDONodeDrdsOrderDOListDrdsOrderDOListItem : allDrdsOrderDOListNode)
	{
		RestoreOrderDO::DrdsOrderDOListItem drdsOrderDOListItemObject;
		if(!restoreOrderDONodeDrdsOrderDOListDrdsOrderDOListItem["VpcId"].isNull())
			drdsOrderDOListItemObject.vpcId = restoreOrderDONodeDrdsOrderDOListDrdsOrderDOListItem["VpcId"].asString();
		if(!restoreOrderDONodeDrdsOrderDOListDrdsOrderDOListItem["Network"].isNull())
			drdsOrderDOListItemObject.network = restoreOrderDONodeDrdsOrderDOListDrdsOrderDOListItem["Network"].asString();
		if(!restoreOrderDONodeDrdsOrderDOListDrdsOrderDOListItem["VSwtichId"].isNull())
			drdsOrderDOListItemObject.vSwtichId = restoreOrderDONodeDrdsOrderDOListDrdsOrderDOListItem["VSwtichId"].asString();
		if(!restoreOrderDONodeDrdsOrderDOListDrdsOrderDOListItem["InstSpec"].isNull())
			drdsOrderDOListItemObject.instSpec = restoreOrderDONodeDrdsOrderDOListDrdsOrderDOListItem["InstSpec"].asString();
		if(!restoreOrderDONodeDrdsOrderDOListDrdsOrderDOListItem["AzoneId"].isNull())
			drdsOrderDOListItemObject.azoneId = restoreOrderDONodeDrdsOrderDOListDrdsOrderDOListItem["AzoneId"].asString();
		if(!restoreOrderDONodeDrdsOrderDOListDrdsOrderDOListItem["RegionId"].isNull())
			drdsOrderDOListItemObject.regionId = restoreOrderDONodeDrdsOrderDOListDrdsOrderDOListItem["RegionId"].asString();
		restoreOrderDO_.drdsOrderDOList.push_back(drdsOrderDOListItemObject);
	}
	auto allRdsOrderDOListNode = restoreOrderDONode["RdsOrderDOList"]["RdsOrderDOListItem"];
	for (auto restoreOrderDONodeRdsOrderDOListRdsOrderDOListItem : allRdsOrderDOListNode)
	{
		RestoreOrderDO::RdsOrderDOListItem rdsOrderDOListItemObject;
		if(!restoreOrderDONodeRdsOrderDOListRdsOrderDOListItem["Network"].isNull())
			rdsOrderDOListItemObject.network = restoreOrderDONodeRdsOrderDOListRdsOrderDOListItem["Network"].asString();
		if(!restoreOrderDONodeRdsOrderDOListRdsOrderDOListItem["Version"].isNull())
			rdsOrderDOListItemObject.version = restoreOrderDONodeRdsOrderDOListRdsOrderDOListItem["Version"].asString();
		if(!restoreOrderDONodeRdsOrderDOListRdsOrderDOListItem["InstanceClass"].isNull())
			rdsOrderDOListItemObject.instanceClass = restoreOrderDONodeRdsOrderDOListRdsOrderDOListItem["InstanceClass"].asString();
		if(!restoreOrderDONodeRdsOrderDOListRdsOrderDOListItem["DbInstanceStorage"].isNull())
			rdsOrderDOListItemObject.dbInstanceStorage = restoreOrderDONodeRdsOrderDOListRdsOrderDOListItem["DbInstanceStorage"].asString();
		if(!restoreOrderDONodeRdsOrderDOListRdsOrderDOListItem["Num"].isNull())
			rdsOrderDOListItemObject.num = std::stol(restoreOrderDONodeRdsOrderDOListRdsOrderDOListItem["Num"].asString());
		if(!restoreOrderDONodeRdsOrderDOListRdsOrderDOListItem["Engine"].isNull())
			rdsOrderDOListItemObject.engine = restoreOrderDONodeRdsOrderDOListRdsOrderDOListItem["Engine"].asString();
		if(!restoreOrderDONodeRdsOrderDOListRdsOrderDOListItem["AzoneId"].isNull())
			rdsOrderDOListItemObject.azoneId = restoreOrderDONodeRdsOrderDOListRdsOrderDOListItem["AzoneId"].asString();
		if(!restoreOrderDONodeRdsOrderDOListRdsOrderDOListItem["RegionId"].isNull())
			rdsOrderDOListItemObject.regionId = restoreOrderDONodeRdsOrderDOListRdsOrderDOListItem["RegionId"].asString();
		restoreOrderDO_.rdsOrderDOList.push_back(rdsOrderDOListItemObject);
	}
	auto allPolarOrderDOListNode = restoreOrderDONode["PolarOrderDOList"]["PolarOrderDOListItem"];
	for (auto restoreOrderDONodePolarOrderDOListPolarOrderDOListItem : allPolarOrderDOListNode)
	{
		RestoreOrderDO::PolarOrderDOListItem polarOrderDOListItemObject;
		if(!restoreOrderDONodePolarOrderDOListPolarOrderDOListItem["Network"].isNull())
			polarOrderDOListItemObject.network = restoreOrderDONodePolarOrderDOListPolarOrderDOListItem["Network"].asString();
		if(!restoreOrderDONodePolarOrderDOListPolarOrderDOListItem["Version"].isNull())
			polarOrderDOListItemObject.version = restoreOrderDONodePolarOrderDOListPolarOrderDOListItem["Version"].asString();
		if(!restoreOrderDONodePolarOrderDOListPolarOrderDOListItem["InstanceClass"].isNull())
			polarOrderDOListItemObject.instanceClass = restoreOrderDONodePolarOrderDOListPolarOrderDOListItem["InstanceClass"].asString();
		if(!restoreOrderDONodePolarOrderDOListPolarOrderDOListItem["DbInstanceStorage"].isNull())
			polarOrderDOListItemObject.dbInstanceStorage = restoreOrderDONodePolarOrderDOListPolarOrderDOListItem["DbInstanceStorage"].asString();
		if(!restoreOrderDONodePolarOrderDOListPolarOrderDOListItem["Num"].isNull())
			polarOrderDOListItemObject.num = std::stol(restoreOrderDONodePolarOrderDOListPolarOrderDOListItem["Num"].asString());
		if(!restoreOrderDONodePolarOrderDOListPolarOrderDOListItem["Engine"].isNull())
			polarOrderDOListItemObject.engine = restoreOrderDONodePolarOrderDOListPolarOrderDOListItem["Engine"].asString();
		if(!restoreOrderDONodePolarOrderDOListPolarOrderDOListItem["AzoneId"].isNull())
			polarOrderDOListItemObject.azoneId = restoreOrderDONodePolarOrderDOListPolarOrderDOListItem["AzoneId"].asString();
		if(!restoreOrderDONodePolarOrderDOListPolarOrderDOListItem["RegionId"].isNull())
			polarOrderDOListItemObject.regionId = restoreOrderDONodePolarOrderDOListPolarOrderDOListItem["RegionId"].asString();
		restoreOrderDO_.polarOrderDOList.push_back(polarOrderDOListItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeRestoreOrderResult::RestoreOrderDO DescribeRestoreOrderResult::getRestoreOrderDO()const
{
	return restoreOrderDO_;
}

bool DescribeRestoreOrderResult::getSuccess()const
{
	return success_;
}


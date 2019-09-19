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

#include <alibabacloud/emr/model/GetHdfsCapacityStatisticInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetHdfsCapacityStatisticInfoResult::GetHdfsCapacityStatisticInfoResult() :
	ServiceResult()
{}

GetHdfsCapacityStatisticInfoResult::GetHdfsCapacityStatisticInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHdfsCapacityStatisticInfoResult::~GetHdfsCapacityStatisticInfoResult()
{}

void GetHdfsCapacityStatisticInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHdfsCapacityListNode = value["HdfsCapacityList"]["ClusterStatHdfsCapacity"];
	for (auto valueHdfsCapacityListClusterStatHdfsCapacity : allHdfsCapacityListNode)
	{
		ClusterStatHdfsCapacity hdfsCapacityListObject;
		if(!valueHdfsCapacityListClusterStatHdfsCapacity["CapacityTotal"].isNull())
			hdfsCapacityListObject.capacityTotal = std::stol(valueHdfsCapacityListClusterStatHdfsCapacity["CapacityTotal"].asString());
		if(!valueHdfsCapacityListClusterStatHdfsCapacity["CapacityTotalGB"].isNull())
			hdfsCapacityListObject.capacityTotalGB = std::stol(valueHdfsCapacityListClusterStatHdfsCapacity["CapacityTotalGB"].asString());
		if(!valueHdfsCapacityListClusterStatHdfsCapacity["CapacityUsed"].isNull())
			hdfsCapacityListObject.capacityUsed = std::stol(valueHdfsCapacityListClusterStatHdfsCapacity["CapacityUsed"].asString());
		if(!valueHdfsCapacityListClusterStatHdfsCapacity["CapacityUsedGB"].isNull())
			hdfsCapacityListObject.capacityUsedGB = std::stol(valueHdfsCapacityListClusterStatHdfsCapacity["CapacityUsedGB"].asString());
		if(!valueHdfsCapacityListClusterStatHdfsCapacity["CapacityRemaining"].isNull())
			hdfsCapacityListObject.capacityRemaining = std::stol(valueHdfsCapacityListClusterStatHdfsCapacity["CapacityRemaining"].asString());
		if(!valueHdfsCapacityListClusterStatHdfsCapacity["CapacityRemainingGB"].isNull())
			hdfsCapacityListObject.capacityRemainingGB = std::stol(valueHdfsCapacityListClusterStatHdfsCapacity["CapacityRemainingGB"].asString());
		if(!valueHdfsCapacityListClusterStatHdfsCapacity["CapacityUsedNonDfs"].isNull())
			hdfsCapacityListObject.capacityUsedNonDfs = std::stol(valueHdfsCapacityListClusterStatHdfsCapacity["CapacityUsedNonDfs"].asString());
		if(!valueHdfsCapacityListClusterStatHdfsCapacity["ClusterBizId"].isNull())
			hdfsCapacityListObject.clusterBizId = valueHdfsCapacityListClusterStatHdfsCapacity["ClusterBizId"].asString();
		if(!valueHdfsCapacityListClusterStatHdfsCapacity["DateTime"].isNull())
			hdfsCapacityListObject.dateTime = valueHdfsCapacityListClusterStatHdfsCapacity["DateTime"].asString();
		hdfsCapacityList_.push_back(hdfsCapacityListObject);
	}

}

std::vector<GetHdfsCapacityStatisticInfoResult::ClusterStatHdfsCapacity> GetHdfsCapacityStatisticInfoResult::getHdfsCapacityList()const
{
	return hdfsCapacityList_;
}


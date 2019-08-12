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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allHdfsCapacityList = value["HdfsCapacityList"]["ClusterStatHdfsCapacity"];
	for (auto value : allHdfsCapacityList)
	{
		ClusterStatHdfsCapacity hdfsCapacityListObject;
		if(!value["CapacityTotal"].isNull())
			hdfsCapacityListObject.capacityTotal = std::stol(value["CapacityTotal"].asString());
		if(!value["CapacityTotalGB"].isNull())
			hdfsCapacityListObject.capacityTotalGB = std::stol(value["CapacityTotalGB"].asString());
		if(!value["CapacityUsed"].isNull())
			hdfsCapacityListObject.capacityUsed = std::stol(value["CapacityUsed"].asString());
		if(!value["CapacityUsedGB"].isNull())
			hdfsCapacityListObject.capacityUsedGB = std::stol(value["CapacityUsedGB"].asString());
		if(!value["CapacityRemaining"].isNull())
			hdfsCapacityListObject.capacityRemaining = std::stol(value["CapacityRemaining"].asString());
		if(!value["CapacityRemainingGB"].isNull())
			hdfsCapacityListObject.capacityRemainingGB = std::stol(value["CapacityRemainingGB"].asString());
		if(!value["CapacityUsedNonDfs"].isNull())
			hdfsCapacityListObject.capacityUsedNonDfs = std::stol(value["CapacityUsedNonDfs"].asString());
		if(!value["ClusterBizId"].isNull())
			hdfsCapacityListObject.clusterBizId = value["ClusterBizId"].asString();
		if(!value["DateTime"].isNull())
			hdfsCapacityListObject.dateTime = value["DateTime"].asString();
		hdfsCapacityList_.push_back(hdfsCapacityListObject);
	}

}

std::vector<GetHdfsCapacityStatisticInfoResult::ClusterStatHdfsCapacity> GetHdfsCapacityStatisticInfoResult::getHdfsCapacityList()const
{
	return hdfsCapacityList_;
}


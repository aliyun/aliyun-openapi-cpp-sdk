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

#include <alibabacloud/ens/model/DescribeEpnInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeEpnInstancesResult::DescribeEpnInstancesResult() :
	ServiceResult()
{}

DescribeEpnInstancesResult::DescribeEpnInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEpnInstancesResult::~DescribeEpnInstancesResult()
{}

void DescribeEpnInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEPNInstancesNode = value["EPNInstances"]["EPNInstance"];
	for (auto valueEPNInstancesEPNInstance : allEPNInstancesNode)
	{
		EPNInstance ePNInstancesObject;
		if(!valueEPNInstancesEPNInstance["CreationTime"].isNull())
			ePNInstancesObject.creationTime = valueEPNInstancesEPNInstance["CreationTime"].asString();
		if(!valueEPNInstancesEPNInstance["EPNInstanceId"].isNull())
			ePNInstancesObject.ePNInstanceId = valueEPNInstancesEPNInstance["EPNInstanceId"].asString();
		if(!valueEPNInstancesEPNInstance["EPNInstanceName"].isNull())
			ePNInstancesObject.ePNInstanceName = valueEPNInstancesEPNInstance["EPNInstanceName"].asString();
		if(!valueEPNInstancesEPNInstance["EPNInstanceType"].isNull())
			ePNInstancesObject.ePNInstanceType = valueEPNInstancesEPNInstance["EPNInstanceType"].asString();
		if(!valueEPNInstancesEPNInstance["EndTime"].isNull())
			ePNInstancesObject.endTime = valueEPNInstancesEPNInstance["EndTime"].asString();
		if(!valueEPNInstancesEPNInstance["InternetMaxBandwidthOut"].isNull())
			ePNInstancesObject.internetMaxBandwidthOut = std::stoi(valueEPNInstancesEPNInstance["InternetMaxBandwidthOut"].asString());
		if(!valueEPNInstancesEPNInstance["ModifyTime"].isNull())
			ePNInstancesObject.modifyTime = valueEPNInstancesEPNInstance["ModifyTime"].asString();
		if(!valueEPNInstancesEPNInstance["NetworkingModel"].isNull())
			ePNInstancesObject.networkingModel = valueEPNInstancesEPNInstance["NetworkingModel"].asString();
		if(!valueEPNInstancesEPNInstance["StartTime"].isNull())
			ePNInstancesObject.startTime = valueEPNInstancesEPNInstance["StartTime"].asString();
		if(!valueEPNInstancesEPNInstance["Status"].isNull())
			ePNInstancesObject.status = valueEPNInstancesEPNInstance["Status"].asString();
		ePNInstances_.push_back(ePNInstancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeEpnInstancesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeEpnInstancesResult::EPNInstance> DescribeEpnInstancesResult::getEPNInstances()const
{
	return ePNInstances_;
}

int DescribeEpnInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEpnInstancesResult::getPageNumber()const
{
	return pageNumber_;
}


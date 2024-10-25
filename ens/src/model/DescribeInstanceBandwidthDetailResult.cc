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

#include <alibabacloud/ens/model/DescribeInstanceBandwidthDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeInstanceBandwidthDetailResult::DescribeInstanceBandwidthDetailResult() :
	ServiceResult()
{}

DescribeInstanceBandwidthDetailResult::DescribeInstanceBandwidthDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceBandwidthDetailResult::~DescribeInstanceBandwidthDetailResult()
{}

void DescribeInstanceBandwidthDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBandwidthsNode = value["Bandwidths"]["Bandwidth"];
	for (auto valueBandwidthsBandwidth : allBandwidthsNode)
	{
		Bandwidth bandwidthsObject;
		if(!valueBandwidthsBandwidth["InstanceId"].isNull())
			bandwidthsObject.instanceId = valueBandwidthsBandwidth["InstanceId"].asString();
		if(!valueBandwidthsBandwidth["ServiceType"].isNull())
			bandwidthsObject.serviceType = valueBandwidthsBandwidth["ServiceType"].asString();
		if(!valueBandwidthsBandwidth["InstanceType"].isNull())
			bandwidthsObject.instanceType = valueBandwidthsBandwidth["InstanceType"].asString();
		if(!valueBandwidthsBandwidth["AliUid"].isNull())
			bandwidthsObject.aliUid = std::stol(valueBandwidthsBandwidth["AliUid"].asString());
		if(!valueBandwidthsBandwidth["EnsRegionId"].isNull())
			bandwidthsObject.ensRegionId = valueBandwidthsBandwidth["EnsRegionId"].asString();
		if(!valueBandwidthsBandwidth["TxBw"].isNull())
			bandwidthsObject.txBw = std::stol(valueBandwidthsBandwidth["TxBw"].asString());
		if(!valueBandwidthsBandwidth["RxBw"].isNull())
			bandwidthsObject.rxBw = std::stol(valueBandwidthsBandwidth["RxBw"].asString());
		if(!valueBandwidthsBandwidth["Ip"].isNull())
			bandwidthsObject.ip = valueBandwidthsBandwidth["Ip"].asString();
		if(!valueBandwidthsBandwidth["Isp"].isNull())
			bandwidthsObject.isp = valueBandwidthsBandwidth["Isp"].asString();
		if(!valueBandwidthsBandwidth["FlowType"].isNull())
			bandwidthsObject.flowType = std::stoi(valueBandwidthsBandwidth["FlowType"].asString());
		if(!valueBandwidthsBandwidth["BizTime"].isNull())
			bandwidthsObject.bizTime = valueBandwidthsBandwidth["BizTime"].asString();
		bandwidths_.push_back(bandwidthsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeInstanceBandwidthDetailResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeInstanceBandwidthDetailResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstanceBandwidthDetailResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeInstanceBandwidthDetailResult::Bandwidth> DescribeInstanceBandwidthDetailResult::getBandwidths()const
{
	return bandwidths_;
}


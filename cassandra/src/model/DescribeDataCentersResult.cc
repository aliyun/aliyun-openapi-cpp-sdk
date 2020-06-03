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

#include <alibabacloud/cassandra/model/DescribeDataCentersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cassandra;
using namespace AlibabaCloud::Cassandra::Model;

DescribeDataCentersResult::DescribeDataCentersResult() :
	ServiceResult()
{}

DescribeDataCentersResult::DescribeDataCentersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataCentersResult::~DescribeDataCentersResult()
{}

void DescribeDataCentersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataCentersNode = value["DataCenters"]["DataCenter"];
	for (auto valueDataCentersDataCenter : allDataCentersNode)
	{
		DataCenter dataCentersObject;
		if(!valueDataCentersDataCenter["DataCenterId"].isNull())
			dataCentersObject.dataCenterId = valueDataCentersDataCenter["DataCenterId"].asString();
		if(!valueDataCentersDataCenter["RegionId"].isNull())
			dataCentersObject.regionId = valueDataCentersDataCenter["RegionId"].asString();
		if(!valueDataCentersDataCenter["ZoneId"].isNull())
			dataCentersObject.zoneId = valueDataCentersDataCenter["ZoneId"].asString();
		if(!valueDataCentersDataCenter["ClusterId"].isNull())
			dataCentersObject.clusterId = valueDataCentersDataCenter["ClusterId"].asString();
		if(!valueDataCentersDataCenter["DataCenterName"].isNull())
			dataCentersObject.dataCenterName = valueDataCentersDataCenter["DataCenterName"].asString();
		if(!valueDataCentersDataCenter["Status"].isNull())
			dataCentersObject.status = valueDataCentersDataCenter["Status"].asString();
		if(!valueDataCentersDataCenter["CreatedTime"].isNull())
			dataCentersObject.createdTime = valueDataCentersDataCenter["CreatedTime"].asString();
		if(!valueDataCentersDataCenter["InstanceType"].isNull())
			dataCentersObject.instanceType = valueDataCentersDataCenter["InstanceType"].asString();
		if(!valueDataCentersDataCenter["NodeCount"].isNull())
			dataCentersObject.nodeCount = std::stoi(valueDataCentersDataCenter["NodeCount"].asString());
		if(!valueDataCentersDataCenter["DiskType"].isNull())
			dataCentersObject.diskType = valueDataCentersDataCenter["DiskType"].asString();
		if(!valueDataCentersDataCenter["DiskSize"].isNull())
			dataCentersObject.diskSize = std::stoi(valueDataCentersDataCenter["DiskSize"].asString());
		if(!valueDataCentersDataCenter["VpcId"].isNull())
			dataCentersObject.vpcId = valueDataCentersDataCenter["VpcId"].asString();
		if(!valueDataCentersDataCenter["VswitchId"].isNull())
			dataCentersObject.vswitchId = valueDataCentersDataCenter["VswitchId"].asString();
		if(!valueDataCentersDataCenter["PayType"].isNull())
			dataCentersObject.payType = valueDataCentersDataCenter["PayType"].asString();
		if(!valueDataCentersDataCenter["CommodityInstance"].isNull())
			dataCentersObject.commodityInstance = valueDataCentersDataCenter["CommodityInstance"].asString();
		if(!valueDataCentersDataCenter["ExpireTime"].isNull())
			dataCentersObject.expireTime = valueDataCentersDataCenter["ExpireTime"].asString();
		if(!valueDataCentersDataCenter["LockMode"].isNull())
			dataCentersObject.lockMode = valueDataCentersDataCenter["LockMode"].asString();
		if(!valueDataCentersDataCenter["AutoRenewal"].isNull())
			dataCentersObject.autoRenewal = valueDataCentersDataCenter["AutoRenewal"].asString() == "true";
		if(!valueDataCentersDataCenter["AutoRenewPeriod"].isNull())
			dataCentersObject.autoRenewPeriod = std::stoi(valueDataCentersDataCenter["AutoRenewPeriod"].asString());
		dataCenters_.push_back(dataCentersObject);
	}

}

std::vector<DescribeDataCentersResult::DataCenter> DescribeDataCentersResult::getDataCenters()const
{
	return dataCenters_;
}


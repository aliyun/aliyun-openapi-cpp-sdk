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

#include <alibabacloud/oceanbasepro/model/DescribeTenantsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeTenantsResult::DescribeTenantsResult() :
	ServiceResult()
{}

DescribeTenantsResult::DescribeTenantsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTenantsResult::~DescribeTenantsResult()
{}

void DescribeTenantsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTenantsNode = value["Tenants"]["Data"];
	for (auto valueTenantsData : allTenantsNode)
	{
		Data tenantsObject;
		if(!valueTenantsData["VpcId"].isNull())
			tenantsObject.vpcId = valueTenantsData["VpcId"].asString();
		if(!valueTenantsData["Status"].isNull())
			tenantsObject.status = valueTenantsData["Status"].asString();
		if(!valueTenantsData["PrimaryZone"].isNull())
			tenantsObject.primaryZone = valueTenantsData["PrimaryZone"].asString();
		if(!valueTenantsData["DeployType"].isNull())
			tenantsObject.deployType = valueTenantsData["DeployType"].asString();
		if(!valueTenantsData["DeployMode"].isNull())
			tenantsObject.deployMode = valueTenantsData["DeployMode"].asString();
		if(!valueTenantsData["CreateTime"].isNull())
			tenantsObject.createTime = valueTenantsData["CreateTime"].asString();
		if(!valueTenantsData["TenantName"].isNull())
			tenantsObject.tenantName = valueTenantsData["TenantName"].asString();
		if(!valueTenantsData["Mem"].isNull())
			tenantsObject.mem = std::stoi(valueTenantsData["Mem"].asString());
		if(!valueTenantsData["Cpu"].isNull())
			tenantsObject.cpu = std::stoi(valueTenantsData["Cpu"].asString());
		if(!valueTenantsData["Description"].isNull())
			tenantsObject.description = valueTenantsData["Description"].asString();
		if(!valueTenantsData["TenantMode"].isNull())
			tenantsObject.tenantMode = valueTenantsData["TenantMode"].asString();
		if(!valueTenantsData["TenantId"].isNull())
			tenantsObject.tenantId = valueTenantsData["TenantId"].asString();
		if(!valueTenantsData["UnitCpu"].isNull())
			tenantsObject.unitCpu = std::stoi(valueTenantsData["UnitCpu"].asString());
		if(!valueTenantsData["UnitMem"].isNull())
			tenantsObject.unitMem = std::stoi(valueTenantsData["UnitMem"].asString());
		if(!valueTenantsData["UnitNum"].isNull())
			tenantsObject.unitNum = std::stoi(valueTenantsData["UnitNum"].asString());
		if(!valueTenantsData["UsedDiskSize"].isNull())
			tenantsObject.usedDiskSize = valueTenantsData["UsedDiskSize"].asString();
		if(!valueTenantsData["Charset"].isNull())
			tenantsObject.charset = valueTenantsData["Charset"].asString();
		if(!valueTenantsData["Collation"].isNull())
			tenantsObject.collation = valueTenantsData["Collation"].asString();
		if(!valueTenantsData["EnableReadOnlyReplica"].isNull())
			tenantsObject.enableReadOnlyReplica = valueTenantsData["EnableReadOnlyReplica"].asString() == "true";
		if(!valueTenantsData["ParameterTemplate"].isNull())
			tenantsObject.parameterTemplate = valueTenantsData["ParameterTemplate"].asString();
		if(!valueTenantsData["Iops"].isNull())
			tenantsObject.iops = std::stoi(valueTenantsData["Iops"].asString());
		tenants_.push_back(tenantsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeTenantsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeTenantsResult::Data> DescribeTenantsResult::getTenants()const
{
	return tenants_;
}


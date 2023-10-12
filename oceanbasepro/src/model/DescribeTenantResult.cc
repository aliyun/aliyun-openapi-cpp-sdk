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

#include <alibabacloud/oceanbasepro/model/DescribeTenantResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeTenantResult::DescribeTenantResult() :
	ServiceResult()
{}

DescribeTenantResult::DescribeTenantResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTenantResult::~DescribeTenantResult()
{}

void DescribeTenantResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto tenantNode = value["Tenant"];
	if(!tenantNode["TenantId"].isNull())
		tenant_.tenantId = tenantNode["TenantId"].asString();
	if(!tenantNode["TenantName"].isNull())
		tenant_.tenantName = tenantNode["TenantName"].asString();
	if(!tenantNode["TenantMode"].isNull())
		tenant_.tenantMode = tenantNode["TenantMode"].asString();
	if(!tenantNode["VpcId"].isNull())
		tenant_.vpcId = tenantNode["VpcId"].asString();
	if(!tenantNode["Status"].isNull())
		tenant_.status = tenantNode["Status"].asString();
	if(!tenantNode["EnableInternetAddressService"].isNull())
		tenant_.enableInternetAddressService = tenantNode["EnableInternetAddressService"].asString() == "true";
	if(!tenantNode["PrimaryZone"].isNull())
		tenant_.primaryZone = tenantNode["PrimaryZone"].asString();
	if(!tenantNode["DeployType"].isNull())
		tenant_.deployType = tenantNode["DeployType"].asString();
	if(!tenantNode["DeployMode"].isNull())
		tenant_.deployMode = tenantNode["DeployMode"].asString();
	if(!tenantNode["Description"].isNull())
		tenant_.description = tenantNode["Description"].asString();
	if(!tenantNode["CreateTime"].isNull())
		tenant_.createTime = tenantNode["CreateTime"].asString();
	if(!tenantNode["ClogServiceStatus"].isNull())
		tenant_.clogServiceStatus = tenantNode["ClogServiceStatus"].asString();
	if(!tenantNode["EnableClogService"].isNull())
		tenant_.enableClogService = tenantNode["EnableClogService"].asString() == "true";
	if(!tenantNode["Charset"].isNull())
		tenant_.charset = tenantNode["Charset"].asString();
	if(!tenantNode["Collation"].isNull())
		tenant_.collation = tenantNode["Collation"].asString();
	if(!tenantNode["PrimaryZoneDeployType"].isNull())
		tenant_.primaryZoneDeployType = tenantNode["PrimaryZoneDeployType"].asString();
	if(!tenantNode["MasterIntranetAddressZone"].isNull())
		tenant_.masterIntranetAddressZone = tenantNode["MasterIntranetAddressZone"].asString();
	if(!tenantNode["PayType"].isNull())
		tenant_.payType = tenantNode["PayType"].asString();
	if(!tenantNode["InstanceType"].isNull())
		tenant_.instanceType = tenantNode["InstanceType"].asString();
	if(!tenantNode["Series"].isNull())
		tenant_.series = tenantNode["Series"].asString();
	if(!tenantNode["DiskType"].isNull())
		tenant_.diskType = tenantNode["DiskType"].asString();
	if(!tenantNode["EnableReadWriteSplit"].isNull())
		tenant_.enableReadWriteSplit = tenantNode["EnableReadWriteSplit"].asString() == "true";
	if(!tenantNode["EnableParallelQuery"].isNull())
		tenant_.enableParallelQuery = tenantNode["EnableParallelQuery"].asString() == "true";
	if(!tenantNode["MaxParallelQueryDegree"].isNull())
		tenant_.maxParallelQueryDegree = std::stol(tenantNode["MaxParallelQueryDegree"].asString());
	if(!tenantNode["EnableBinlogService"].isNull())
		tenant_.enableBinlogService = tenantNode["EnableBinlogService"].asString() == "true";
	if(!tenantNode["TimeZone"].isNull())
		tenant_.timeZone = tenantNode["TimeZone"].asString();
	auto allTenantConnectionsNode = tenantNode["TenantConnections"]["TenantConnectionsItem"];
	for (auto tenantNodeTenantConnectionsTenantConnectionsItem : allTenantConnectionsNode)
	{
		Tenant::TenantConnectionsItem tenantConnectionsItemObject;
		if(!tenantNodeTenantConnectionsTenantConnectionsItem["IntranetAddress"].isNull())
			tenantConnectionsItemObject.intranetAddress = tenantNodeTenantConnectionsTenantConnectionsItem["IntranetAddress"].asString();
		if(!tenantNodeTenantConnectionsTenantConnectionsItem["IntranetPort"].isNull())
			tenantConnectionsItemObject.intranetPort = std::stoi(tenantNodeTenantConnectionsTenantConnectionsItem["IntranetPort"].asString());
		if(!tenantNodeTenantConnectionsTenantConnectionsItem["InternetAddress"].isNull())
			tenantConnectionsItemObject.internetAddress = tenantNodeTenantConnectionsTenantConnectionsItem["InternetAddress"].asString();
		if(!tenantNodeTenantConnectionsTenantConnectionsItem["InternetPort"].isNull())
			tenantConnectionsItemObject.internetPort = std::stoi(tenantNodeTenantConnectionsTenantConnectionsItem["InternetPort"].asString());
		if(!tenantNodeTenantConnectionsTenantConnectionsItem["VpcId"].isNull())
			tenantConnectionsItemObject.vpcId = tenantNodeTenantConnectionsTenantConnectionsItem["VpcId"].asString();
		if(!tenantNodeTenantConnectionsTenantConnectionsItem["VSwitchId"].isNull())
			tenantConnectionsItemObject.vSwitchId = tenantNodeTenantConnectionsTenantConnectionsItem["VSwitchId"].asString();
		if(!tenantNodeTenantConnectionsTenantConnectionsItem["IntranetAddressMasterZoneId"].isNull())
			tenantConnectionsItemObject.intranetAddressMasterZoneId = tenantNodeTenantConnectionsTenantConnectionsItem["IntranetAddressMasterZoneId"].asString();
		if(!tenantNodeTenantConnectionsTenantConnectionsItem["IntranetAddressSlaveZoneId"].isNull())
			tenantConnectionsItemObject.intranetAddressSlaveZoneId = tenantNodeTenantConnectionsTenantConnectionsItem["IntranetAddressSlaveZoneId"].asString();
		if(!tenantNodeTenantConnectionsTenantConnectionsItem["IntranetAddressStatus"].isNull())
			tenantConnectionsItemObject.intranetAddressStatus = tenantNodeTenantConnectionsTenantConnectionsItem["IntranetAddressStatus"].asString();
		if(!tenantNodeTenantConnectionsTenantConnectionsItem["InternetAddressStatus"].isNull())
			tenantConnectionsItemObject.internetAddressStatus = tenantNodeTenantConnectionsTenantConnectionsItem["InternetAddressStatus"].asString();
		if(!tenantNodeTenantConnectionsTenantConnectionsItem["TransactionSplit"].isNull())
			tenantConnectionsItemObject.transactionSplit = tenantNodeTenantConnectionsTenantConnectionsItem["TransactionSplit"].asString() == "true";
		if(!tenantNodeTenantConnectionsTenantConnectionsItem["AddressType"].isNull())
			tenantConnectionsItemObject.addressType = tenantNodeTenantConnectionsTenantConnectionsItem["AddressType"].asString();
		if(!tenantNodeTenantConnectionsTenantConnectionsItem["EnableTransactionSplit"].isNull())
			tenantConnectionsItemObject.enableTransactionSplit = tenantNodeTenantConnectionsTenantConnectionsItem["EnableTransactionSplit"].asString() == "true";
		if(!tenantNodeTenantConnectionsTenantConnectionsItem["ParallelQueryDegree"].isNull())
			tenantConnectionsItemObject.parallelQueryDegree = std::stol(tenantNodeTenantConnectionsTenantConnectionsItem["ParallelQueryDegree"].asString());
		if(!tenantNodeTenantConnectionsTenantConnectionsItem["TenantEndpointId"].isNull())
			tenantConnectionsItemObject.tenantEndpointId = tenantNodeTenantConnectionsTenantConnectionsItem["TenantEndpointId"].asString();
		auto allConnectionZones = value["ConnectionZones"]["ConnectionZones"];
		for (auto value : allConnectionZones)
			tenantConnectionsItemObject.connectionZones.push_back(value.asString());
		tenant_.tenantConnections.push_back(tenantConnectionsItemObject);
	}
	auto allTenantZonesNode = tenantNode["TenantZones"]["TenantZonesItem"];
	for (auto tenantNodeTenantZonesTenantZonesItem : allTenantZonesNode)
	{
		Tenant::TenantZonesItem tenantZonesItemObject;
		if(!tenantNodeTenantZonesTenantZonesItem["TenantZoneId"].isNull())
			tenantZonesItemObject.tenantZoneId = tenantNodeTenantZonesTenantZonesItem["TenantZoneId"].asString();
		if(!tenantNodeTenantZonesTenantZonesItem["Region"].isNull())
			tenantZonesItemObject.region = tenantNodeTenantZonesTenantZonesItem["Region"].asString();
		if(!tenantNodeTenantZonesTenantZonesItem["TenantZoneRole"].isNull())
			tenantZonesItemObject.tenantZoneRole = tenantNodeTenantZonesTenantZonesItem["TenantZoneRole"].asString();
		tenant_.tenantZones.push_back(tenantZonesItemObject);
	}
	auto tenantResourceNode = tenantNode["TenantResource"];
	if(!tenantResourceNode["UnitNum"].isNull())
		tenant_.tenantResource.unitNum = std::stoi(tenantResourceNode["UnitNum"].asString());
	auto cpuNode = tenantResourceNode["Cpu"];
	if(!cpuNode["UsedCpu"].isNull())
		tenant_.tenantResource.cpu.usedCpu = std::stof(cpuNode["UsedCpu"].asString());
	if(!cpuNode["TotalCpu"].isNull())
		tenant_.tenantResource.cpu.totalCpu = std::stof(cpuNode["TotalCpu"].asString());
	if(!cpuNode["UnitCpu"].isNull())
		tenant_.tenantResource.cpu.unitCpu = std::stof(cpuNode["UnitCpu"].asString());
	auto memoryNode = tenantResourceNode["Memory"];
	if(!memoryNode["UsedMemory"].isNull())
		tenant_.tenantResource.memory.usedMemory = std::stof(memoryNode["UsedMemory"].asString());
	if(!memoryNode["TotalMemory"].isNull())
		tenant_.tenantResource.memory.totalMemory = std::stof(memoryNode["TotalMemory"].asString());
	if(!memoryNode["UnitMemory"].isNull())
		tenant_.tenantResource.memory.unitMemory = std::stof(memoryNode["UnitMemory"].asString());
	auto diskSizeNode = tenantResourceNode["DiskSize"];
	if(!diskSizeNode["UsedDiskSize"].isNull())
		tenant_.tenantResource.diskSize.usedDiskSize = std::stof(diskSizeNode["UsedDiskSize"].asString());
	auto capacityUnitNode = tenantResourceNode["CapacityUnit"];
	if(!capacityUnitNode["MaxCapacityUnit"].isNull())
		tenant_.tenantResource.capacityUnit.maxCapacityUnit = std::stoi(capacityUnitNode["MaxCapacityUnit"].asString());
	if(!capacityUnitNode["MinCapacityUnit"].isNull())
		tenant_.tenantResource.capacityUnit.minCapacityUnit = std::stoi(capacityUnitNode["MinCapacityUnit"].asString());
	if(!capacityUnitNode["UsedCapacit"].isNull())
		tenant_.tenantResource.capacityUnit.usedCapacit = std::stoi(capacityUnitNode["UsedCapacit"].asString());
		auto allAvailableZones = tenantNode["AvailableZones"]["AvailableZones"];
		for (auto value : allAvailableZones)
			tenant_.availableZones.push_back(value.asString());

}

DescribeTenantResult::Tenant DescribeTenantResult::getTenant()const
{
	return tenant_;
}


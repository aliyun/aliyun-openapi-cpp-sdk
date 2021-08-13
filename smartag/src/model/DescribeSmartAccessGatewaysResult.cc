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

#include <alibabacloud/smartag/model/DescribeSmartAccessGatewaysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSmartAccessGatewaysResult::DescribeSmartAccessGatewaysResult() :
	ServiceResult()
{}

DescribeSmartAccessGatewaysResult::DescribeSmartAccessGatewaysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSmartAccessGatewaysResult::~DescribeSmartAccessGatewaysResult()
{}

void DescribeSmartAccessGatewaysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSmartAccessGatewaysNode = value["SmartAccessGateways"]["SmartAccessGateway"];
	for (auto valueSmartAccessGatewaysSmartAccessGateway : allSmartAccessGatewaysNode)
	{
		SmartAccessGateway smartAccessGatewaysObject;
		if(!valueSmartAccessGatewaysSmartAccessGateway["SerialNumber"].isNull())
			smartAccessGatewaysObject.serialNumber = valueSmartAccessGatewaysSmartAccessGateway["SerialNumber"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["Status"].isNull())
			smartAccessGatewaysObject.status = valueSmartAccessGatewaysSmartAccessGateway["Status"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["UpBandwidth4G"].isNull())
			smartAccessGatewaysObject.upBandwidth4G = std::stoi(valueSmartAccessGatewaysSmartAccessGateway["UpBandwidth4G"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["BackupStatus"].isNull())
			smartAccessGatewaysObject.backupStatus = valueSmartAccessGatewaysSmartAccessGateway["BackupStatus"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["IdaasApplicationId"].isNull())
			smartAccessGatewaysObject.idaasApplicationId = valueSmartAccessGatewaysSmartAccessGateway["IdaasApplicationId"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["SoftwareVersion"].isNull())
			smartAccessGatewaysObject.softwareVersion = valueSmartAccessGatewaysSmartAccessGateway["SoftwareVersion"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["CreateTime"].isNull())
			smartAccessGatewaysObject.createTime = std::stol(valueSmartAccessGatewaysSmartAccessGateway["CreateTime"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["SmartAGId"].isNull())
			smartAccessGatewaysObject.smartAGId = valueSmartAccessGatewaysSmartAccessGateway["SmartAGId"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["UpBandwidthWan"].isNull())
			smartAccessGatewaysObject.upBandwidthWan = std::stoi(valueSmartAccessGatewaysSmartAccessGateway["UpBandwidthWan"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["City"].isNull())
			smartAccessGatewaysObject.city = valueSmartAccessGatewaysSmartAccessGateway["City"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["AclIds"].isNull())
			smartAccessGatewaysObject.aclIds = valueSmartAccessGatewaysSmartAccessGateway["AclIds"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["QosIds"].isNull())
			smartAccessGatewaysObject.qosIds = valueSmartAccessGatewaysSmartAccessGateway["QosIds"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["CidrBlock"].isNull())
			smartAccessGatewaysObject.cidrBlock = valueSmartAccessGatewaysSmartAccessGateway["CidrBlock"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["Description"].isNull())
			smartAccessGatewaysObject.description = valueSmartAccessGatewaysSmartAccessGateway["Description"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["IpsecStatus"].isNull())
			smartAccessGatewaysObject.ipsecStatus = valueSmartAccessGatewaysSmartAccessGateway["IpsecStatus"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["EnterpriseCode"].isNull())
			smartAccessGatewaysObject.enterpriseCode = valueSmartAccessGatewaysSmartAccessGateway["EnterpriseCode"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["DpiStatus"].isNull())
			smartAccessGatewaysObject.dpiStatus = valueSmartAccessGatewaysSmartAccessGateway["DpiStatus"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["AssociatedCcnId"].isNull())
			smartAccessGatewaysObject.associatedCcnId = valueSmartAccessGatewaysSmartAccessGateway["AssociatedCcnId"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["Name"].isNull())
			smartAccessGatewaysObject.name = valueSmartAccessGatewaysSmartAccessGateway["Name"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["HardwareVersion"].isNull())
			smartAccessGatewaysObject.hardwareVersion = valueSmartAccessGatewaysSmartAccessGateway["HardwareVersion"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["IdaasId"].isNull())
			smartAccessGatewaysObject.idaasId = valueSmartAccessGatewaysSmartAccessGateway["IdaasId"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["DataPlan"].isNull())
			smartAccessGatewaysObject.dataPlan = std::stol(valueSmartAccessGatewaysSmartAccessGateway["DataPlan"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["AssociatedCcnName"].isNull())
			smartAccessGatewaysObject.associatedCcnName = valueSmartAccessGatewaysSmartAccessGateway["AssociatedCcnName"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["ResellerUid"].isNull())
			smartAccessGatewaysObject.resellerUid = valueSmartAccessGatewaysSmartAccessGateway["ResellerUid"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["DpiMonitorStatus"].isNull())
			smartAccessGatewaysObject.dpiMonitorStatus = valueSmartAccessGatewaysSmartAccessGateway["DpiMonitorStatus"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["MaxBandwidth"].isNull())
			smartAccessGatewaysObject.maxBandwidth = valueSmartAccessGatewaysSmartAccessGateway["MaxBandwidth"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["SmartAGUid"].isNull())
			smartAccessGatewaysObject.smartAGUid = std::stol(valueSmartAccessGatewaysSmartAccessGateway["SmartAGUid"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["BackupSoftwareVersion"].isNull())
			smartAccessGatewaysObject.backupSoftwareVersion = valueSmartAccessGatewaysSmartAccessGateway["BackupSoftwareVersion"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["EndTime"].isNull())
			smartAccessGatewaysObject.endTime = std::stol(valueSmartAccessGatewaysSmartAccessGateway["EndTime"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["ResellerInstanceId"].isNull())
			smartAccessGatewaysObject.resellerInstanceId = valueSmartAccessGatewaysSmartAccessGateway["ResellerInstanceId"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["VpnStatus"].isNull())
			smartAccessGatewaysObject.vpnStatus = valueSmartAccessGatewaysSmartAccessGateway["VpnStatus"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["RoutingStrategy"].isNull())
			smartAccessGatewaysObject.routingStrategy = valueSmartAccessGatewaysSmartAccessGateway["RoutingStrategy"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["SecurityLockThreshold"].isNull())
			smartAccessGatewaysObject.securityLockThreshold = std::stoi(valueSmartAccessGatewaysSmartAccessGateway["SecurityLockThreshold"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["ResourceGroupId"].isNull())
			smartAccessGatewaysObject.resourceGroupId = valueSmartAccessGatewaysSmartAccessGateway["ResourceGroupId"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["UserCount"].isNull())
			smartAccessGatewaysObject.userCount = std::stoi(valueSmartAccessGatewaysSmartAccessGateway["UserCount"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["AccessPointId"].isNull())
			smartAccessGatewaysObject.accessPointId = valueSmartAccessGatewaysSmartAccessGateway["AccessPointId"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["ApplicationBandwidthPackageId"].isNull())
			smartAccessGatewaysObject.applicationBandwidthPackageId = valueSmartAccessGatewaysSmartAccessGateway["ApplicationBandwidthPackageId"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["AccelerateBandwidth"].isNull())
			smartAccessGatewaysObject.accelerateBandwidth = std::stol(valueSmartAccessGatewaysSmartAccessGateway["AccelerateBandwidth"].asString());
		auto allLinksNode = valueSmartAccessGatewaysSmartAccessGateway["Links"]["Link"];
		for (auto valueSmartAccessGatewaysSmartAccessGatewayLinksLink : allLinksNode)
		{
			SmartAccessGateway::Link linksObject;
			if(!valueSmartAccessGatewaysSmartAccessGatewayLinksLink["Type"].isNull())
				linksObject.type = valueSmartAccessGatewaysSmartAccessGatewayLinksLink["Type"].asString();
			if(!valueSmartAccessGatewaysSmartAccessGatewayLinksLink["Status"].isNull())
				linksObject.status = valueSmartAccessGatewaysSmartAccessGatewayLinksLink["Status"].asString();
			if(!valueSmartAccessGatewaysSmartAccessGatewayLinksLink["EndTime"].isNull())
				linksObject.endTime = std::stol(valueSmartAccessGatewaysSmartAccessGatewayLinksLink["EndTime"].asString());
			if(!valueSmartAccessGatewaysSmartAccessGatewayLinksLink["Bandwidth"].isNull())
				linksObject.bandwidth = valueSmartAccessGatewaysSmartAccessGatewayLinksLink["Bandwidth"].asString();
			if(!valueSmartAccessGatewaysSmartAccessGatewayLinksLink["RelateInstanceRegionId"].isNull())
				linksObject.relateInstanceRegionId = valueSmartAccessGatewaysSmartAccessGatewayLinksLink["RelateInstanceRegionId"].asString();
			if(!valueSmartAccessGatewaysSmartAccessGatewayLinksLink["RelateInstanceId"].isNull())
				linksObject.relateInstanceId = valueSmartAccessGatewaysSmartAccessGatewayLinksLink["RelateInstanceId"].asString();
			if(!valueSmartAccessGatewaysSmartAccessGatewayLinksLink["InstanceId"].isNull())
				linksObject.instanceId = valueSmartAccessGatewaysSmartAccessGatewayLinksLink["InstanceId"].asString();
			if(!valueSmartAccessGatewaysSmartAccessGatewayLinksLink["CommodityType"].isNull())
				linksObject.commodityType = valueSmartAccessGatewaysSmartAccessGatewayLinksLink["CommodityType"].asString();
			smartAccessGatewaysObject.links.push_back(linksObject);
		}
		smartAccessGateways_.push_back(smartAccessGatewaysObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeSmartAccessGatewaysResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSmartAccessGatewaysResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSmartAccessGatewaysResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSmartAccessGatewaysResult::SmartAccessGateway> DescribeSmartAccessGatewaysResult::getSmartAccessGateways()const
{
	return smartAccessGateways_;
}


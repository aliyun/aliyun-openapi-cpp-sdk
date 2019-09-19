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
		if(!valueSmartAccessGatewaysSmartAccessGateway["SmartAGId"].isNull())
			smartAccessGatewaysObject.smartAGId = valueSmartAccessGatewaysSmartAccessGateway["SmartAGId"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["Name"].isNull())
			smartAccessGatewaysObject.name = valueSmartAccessGatewaysSmartAccessGateway["Name"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["City"].isNull())
			smartAccessGatewaysObject.city = valueSmartAccessGatewaysSmartAccessGateway["City"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["MaxBandwidth"].isNull())
			smartAccessGatewaysObject.maxBandwidth = valueSmartAccessGatewaysSmartAccessGateway["MaxBandwidth"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["Status"].isNull())
			smartAccessGatewaysObject.status = valueSmartAccessGatewaysSmartAccessGateway["Status"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["CidrBlock"].isNull())
			smartAccessGatewaysObject.cidrBlock = valueSmartAccessGatewaysSmartAccessGateway["CidrBlock"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["AssociatedCcnId"].isNull())
			smartAccessGatewaysObject.associatedCcnId = valueSmartAccessGatewaysSmartAccessGateway["AssociatedCcnId"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["AssociatedCcnName"].isNull())
			smartAccessGatewaysObject.associatedCcnName = valueSmartAccessGatewaysSmartAccessGateway["AssociatedCcnName"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["Description"].isNull())
			smartAccessGatewaysObject.description = valueSmartAccessGatewaysSmartAccessGateway["Description"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["CreateTime"].isNull())
			smartAccessGatewaysObject.createTime = std::stol(valueSmartAccessGatewaysSmartAccessGateway["CreateTime"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["EndTime"].isNull())
			smartAccessGatewaysObject.endTime = std::stol(valueSmartAccessGatewaysSmartAccessGateway["EndTime"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["SoftwareVersion"].isNull())
			smartAccessGatewaysObject.softwareVersion = valueSmartAccessGatewaysSmartAccessGateway["SoftwareVersion"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["HardwareVersion"].isNull())
			smartAccessGatewaysObject.hardwareVersion = valueSmartAccessGatewaysSmartAccessGateway["HardwareVersion"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["SerialNumber"].isNull())
			smartAccessGatewaysObject.serialNumber = valueSmartAccessGatewaysSmartAccessGateway["SerialNumber"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["SecurityLockThreshold"].isNull())
			smartAccessGatewaysObject.securityLockThreshold = std::stoi(valueSmartAccessGatewaysSmartAccessGateway["SecurityLockThreshold"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["AclIds"].isNull())
			smartAccessGatewaysObject.aclIds = valueSmartAccessGatewaysSmartAccessGateway["AclIds"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["DataPlan"].isNull())
			smartAccessGatewaysObject.dataPlan = std::stol(valueSmartAccessGatewaysSmartAccessGateway["DataPlan"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["UserCount"].isNull())
			smartAccessGatewaysObject.userCount = std::stoi(valueSmartAccessGatewaysSmartAccessGateway["UserCount"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["RoutingStrategy"].isNull())
			smartAccessGatewaysObject.routingStrategy = valueSmartAccessGatewaysSmartAccessGateway["RoutingStrategy"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["UpBandwidthWan"].isNull())
			smartAccessGatewaysObject.upBandwidthWan = std::stoi(valueSmartAccessGatewaysSmartAccessGateway["UpBandwidthWan"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["UpBandwidth4G"].isNull())
			smartAccessGatewaysObject.upBandwidth4G = std::stoi(valueSmartAccessGatewaysSmartAccessGateway["UpBandwidth4G"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["QosIds"].isNull())
			smartAccessGatewaysObject.qosIds = valueSmartAccessGatewaysSmartAccessGateway["QosIds"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["BackupSoftwareVersion"].isNull())
			smartAccessGatewaysObject.backupSoftwareVersion = valueSmartAccessGatewaysSmartAccessGateway["BackupSoftwareVersion"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["SmartAGUid"].isNull())
			smartAccessGatewaysObject.smartAGUid = std::stol(valueSmartAccessGatewaysSmartAccessGateway["SmartAGUid"].asString());
		if(!valueSmartAccessGatewaysSmartAccessGateway["BackupStatus"].isNull())
			smartAccessGatewaysObject.backupStatus = valueSmartAccessGatewaysSmartAccessGateway["BackupStatus"].asString();
		auto allLinksNode = allSmartAccessGatewaysNode["Links"]["Link"];
		for (auto allSmartAccessGatewaysNodeLinksLink : allLinksNode)
		{
			SmartAccessGateway::Link linksObject;
			if(!allSmartAccessGatewaysNodeLinksLink["InstanceId"].isNull())
				linksObject.instanceId = allSmartAccessGatewaysNodeLinksLink["InstanceId"].asString();
			if(!allSmartAccessGatewaysNodeLinksLink["Type"].isNull())
				linksObject.type = allSmartAccessGatewaysNodeLinksLink["Type"].asString();
			if(!allSmartAccessGatewaysNodeLinksLink["Status"].isNull())
				linksObject.status = allSmartAccessGatewaysNodeLinksLink["Status"].asString();
			if(!allSmartAccessGatewaysNodeLinksLink["EndTime"].isNull())
				linksObject.endTime = std::stol(allSmartAccessGatewaysNodeLinksLink["EndTime"].asString());
			if(!allSmartAccessGatewaysNodeLinksLink["Bandwidth"].isNull())
				linksObject.bandwidth = allSmartAccessGatewaysNodeLinksLink["Bandwidth"].asString();
			if(!allSmartAccessGatewaysNodeLinksLink["RelateInstanceId"].isNull())
				linksObject.relateInstanceId = allSmartAccessGatewaysNodeLinksLink["RelateInstanceId"].asString();
			if(!allSmartAccessGatewaysNodeLinksLink["RelateInstanceRegionId"].isNull())
				linksObject.relateInstanceRegionId = allSmartAccessGatewaysNodeLinksLink["RelateInstanceRegionId"].asString();
			if(!allSmartAccessGatewaysNodeLinksLink["CommodityType"].isNull())
				linksObject.commodityType = allSmartAccessGatewaysNodeLinksLink["CommodityType"].asString();
			smartAccessGatewaysObject.links.push_back(linksObject);
		}
		smartAccessGateways_.push_back(smartAccessGatewaysObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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


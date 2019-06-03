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
	auto allSmartAccessGateways = value["SmartAccessGateways"]["SmartAccessGateway"];
	for (auto value : allSmartAccessGateways)
	{
		SmartAccessGateway smartAccessGatewaysObject;
		if(!value["SmartAGId"].isNull())
			smartAccessGatewaysObject.smartAGId = value["SmartAGId"].asString();
		if(!value["Name"].isNull())
			smartAccessGatewaysObject.name = value["Name"].asString();
		if(!value["City"].isNull())
			smartAccessGatewaysObject.city = value["City"].asString();
		if(!value["MaxBandwidth"].isNull())
			smartAccessGatewaysObject.maxBandwidth = value["MaxBandwidth"].asString();
		if(!value["Status"].isNull())
			smartAccessGatewaysObject.status = value["Status"].asString();
		if(!value["CidrBlock"].isNull())
			smartAccessGatewaysObject.cidrBlock = value["CidrBlock"].asString();
		if(!value["AssociatedCcnId"].isNull())
			smartAccessGatewaysObject.associatedCcnId = value["AssociatedCcnId"].asString();
		if(!value["AssociatedCcnName"].isNull())
			smartAccessGatewaysObject.associatedCcnName = value["AssociatedCcnName"].asString();
		if(!value["Description"].isNull())
			smartAccessGatewaysObject.description = value["Description"].asString();
		if(!value["CreateTime"].isNull())
			smartAccessGatewaysObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["EndTime"].isNull())
			smartAccessGatewaysObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["SoftwareVersion"].isNull())
			smartAccessGatewaysObject.softwareVersion = value["SoftwareVersion"].asString();
		if(!value["HardwareVersion"].isNull())
			smartAccessGatewaysObject.hardwareVersion = value["HardwareVersion"].asString();
		if(!value["SerialNumber"].isNull())
			smartAccessGatewaysObject.serialNumber = value["SerialNumber"].asString();
		if(!value["SecurityLockThreshold"].isNull())
			smartAccessGatewaysObject.securityLockThreshold = std::stoi(value["SecurityLockThreshold"].asString());
		if(!value["AclIds"].isNull())
			smartAccessGatewaysObject.aclIds = value["AclIds"].asString();
		if(!value["DataPlan"].isNull())
			smartAccessGatewaysObject.dataPlan = std::stol(value["DataPlan"].asString());
		if(!value["UserCount"].isNull())
			smartAccessGatewaysObject.userCount = std::stoi(value["UserCount"].asString());
		auto allSnatEntries = value["SnatEntries"]["SnatEntry"];
		for (auto value : allSnatEntries)
		{
			SmartAccessGateway::SnatEntry snatEntriesObject;
			if(!value["CidrBlock"].isNull())
				snatEntriesObject.cidrBlock = value["CidrBlock"].asString();
			if(!value["SnatIp"].isNull())
				snatEntriesObject.snatIp = value["SnatIp"].asString();
			smartAccessGatewaysObject.snatEntries.push_back(snatEntriesObject);
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


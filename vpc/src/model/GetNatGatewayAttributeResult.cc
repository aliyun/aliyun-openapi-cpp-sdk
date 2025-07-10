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

#include <alibabacloud/vpc/model/GetNatGatewayAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

GetNatGatewayAttributeResult::GetNatGatewayAttributeResult() :
	ServiceResult()
{}

GetNatGatewayAttributeResult::GetNatGatewayAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNatGatewayAttributeResult::~GetNatGatewayAttributeResult()
{}

void GetNatGatewayAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpListNode = value["IpList"]["IpListItem"];
	for (auto valueIpListIpListItem : allIpListNode)
	{
		IpListItem ipListObject;
		if(!valueIpListIpListItem["UsingStatus"].isNull())
			ipListObject.usingStatus = valueIpListIpListItem["UsingStatus"].asString();
		if(!valueIpListIpListItem["IpAddress"].isNull())
			ipListObject.ipAddress = valueIpListIpListItem["IpAddress"].asString();
		if(!valueIpListIpListItem["AllocationId"].isNull())
			ipListObject.allocationId = valueIpListIpListItem["AllocationId"].asString();
		ipList_.push_back(ipListObject);
	}
	auto forwardTableNode = value["ForwardTable"];
	if(!forwardTableNode["ForwardTableId"].isNull())
		forwardTable_.forwardTableId = forwardTableNode["ForwardTableId"].asString();
	if(!forwardTableNode["ForwardEntryCount"].isNull())
		forwardTable_.forwardEntryCount = std::stoi(forwardTableNode["ForwardEntryCount"].asString());
	auto snatTableNode = value["SnatTable"];
	if(!snatTableNode["SnatEntryCount"].isNull())
		snatTable_.snatEntryCount = std::stoi(snatTableNode["SnatEntryCount"].asString());
	if(!snatTableNode["SnatTableId"].isNull())
		snatTable_.snatTableId = snatTableNode["SnatTableId"].asString();
	auto fullNatTableNode = value["FullNatTable"];
	if(!fullNatTableNode["FullNatEntryCount"].isNull())
		fullNatTable_.fullNatEntryCount = std::stol(fullNatTableNode["FullNatEntryCount"].asString());
	if(!fullNatTableNode["FullNatTableId"].isNull())
		fullNatTable_.fullNatTableId = fullNatTableNode["FullNatTableId"].asString();
	auto billingConfigNode = value["BillingConfig"];
	if(!billingConfigNode["InternetChargeType"].isNull())
		billingConfig_.internetChargeType = billingConfigNode["InternetChargeType"].asString();
	if(!billingConfigNode["AutoPay"].isNull())
		billingConfig_.autoPay = billingConfigNode["AutoPay"].asString();
	if(!billingConfigNode["Spec"].isNull())
		billingConfig_.spec = billingConfigNode["Spec"].asString();
	if(!billingConfigNode["InstanceChargeType"].isNull())
		billingConfig_.instanceChargeType = billingConfigNode["InstanceChargeType"].asString();
	auto privateInfoNode = value["PrivateInfo"];
	if(!privateInfoNode["MaxBandwidth"].isNull())
		privateInfo_.maxBandwidth = std::stoi(privateInfoNode["MaxBandwidth"].asString());
	if(!privateInfoNode["VswitchId"].isNull())
		privateInfo_.vswitchId = privateInfoNode["VswitchId"].asString();
	if(!privateInfoNode["PrivateIpAddress"].isNull())
		privateInfo_.privateIpAddress = privateInfoNode["PrivateIpAddress"].asString();
	if(!privateInfoNode["IzNo"].isNull())
		privateInfo_.izNo = privateInfoNode["IzNo"].asString();
	if(!privateInfoNode["EniInstanceId"].isNull())
		privateInfo_.eniInstanceId = privateInfoNode["EniInstanceId"].asString();
	auto deletionProtectionInfoNode = value["DeletionProtectionInfo"];
	if(!deletionProtectionInfoNode["Enabled"].isNull())
		deletionProtectionInfo_.enabled = deletionProtectionInfoNode["Enabled"].asString() == "true";
	auto logDeliveryNode = value["LogDelivery"];
	if(!logDeliveryNode["LogDeliveryType"].isNull())
		logDelivery_.logDeliveryType = logDeliveryNode["LogDeliveryType"].asString();
	if(!logDeliveryNode["LogDestination"].isNull())
		logDelivery_.logDestination = logDeliveryNode["LogDestination"].asString();
	if(!logDeliveryNode["DeliveryStatus"].isNull())
		logDelivery_.deliveryStatus = logDeliveryNode["DeliveryStatus"].asString();
	if(!logDeliveryNode["DeliverLogsErrorMessage"].isNull())
		logDelivery_.deliverLogsErrorMessage = logDeliveryNode["DeliverLogsErrorMessage"].asString();
	auto accessModeNode = value["AccessMode"];
	if(!accessModeNode["ModeValue"].isNull())
		accessMode_.modeValue = accessModeNode["ModeValue"].asString();
	if(!accessModeNode["TunnelType"].isNull())
		accessMode_.tunnelType = accessModeNode["TunnelType"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["NatType"].isNull())
		natType_ = value["NatType"].asString();
	if(!value["NetworkType"].isNull())
		networkType_ = value["NetworkType"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["EcsMetricEnabled"].isNull())
		ecsMetricEnabled_ = value["EcsMetricEnabled"].asString() == "true";
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["ExpiredTime"].isNull())
		expiredTime_ = value["ExpiredTime"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["NatGatewayId"].isNull())
		natGatewayId_ = value["NatGatewayId"].asString();
	if(!value["BusinessStatus"].isNull())
		businessStatus_ = value["BusinessStatus"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["PrivateLinkEnabled"].isNull())
		privateLinkEnabled_ = value["PrivateLinkEnabled"].asString() == "true";
	if(!value["PrivateLinkMode"].isNull())
		privateLinkMode_ = value["PrivateLinkMode"].asString();
	if(!value["EnableSessionLog"].isNull())
		enableSessionLog_ = value["EnableSessionLog"].asString() == "true";

}

std::string GetNatGatewayAttributeResult::getDescription()const
{
	return description_;
}

std::string GetNatGatewayAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

bool GetNatGatewayAttributeResult::getPrivateLinkEnabled()const
{
	return privateLinkEnabled_;
}

bool GetNatGatewayAttributeResult::getEnableSessionLog()const
{
	return enableSessionLog_;
}

GetNatGatewayAttributeResult::BillingConfig GetNatGatewayAttributeResult::getBillingConfig()const
{
	return billingConfig_;
}

GetNatGatewayAttributeResult::DeletionProtectionInfo GetNatGatewayAttributeResult::getDeletionProtectionInfo()const
{
	return deletionProtectionInfo_;
}

GetNatGatewayAttributeResult::LogDelivery GetNatGatewayAttributeResult::getLogDelivery()const
{
	return logDelivery_;
}

std::string GetNatGatewayAttributeResult::getBusinessStatus()const
{
	return businessStatus_;
}

std::string GetNatGatewayAttributeResult::getName()const
{
	return name_;
}

std::string GetNatGatewayAttributeResult::getNetworkType()const
{
	return networkType_;
}

std::string GetNatGatewayAttributeResult::getExpiredTime()const
{
	return expiredTime_;
}

GetNatGatewayAttributeResult::PrivateInfo GetNatGatewayAttributeResult::getPrivateInfo()const
{
	return privateInfo_;
}

std::string GetNatGatewayAttributeResult::getStatus()const
{
	return status_;
}

GetNatGatewayAttributeResult::ForwardTable GetNatGatewayAttributeResult::getForwardTable()const
{
	return forwardTable_;
}

std::vector<GetNatGatewayAttributeResult::IpListItem> GetNatGatewayAttributeResult::getIpList()const
{
	return ipList_;
}

std::string GetNatGatewayAttributeResult::getPrivateLinkMode()const
{
	return privateLinkMode_;
}

GetNatGatewayAttributeResult::SnatTable GetNatGatewayAttributeResult::getSnatTable()const
{
	return snatTable_;
}

std::string GetNatGatewayAttributeResult::getNatType()const
{
	return natType_;
}

bool GetNatGatewayAttributeResult::getEcsMetricEnabled()const
{
	return ecsMetricEnabled_;
}

std::string GetNatGatewayAttributeResult::getVpcId()const
{
	return vpcId_;
}

GetNatGatewayAttributeResult::FullNatTable GetNatGatewayAttributeResult::getFullNatTable()const
{
	return fullNatTable_;
}

std::string GetNatGatewayAttributeResult::getCreationTime()const
{
	return creationTime_;
}

GetNatGatewayAttributeResult::AccessMode GetNatGatewayAttributeResult::getAccessMode()const
{
	return accessMode_;
}

std::string GetNatGatewayAttributeResult::getRegionId()const
{
	return regionId_;
}

std::string GetNatGatewayAttributeResult::getNatGatewayId()const
{
	return natGatewayId_;
}


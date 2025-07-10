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

#include <alibabacloud/vpc/model/DescribeRouterInterfaceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeRouterInterfaceAttributeResult::DescribeRouterInterfaceAttributeResult() :
	ServiceResult()
{}

DescribeRouterInterfaceAttributeResult::DescribeRouterInterfaceAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRouterInterfaceAttributeResult::~DescribeRouterInterfaceAttributeResult()
{}

void DescribeRouterInterfaceAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagsNode = value["Tags"]["TagsItem"];
	for (auto valueTagsTagsItem : allTagsNode)
	{
		TagsItem tagsObject;
		if(!valueTagsTagsItem["Key"].isNull())
			tagsObject.key = valueTagsTagsItem["Key"].asString();
		if(!valueTagsTagsItem["Value"].isNull())
			tagsObject.value = valueTagsTagsItem["Value"].asString();
		tags_.push_back(tagsObject);
	}
	if(!value["ReservationActiveTime"].isNull())
		reservationActiveTime_ = value["ReservationActiveTime"].asString();
	if(!value["HealthCheckTargetIp"].isNull())
		healthCheckTargetIp_ = value["HealthCheckTargetIp"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["ReservationOrderType"].isNull())
		reservationOrderType_ = value["ReservationOrderType"].asString();
	if(!value["OppositeInterfaceId"].isNull())
		oppositeInterfaceId_ = value["OppositeInterfaceId"].asString();
	if(!value["Spec"].isNull())
		spec_ = value["Spec"].asString();
	if(!value["ChargeType"].isNull())
		chargeType_ = value["ChargeType"].asString();
	if(!value["RouterInterfaceId"].isNull())
		routerInterfaceId_ = value["RouterInterfaceId"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HcThreshold"].isNull())
		hcThreshold_ = std::stoi(value["HcThreshold"].asString());
	if(!value["OppositeRouterType"].isNull())
		oppositeRouterType_ = value["OppositeRouterType"].asString();
	if(!value["GmtModified"].isNull())
		gmtModified_ = value["GmtModified"].asString();
	if(!value["VpcInstanceId"].isNull())
		vpcInstanceId_ = value["VpcInstanceId"].asString();
	if(!value["OppositeInterfaceOwnerId"].isNull())
		oppositeInterfaceOwnerId_ = value["OppositeInterfaceOwnerId"].asString();
	if(!value["OppositeVpcInstanceId"].isNull())
		oppositeVpcInstanceId_ = value["OppositeVpcInstanceId"].asString();
	if(!value["ReservationInternetChargeType"].isNull())
		reservationInternetChargeType_ = value["ReservationInternetChargeType"].asString();
	if(!value["CrossBorder"].isNull())
		crossBorder_ = value["CrossBorder"].asString() == "true";
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["HcRate"].isNull())
		hcRate_ = std::stoi(value["HcRate"].asString());
	if(!value["ReservationBandwidth"].isNull())
		reservationBandwidth_ = value["ReservationBandwidth"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["OppositeRouterId"].isNull())
		oppositeRouterId_ = value["OppositeRouterId"].asString();
	if(!value["OppositeInterfaceSpec"].isNull())
		oppositeInterfaceSpec_ = value["OppositeInterfaceSpec"].asString();
	if(!value["RouterId"].isNull())
		routerId_ = value["RouterId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["OppositeInterfaceBusinessStatus"].isNull())
		oppositeInterfaceBusinessStatus_ = value["OppositeInterfaceBusinessStatus"].asString();
	if(!value["ConnectedTime"].isNull())
		connectedTime_ = value["ConnectedTime"].asString();
	if(!value["HealthCheckSourceIp"].isNull())
		healthCheckSourceIp_ = value["HealthCheckSourceIp"].asString();
	if(!value["OppositeInterfaceStatus"].isNull())
		oppositeInterfaceStatus_ = value["OppositeInterfaceStatus"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["OppositeRegionId"].isNull())
		oppositeRegionId_ = value["OppositeRegionId"].asString();
	if(!value["OppositeAccessPointId"].isNull())
		oppositeAccessPointId_ = value["OppositeAccessPointId"].asString();
	if(!value["BusinessStatus"].isNull())
		businessStatus_ = value["BusinessStatus"].asString();
	if(!value["HealthCheckStatus"].isNull())
		healthCheckStatus_ = value["HealthCheckStatus"].asString();
	if(!value["OppositeBandwidth"].isNull())
		oppositeBandwidth_ = std::stoi(value["OppositeBandwidth"].asString());
	if(!value["RouterType"].isNull())
		routerType_ = value["RouterType"].asString();
	if(!value["Role"].isNull())
		role_ = value["Role"].asString();
	if(!value["HasReservationData"].isNull())
		hasReservationData_ = value["HasReservationData"].asString();
	if(!value["AccessPointId"].isNull())
		accessPointId_ = value["AccessPointId"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["FastLinkMode"].isNull())
		fastLinkMode_ = value["FastLinkMode"].asString();

}

std::string DescribeRouterInterfaceAttributeResult::getOppositeInterfaceId()const
{
	return oppositeInterfaceId_;
}

std::string DescribeRouterInterfaceAttributeResult::getOppositeInterfaceStatus()const
{
	return oppositeInterfaceStatus_;
}

std::string DescribeRouterInterfaceAttributeResult::getDescription()const
{
	return description_;
}

std::string DescribeRouterInterfaceAttributeResult::getOppositeRouterId()const
{
	return oppositeRouterId_;
}

std::string DescribeRouterInterfaceAttributeResult::getMessage()const
{
	return message_;
}

std::string DescribeRouterInterfaceAttributeResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeRouterInterfaceAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string DescribeRouterInterfaceAttributeResult::getGmtModified()const
{
	return gmtModified_;
}

std::string DescribeRouterInterfaceAttributeResult::getRouterId()const
{
	return routerId_;
}

std::string DescribeRouterInterfaceAttributeResult::getBusinessStatus()const
{
	return businessStatus_;
}

bool DescribeRouterInterfaceAttributeResult::getSuccess()const
{
	return success_;
}

std::string DescribeRouterInterfaceAttributeResult::getName()const
{
	return name_;
}

std::string DescribeRouterInterfaceAttributeResult::getReservationOrderType()const
{
	return reservationOrderType_;
}

std::string DescribeRouterInterfaceAttributeResult::getOppositeRouterType()const
{
	return oppositeRouterType_;
}

int DescribeRouterInterfaceAttributeResult::getOppositeBandwidth()const
{
	return oppositeBandwidth_;
}

int DescribeRouterInterfaceAttributeResult::getBandwidth()const
{
	return bandwidth_;
}

std::string DescribeRouterInterfaceAttributeResult::getConnectedTime()const
{
	return connectedTime_;
}

std::string DescribeRouterInterfaceAttributeResult::getFastLinkMode()const
{
	return fastLinkMode_;
}

std::string DescribeRouterInterfaceAttributeResult::getReservationActiveTime()const
{
	return reservationActiveTime_;
}

int DescribeRouterInterfaceAttributeResult::getHcThreshold()const
{
	return hcThreshold_;
}

std::string DescribeRouterInterfaceAttributeResult::getReservationBandwidth()const
{
	return reservationBandwidth_;
}

std::vector<DescribeRouterInterfaceAttributeResult::TagsItem> DescribeRouterInterfaceAttributeResult::getTags()const
{
	return tags_;
}

std::string DescribeRouterInterfaceAttributeResult::getStatus()const
{
	return status_;
}

std::string DescribeRouterInterfaceAttributeResult::getOppositeInterfaceOwnerId()const
{
	return oppositeInterfaceOwnerId_;
}

std::string DescribeRouterInterfaceAttributeResult::getOppositeRegionId()const
{
	return oppositeRegionId_;
}

std::string DescribeRouterInterfaceAttributeResult::getHealthCheckSourceIp()const
{
	return healthCheckSourceIp_;
}

std::string DescribeRouterInterfaceAttributeResult::getHasReservationData()const
{
	return hasReservationData_;
}

bool DescribeRouterInterfaceAttributeResult::getCrossBorder()const
{
	return crossBorder_;
}

int DescribeRouterInterfaceAttributeResult::getHcRate()const
{
	return hcRate_;
}

std::string DescribeRouterInterfaceAttributeResult::getCode()const
{
	return code_;
}

std::string DescribeRouterInterfaceAttributeResult::getReservationInternetChargeType()const
{
	return reservationInternetChargeType_;
}

std::string DescribeRouterInterfaceAttributeResult::getOppositeInterfaceSpec()const
{
	return oppositeInterfaceSpec_;
}

std::string DescribeRouterInterfaceAttributeResult::getRole()const
{
	return role_;
}

std::string DescribeRouterInterfaceAttributeResult::getOppositeVpcInstanceId()const
{
	return oppositeVpcInstanceId_;
}

std::string DescribeRouterInterfaceAttributeResult::getRouterType()const
{
	return routerType_;
}

std::string DescribeRouterInterfaceAttributeResult::getChargeType()const
{
	return chargeType_;
}

std::string DescribeRouterInterfaceAttributeResult::getCreationTime()const
{
	return creationTime_;
}

std::string DescribeRouterInterfaceAttributeResult::getAccessPointId()const
{
	return accessPointId_;
}

std::string DescribeRouterInterfaceAttributeResult::getVpcInstanceId()const
{
	return vpcInstanceId_;
}

std::string DescribeRouterInterfaceAttributeResult::getOppositeInterfaceBusinessStatus()const
{
	return oppositeInterfaceBusinessStatus_;
}

std::string DescribeRouterInterfaceAttributeResult::getOppositeAccessPointId()const
{
	return oppositeAccessPointId_;
}

std::string DescribeRouterInterfaceAttributeResult::getSpec()const
{
	return spec_;
}

std::string DescribeRouterInterfaceAttributeResult::getHealthCheckStatus()const
{
	return healthCheckStatus_;
}

std::string DescribeRouterInterfaceAttributeResult::getHealthCheckTargetIp()const
{
	return healthCheckTargetIp_;
}

std::string DescribeRouterInterfaceAttributeResult::getRouterInterfaceId()const
{
	return routerInterfaceId_;
}


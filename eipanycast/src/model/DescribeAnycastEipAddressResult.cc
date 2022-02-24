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

#include <alibabacloud/eipanycast/model/DescribeAnycastEipAddressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eipanycast;
using namespace AlibabaCloud::Eipanycast::Model;

DescribeAnycastEipAddressResult::DescribeAnycastEipAddressResult() :
	ServiceResult()
{}

DescribeAnycastEipAddressResult::DescribeAnycastEipAddressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAnycastEipAddressResult::~DescribeAnycastEipAddressResult()
{}

void DescribeAnycastEipAddressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAnycastEipBindInfoListNode = value["AnycastEipBindInfoList"]["AnycastEipBindInfo"];
	for (auto valueAnycastEipBindInfoListAnycastEipBindInfo : allAnycastEipBindInfoListNode)
	{
		AnycastEipBindInfo anycastEipBindInfoListObject;
		if(!valueAnycastEipBindInfoListAnycastEipBindInfo["BindInstanceType"].isNull())
			anycastEipBindInfoListObject.bindInstanceType = valueAnycastEipBindInfoListAnycastEipBindInfo["BindInstanceType"].asString();
		if(!valueAnycastEipBindInfoListAnycastEipBindInfo["BindTime"].isNull())
			anycastEipBindInfoListObject.bindTime = valueAnycastEipBindInfoListAnycastEipBindInfo["BindTime"].asString();
		if(!valueAnycastEipBindInfoListAnycastEipBindInfo["Status"].isNull())
			anycastEipBindInfoListObject.status = valueAnycastEipBindInfoListAnycastEipBindInfo["Status"].asString();
		if(!valueAnycastEipBindInfoListAnycastEipBindInfo["BindInstanceRegionId"].isNull())
			anycastEipBindInfoListObject.bindInstanceRegionId = valueAnycastEipBindInfoListAnycastEipBindInfo["BindInstanceRegionId"].asString();
		if(!valueAnycastEipBindInfoListAnycastEipBindInfo["BindInstanceId"].isNull())
			anycastEipBindInfoListObject.bindInstanceId = valueAnycastEipBindInfoListAnycastEipBindInfo["BindInstanceId"].asString();
		if(!valueAnycastEipBindInfoListAnycastEipBindInfo["AssociationMode"].isNull())
			anycastEipBindInfoListObject.associationMode = valueAnycastEipBindInfoListAnycastEipBindInfo["AssociationMode"].asString();
		if(!valueAnycastEipBindInfoListAnycastEipBindInfo["PrivateIpAddress"].isNull())
			anycastEipBindInfoListObject.privateIpAddress = valueAnycastEipBindInfoListAnycastEipBindInfo["PrivateIpAddress"].asString();
		auto allPopLocationsNode = valueAnycastEipBindInfoListAnycastEipBindInfo["PopLocations"]["PopLocation"];
		for (auto valueAnycastEipBindInfoListAnycastEipBindInfoPopLocationsPopLocation : allPopLocationsNode)
		{
			AnycastEipBindInfo::PopLocation popLocationsObject;
			if(!valueAnycastEipBindInfoListAnycastEipBindInfoPopLocationsPopLocation["PopLocation"].isNull())
				popLocationsObject.popLocation = valueAnycastEipBindInfoListAnycastEipBindInfoPopLocationsPopLocation["PopLocation"].asString();
			anycastEipBindInfoListObject.popLocations.push_back(popLocationsObject);
		}
		anycastEipBindInfoList_.push_back(anycastEipBindInfoListObject);
	}
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["InstanceChargeType"].isNull())
		instanceChargeType_ = value["InstanceChargeType"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["BusinessStatus"].isNull())
		businessStatus_ = value["BusinessStatus"].asString();
	if(!value["InternetChargeType"].isNull())
		internetChargeType_ = value["InternetChargeType"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["AnycastId"].isNull())
		anycastId_ = value["AnycastId"].asString();
	if(!value["ServiceLocation"].isNull())
		serviceLocation_ = value["ServiceLocation"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["IpAddress"].isNull())
		ipAddress_ = value["IpAddress"].asString();
	if(!value["Bid"].isNull())
		bid_ = value["Bid"].asString();
	if(!value["AliUid"].isNull())
		aliUid_ = std::stol(value["AliUid"].asString());

}

std::string DescribeAnycastEipAddressResult::getStatus()const
{
	return status_;
}

std::string DescribeAnycastEipAddressResult::getDescription()const
{
	return description_;
}

std::string DescribeAnycastEipAddressResult::getInstanceChargeType()const
{
	return instanceChargeType_;
}

std::string DescribeAnycastEipAddressResult::getCreateTime()const
{
	return createTime_;
}

std::vector<DescribeAnycastEipAddressResult::AnycastEipBindInfo> DescribeAnycastEipAddressResult::getAnycastEipBindInfoList()const
{
	return anycastEipBindInfoList_;
}

std::string DescribeAnycastEipAddressResult::getBusinessStatus()const
{
	return businessStatus_;
}

std::string DescribeAnycastEipAddressResult::getInternetChargeType()const
{
	return internetChargeType_;
}

std::string DescribeAnycastEipAddressResult::getName()const
{
	return name_;
}

std::string DescribeAnycastEipAddressResult::getAnycastId()const
{
	return anycastId_;
}

std::string DescribeAnycastEipAddressResult::getServiceLocation()const
{
	return serviceLocation_;
}

int DescribeAnycastEipAddressResult::getBandwidth()const
{
	return bandwidth_;
}

std::string DescribeAnycastEipAddressResult::getIpAddress()const
{
	return ipAddress_;
}

std::string DescribeAnycastEipAddressResult::getBid()const
{
	return bid_;
}

long DescribeAnycastEipAddressResult::getAliUid()const
{
	return aliUid_;
}


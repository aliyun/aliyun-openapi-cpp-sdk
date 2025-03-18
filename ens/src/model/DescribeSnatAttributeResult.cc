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

#include <alibabacloud/ens/model/DescribeSnatAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeSnatAttributeResult::DescribeSnatAttributeResult() :
	ServiceResult()
{}

DescribeSnatAttributeResult::DescribeSnatAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSnatAttributeResult::~DescribeSnatAttributeResult()
{}

void DescribeSnatAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSnatIpsNode = value["SnatIps"]["snatip"];
	for (auto valueSnatIpssnatip : allSnatIpsNode)
	{
		Snatip snatIpsObject;
		if(!valueSnatIpssnatip["Ip"].isNull())
			snatIpsObject.ip = valueSnatIpssnatip["Ip"].asString();
		if(!valueSnatIpssnatip["Status"].isNull())
			snatIpsObject.status = valueSnatIpssnatip["Status"].asString();
		if(!valueSnatIpssnatip["CreationTime"].isNull())
			snatIpsObject.creationTime = valueSnatIpssnatip["CreationTime"].asString();
		snatIps_.push_back(snatIpsObject);
	}
	if(!value["NatGatewayId"].isNull())
		natGatewayId_ = value["NatGatewayId"].asString();
	if(!value["SnatEntryId"].isNull())
		snatEntryId_ = value["SnatEntryId"].asString();
	if(!value["SnatIp"].isNull())
		snatIp_ = value["SnatIp"].asString();
	if(!value["SourceCIDR"].isNull())
		sourceCIDR_ = value["SourceCIDR"].asString();
	if(!value["SnatEntryName"].isNull())
		snatEntryName_ = value["SnatEntryName"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["StandbySnatIp"].isNull())
		standbySnatIp_ = value["StandbySnatIp"].asString();
	if(!value["StandbyStatus"].isNull())
		standbyStatus_ = value["StandbyStatus"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["IdleTimeout"].isNull())
		idleTimeout_ = std::stoi(value["IdleTimeout"].asString());
	if(!value["DestCIDR"].isNull())
		destCIDR_ = value["DestCIDR"].asString();
	if(!value["IspAffinity"].isNull())
		ispAffinity_ = value["IspAffinity"].asString() == "true";
	if(!value["EipAffinity"].isNull())
		eipAffinity_ = value["EipAffinity"].asString() == "true";

}

std::string DescribeSnatAttributeResult::getStatus()const
{
	return status_;
}

std::string DescribeSnatAttributeResult::getSourceCIDR()const
{
	return sourceCIDR_;
}

int DescribeSnatAttributeResult::getIdleTimeout()const
{
	return idleTimeout_;
}

std::string DescribeSnatAttributeResult::getSnatIp()const
{
	return snatIp_;
}

std::string DescribeSnatAttributeResult::getStandbySnatIp()const
{
	return standbySnatIp_;
}

bool DescribeSnatAttributeResult::getEipAffinity()const
{
	return eipAffinity_;
}

std::string DescribeSnatAttributeResult::getType()const
{
	return type_;
}

std::string DescribeSnatAttributeResult::getDestCIDR()const
{
	return destCIDR_;
}

std::string DescribeSnatAttributeResult::getSnatEntryName()const
{
	return snatEntryName_;
}

std::string DescribeSnatAttributeResult::getCreationTime()const
{
	return creationTime_;
}

bool DescribeSnatAttributeResult::getIspAffinity()const
{
	return ispAffinity_;
}

std::vector<DescribeSnatAttributeResult::Snatip> DescribeSnatAttributeResult::getSnatIps()const
{
	return snatIps_;
}

std::string DescribeSnatAttributeResult::getSnatEntryId()const
{
	return snatEntryId_;
}

std::string DescribeSnatAttributeResult::getStandbyStatus()const
{
	return standbyStatus_;
}

std::string DescribeSnatAttributeResult::getNatGatewayId()const
{
	return natGatewayId_;
}


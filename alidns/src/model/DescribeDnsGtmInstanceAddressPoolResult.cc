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

#include <alibabacloud/alidns/model/DescribeDnsGtmInstanceAddressPoolResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDnsGtmInstanceAddressPoolResult::DescribeDnsGtmInstanceAddressPoolResult() :
	ServiceResult()
{}

DescribeDnsGtmInstanceAddressPoolResult::DescribeDnsGtmInstanceAddressPoolResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDnsGtmInstanceAddressPoolResult::~DescribeDnsGtmInstanceAddressPoolResult()
{}

void DescribeDnsGtmInstanceAddressPoolResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAddrsNode = value["Addrs"]["Addr"];
	for (auto valueAddrsAddr : allAddrsNode)
	{
		Addr addrsObject;
		if(!valueAddrsAddr["UpdateTimestamp"].isNull())
			addrsObject.updateTimestamp = std::stol(valueAddrsAddr["UpdateTimestamp"].asString());
		if(!valueAddrsAddr["AttributeInfo"].isNull())
			addrsObject.attributeInfo = valueAddrsAddr["AttributeInfo"].asString();
		if(!valueAddrsAddr["UpdateTime"].isNull())
			addrsObject.updateTime = valueAddrsAddr["UpdateTime"].asString();
		if(!valueAddrsAddr["AlertStatus"].isNull())
			addrsObject.alertStatus = valueAddrsAddr["AlertStatus"].asString();
		if(!valueAddrsAddr["Remark"].isNull())
			addrsObject.remark = valueAddrsAddr["Remark"].asString();
		if(!valueAddrsAddr["LbaWeight"].isNull())
			addrsObject.lbaWeight = std::stoi(valueAddrsAddr["LbaWeight"].asString());
		if(!valueAddrsAddr["Addr"].isNull())
			addrsObject.addr = valueAddrsAddr["Addr"].asString();
		if(!valueAddrsAddr["CreateTime"].isNull())
			addrsObject.createTime = valueAddrsAddr["CreateTime"].asString();
		if(!valueAddrsAddr["Mode"].isNull())
			addrsObject.mode = valueAddrsAddr["Mode"].asString();
		if(!valueAddrsAddr["CreateTimestamp"].isNull())
			addrsObject.createTimestamp = std::stol(valueAddrsAddr["CreateTimestamp"].asString());
		addrs_.push_back(addrsObject);
	}
	if(!value["LbaStrategy"].isNull())
		lbaStrategy_ = value["LbaStrategy"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["AddrCount"].isNull())
		addrCount_ = std::stoi(value["AddrCount"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();
	if(!value["AddrPoolId"].isNull())
		addrPoolId_ = value["AddrPoolId"].asString();
	if(!value["UpdateTimestamp"].isNull())
		updateTimestamp_ = std::stol(value["UpdateTimestamp"].asString());
	if(!value["MonitorConfigId"].isNull())
		monitorConfigId_ = value["MonitorConfigId"].asString();
	if(!value["MonitorStatus"].isNull())
		monitorStatus_ = value["MonitorStatus"].asString();
	if(!value["CreateTimestamp"].isNull())
		createTimestamp_ = std::stol(value["CreateTimestamp"].asString());

}

std::vector<DescribeDnsGtmInstanceAddressPoolResult::Addr> DescribeDnsGtmInstanceAddressPoolResult::getAddrs()const
{
	return addrs_;
}

std::string DescribeDnsGtmInstanceAddressPoolResult::getType()const
{
	return type_;
}

std::string DescribeDnsGtmInstanceAddressPoolResult::getLbaStrategy()const
{
	return lbaStrategy_;
}

std::string DescribeDnsGtmInstanceAddressPoolResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeDnsGtmInstanceAddressPoolResult::getUpdateTime()const
{
	return updateTime_;
}

std::string DescribeDnsGtmInstanceAddressPoolResult::getAddrPoolId()const
{
	return addrPoolId_;
}

long DescribeDnsGtmInstanceAddressPoolResult::getUpdateTimestamp()const
{
	return updateTimestamp_;
}

std::string DescribeDnsGtmInstanceAddressPoolResult::getMonitorConfigId()const
{
	return monitorConfigId_;
}

std::string DescribeDnsGtmInstanceAddressPoolResult::getMonitorStatus()const
{
	return monitorStatus_;
}

long DescribeDnsGtmInstanceAddressPoolResult::getCreateTimestamp()const
{
	return createTimestamp_;
}

int DescribeDnsGtmInstanceAddressPoolResult::getAddrCount()const
{
	return addrCount_;
}

std::string DescribeDnsGtmInstanceAddressPoolResult::getName()const
{
	return name_;
}


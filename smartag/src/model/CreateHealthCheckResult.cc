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

#include <alibabacloud/smartag/model/CreateHealthCheckResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

CreateHealthCheckResult::CreateHealthCheckResult() :
	ServiceResult()
{}

CreateHealthCheckResult::CreateHealthCheckResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateHealthCheckResult::~CreateHealthCheckResult()
{}

void CreateHealthCheckResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["SrcPort"].isNull())
		srcPort_ = std::stoi(value["SrcPort"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["SrcIpAddr"].isNull())
		srcIpAddr_ = value["SrcIpAddr"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["FailCountThreshold"].isNull())
		failCountThreshold_ = std::stoi(value["FailCountThreshold"].asString());
	if(!value["DstPort"].isNull())
		dstPort_ = std::stoi(value["DstPort"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["ProbeCount"].isNull())
		probeCount_ = std::stoi(value["ProbeCount"].asString());
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["ProbeTimeout"].isNull())
		probeTimeout_ = std::stoi(value["ProbeTimeout"].asString());
	if(!value["RttThreshold"].isNull())
		rttThreshold_ = std::stoi(value["RttThreshold"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ProbeInterval"].isNull())
		probeInterval_ = std::stoi(value["ProbeInterval"].asString());
	if(!value["SmartAGId"].isNull())
		smartAGId_ = value["SmartAGId"].asString();
	if(!value["RttFailThreshold"].isNull())
		rttFailThreshold_ = std::stoi(value["RttFailThreshold"].asString());
	if(!value["DstIpAddr"].isNull())
		dstIpAddr_ = value["DstIpAddr"].asString();

}

int CreateHealthCheckResult::getSrcPort()const
{
	return srcPort_;
}

std::string CreateHealthCheckResult::getDescription()const
{
	return description_;
}

std::string CreateHealthCheckResult::getInstanceId()const
{
	return instanceId_;
}

std::string CreateHealthCheckResult::getSrcIpAddr()const
{
	return srcIpAddr_;
}

long CreateHealthCheckResult::getCreateTime()const
{
	return createTime_;
}

int CreateHealthCheckResult::getFailCountThreshold()const
{
	return failCountThreshold_;
}

int CreateHealthCheckResult::getDstPort()const
{
	return dstPort_;
}

std::string CreateHealthCheckResult::getName()const
{
	return name_;
}

int CreateHealthCheckResult::getProbeCount()const
{
	return probeCount_;
}

std::string CreateHealthCheckResult::getType()const
{
	return type_;
}

int CreateHealthCheckResult::getProbeTimeout()const
{
	return probeTimeout_;
}

int CreateHealthCheckResult::getRttThreshold()const
{
	return rttThreshold_;
}

std::string CreateHealthCheckResult::getRegionId()const
{
	return regionId_;
}

int CreateHealthCheckResult::getProbeInterval()const
{
	return probeInterval_;
}

std::string CreateHealthCheckResult::getSmartAGId()const
{
	return smartAGId_;
}

int CreateHealthCheckResult::getRttFailThreshold()const
{
	return rttFailThreshold_;
}

std::string CreateHealthCheckResult::getDstIpAddr()const
{
	return dstIpAddr_;
}


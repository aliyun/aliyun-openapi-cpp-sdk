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

#include <alibabacloud/smartag/model/DescribeHealthCheckAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeHealthCheckAttributeResult::DescribeHealthCheckAttributeResult() :
	ServiceResult()
{}

DescribeHealthCheckAttributeResult::DescribeHealthCheckAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHealthCheckAttributeResult::~DescribeHealthCheckAttributeResult()
{}

void DescribeHealthCheckAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["SrcPort"].isNull())
		srcPort_ = std::stoi(value["SrcPort"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
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
	if(!value["HcInstanceId"].isNull())
		hcInstanceId_ = value["HcInstanceId"].asString();
	if(!value["RttThreshold"].isNull())
		rttThreshold_ = std::stoi(value["RttThreshold"].asString());
	if(!value["ProbeInterval"].isNull())
		probeInterval_ = std::stoi(value["ProbeInterval"].asString());
	if(!value["SmartAGId"].isNull())
		smartAGId_ = value["SmartAGId"].asString();
	if(!value["RttFailThreshold"].isNull())
		rttFailThreshold_ = std::stoi(value["RttFailThreshold"].asString());
	if(!value["DstIpAddr"].isNull())
		dstIpAddr_ = value["DstIpAddr"].asString();

}

int DescribeHealthCheckAttributeResult::getSrcPort()const
{
	return srcPort_;
}

std::string DescribeHealthCheckAttributeResult::getDescription()const
{
	return description_;
}

std::string DescribeHealthCheckAttributeResult::getSrcIpAddr()const
{
	return srcIpAddr_;
}

long DescribeHealthCheckAttributeResult::getCreateTime()const
{
	return createTime_;
}

int DescribeHealthCheckAttributeResult::getFailCountThreshold()const
{
	return failCountThreshold_;
}

int DescribeHealthCheckAttributeResult::getDstPort()const
{
	return dstPort_;
}

std::string DescribeHealthCheckAttributeResult::getName()const
{
	return name_;
}

int DescribeHealthCheckAttributeResult::getProbeCount()const
{
	return probeCount_;
}

std::string DescribeHealthCheckAttributeResult::getType()const
{
	return type_;
}

int DescribeHealthCheckAttributeResult::getProbeTimeout()const
{
	return probeTimeout_;
}

std::string DescribeHealthCheckAttributeResult::getHcInstanceId()const
{
	return hcInstanceId_;
}

int DescribeHealthCheckAttributeResult::getRttThreshold()const
{
	return rttThreshold_;
}

int DescribeHealthCheckAttributeResult::getProbeInterval()const
{
	return probeInterval_;
}

std::string DescribeHealthCheckAttributeResult::getSmartAGId()const
{
	return smartAGId_;
}

int DescribeHealthCheckAttributeResult::getRttFailThreshold()const
{
	return rttFailThreshold_;
}

std::string DescribeHealthCheckAttributeResult::getDstIpAddr()const
{
	return dstIpAddr_;
}


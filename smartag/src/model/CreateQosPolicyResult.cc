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

#include <alibabacloud/smartag/model/CreateQosPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

CreateQosPolicyResult::CreateQosPolicyResult() :
	ServiceResult()
{}

CreateQosPolicyResult::CreateQosPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateQosPolicyResult::~CreateQosPolicyResult()
{}

void CreateQosPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDpiGroupIds = value["DpiGroupIds"]["DpiGroupId"];
	for (const auto &item : allDpiGroupIds)
		dpiGroupIds_.push_back(item.asString());
	auto allDpiSignatureIds = value["DpiSignatureIds"]["DpiSignatureId"];
	for (const auto &item : allDpiSignatureIds)
		dpiSignatureIds_.push_back(item.asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["QosPolicyId"].isNull())
		qosPolicyId_ = value["QosPolicyId"].asString();
	if(!value["SourcePortRange"].isNull())
		sourcePortRange_ = value["SourcePortRange"].asString();
	if(!value["SourceCidr"].isNull())
		sourceCidr_ = value["SourceCidr"].asString();
	if(!value["Priority"].isNull())
		priority_ = std::stoi(value["Priority"].asString());
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DestPortRange"].isNull())
		destPortRange_ = value["DestPortRange"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["DestCidr"].isNull())
		destCidr_ = value["DestCidr"].asString();
	if(!value["QosId"].isNull())
		qosId_ = value["QosId"].asString();
	if(!value["IpProtocol"].isNull())
		ipProtocol_ = value["IpProtocol"].asString();

}

std::string CreateQosPolicyResult::getDescription()const
{
	return description_;
}

std::string CreateQosPolicyResult::getEndTime()const
{
	return endTime_;
}

std::string CreateQosPolicyResult::getQosPolicyId()const
{
	return qosPolicyId_;
}

std::string CreateQosPolicyResult::getSourcePortRange()const
{
	return sourcePortRange_;
}

std::string CreateQosPolicyResult::getSourceCidr()const
{
	return sourceCidr_;
}

int CreateQosPolicyResult::getPriority()const
{
	return priority_;
}

std::string CreateQosPolicyResult::getStartTime()const
{
	return startTime_;
}

std::string CreateQosPolicyResult::getDestPortRange()const
{
	return destPortRange_;
}

std::vector<std::string> CreateQosPolicyResult::getDpiGroupIds()const
{
	return dpiGroupIds_;
}

std::string CreateQosPolicyResult::getName()const
{
	return name_;
}

std::string CreateQosPolicyResult::getDestCidr()const
{
	return destCidr_;
}

std::vector<std::string> CreateQosPolicyResult::getDpiSignatureIds()const
{
	return dpiSignatureIds_;
}

std::string CreateQosPolicyResult::getQosId()const
{
	return qosId_;
}

std::string CreateQosPolicyResult::getIpProtocol()const
{
	return ipProtocol_;
}


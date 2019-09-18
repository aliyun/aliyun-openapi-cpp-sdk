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

#include <alibabacloud/csb/model/GetInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

GetInstanceResult::GetInstanceResult() :
	ServiceResult()
{}

GetInstanceResult::GetInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceResult::~GetInstanceResult()
{}

void GetInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto instanceNode = dataNode["Instance"];
	if(!instanceNode["ApprLevel"].isNull())
		data_.instance.apprLevel = std::stoi(instanceNode["ApprLevel"].asString());
	if(!instanceNode["ApprUser1"].isNull())
		data_.instance.apprUser1 = instanceNode["ApprUser1"].asString();
	if(!instanceNode["ApprUser2"].isNull())
		data_.instance.apprUser2 = instanceNode["ApprUser2"].asString();
	if(!instanceNode["BrokerVpcId"].isNull())
		data_.instance.brokerVpcId = instanceNode["BrokerVpcId"].asString();
	if(!instanceNode["BrokerVpcName"].isNull())
		data_.instance.brokerVpcName = instanceNode["BrokerVpcName"].asString();
	if(!instanceNode["ClientVpcId"].isNull())
		data_.instance.clientVpcId = instanceNode["ClientVpcId"].asString();
	if(!instanceNode["ClientVpcName"].isNull())
		data_.instance.clientVpcName = instanceNode["ClientVpcName"].asString();
	if(!instanceNode["ClusterMembers"].isNull())
		data_.instance.clusterMembers = std::stoi(instanceNode["ClusterMembers"].asString());
	if(!instanceNode["CredentialGroup"].isNull())
		data_.instance.credentialGroup = std::stol(instanceNode["CredentialGroup"].asString());
	if(!instanceNode["CsbAccountId"].isNull())
		data_.instance.csbAccountId = instanceNode["CsbAccountId"].asString();
	if(!instanceNode["CsbId"].isNull())
		data_.instance.csbId = std::stol(instanceNode["CsbId"].asString());
	if(!instanceNode["DbStatus"].isNull())
		data_.instance.dbStatus = std::stoi(instanceNode["DbStatus"].asString());
	if(!instanceNode["Description"].isNull())
		data_.instance.description = instanceNode["Description"].asString();
	if(!instanceNode["FrontStatus"].isNull())
		data_.instance.frontStatus = instanceNode["FrontStatus"].asString();
	if(!instanceNode["GmtCreate"].isNull())
		data_.instance.gmtCreate = std::stol(instanceNode["GmtCreate"].asString());
	if(!instanceNode["GmtModified"].isNull())
		data_.instance.gmtModified = std::stol(instanceNode["GmtModified"].asString());
	if(!instanceNode["Id"].isNull())
		data_.instance.id = std::stol(instanceNode["Id"].asString());
	if(!instanceNode["InstanceCategory"].isNull())
		data_.instance.instanceCategory = std::stoi(instanceNode["InstanceCategory"].asString());
	if(!instanceNode["InstanceType"].isNull())
		data_.instance.instanceType = std::stoi(instanceNode["InstanceType"].asString());
	if(!instanceNode["IpList"].isNull())
		data_.instance.ipList = instanceNode["IpList"].asString();
	if(!instanceNode["IsImported"].isNull())
		data_.instance.isImported = instanceNode["IsImported"].asString() == "true";
	if(!instanceNode["IsPublic"].isNull())
		data_.instance.isPublic = instanceNode["IsPublic"].asString() == "true";
	if(!instanceNode["Name"].isNull())
		data_.instance.name = instanceNode["Name"].asString();
	if(!instanceNode["OwnerId"].isNull())
		data_.instance.ownerId = instanceNode["OwnerId"].asString();
	if(!instanceNode["SentinelCtlStr"].isNull())
		data_.instance.sentinelCtlStr = instanceNode["SentinelCtlStr"].asString();
	if(!instanceNode["SentinelCtrl"].isNull())
		data_.instance.sentinelCtrl = std::stol(instanceNode["SentinelCtrl"].asString());
	if(!instanceNode["SentinelGridInterval"].isNull())
		data_.instance.sentinelGridInterval = std::stoi(instanceNode["SentinelGridInterval"].asString());
	if(!instanceNode["SentinelQps"].isNull())
		data_.instance.sentinelQps = std::stol(instanceNode["SentinelQps"].asString());
	if(!instanceNode["Status"].isNull())
		data_.instance.status = instanceNode["Status"].asString();
	if(!instanceNode["StatusCode"].isNull())
		data_.instance.statusCode = std::stoi(instanceNode["StatusCode"].asString());
	if(!instanceNode["TenantId"].isNull())
		data_.instance.tenantId = instanceNode["TenantId"].asString();
	if(!instanceNode["Testable"].isNull())
		data_.instance.testable = instanceNode["Testable"].asString() == "true";
	if(!instanceNode["UserId"].isNull())
		data_.instance.userId = instanceNode["UserId"].asString();
	if(!instanceNode["Visible"].isNull())
		data_.instance.visible = instanceNode["Visible"].asString() == "true";
	if(!instanceNode["VpcName"].isNull())
		data_.instance.vpcName = instanceNode["VpcName"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetInstanceResult::getMessage()const
{
	return message_;
}

GetInstanceResult::Data GetInstanceResult::getData()const
{
	return data_;
}

int GetInstanceResult::getCode()const
{
	return code_;
}


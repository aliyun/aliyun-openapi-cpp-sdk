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

#include <alibabacloud/ons/model/OnsInstanceBaseInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsInstanceBaseInfoResult::OnsInstanceBaseInfoResult() :
	ServiceResult()
{}

OnsInstanceBaseInfoResult::OnsInstanceBaseInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsInstanceBaseInfoResult::~OnsInstanceBaseInfoResult()
{}

void OnsInstanceBaseInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceBaseInfoNode = value["InstanceBaseInfo"];
	if(!instanceBaseInfoNode["IndependentNaming"].isNull())
		instanceBaseInfo_.independentNaming = instanceBaseInfoNode["IndependentNaming"].asString() == "true";
	if(!instanceBaseInfoNode["MaxTps"].isNull())
		instanceBaseInfo_.maxTps = std::stol(instanceBaseInfoNode["MaxTps"].asString());
	if(!instanceBaseInfoNode["Remark"].isNull())
		instanceBaseInfo_.remark = instanceBaseInfoNode["Remark"].asString();
	if(!instanceBaseInfoNode["InstanceName"].isNull())
		instanceBaseInfo_.instanceName = instanceBaseInfoNode["InstanceName"].asString();
	if(!instanceBaseInfoNode["ReleaseTime"].isNull())
		instanceBaseInfo_.releaseTime = std::stol(instanceBaseInfoNode["ReleaseTime"].asString());
	if(!instanceBaseInfoNode["TopicCapacity"].isNull())
		instanceBaseInfo_.topicCapacity = std::stoi(instanceBaseInfoNode["TopicCapacity"].asString());
	if(!instanceBaseInfoNode["InstanceStatus"].isNull())
		instanceBaseInfo_.instanceStatus = std::stoi(instanceBaseInfoNode["InstanceStatus"].asString());
	if(!instanceBaseInfoNode["InstanceId"].isNull())
		instanceBaseInfo_.instanceId = instanceBaseInfoNode["InstanceId"].asString();
	if(!instanceBaseInfoNode["InstanceType"].isNull())
		instanceBaseInfo_.instanceType = std::stoi(instanceBaseInfoNode["InstanceType"].asString());
	if(!instanceBaseInfoNode["CreateTime"].isNull())
		instanceBaseInfo_.createTime = instanceBaseInfoNode["CreateTime"].asString();
	if(!instanceBaseInfoNode["spInstanceId"].isNull())
		instanceBaseInfo_.spInstanceId = instanceBaseInfoNode["spInstanceId"].asString();
	if(!instanceBaseInfoNode["spInstanceType"].isNull())
		instanceBaseInfo_.spInstanceType = std::stoi(instanceBaseInfoNode["spInstanceType"].asString());
	auto endpointsNode = instanceBaseInfoNode["Endpoints"];
	if(!endpointsNode["TcpEndpoint"].isNull())
		instanceBaseInfo_.endpoints.tcpEndpoint = endpointsNode["TcpEndpoint"].asString();
	if(!endpointsNode["TcpInternetEndpoint"].isNull())
		instanceBaseInfo_.endpoints.tcpInternetEndpoint = endpointsNode["TcpInternetEndpoint"].asString();
	if(!endpointsNode["HttpInternetEndpoint"].isNull())
		instanceBaseInfo_.endpoints.httpInternetEndpoint = endpointsNode["HttpInternetEndpoint"].asString();
	if(!endpointsNode["HttpInternalEndpoint"].isNull())
		instanceBaseInfo_.endpoints.httpInternalEndpoint = endpointsNode["HttpInternalEndpoint"].asString();
	if(!endpointsNode["HttpInternetSecureEndpoint"].isNull())
		instanceBaseInfo_.endpoints.httpInternetSecureEndpoint = endpointsNode["HttpInternetSecureEndpoint"].asString();
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

OnsInstanceBaseInfoResult::InstanceBaseInfo OnsInstanceBaseInfoResult::getInstanceBaseInfo()const
{
	return instanceBaseInfo_;
}

std::string OnsInstanceBaseInfoResult::getHelpUrl()const
{
	return helpUrl_;
}


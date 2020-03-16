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

#include <alibabacloud/amqp-open/model/ListInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Amqp_open;
using namespace AlibabaCloud::Amqp_open::Model;

ListInstancesResult::ListInstancesResult() :
	ServiceResult()
{}

ListInstancesResult::ListInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstancesResult::~ListInstancesResult()
{}

void ListInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["MaxResults"].isNull())
		data_.maxResults = std::stoi(dataNode["MaxResults"].asString());
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	auto allInstancesNode = dataNode["Instances"]["InstanceVO"];
	for (auto dataNodeInstancesInstanceVO : allInstancesNode)
	{
		Data::InstanceVO instanceVOObject;
		if(!dataNodeInstancesInstanceVO["InstanceId"].isNull())
			instanceVOObject.instanceId = dataNodeInstancesInstanceVO["InstanceId"].asString();
		if(!dataNodeInstancesInstanceVO["InstanceName"].isNull())
			instanceVOObject.instanceName = dataNodeInstancesInstanceVO["InstanceName"].asString();
		if(!dataNodeInstancesInstanceVO["InstanceType"].isNull())
			instanceVOObject.instanceType = dataNodeInstancesInstanceVO["InstanceType"].asString();
		if(!dataNodeInstancesInstanceVO["Status"].isNull())
			instanceVOObject.status = dataNodeInstancesInstanceVO["Status"].asString();
		if(!dataNodeInstancesInstanceVO["OrderType"].isNull())
			instanceVOObject.orderType = dataNodeInstancesInstanceVO["OrderType"].asString();
		if(!dataNodeInstancesInstanceVO["OrderCreateTime"].isNull())
			instanceVOObject.orderCreateTime = std::stol(dataNodeInstancesInstanceVO["OrderCreateTime"].asString());
		if(!dataNodeInstancesInstanceVO["ExpireTime"].isNull())
			instanceVOObject.expireTime = std::stol(dataNodeInstancesInstanceVO["ExpireTime"].asString());
		if(!dataNodeInstancesInstanceVO["AutoRenewInstance"].isNull())
			instanceVOObject.autoRenewInstance = dataNodeInstancesInstanceVO["AutoRenewInstance"].asString() == "true";
		if(!dataNodeInstancesInstanceVO["SupportEIP"].isNull())
			instanceVOObject.supportEIP = dataNodeInstancesInstanceVO["SupportEIP"].asString() == "true";
		if(!dataNodeInstancesInstanceVO["PrivateEndpoint"].isNull())
			instanceVOObject.privateEndpoint = dataNodeInstancesInstanceVO["PrivateEndpoint"].asString();
		if(!dataNodeInstancesInstanceVO["PublicEndpoint"].isNull())
			instanceVOObject.publicEndpoint = dataNodeInstancesInstanceVO["PublicEndpoint"].asString();
		data_.instances.push_back(instanceVOObject);
	}

}

ListInstancesResult::Data ListInstancesResult::getData()const
{
	return data_;
}


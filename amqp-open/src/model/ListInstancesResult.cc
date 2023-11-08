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
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	if(!dataNode["MaxResults"].isNull())
		data_.maxResults = std::stoi(dataNode["MaxResults"].asString());
	auto allInstancesNode = dataNode["Instances"]["InstanceVO"];
	for (auto dataNodeInstancesInstanceVO : allInstancesNode)
	{
		Data::InstanceVO instanceVOObject;
		if(!dataNodeInstancesInstanceVO["Status"].isNull())
			instanceVOObject.status = dataNodeInstancesInstanceVO["Status"].asString();
		if(!dataNodeInstancesInstanceVO["SupportEIP"].isNull())
			instanceVOObject.supportEIP = dataNodeInstancesInstanceVO["SupportEIP"].asString() == "true";
		if(!dataNodeInstancesInstanceVO["ExpireTime"].isNull())
			instanceVOObject.expireTime = std::stol(dataNodeInstancesInstanceVO["ExpireTime"].asString());
		if(!dataNodeInstancesInstanceVO["OrderCreateTime"].isNull())
			instanceVOObject.orderCreateTime = std::stol(dataNodeInstancesInstanceVO["OrderCreateTime"].asString());
		if(!dataNodeInstancesInstanceVO["PrivateEndpoint"].isNull())
			instanceVOObject.privateEndpoint = dataNodeInstancesInstanceVO["PrivateEndpoint"].asString();
		if(!dataNodeInstancesInstanceVO["StorageSize"].isNull())
			instanceVOObject.storageSize = std::stoi(dataNodeInstancesInstanceVO["StorageSize"].asString());
		if(!dataNodeInstancesInstanceVO["MaxEipTps"].isNull())
			instanceVOObject.maxEipTps = std::stoi(dataNodeInstancesInstanceVO["MaxEipTps"].asString());
		if(!dataNodeInstancesInstanceVO["InstanceId"].isNull())
			instanceVOObject.instanceId = dataNodeInstancesInstanceVO["InstanceId"].asString();
		if(!dataNodeInstancesInstanceVO["InstanceType"].isNull())
			instanceVOObject.instanceType = dataNodeInstancesInstanceVO["InstanceType"].asString();
		if(!dataNodeInstancesInstanceVO["PublicEndpoint"].isNull())
			instanceVOObject.publicEndpoint = dataNodeInstancesInstanceVO["PublicEndpoint"].asString();
		if(!dataNodeInstancesInstanceVO["ClassicEndpoint"].isNull())
			instanceVOObject.classicEndpoint = dataNodeInstancesInstanceVO["ClassicEndpoint"].asString();
		if(!dataNodeInstancesInstanceVO["MaxVhost"].isNull())
			instanceVOObject.maxVhost = std::stoi(dataNodeInstancesInstanceVO["MaxVhost"].asString());
		if(!dataNodeInstancesInstanceVO["MaxTps"].isNull())
			instanceVOObject.maxTps = std::stoi(dataNodeInstancesInstanceVO["MaxTps"].asString());
		if(!dataNodeInstancesInstanceVO["AutoRenewInstance"].isNull())
			instanceVOObject.autoRenewInstance = dataNodeInstancesInstanceVO["AutoRenewInstance"].asString() == "true";
		if(!dataNodeInstancesInstanceVO["InstanceName"].isNull())
			instanceVOObject.instanceName = dataNodeInstancesInstanceVO["InstanceName"].asString();
		if(!dataNodeInstancesInstanceVO["MaxQueue"].isNull())
			instanceVOObject.maxQueue = std::stoi(dataNodeInstancesInstanceVO["MaxQueue"].asString());
		if(!dataNodeInstancesInstanceVO["OrderType"].isNull())
			instanceVOObject.orderType = dataNodeInstancesInstanceVO["OrderType"].asString();
		auto allTagsNode = dataNodeInstancesInstanceVO["Tags"]["tagsItem"];
		for (auto dataNodeInstancesInstanceVOTagstagsItem : allTagsNode)
		{
			Data::InstanceVO::TagsItem tagsObject;
			if(!dataNodeInstancesInstanceVOTagstagsItem["Key"].isNull())
				tagsObject.key = dataNodeInstancesInstanceVOTagstagsItem["Key"].asString();
			if(!dataNodeInstancesInstanceVOTagstagsItem["Value"].isNull())
				tagsObject.value = dataNodeInstancesInstanceVOTagstagsItem["Value"].asString();
			instanceVOObject.tags.push_back(tagsObject);
		}
		data_.instances.push_back(instanceVOObject);
	}

}

ListInstancesResult::Data ListInstancesResult::getData()const
{
	return data_;
}


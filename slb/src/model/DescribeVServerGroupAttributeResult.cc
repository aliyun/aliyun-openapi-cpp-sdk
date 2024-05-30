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

#include <alibabacloud/slb/model/DescribeVServerGroupAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeVServerGroupAttributeResult::DescribeVServerGroupAttributeResult() :
	ServiceResult()
{}

DescribeVServerGroupAttributeResult::DescribeVServerGroupAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVServerGroupAttributeResult::~DescribeVServerGroupAttributeResult()
{}

void DescribeVServerGroupAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBackendServersNode = value["BackendServers"]["BackendServer"];
	for (auto valueBackendServersBackendServer : allBackendServersNode)
	{
		BackendServer backendServersObject;
		if(!valueBackendServersBackendServer["VpcId"].isNull())
			backendServersObject.vpcId = valueBackendServersBackendServer["VpcId"].asString();
		if(!valueBackendServersBackendServer["Type"].isNull())
			backendServersObject.type = valueBackendServersBackendServer["Type"].asString();
		if(!valueBackendServersBackendServer["Weight"].isNull())
			backendServersObject.weight = std::stoi(valueBackendServersBackendServer["Weight"].asString());
		if(!valueBackendServersBackendServer["ProxyProtocolV2Enabled"].isNull())
			backendServersObject.proxyProtocolV2Enabled = valueBackendServersBackendServer["ProxyProtocolV2Enabled"].asString() == "true";
		if(!valueBackendServersBackendServer["Description"].isNull())
			backendServersObject.description = valueBackendServersBackendServer["Description"].asString();
		if(!valueBackendServersBackendServer["ServerRegionId"].isNull())
			backendServersObject.serverRegionId = valueBackendServersBackendServer["ServerRegionId"].asString();
		if(!valueBackendServersBackendServer["ServerIp"].isNull())
			backendServersObject.serverIp = valueBackendServersBackendServer["ServerIp"].asString();
		if(!valueBackendServersBackendServer["Port"].isNull())
			backendServersObject.port = std::stoi(valueBackendServersBackendServer["Port"].asString());
		if(!valueBackendServersBackendServer["VbrId"].isNull())
			backendServersObject.vbrId = valueBackendServersBackendServer["VbrId"].asString();
		if(!valueBackendServersBackendServer["ServerId"].isNull())
			backendServersObject.serverId = valueBackendServersBackendServer["ServerId"].asString();
		backendServers_.push_back(backendServersObject);
	}
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["TagKey"].isNull())
			tagsObject.tagKey = valueTagsTag["TagKey"].asString();
		if(!valueTagsTag["TagValue"].isNull())
			tagsObject.tagValue = valueTagsTag["TagValue"].asString();
		tags_.push_back(tagsObject);
	}
	if(!value["ServiceManagedMode"].isNull())
		serviceManagedMode_ = value["ServiceManagedMode"].asString();
	if(!value["VServerGroupId"].isNull())
		vServerGroupId_ = value["VServerGroupId"].asString();
	if(!value["VServerGroupName"].isNull())
		vServerGroupName_ = value["VServerGroupName"].asString();
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();

}

std::string DescribeVServerGroupAttributeResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

std::string DescribeVServerGroupAttributeResult::getServiceManagedMode()const
{
	return serviceManagedMode_;
}

std::string DescribeVServerGroupAttributeResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeVServerGroupAttributeResult::getVServerGroupName()const
{
	return vServerGroupName_;
}

std::string DescribeVServerGroupAttributeResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

std::vector<DescribeVServerGroupAttributeResult::BackendServer> DescribeVServerGroupAttributeResult::getBackendServers()const
{
	return backendServers_;
}

std::vector<DescribeVServerGroupAttributeResult::Tag> DescribeVServerGroupAttributeResult::getTags()const
{
	return tags_;
}


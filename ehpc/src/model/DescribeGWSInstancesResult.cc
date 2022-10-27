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

#include <alibabacloud/ehpc/model/DescribeGWSInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

DescribeGWSInstancesResult::DescribeGWSInstancesResult() :
	ServiceResult()
{}

DescribeGWSInstancesResult::DescribeGWSInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGWSInstancesResult::~DescribeGWSInstancesResult()
{}

void DescribeGWSInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["InstanceInfo"];
	for (auto valueInstancesInstanceInfo : allInstancesNode)
	{
		InstanceInfo instancesObject;
		if(!valueInstancesInstanceInfo["Status"].isNull())
			instancesObject.status = valueInstancesInstanceInfo["Status"].asString();
		if(!valueInstancesInstanceInfo["WorkMode"].isNull())
			instancesObject.workMode = valueInstancesInstanceInfo["WorkMode"].asString();
		if(!valueInstancesInstanceInfo["ExpireTime"].isNull())
			instancesObject.expireTime = valueInstancesInstanceInfo["ExpireTime"].asString();
		if(!valueInstancesInstanceInfo["CreateTime"].isNull())
			instancesObject.createTime = valueInstancesInstanceInfo["CreateTime"].asString();
		if(!valueInstancesInstanceInfo["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstanceInfo["InstanceId"].asString();
		if(!valueInstancesInstanceInfo["Name"].isNull())
			instancesObject.name = valueInstancesInstanceInfo["Name"].asString();
		if(!valueInstancesInstanceInfo["InstanceType"].isNull())
			instancesObject.instanceType = valueInstancesInstanceInfo["InstanceType"].asString();
		if(!valueInstancesInstanceInfo["UserName"].isNull())
			instancesObject.userName = valueInstancesInstanceInfo["UserName"].asString();
		if(!valueInstancesInstanceInfo["ClusterId"].isNull())
			instancesObject.clusterId = valueInstancesInstanceInfo["ClusterId"].asString();
		auto allAppListNode = valueInstancesInstanceInfo["AppList"]["AppInfo"];
		for (auto valueInstancesInstanceInfoAppListAppInfo : allAppListNode)
		{
			InstanceInfo::AppInfo appListObject;
			if(!valueInstancesInstanceInfoAppListAppInfo["AppName"].isNull())
				appListObject.appName = valueInstancesInstanceInfoAppListAppInfo["AppName"].asString();
			if(!valueInstancesInstanceInfoAppListAppInfo["AppArgs"].isNull())
				appListObject.appArgs = valueInstancesInstanceInfoAppListAppInfo["AppArgs"].asString();
			if(!valueInstancesInstanceInfoAppListAppInfo["AppPath"].isNull())
				appListObject.appPath = valueInstancesInstanceInfoAppListAppInfo["AppPath"].asString();
			instancesObject.appList.push_back(appListObject);
		}
		instances_.push_back(instancesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeGWSInstancesResult::InstanceInfo> DescribeGWSInstancesResult::getInstances()const
{
	return instances_;
}

int DescribeGWSInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeGWSInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGWSInstancesResult::getPageNumber()const
{
	return pageNumber_;
}


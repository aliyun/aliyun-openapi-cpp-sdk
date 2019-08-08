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
	auto allInstances = value["Instances"]["InstanceInfo"];
	for (auto value : allInstances)
	{
		InstanceInfo instancesObject;
		if(!value["ClusterId"].isNull())
			instancesObject.clusterId = value["ClusterId"].asString();
		if(!value["InstanceId"].isNull())
			instancesObject.instanceId = value["InstanceId"].asString();
		if(!value["InstanceType"].isNull())
			instancesObject.instanceType = value["InstanceType"].asString();
		if(!value["Status"].isNull())
			instancesObject.status = value["Status"].asString();
		if(!value["CreateTime"].isNull())
			instancesObject.createTime = value["CreateTime"].asString();
		if(!value["ExpireTime"].isNull())
			instancesObject.expireTime = value["ExpireTime"].asString();
		if(!value["WorkMode"].isNull())
			instancesObject.workMode = value["WorkMode"].asString();
		if(!value["Name"].isNull())
			instancesObject.name = value["Name"].asString();
		if(!value["UserName"].isNull())
			instancesObject.userName = value["UserName"].asString();
		auto allAppList = value["AppList"]["AppInfo"];
		for (auto value : allAppList)
		{
			InstanceInfo::AppInfo appListObject;
			if(!value["AppName"].isNull())
				appListObject.appName = value["AppName"].asString();
			if(!value["AppPath"].isNull())
				appListObject.appPath = value["AppPath"].asString();
			if(!value["AppArgs"].isNull())
				appListObject.appArgs = value["AppArgs"].asString();
			instancesObject.appList.push_back(appListObject);
		}
		instances_.push_back(instancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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


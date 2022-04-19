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

#include <alibabacloud/sas/model/DescribePropertySoftwareDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribePropertySoftwareDetailResult::DescribePropertySoftwareDetailResult() :
	ServiceResult()
{}

DescribePropertySoftwareDetailResult::DescribePropertySoftwareDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePropertySoftwareDetailResult::~DescribePropertySoftwareDetailResult()
{}

void DescribePropertySoftwareDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPropertysNode = value["Propertys"]["PropertySoftware"];
	for (auto valuePropertysPropertySoftware : allPropertysNode)
	{
		PropertySoftware propertysObject;
		if(!valuePropertysPropertySoftware["InternetIp"].isNull())
			propertysObject.internetIp = valuePropertysPropertySoftware["InternetIp"].asString();
		if(!valuePropertysPropertySoftware["Ip"].isNull())
			propertysObject.ip = valuePropertysPropertySoftware["Ip"].asString();
		if(!valuePropertysPropertySoftware["InstanceId"].isNull())
			propertysObject.instanceId = valuePropertysPropertySoftware["InstanceId"].asString();
		if(!valuePropertysPropertySoftware["IntranetIp"].isNull())
			propertysObject.intranetIp = valuePropertysPropertySoftware["IntranetIp"].asString();
		if(!valuePropertysPropertySoftware["InstallTime"].isNull())
			propertysObject.installTime = valuePropertysPropertySoftware["InstallTime"].asString();
		if(!valuePropertysPropertySoftware["Uuid"].isNull())
			propertysObject.uuid = valuePropertysPropertySoftware["Uuid"].asString();
		if(!valuePropertysPropertySoftware["Version"].isNull())
			propertysObject.version = valuePropertysPropertySoftware["Version"].asString();
		if(!valuePropertysPropertySoftware["InstanceName"].isNull())
			propertysObject.instanceName = valuePropertysPropertySoftware["InstanceName"].asString();
		if(!valuePropertysPropertySoftware["Path"].isNull())
			propertysObject.path = valuePropertysPropertySoftware["Path"].asString();
		if(!valuePropertysPropertySoftware["Name"].isNull())
			propertysObject.name = valuePropertysPropertySoftware["Name"].asString();
		if(!valuePropertysPropertySoftware["CreateTimestamp"].isNull())
			propertysObject.createTimestamp = std::stol(valuePropertysPropertySoftware["CreateTimestamp"].asString());
		if(!valuePropertysPropertySoftware["InstallTimeDt"].isNull())
			propertysObject.installTimeDt = std::stol(valuePropertysPropertySoftware["InstallTimeDt"].asString());
		propertys_.push_back(propertysObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

std::vector<DescribePropertySoftwareDetailResult::PropertySoftware> DescribePropertySoftwareDetailResult::getPropertys()const
{
	return propertys_;
}

DescribePropertySoftwareDetailResult::PageInfo DescribePropertySoftwareDetailResult::getPageInfo()const
{
	return pageInfo_;
}


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

#include <alibabacloud/sas/model/DescribePropertyScaDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribePropertyScaDetailResult::DescribePropertyScaDetailResult() :
	ServiceResult()
{}

DescribePropertyScaDetailResult::DescribePropertyScaDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePropertyScaDetailResult::~DescribePropertyScaDetailResult()
{}

void DescribePropertyScaDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPropertysNode = value["Propertys"]["PropertySca"];
	for (auto valuePropertysPropertySca : allPropertysNode)
	{
		PropertySca propertysObject;
		if(!valuePropertysPropertySca["Type"].isNull())
			propertysObject.type = valuePropertysPropertySca["Type"].asString();
		if(!valuePropertysPropertySca["BizTypeDispaly"].isNull())
			propertysObject.bizTypeDispaly = valuePropertysPropertySca["BizTypeDispaly"].asString();
		if(!valuePropertysPropertySca["ProcessStarted"].isNull())
			propertysObject.processStarted = std::stol(valuePropertysPropertySca["ProcessStarted"].asString());
		if(!valuePropertysPropertySca["InternetIp"].isNull())
			propertysObject.internetIp = valuePropertysPropertySca["InternetIp"].asString();
		if(!valuePropertysPropertySca["ConfigPath"].isNull())
			propertysObject.configPath = valuePropertysPropertySca["ConfigPath"].asString();
		if(!valuePropertysPropertySca["Pid"].isNull())
			propertysObject.pid = valuePropertysPropertySca["Pid"].asString();
		if(!valuePropertysPropertySca["Port"].isNull())
			propertysObject.port = valuePropertysPropertySca["Port"].asString();
		if(!valuePropertysPropertySca["Cmdline"].isNull())
			propertysObject.cmdline = valuePropertysPropertySca["Cmdline"].asString();
		if(!valuePropertysPropertySca["BizType"].isNull())
			propertysObject.bizType = valuePropertysPropertySca["BizType"].asString();
		if(!valuePropertysPropertySca["ListenIp"].isNull())
			propertysObject.listenIp = valuePropertysPropertySca["ListenIp"].asString();
		if(!valuePropertysPropertySca["Version"].isNull())
			propertysObject.version = valuePropertysPropertySca["Version"].asString();
		if(!valuePropertysPropertySca["InstanceName"].isNull())
			propertysObject.instanceName = valuePropertysPropertySca["InstanceName"].asString();
		if(!valuePropertysPropertySca["ListenStatus"].isNull())
			propertysObject.listenStatus = valuePropertysPropertySca["ListenStatus"].asString();
		if(!valuePropertysPropertySca["Name"].isNull())
			propertysObject.name = valuePropertysPropertySca["Name"].asString();
		if(!valuePropertysPropertySca["Ip"].isNull())
			propertysObject.ip = valuePropertysPropertySca["Ip"].asString();
		if(!valuePropertysPropertySca["ProcessUser"].isNull())
			propertysObject.processUser = valuePropertysPropertySca["ProcessUser"].asString();
		if(!valuePropertysPropertySca["InstanceId"].isNull())
			propertysObject.instanceId = valuePropertysPropertySca["InstanceId"].asString();
		if(!valuePropertysPropertySca["WebPath"].isNull())
			propertysObject.webPath = valuePropertysPropertySca["WebPath"].asString();
		if(!valuePropertysPropertySca["Ppid"].isNull())
			propertysObject.ppid = valuePropertysPropertySca["Ppid"].asString();
		if(!valuePropertysPropertySca["IntranetIp"].isNull())
			propertysObject.intranetIp = valuePropertysPropertySca["IntranetIp"].asString();
		if(!valuePropertysPropertySca["Uuid"].isNull())
			propertysObject.uuid = valuePropertysPropertySca["Uuid"].asString();
		if(!valuePropertysPropertySca["ListenProtocol"].isNull())
			propertysObject.listenProtocol = valuePropertysPropertySca["ListenProtocol"].asString();
		if(!valuePropertysPropertySca["ImageName"].isNull())
			propertysObject.imageName = valuePropertysPropertySca["ImageName"].asString();
		if(!valuePropertysPropertySca["Path"].isNull())
			propertysObject.path = valuePropertysPropertySca["Path"].asString();
		if(!valuePropertysPropertySca["ContainerName"].isNull())
			propertysObject.containerName = valuePropertysPropertySca["ContainerName"].asString();
		if(!valuePropertysPropertySca["Proof"].isNull())
			propertysObject.proof = valuePropertysPropertySca["Proof"].asString();
		if(!valuePropertysPropertySca["CreateTimestamp"].isNull())
			propertysObject.createTimestamp = std::stol(valuePropertysPropertySca["CreateTimestamp"].asString());
		if(!valuePropertysPropertySca["RuntimeEnvVersion"].isNull())
			propertysObject.runtimeEnvVersion = valuePropertysPropertySca["RuntimeEnvVersion"].asString();
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

std::vector<DescribePropertyScaDetailResult::PropertySca> DescribePropertyScaDetailResult::getPropertys()const
{
	return propertys_;
}

DescribePropertyScaDetailResult::PageInfo DescribePropertyScaDetailResult::getPageInfo()const
{
	return pageInfo_;
}


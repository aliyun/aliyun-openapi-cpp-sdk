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

#include <alibabacloud/sas/model/DescribePropertyProcDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribePropertyProcDetailResult::DescribePropertyProcDetailResult() :
	ServiceResult()
{}

DescribePropertyProcDetailResult::DescribePropertyProcDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePropertyProcDetailResult::~DescribePropertyProcDetailResult()
{}

void DescribePropertyProcDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPropertysNode = value["Propertys"]["PropertyProc"];
	for (auto valuePropertysPropertyProc : allPropertysNode)
	{
		PropertyProc propertysObject;
		if(!valuePropertysPropertyProc["InternetIp"].isNull())
			propertysObject.internetIp = valuePropertysPropertyProc["InternetIp"].asString();
		if(!valuePropertysPropertyProc["Pid"].isNull())
			propertysObject.pid = valuePropertysPropertyProc["Pid"].asString();
		if(!valuePropertysPropertyProc["User"].isNull())
			propertysObject.user = valuePropertysPropertyProc["User"].asString();
		if(!valuePropertysPropertyProc["InstanceId"].isNull())
			propertysObject.instanceId = valuePropertysPropertyProc["InstanceId"].asString();
		if(!valuePropertysPropertyProc["Cmdline"].isNull())
			propertysObject.cmdline = valuePropertysPropertyProc["Cmdline"].asString();
		if(!valuePropertysPropertyProc["IntranetIp"].isNull())
			propertysObject.intranetIp = valuePropertysPropertyProc["IntranetIp"].asString();
		if(!valuePropertysPropertyProc["EuidName"].isNull())
			propertysObject.euidName = valuePropertysPropertyProc["EuidName"].asString();
		if(!valuePropertysPropertyProc["Uuid"].isNull())
			propertysObject.uuid = valuePropertysPropertyProc["Uuid"].asString();
		if(!valuePropertysPropertyProc["StartTime"].isNull())
			propertysObject.startTime = valuePropertysPropertyProc["StartTime"].asString();
		if(!valuePropertysPropertyProc["Pname"].isNull())
			propertysObject.pname = valuePropertysPropertyProc["Pname"].asString();
		if(!valuePropertysPropertyProc["InstanceName"].isNull())
			propertysObject.instanceName = valuePropertysPropertyProc["InstanceName"].asString();
		if(!valuePropertysPropertyProc["Path"].isNull())
			propertysObject.path = valuePropertysPropertyProc["Path"].asString();
		if(!valuePropertysPropertyProc["Md5"].isNull())
			propertysObject.md5 = valuePropertysPropertyProc["Md5"].asString();
		if(!valuePropertysPropertyProc["Name"].isNull())
			propertysObject.name = valuePropertysPropertyProc["Name"].asString();
		if(!valuePropertysPropertyProc["CreateTimestamp"].isNull())
			propertysObject.createTimestamp = std::stol(valuePropertysPropertyProc["CreateTimestamp"].asString());
		if(!valuePropertysPropertyProc["StartTimeDt"].isNull())
			propertysObject.startTimeDt = std::stol(valuePropertysPropertyProc["StartTimeDt"].asString());
		if(!valuePropertysPropertyProc["IsPackage"].isNull())
			propertysObject.isPackage = std::stoi(valuePropertysPropertyProc["IsPackage"].asString());
		if(!valuePropertysPropertyProc["State"].isNull())
			propertysObject.state = valuePropertysPropertyProc["State"].asString();
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

std::vector<DescribePropertyProcDetailResult::PropertyProc> DescribePropertyProcDetailResult::getPropertys()const
{
	return propertys_;
}

DescribePropertyProcDetailResult::PageInfo DescribePropertyProcDetailResult::getPageInfo()const
{
	return pageInfo_;
}


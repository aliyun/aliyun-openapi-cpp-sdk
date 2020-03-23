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

#include <alibabacloud/rds/model/DescribeDBProxyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBProxyResult::DescribeDBProxyResult() :
	ServiceResult()
{}

DescribeDBProxyResult::DescribeDBProxyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBProxyResult::~DescribeDBProxyResult()
{}

void DescribeDBProxyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBProxyConnectStringItemsNode = value["DBProxyConnectStringItems"]["DBProxyConnectStringItemsItem"];
	for (auto valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem : allDBProxyConnectStringItemsNode)
	{
		DBProxyConnectStringItemsItem dBProxyConnectStringItemsObject;
		if(!valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyEndpointId"].isNull())
			dBProxyConnectStringItemsObject.dBProxyEndpointId = valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyEndpointId"].asString();
		if(!valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyConnectString"].isNull())
			dBProxyConnectStringItemsObject.dBProxyConnectString = valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyConnectString"].asString();
		if(!valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyConnectStringPort"].isNull())
			dBProxyConnectStringItemsObject.dBProxyConnectStringPort = valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyConnectStringPort"].asString();
		if(!valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyConnectStringNetType"].isNull())
			dBProxyConnectStringItemsObject.dBProxyConnectStringNetType = valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyConnectStringNetType"].asString();
		if(!valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyVpcInstanceId"].isNull())
			dBProxyConnectStringItemsObject.dBProxyVpcInstanceId = valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyVpcInstanceId"].asString();
		if(!valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyEndpointName"].isNull())
			dBProxyConnectStringItemsObject.dBProxyEndpointName = valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyEndpointName"].asString();
		if(!valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyConnectStringNetWorkType"].isNull())
			dBProxyConnectStringItemsObject.dBProxyConnectStringNetWorkType = valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyConnectStringNetWorkType"].asString();
		dBProxyConnectStringItems_.push_back(dBProxyConnectStringItemsObject);
	}
	if(!value["DBProxyServiceStatus"].isNull())
		dBProxyServiceStatus_ = value["DBProxyServiceStatus"].asString();
	if(!value["DBProxyInstanceType"].isNull())
		dBProxyInstanceType_ = value["DBProxyInstanceType"].asString();
	if(!value["DBProxyInstanceNum"].isNull())
		dBProxyInstanceNum_ = std::stoi(value["DBProxyInstanceNum"].asString());
	if(!value["DBProxyInstanceStatus"].isNull())
		dBProxyInstanceStatus_ = value["DBProxyInstanceStatus"].asString();
	if(!value["DBProxyInstanceCurrentMinorVersion"].isNull())
		dBProxyInstanceCurrentMinorVersion_ = value["DBProxyInstanceCurrentMinorVersion"].asString();
	if(!value["DBProxyInstanceLatestMinorVersion"].isNull())
		dBProxyInstanceLatestMinorVersion_ = value["DBProxyInstanceLatestMinorVersion"].asString();
	if(!value["DBProxyInstanceName"].isNull())
		dBProxyInstanceName_ = value["DBProxyInstanceName"].asString();

}

std::string DescribeDBProxyResult::getDBProxyInstanceName()const
{
	return dBProxyInstanceName_;
}

std::string DescribeDBProxyResult::getDBProxyInstanceCurrentMinorVersion()const
{
	return dBProxyInstanceCurrentMinorVersion_;
}

std::string DescribeDBProxyResult::getDBProxyServiceStatus()const
{
	return dBProxyServiceStatus_;
}

int DescribeDBProxyResult::getDBProxyInstanceNum()const
{
	return dBProxyInstanceNum_;
}

std::string DescribeDBProxyResult::getDBProxyInstanceLatestMinorVersion()const
{
	return dBProxyInstanceLatestMinorVersion_;
}

std::vector<DescribeDBProxyResult::DBProxyConnectStringItemsItem> DescribeDBProxyResult::getDBProxyConnectStringItems()const
{
	return dBProxyConnectStringItems_;
}

std::string DescribeDBProxyResult::getDBProxyInstanceStatus()const
{
	return dBProxyInstanceStatus_;
}

std::string DescribeDBProxyResult::getDBProxyInstanceType()const
{
	return dBProxyInstanceType_;
}


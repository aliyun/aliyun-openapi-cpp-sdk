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

#include <alibabacloud/ddosbgp/model/DescribePackIpListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddosbgp;
using namespace AlibabaCloud::Ddosbgp::Model;

DescribePackIpListResult::DescribePackIpListResult() :
	ServiceResult()
{}

DescribePackIpListResult::DescribePackIpListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePackIpListResult::~DescribePackIpListResult()
{}

void DescribePackIpListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpListNode = value["IpList"]["Ipitem"];
	for (auto valueIpListIpitem : allIpListNode)
	{
		Ipitem ipListObject;
		if(!valueIpListIpitem["Status"].isNull())
			ipListObject.status = valueIpListIpitem["Status"].asString();
		if(!valueIpListIpitem["Ip"].isNull())
			ipListObject.ip = valueIpListIpitem["Ip"].asString();
		if(!valueIpListIpitem["Remark"].isNull())
			ipListObject.remark = valueIpListIpitem["Remark"].asString();
		if(!valueIpListIpitem["Product"].isNull())
			ipListObject.product = valueIpListIpitem["Product"].asString();
		if(!valueIpListIpitem["Region"].isNull())
			ipListObject.region = valueIpListIpitem["Region"].asString();
		ipList_.push_back(ipListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribePackIpListResult::Ipitem> DescribePackIpListResult::getIpList()const
{
	return ipList_;
}

int DescribePackIpListResult::getTotal()const
{
	return total_;
}

std::string DescribePackIpListResult::getCode()const
{
	return code_;
}

bool DescribePackIpListResult::getSuccess()const
{
	return success_;
}


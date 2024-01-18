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

#include <alibabacloud/r-kvstore/model/DescribeDBNodeDirectVipInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeDBNodeDirectVipInfoResult::DescribeDBNodeDirectVipInfoResult() :
	ServiceResult()
{}

DescribeDBNodeDirectVipInfoResult::DescribeDBNodeDirectVipInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBNodeDirectVipInfoResult::~DescribeDBNodeDirectVipInfoResult()
{}

void DescribeDBNodeDirectVipInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDirectVipInfoNode = value["DirectVipInfo"]["VipInfo"];
	for (auto valueDirectVipInfoVipInfo : allDirectVipInfoNode)
	{
		VipInfo directVipInfoObject;
		if(!valueDirectVipInfoVipInfo["NodeId"].isNull())
			directVipInfoObject.nodeId = valueDirectVipInfoVipInfo["NodeId"].asString();
		if(!valueDirectVipInfoVipInfo["Vip"].isNull())
			directVipInfoObject.vip = valueDirectVipInfoVipInfo["Vip"].asString();
		if(!valueDirectVipInfoVipInfo["Port"].isNull())
			directVipInfoObject.port = valueDirectVipInfoVipInfo["Port"].asString();
		if(!valueDirectVipInfoVipInfo["NetType"].isNull())
			directVipInfoObject.netType = valueDirectVipInfoVipInfo["NetType"].asString();
		directVipInfo_.push_back(directVipInfoObject);
	}
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::string DescribeDBNodeDirectVipInfoResult::getInstanceId()const
{
	return instanceId_;
}

std::vector<DescribeDBNodeDirectVipInfoResult::VipInfo> DescribeDBNodeDirectVipInfoResult::getDirectVipInfo()const
{
	return directVipInfo_;
}


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

#include <alibabacloud/gpdb/model/DescribeDBInstanceNetInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDBInstanceNetInfoResult::DescribeDBInstanceNetInfoResult() :
	ServiceResult()
{}

DescribeDBInstanceNetInfoResult::DescribeDBInstanceNetInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceNetInfoResult::~DescribeDBInstanceNetInfoResult()
{}

void DescribeDBInstanceNetInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDBInstanceNetInfos = value["DBInstanceNetInfos"]["DBInstanceNetInfo"];
	for (auto value : allDBInstanceNetInfos)
	{
		DBInstanceNetInfo dBInstanceNetInfosObject;
		if(!value["ConnectionString"].isNull())
			dBInstanceNetInfosObject.connectionString = value["ConnectionString"].asString();
		if(!value["IPAddress"].isNull())
			dBInstanceNetInfosObject.iPAddress = value["IPAddress"].asString();
		if(!value["IPType"].isNull())
			dBInstanceNetInfosObject.iPType = value["IPType"].asString();
		if(!value["Port"].isNull())
			dBInstanceNetInfosObject.port = value["Port"].asString();
		if(!value["VPCId"].isNull())
			dBInstanceNetInfosObject.vPCId = value["VPCId"].asString();
		if(!value["VSwitchId"].isNull())
			dBInstanceNetInfosObject.vSwitchId = value["VSwitchId"].asString();
		dBInstanceNetInfos_.push_back(dBInstanceNetInfosObject);
	}
	if(!value["InstanceNetworkType"].isNull())
		instanceNetworkType_ = value["InstanceNetworkType"].asString();

}

std::vector<DescribeDBInstanceNetInfoResult::DBInstanceNetInfo> DescribeDBInstanceNetInfoResult::getDBInstanceNetInfos()const
{
	return dBInstanceNetInfos_;
}

std::string DescribeDBInstanceNetInfoResult::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}


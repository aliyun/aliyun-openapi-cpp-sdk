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

#include <alibabacloud/polardb/model/DescribeAITaskStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeAITaskStatusResult::DescribeAITaskStatusResult() :
	ServiceResult()
{}

DescribeAITaskStatusResult::DescribeAITaskStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAITaskStatusResult::~DescribeAITaskStatusResult()
{}

void DescribeAITaskStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["StatusName"].isNull())
		statusName_ = value["StatusName"].asString();
	if(!value["AccountName"].isNull())
		accountName_ = value["AccountName"].asString();

}

std::string DescribeAITaskStatusResult::getStatus()const
{
	return status_;
}

std::string DescribeAITaskStatusResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeAITaskStatusResult::getStatusName()const
{
	return statusName_;
}

std::string DescribeAITaskStatusResult::getAccountName()const
{
	return accountName_;
}


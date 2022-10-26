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

#include <alibabacloud/polardb/model/DescribePolarSQLCollectorPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribePolarSQLCollectorPolicyResult::DescribePolarSQLCollectorPolicyResult() :
	ServiceResult()
{}

DescribePolarSQLCollectorPolicyResult::DescribePolarSQLCollectorPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePolarSQLCollectorPolicyResult::~DescribePolarSQLCollectorPolicyResult()
{}

void DescribePolarSQLCollectorPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["SQLCollectorStatus"].isNull())
		sQLCollectorStatus_ = value["SQLCollectorStatus"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

std::string DescribePolarSQLCollectorPolicyResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribePolarSQLCollectorPolicyResult::getSQLCollectorStatus()const
{
	return sQLCollectorStatus_;
}


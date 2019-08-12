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

#include <alibabacloud/r-kvstore/model/DescribeMonthlyServiceStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeMonthlyServiceStatusResult::DescribeMonthlyServiceStatusResult() :
	ServiceResult()
{}

DescribeMonthlyServiceStatusResult::DescribeMonthlyServiceStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMonthlyServiceStatusResult::~DescribeMonthlyServiceStatusResult()
{}

void DescribeMonthlyServiceStatusResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allInstanceSLAInfos = value["InstanceSLAInfos"]["InstanceSLAInfo"];
	for (auto value : allInstanceSLAInfos)
	{
		InstanceSLAInfo instanceSLAInfosObject;
		if(!value["InstanceId"].isNull())
			instanceSLAInfosObject.instanceId = value["InstanceId"].asString();
		if(!value["UptimePct"].isNull())
			instanceSLAInfosObject.uptimePct = std::stof(value["UptimePct"].asString());
		instanceSLAInfos_.push_back(instanceSLAInfosObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeMonthlyServiceStatusResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeMonthlyServiceStatusResult::InstanceSLAInfo> DescribeMonthlyServiceStatusResult::getInstanceSLAInfos()const
{
	return instanceSLAInfos_;
}


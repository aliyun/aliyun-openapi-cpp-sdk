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

#include <alibabacloud/smartag/model/DescribeQosesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeQosesResult::DescribeQosesResult() :
	ServiceResult()
{}

DescribeQosesResult::DescribeQosesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeQosesResult::~DescribeQosesResult()
{}

void DescribeQosesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allQoses = value["Qoses"]["Qos"];
	for (auto value : allQoses)
	{
		Qos qosesObject;
		if(!value["QosId"].isNull())
			qosesObject.qosId = value["QosId"].asString();
		if(!value["QosName"].isNull())
			qosesObject.qosName = value["QosName"].asString();
		if(!value["SagCount"].isNull())
			qosesObject.sagCount = value["SagCount"].asString();
		if(!value["SmartAGIds"].isNull())
			qosesObject.smartAGIds = value["SmartAGIds"].asString();
		qoses_.push_back(qosesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeQosesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeQosesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeQosesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeQosesResult::Qos> DescribeQosesResult::getQoses()const
{
	return qoses_;
}


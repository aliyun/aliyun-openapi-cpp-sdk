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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQosesNode = value["Qoses"]["Qos"];
	for (auto valueQosesQos : allQosesNode)
	{
		Qos qosesObject;
		if(!valueQosesQos["QosDescription"].isNull())
			qosesObject.qosDescription = valueQosesQos["QosDescription"].asString();
		if(!valueQosesQos["SagCount"].isNull())
			qosesObject.sagCount = valueQosesQos["SagCount"].asString();
		if(!valueQosesQos["SmartAGIds"].isNull())
			qosesObject.smartAGIds = valueQosesQos["SmartAGIds"].asString();
		if(!valueQosesQos["QosId"].isNull())
			qosesObject.qosId = valueQosesQos["QosId"].asString();
		if(!valueQosesQos["QosName"].isNull())
			qosesObject.qosName = valueQosesQos["QosName"].asString();
		if(!valueQosesQos["ResourceGroupId"].isNull())
			qosesObject.resourceGroupId = valueQosesQos["ResourceGroupId"].asString();
		qoses_.push_back(qosesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

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


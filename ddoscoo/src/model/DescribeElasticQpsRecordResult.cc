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

#include <alibabacloud/ddoscoo/model/DescribeElasticQpsRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeElasticQpsRecordResult::DescribeElasticQpsRecordResult() :
	ServiceResult()
{}

DescribeElasticQpsRecordResult::DescribeElasticQpsRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeElasticQpsRecordResult::~DescribeElasticQpsRecordResult()
{}

void DescribeElasticQpsRecordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allElasticQpsListNode = value["ElasticQpsList"]["elasticQpsListItem"];
	for (auto valueElasticQpsListelasticQpsListItem : allElasticQpsListNode)
	{
		ElasticQpsListItem elasticQpsListObject;
		if(!valueElasticQpsListelasticQpsListItem["OpsElasticQps"].isNull())
			elasticQpsListObject.opsElasticQps = std::stol(valueElasticQpsListelasticQpsListItem["OpsElasticQps"].asString());
		if(!valueElasticQpsListelasticQpsListItem["Ip"].isNull())
			elasticQpsListObject.ip = valueElasticQpsListelasticQpsListItem["Ip"].asString();
		if(!valueElasticQpsListelasticQpsListItem["OriginQps"].isNull())
			elasticQpsListObject.originQps = std::stol(valueElasticQpsListelasticQpsListItem["OriginQps"].asString());
		if(!valueElasticQpsListelasticQpsListItem["Date"].isNull())
			elasticQpsListObject.date = std::stol(valueElasticQpsListelasticQpsListItem["Date"].asString());
		if(!valueElasticQpsListelasticQpsListItem["InstanceId"].isNull())
			elasticQpsListObject.instanceId = valueElasticQpsListelasticQpsListItem["InstanceId"].asString();
		if(!valueElasticQpsListelasticQpsListItem["Qps"].isNull())
			elasticQpsListObject.qps = std::stol(valueElasticQpsListelasticQpsListItem["Qps"].asString());
		if(!valueElasticQpsListelasticQpsListItem["QpsPeak"].isNull())
			elasticQpsListObject.qpsPeak = std::stol(valueElasticQpsListelasticQpsListItem["QpsPeak"].asString());
		if(!valueElasticQpsListelasticQpsListItem["Status"].isNull())
			elasticQpsListObject.status = std::stol(valueElasticQpsListelasticQpsListItem["Status"].asString());
		if(!valueElasticQpsListelasticQpsListItem["OpsQps"].isNull())
			elasticQpsListObject.opsQps = std::stol(valueElasticQpsListelasticQpsListItem["OpsQps"].asString());
		elasticQpsList_.push_back(elasticQpsListObject);
	}

}

std::vector<DescribeElasticQpsRecordResult::ElasticQpsListItem> DescribeElasticQpsRecordResult::getElasticQpsList()const
{
	return elasticQpsList_;
}


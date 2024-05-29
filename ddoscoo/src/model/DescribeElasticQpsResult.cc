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

#include <alibabacloud/ddoscoo/model/DescribeElasticQpsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeElasticQpsResult::DescribeElasticQpsResult() :
	ServiceResult()
{}

DescribeElasticQpsResult::DescribeElasticQpsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeElasticQpsResult::~DescribeElasticQpsResult()
{}

void DescribeElasticQpsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allElasticQpsNode = value["ElasticQps"]["ElasticQpsItem"];
	for (auto valueElasticQpsElasticQpsItem : allElasticQpsNode)
	{
		ElasticQpsItem elasticQpsObject;
		if(!valueElasticQpsElasticQpsItem["MaxNormalQps"].isNull())
			elasticQpsObject.maxNormalQps = std::stol(valueElasticQpsElasticQpsItem["MaxNormalQps"].asString());
		if(!valueElasticQpsElasticQpsItem["Index"].isNull())
			elasticQpsObject.index = std::stol(valueElasticQpsElasticQpsItem["Index"].asString());
		if(!valueElasticQpsElasticQpsItem["MaxQps"].isNull())
			elasticQpsObject.maxQps = std::stol(valueElasticQpsElasticQpsItem["MaxQps"].asString());
		if(!valueElasticQpsElasticQpsItem["Pv"].isNull())
			elasticQpsObject.pv = std::stol(valueElasticQpsElasticQpsItem["Pv"].asString());
		if(!valueElasticQpsElasticQpsItem["Ups"].isNull())
			elasticQpsObject.ups = std::stol(valueElasticQpsElasticQpsItem["Ups"].asString());
		if(!valueElasticQpsElasticQpsItem["Status2"].isNull())
			elasticQpsObject.status2 = std::stol(valueElasticQpsElasticQpsItem["Status2"].asString());
		if(!valueElasticQpsElasticQpsItem["Status3"].isNull())
			elasticQpsObject.status3 = std::stol(valueElasticQpsElasticQpsItem["Status3"].asString());
		if(!valueElasticQpsElasticQpsItem["Status4"].isNull())
			elasticQpsObject.status4 = std::stol(valueElasticQpsElasticQpsItem["Status4"].asString());
		if(!valueElasticQpsElasticQpsItem["Status5"].isNull())
			elasticQpsObject.status5 = std::stol(valueElasticQpsElasticQpsItem["Status5"].asString());
		elasticQps_.push_back(elasticQpsObject);
	}

}

std::vector<DescribeElasticQpsResult::ElasticQpsItem> DescribeElasticQpsResult::getElasticQps()const
{
	return elasticQps_;
}


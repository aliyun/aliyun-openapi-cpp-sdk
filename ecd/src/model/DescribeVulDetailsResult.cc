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

#include <alibabacloud/ecd/model/DescribeVulDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeVulDetailsResult::DescribeVulDetailsResult() :
	ServiceResult()
{}

DescribeVulDetailsResult::DescribeVulDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVulDetailsResult::~DescribeVulDetailsResult()
{}

void DescribeVulDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCvesNode = value["Cves"]["Cve"];
	for (auto valueCvesCve : allCvesNode)
	{
		Cve cvesObject;
		if(!valueCvesCve["CveId"].isNull())
			cvesObject.cveId = valueCvesCve["CveId"].asString();
		if(!valueCvesCve["Summary"].isNull())
			cvesObject.summary = valueCvesCve["Summary"].asString();
		if(!valueCvesCve["Title"].isNull())
			cvesObject.title = valueCvesCve["Title"].asString();
		if(!valueCvesCve["CvssScore"].isNull())
			cvesObject.cvssScore = valueCvesCve["CvssScore"].asString();
		cves_.push_back(cvesObject);
	}

}

std::vector<DescribeVulDetailsResult::Cve> DescribeVulDetailsResult::getCves()const
{
	return cves_;
}


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

#include <alibabacloud/sas/model/DescribeVulDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

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
	auto allCves = value["Cves"]["Cve"];
	for (auto value : allCves)
	{
		Cve cvesObject;
		if(!value["CveId"].isNull())
			cvesObject.cveId = value["CveId"].asString();
		if(!value["CnvdId"].isNull())
			cvesObject.cnvdId = value["CnvdId"].asString();
		if(!value["Title"].isNull())
			cvesObject.title = value["Title"].asString();
		if(!value["CvssScore"].isNull())
			cvesObject.cvssScore = value["CvssScore"].asString();
		if(!value["CvssVector"].isNull())
			cvesObject.cvssVector = value["CvssVector"].asString();
		if(!value["ReleaseTime"].isNull())
			cvesObject.releaseTime = std::stol(value["ReleaseTime"].asString());
		if(!value["Complexity"].isNull())
			cvesObject.complexity = value["Complexity"].asString();
		if(!value["Poc"].isNull())
			cvesObject.poc = value["Poc"].asString();
		if(!value["PocCreateTime"].isNull())
			cvesObject.pocCreateTime = std::stol(value["PocCreateTime"].asString());
		if(!value["PocDisclosureTime"].isNull())
			cvesObject.pocDisclosureTime = std::stol(value["PocDisclosureTime"].asString());
		if(!value["Summary"].isNull())
			cvesObject.summary = value["Summary"].asString();
		if(!value["Solution"].isNull())
			cvesObject.solution = value["Solution"].asString();
		if(!value["Content"].isNull())
			cvesObject.content = value["Content"].asString();
		if(!value["Vendor"].isNull())
			cvesObject.vendor = value["Vendor"].asString();
		if(!value["Product"].isNull())
			cvesObject.product = value["Product"].asString();
		if(!value["VulLevel"].isNull())
			cvesObject.vulLevel = value["VulLevel"].asString();
		if(!value["Reference"].isNull())
			cvesObject.reference = value["Reference"].asString();
		if(!value["Classify"].isNull())
			cvesObject.classify = value["Classify"].asString();
		auto allClassifys = value["Classifys"]["Classify"];
		for (auto value : allClassifys)
		{
			Cve::Classify classifysObject;
			if(!value["Classify"].isNull())
				classifysObject.classify = value["Classify"].asString();
			if(!value["Description"].isNull())
				classifysObject.description = value["Description"].asString();
			if(!value["DemoVideoUrl"].isNull())
				classifysObject.demoVideoUrl = value["DemoVideoUrl"].asString();
			cvesObject.classifys.push_back(classifysObject);
		}
		cves_.push_back(cvesObject);
	}

}

std::vector<DescribeVulDetailsResult::Cve> DescribeVulDetailsResult::getCves()const
{
	return cves_;
}


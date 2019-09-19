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

#include <alibabacloud/aegis/model/DescribeVulDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

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
		if(!valueCvesCve["CnvdId"].isNull())
			cvesObject.cnvdId = valueCvesCve["CnvdId"].asString();
		if(!valueCvesCve["OtherId"].isNull())
			cvesObject.otherId = valueCvesCve["OtherId"].asString();
		if(!valueCvesCve["Title"].isNull())
			cvesObject.title = valueCvesCve["Title"].asString();
		if(!valueCvesCve["CvssScore"].isNull())
			cvesObject.cvssScore = valueCvesCve["CvssScore"].asString();
		if(!valueCvesCve["CvssVector"].isNull())
			cvesObject.cvssVector = valueCvesCve["CvssVector"].asString();
		if(!valueCvesCve["ReleaseTime"].isNull())
			cvesObject.releaseTime = std::stol(valueCvesCve["ReleaseTime"].asString());
		if(!valueCvesCve["Complexity"].isNull())
			cvesObject.complexity = valueCvesCve["Complexity"].asString();
		if(!valueCvesCve["Poc"].isNull())
			cvesObject.poc = valueCvesCve["Poc"].asString();
		if(!valueCvesCve["PocCreateTime"].isNull())
			cvesObject.pocCreateTime = std::stol(valueCvesCve["PocCreateTime"].asString());
		if(!valueCvesCve["PocDisclosureTime"].isNull())
			cvesObject.pocDisclosureTime = std::stol(valueCvesCve["PocDisclosureTime"].asString());
		if(!valueCvesCve["Summary"].isNull())
			cvesObject.summary = valueCvesCve["Summary"].asString();
		if(!valueCvesCve["Solution"].isNull())
			cvesObject.solution = valueCvesCve["Solution"].asString();
		if(!valueCvesCve["Content"].isNull())
			cvesObject.content = valueCvesCve["Content"].asString();
		if(!valueCvesCve["Vendor"].isNull())
			cvesObject.vendor = valueCvesCve["Vendor"].asString();
		if(!valueCvesCve["Product"].isNull())
			cvesObject.product = valueCvesCve["Product"].asString();
		if(!valueCvesCve["VulLevel"].isNull())
			cvesObject.vulLevel = valueCvesCve["VulLevel"].asString();
		if(!valueCvesCve["Reference"].isNull())
			cvesObject.reference = valueCvesCve["Reference"].asString();
		if(!valueCvesCve["Classify"].isNull())
			cvesObject.classify = valueCvesCve["Classify"].asString();
		auto allClassifysNode = allCvesNode["Classifys"]["Classify"];
		for (auto allCvesNodeClassifysClassify : allClassifysNode)
		{
			Cve::Classify classifysObject;
			if(!allCvesNodeClassifysClassify["Classify"].isNull())
				classifysObject.classify = allCvesNodeClassifysClassify["Classify"].asString();
			if(!allCvesNodeClassifysClassify["Description"].isNull())
				classifysObject.description = allCvesNodeClassifysClassify["Description"].asString();
			if(!allCvesNodeClassifysClassify["DemoVideoUrl"].isNull())
				classifysObject.demoVideoUrl = allCvesNodeClassifysClassify["DemoVideoUrl"].asString();
			cvesObject.classifys.push_back(classifysObject);
		}
		cves_.push_back(cvesObject);
	}

}

std::vector<DescribeVulDetailsResult::Cve> DescribeVulDetailsResult::getCves()const
{
	return cves_;
}


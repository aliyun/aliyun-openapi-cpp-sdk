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
	auto allCvesNode = value["Cves"]["Cve"];
	for (auto valueCvesCve : allCvesNode)
	{
		Cve cvesObject;
		if(!valueCvesCve["Summary"].isNull())
			cvesObject.summary = valueCvesCve["Summary"].asString();
		if(!valueCvesCve["Complexity"].isNull())
			cvesObject.complexity = valueCvesCve["Complexity"].asString();
		if(!valueCvesCve["Product"].isNull())
			cvesObject.product = valueCvesCve["Product"].asString();
		if(!valueCvesCve["PocCreateTime"].isNull())
			cvesObject.pocCreateTime = std::stol(valueCvesCve["PocCreateTime"].asString());
		if(!valueCvesCve["CveId"].isNull())
			cvesObject.cveId = valueCvesCve["CveId"].asString();
		if(!valueCvesCve["CnvdId"].isNull())
			cvesObject.cnvdId = valueCvesCve["CnvdId"].asString();
		if(!valueCvesCve["Reference"].isNull())
			cvesObject.reference = valueCvesCve["Reference"].asString();
		if(!valueCvesCve["CvssScore"].isNull())
			cvesObject.cvssScore = valueCvesCve["CvssScore"].asString();
		if(!valueCvesCve["Vendor"].isNull())
			cvesObject.vendor = valueCvesCve["Vendor"].asString();
		if(!valueCvesCve["PocDisclosureTime"].isNull())
			cvesObject.pocDisclosureTime = std::stol(valueCvesCve["PocDisclosureTime"].asString());
		if(!valueCvesCve["Classify"].isNull())
			cvesObject.classify = valueCvesCve["Classify"].asString();
		if(!valueCvesCve["CvssVector"].isNull())
			cvesObject.cvssVector = valueCvesCve["CvssVector"].asString();
		if(!valueCvesCve["VulLevel"].isNull())
			cvesObject.vulLevel = valueCvesCve["VulLevel"].asString();
		if(!valueCvesCve["ReleaseTime"].isNull())
			cvesObject.releaseTime = std::stol(valueCvesCve["ReleaseTime"].asString());
		if(!valueCvesCve["Title"].isNull())
			cvesObject.title = valueCvesCve["Title"].asString();
		if(!valueCvesCve["Solution"].isNull())
			cvesObject.solution = valueCvesCve["Solution"].asString();
		if(!valueCvesCve["Content"].isNull())
			cvesObject.content = valueCvesCve["Content"].asString();
		if(!valueCvesCve["Poc"].isNull())
			cvesObject.poc = valueCvesCve["Poc"].asString();
		if(!valueCvesCve["OtherId"].isNull())
			cvesObject.otherId = valueCvesCve["OtherId"].asString();
		if(!valueCvesCve["InstanceName"].isNull())
			cvesObject.instanceName = valueCvesCve["InstanceName"].asString();
		if(!valueCvesCve["InternetIp"].isNull())
			cvesObject.internetIp = valueCvesCve["InternetIp"].asString();
		if(!valueCvesCve["IntranetIp"].isNull())
			cvesObject.intranetIp = valueCvesCve["IntranetIp"].asString();
		if(!valueCvesCve["TargetId"].isNull())
			cvesObject.targetId = valueCvesCve["TargetId"].asString();
		if(!valueCvesCve["TargetName"].isNull())
			cvesObject.targetName = valueCvesCve["TargetName"].asString();
		auto allClassifysNode = valueCvesCve["Classifys"]["Classify"];
		for (auto valueCvesCveClassifysClassify : allClassifysNode)
		{
			Cve::Classify classifysObject;
			if(!valueCvesCveClassifysClassify["Description"].isNull())
				classifysObject.description = valueCvesCveClassifysClassify["Description"].asString();
			if(!valueCvesCveClassifysClassify["Classify"].isNull())
				classifysObject.classify = valueCvesCveClassifysClassify["Classify"].asString();
			if(!valueCvesCveClassifysClassify["DemoVideoUrl"].isNull())
				classifysObject.demoVideoUrl = valueCvesCveClassifysClassify["DemoVideoUrl"].asString();
			cvesObject.classifys.push_back(classifysObject);
		}
		cves_.push_back(cvesObject);
	}

}

std::vector<DescribeVulDetailsResult::Cve> DescribeVulDetailsResult::getCves()const
{
	return cves_;
}


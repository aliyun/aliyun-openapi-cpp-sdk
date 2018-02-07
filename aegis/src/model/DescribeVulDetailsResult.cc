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
	auto allCveLists = value["CveLists"]["cve"];
	for (const auto &item : allCveLists)
		cveLists_.push_back(item.asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["AliasName"].isNull())
		aliasName_ = value["AliasName"].asString();
	if(!value["Level"].isNull())
		level_ = value["Level"].asString();
	if(!value["VulPublishTs"].isNull())
		vulPublishTs_ = std::stol(value["VulPublishTs"].asString());
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Product"].isNull())
		product_ = value["Product"].asString();
	if(!value["HasPatch"].isNull())
		hasPatch_ = value["HasPatch"].asString() == "true";
	if(!value["PatchPublishTs"].isNull())
		patchPublishTs_ = std::stol(value["PatchPublishTs"].asString());
	if(!value["PatchSource"].isNull())
		patchSource_ = value["PatchSource"].asString();
	if(!value["Cvss"].isNull())
		cvss_ = value["Cvss"].asString();
	if(!value["CveIds"].isNull())
		cveIds_ = value["CveIds"].asString();
	if(!value["Advice"].isNull())
		advice_ = value["Advice"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["PendingCount"].isNull())
		pendingCount_ = std::stoi(value["PendingCount"].asString());
	if(!value["HandledCount"].isNull())
		handledCount_ = std::stoi(value["HandledCount"].asString());

}

int DescribeVulDetailsResult::getPendingCount()const
{
	return pendingCount_;
}

std::string DescribeVulDetailsResult::getDescription()const
{
	return description_;
}

std::vector<std::string> DescribeVulDetailsResult::getCveLists()const
{
	return cveLists_;
}

std::string DescribeVulDetailsResult::getCveIds()const
{
	return cveIds_;
}

long DescribeVulDetailsResult::getVulPublishTs()const
{
	return vulPublishTs_;
}

std::string DescribeVulDetailsResult::getProduct()const
{
	return product_;
}

bool DescribeVulDetailsResult::getHasPatch()const
{
	return hasPatch_;
}

std::string DescribeVulDetailsResult::getName()const
{
	return name_;
}

std::string DescribeVulDetailsResult::getType()const
{
	return type_;
}

std::string DescribeVulDetailsResult::getCvss()const
{
	return cvss_;
}

long DescribeVulDetailsResult::getPatchPublishTs()const
{
	return patchPublishTs_;
}

int DescribeVulDetailsResult::getHandledCount()const
{
	return handledCount_;
}

std::string DescribeVulDetailsResult::getAliasName()const
{
	return aliasName_;
}

std::string DescribeVulDetailsResult::getLevel()const
{
	return level_;
}

std::string DescribeVulDetailsResult::getAdvice()const
{
	return advice_;
}

std::string DescribeVulDetailsResult::getPatchSource()const
{
	return patchSource_;
}


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

#include <alibabacloud/sasti/model/DescribeFileReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sasti;
using namespace AlibabaCloud::Sasti::Model;

DescribeFileReportResult::DescribeFileReportResult() :
	ServiceResult()
{}

DescribeFileReportResult::DescribeFileReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFileReportResult::~DescribeFileReportResult()
{}

void DescribeFileReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Intelligences"].isNull())
		intelligences_ = value["Intelligences"].asString();
	if(!value["FileHash"].isNull())
		fileHash_ = value["FileHash"].asString();
	if(!value["ThreatTypes"].isNull())
		threatTypes_ = value["ThreatTypes"].asString();
	if(!value["Basic"].isNull())
		basic_ = value["Basic"].asString();
	if(!value["ThreatLevel"].isNull())
		threatLevel_ = value["ThreatLevel"].asString();
	if(!value["Sandbox"].isNull())
		sandbox_ = value["Sandbox"].asString();

}

std::string DescribeFileReportResult::getBasic()const
{
	return basic_;
}

std::string DescribeFileReportResult::getThreatLevel()const
{
	return threatLevel_;
}

std::string DescribeFileReportResult::getFileHash()const
{
	return fileHash_;
}

std::string DescribeFileReportResult::getThreatTypes()const
{
	return threatTypes_;
}

std::string DescribeFileReportResult::getIntelligences()const
{
	return intelligences_;
}

std::string DescribeFileReportResult::getSandbox()const
{
	return sandbox_;
}


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

#include <alibabacloud/nas/model/DescribeLogAnalysisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeLogAnalysisResult::DescribeLogAnalysisResult() :
	ServiceResult()
{}

DescribeLogAnalysisResult::DescribeLogAnalysisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogAnalysisResult::~DescribeLogAnalysisResult()
{}

void DescribeLogAnalysisResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAnalysesNode = value["Analyses"]["Analysis"];
	for (auto valueAnalysesAnalysis : allAnalysesNode)
	{
		Analysis analysesObject;
		if(!valueAnalysesAnalysis["MetaKey"].isNull())
			analysesObject.metaKey = valueAnalysesAnalysis["MetaKey"].asString();
		auto metaValueNode = value["MetaValue"];
		if(!metaValueNode["RoleArn"].isNull())
			analysesObject.metaValue.roleArn = metaValueNode["RoleArn"].asString();
		if(!metaValueNode["Region"].isNull())
			analysesObject.metaValue.region = metaValueNode["Region"].asString();
		if(!metaValueNode["Logstore"].isNull())
			analysesObject.metaValue.logstore = metaValueNode["Logstore"].asString();
		if(!metaValueNode["Project"].isNull())
			analysesObject.metaValue.project = metaValueNode["Project"].asString();
		analyses_.push_back(analysesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

int DescribeLogAnalysisResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeLogAnalysisResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLogAnalysisResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeLogAnalysisResult::Analysis> DescribeLogAnalysisResult::getAnalyses()const
{
	return analyses_;
}

std::string DescribeLogAnalysisResult::getCode()const
{
	return code_;
}


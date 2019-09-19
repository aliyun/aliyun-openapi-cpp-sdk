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

#include <alibabacloud/ivision/model/DescribeQuickDeploysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

DescribeQuickDeploysResult::DescribeQuickDeploysResult() :
	ServiceResult()
{}

DescribeQuickDeploysResult::DescribeQuickDeploysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeQuickDeploysResult::~DescribeQuickDeploysResult()
{}

void DescribeQuickDeploysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQuickDeploysNode = value["QuickDeploys"]["QuickDeploy"];
	for (auto valueQuickDeploysQuickDeploy : allQuickDeploysNode)
	{
		QuickDeploy quickDeploysObject;
		if(!valueQuickDeploysQuickDeploy["ProjectId"].isNull())
			quickDeploysObject.projectId = valueQuickDeploysQuickDeploy["ProjectId"].asString();
		if(!valueQuickDeploysQuickDeploy["IterationId"].isNull())
			quickDeploysObject.iterationId = valueQuickDeploysQuickDeploy["IterationId"].asString();
		if(!valueQuickDeploysQuickDeploy["ModelId"].isNull())
			quickDeploysObject.modelId = valueQuickDeploysQuickDeploy["ModelId"].asString();
		if(!valueQuickDeploysQuickDeploy["CreationTime"].isNull())
			quickDeploysObject.creationTime = valueQuickDeploysQuickDeploy["CreationTime"].asString();
		if(!valueQuickDeploysQuickDeploy["DeployStatus"].isNull())
			quickDeploysObject.deployStatus = valueQuickDeploysQuickDeploy["DeployStatus"].asString();
		quickDeploys_.push_back(quickDeploysObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stol(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stol(value["TotalNum"].asString());

}

std::vector<DescribeQuickDeploysResult::QuickDeploy> DescribeQuickDeploysResult::getQuickDeploys()const
{
	return quickDeploys_;
}

long DescribeQuickDeploysResult::getTotalNum()const
{
	return totalNum_;
}

long DescribeQuickDeploysResult::getPageSize()const
{
	return pageSize_;
}

long DescribeQuickDeploysResult::getCurrentPage()const
{
	return currentPage_;
}


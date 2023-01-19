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

#include <alibabacloud/sas/model/DescribeImageRepoListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageRepoListResult::DescribeImageRepoListResult() :
	ServiceResult()
{}

DescribeImageRepoListResult::DescribeImageRepoListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageRepoListResult::~DescribeImageRepoListResult()
{}

void DescribeImageRepoListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageRepoListNode = value["ImageRepoList"]["ImageRepo"];
	for (auto valueImageRepoListImageRepo : allImageRepoListNode)
	{
		ImageRepo imageRepoListObject;
		if(!valueImageRepoListImageRepo["Flag"].isNull())
			imageRepoListObject.flag = valueImageRepoListImageRepo["Flag"].asString();
		if(!valueImageRepoListImageRepo["RepoName"].isNull())
			imageRepoListObject.repoName = valueImageRepoListImageRepo["RepoName"].asString();
		if(!valueImageRepoListImageRepo["RepoNamespace"].isNull())
			imageRepoListObject.repoNamespace = valueImageRepoListImageRepo["RepoNamespace"].asString();
		imageRepoList_.push_back(imageRepoListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!value["AllTargetCount"].isNull())
		allTargetCount_ = std::stoi(value["AllTargetCount"].asString());
	if(!value["AddTargetCount"].isNull())
		addTargetCount_ = std::stoi(value["AddTargetCount"].asString());
	if(!value["DelTargetCount"].isNull())
		delTargetCount_ = std::stoi(value["DelTargetCount"].asString());

}

std::vector<DescribeImageRepoListResult::ImageRepo> DescribeImageRepoListResult::getImageRepoList()const
{
	return imageRepoList_;
}

DescribeImageRepoListResult::PageInfo DescribeImageRepoListResult::getPageInfo()const
{
	return pageInfo_;
}

int DescribeImageRepoListResult::getAllTargetCount()const
{
	return allTargetCount_;
}

int DescribeImageRepoListResult::getDelTargetCount()const
{
	return delTargetCount_;
}

int DescribeImageRepoListResult::getAddTargetCount()const
{
	return addTargetCount_;
}


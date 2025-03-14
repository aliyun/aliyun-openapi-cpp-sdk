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

#include <alibabacloud/sophonsoar/model/DescribeNodeParamTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

DescribeNodeParamTagsResult::DescribeNodeParamTagsResult() :
	ServiceResult()
{}

DescribeNodeParamTagsResult::DescribeNodeParamTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNodeParamTagsResult::~DescribeNodeParamTagsResult()
{}

void DescribeNodeParamTagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allParamReferredPathsNode = value["ParamReferredPaths"]["Data"];
	for (auto valueParamReferredPathsData : allParamReferredPathsNode)
	{
		Data paramReferredPathsObject;
		if(!valueParamReferredPathsData["ParamName"].isNull())
			paramReferredPathsObject.paramName = valueParamReferredPathsData["ParamName"].asString();
		auto allReferredPath = value["ReferredPath"]["ReferredPath"];
		for (auto value : allReferredPath)
			paramReferredPathsObject.referredPath.push_back(value.asString());
		paramReferredPaths_.push_back(paramReferredPathsObject);
	}

}

std::vector<DescribeNodeParamTagsResult::Data> DescribeNodeParamTagsResult::getParamReferredPaths()const
{
	return paramReferredPaths_;
}


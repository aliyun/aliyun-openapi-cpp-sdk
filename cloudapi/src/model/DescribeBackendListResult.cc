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

#include <alibabacloud/cloudapi/model/DescribeBackendListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeBackendListResult::DescribeBackendListResult() :
	ServiceResult()
{}

DescribeBackendListResult::DescribeBackendListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackendListResult::~DescribeBackendListResult()
{}

void DescribeBackendListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBackendInfoListNode = value["BackendInfoList"]["BackendInfo"];
	for (auto valueBackendInfoListBackendInfo : allBackendInfoListNode)
	{
		BackendInfo backendInfoListObject;
		if(!valueBackendInfoListBackendInfo["BackendName"].isNull())
			backendInfoListObject.backendName = valueBackendInfoListBackendInfo["BackendName"].asString();
		if(!valueBackendInfoListBackendInfo["BackendType"].isNull())
			backendInfoListObject.backendType = valueBackendInfoListBackendInfo["BackendType"].asString();
		if(!valueBackendInfoListBackendInfo["ModifiedTime"].isNull())
			backendInfoListObject.modifiedTime = valueBackendInfoListBackendInfo["ModifiedTime"].asString();
		if(!valueBackendInfoListBackendInfo["Description"].isNull())
			backendInfoListObject.description = valueBackendInfoListBackendInfo["Description"].asString();
		if(!valueBackendInfoListBackendInfo["CreatedTime"].isNull())
			backendInfoListObject.createdTime = valueBackendInfoListBackendInfo["CreatedTime"].asString();
		if(!valueBackendInfoListBackendInfo["BackendId"].isNull())
			backendInfoListObject.backendId = valueBackendInfoListBackendInfo["BackendId"].asString();
		backendInfoList_.push_back(backendInfoListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeBackendListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeBackendListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeBackendListResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeBackendListResult::BackendInfo> DescribeBackendListResult::getBackendInfoList()const
{
	return backendInfoList_;
}


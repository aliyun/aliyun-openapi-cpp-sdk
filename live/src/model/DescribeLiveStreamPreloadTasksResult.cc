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

#include <alibabacloud/live/model/DescribeLiveStreamPreloadTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStreamPreloadTasksResult::DescribeLiveStreamPreloadTasksResult() :
	ServiceResult()
{}

DescribeLiveStreamPreloadTasksResult::DescribeLiveStreamPreloadTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamPreloadTasksResult::~DescribeLiveStreamPreloadTasksResult()
{}

void DescribeLiveStreamPreloadTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPreloadTasksNode = value["PreloadTasks"]["PreloadTask"];
	for (auto valuePreloadTasksPreloadTask : allPreloadTasksNode)
	{
		PreloadTask preloadTasksObject;
		if(!valuePreloadTasksPreloadTask["Area"].isNull())
			preloadTasksObject.area = valuePreloadTasksPreloadTask["Area"].asString();
		if(!valuePreloadTasksPreloadTask["CreateTime"].isNull())
			preloadTasksObject.createTime = valuePreloadTasksPreloadTask["CreateTime"].asString();
		if(!valuePreloadTasksPreloadTask["Description"].isNull())
			preloadTasksObject.description = valuePreloadTasksPreloadTask["Description"].asString();
		if(!valuePreloadTasksPreloadTask["DomainName"].isNull())
			preloadTasksObject.domainName = valuePreloadTasksPreloadTask["DomainName"].asString();
		if(!valuePreloadTasksPreloadTask["PlayUrl"].isNull())
			preloadTasksObject.playUrl = valuePreloadTasksPreloadTask["PlayUrl"].asString();
		if(!valuePreloadTasksPreloadTask["PreloadedEndTime"].isNull())
			preloadTasksObject.preloadedEndTime = valuePreloadTasksPreloadTask["PreloadedEndTime"].asString();
		if(!valuePreloadTasksPreloadTask["PreloadedStartTime"].isNull())
			preloadTasksObject.preloadedStartTime = valuePreloadTasksPreloadTask["PreloadedStartTime"].asString();
		if(!valuePreloadTasksPreloadTask["Process"].isNull())
			preloadTasksObject.process = valuePreloadTasksPreloadTask["Process"].asString();
		if(!valuePreloadTasksPreloadTask["Status"].isNull())
			preloadTasksObject.status = valuePreloadTasksPreloadTask["Status"].asString();
		if(!valuePreloadTasksPreloadTask["TaskId"].isNull())
			preloadTasksObject.taskId = valuePreloadTasksPreloadTask["TaskId"].asString();
		preloadTasks_.push_back(preloadTasksObject);
	}
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());

}

std::vector<DescribeLiveStreamPreloadTasksResult::PreloadTask> DescribeLiveStreamPreloadTasksResult::getPreloadTasks()const
{
	return preloadTasks_;
}

int DescribeLiveStreamPreloadTasksResult::getTotalNum()const
{
	return totalNum_;
}

int DescribeLiveStreamPreloadTasksResult::getPageNum()const
{
	return pageNum_;
}

int DescribeLiveStreamPreloadTasksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLiveStreamPreloadTasksResult::getTotalPage()const
{
	return totalPage_;
}


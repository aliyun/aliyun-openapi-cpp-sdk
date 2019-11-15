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

#include <alibabacloud/cdn/model/DescribeUserUsageDataExportTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeUserUsageDataExportTaskResult::DescribeUserUsageDataExportTaskResult() :
	ServiceResult()
{}

DescribeUserUsageDataExportTaskResult::DescribeUserUsageDataExportTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserUsageDataExportTaskResult::~DescribeUserUsageDataExportTaskResult()
{}

void DescribeUserUsageDataExportTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto usageDataPerPageNode = value["UsageDataPerPage"];
	if(!usageDataPerPageNode["TotalCount"].isNull())
		usageDataPerPage_.totalCount = std::stoi(usageDataPerPageNode["TotalCount"].asString());
	if(!usageDataPerPageNode["PageSize"].isNull())
		usageDataPerPage_.pageSize = std::stoi(usageDataPerPageNode["PageSize"].asString());
	if(!usageDataPerPageNode["PageNumber"].isNull())
		usageDataPerPage_.pageNumber = std::stoi(usageDataPerPageNode["PageNumber"].asString());
	auto allDataNode = usageDataPerPageNode["Data"]["DataItem"];
	for (auto usageDataPerPageNodeDataDataItem : allDataNode)
	{
		UsageDataPerPage::DataItem dataItemObject;
		if(!usageDataPerPageNodeDataDataItem["TaskName"].isNull())
			dataItemObject.taskName = usageDataPerPageNodeDataDataItem["TaskName"].asString();
		if(!usageDataPerPageNodeDataDataItem["TaskId"].isNull())
			dataItemObject.taskId = usageDataPerPageNodeDataDataItem["TaskId"].asString();
		if(!usageDataPerPageNodeDataDataItem["CreateTime"].isNull())
			dataItemObject.createTime = usageDataPerPageNodeDataDataItem["CreateTime"].asString();
		if(!usageDataPerPageNodeDataDataItem["UpdateTime"].isNull())
			dataItemObject.updateTime = usageDataPerPageNodeDataDataItem["UpdateTime"].asString();
		if(!usageDataPerPageNodeDataDataItem["Status"].isNull())
			dataItemObject.status = usageDataPerPageNodeDataDataItem["Status"].asString();
		if(!usageDataPerPageNodeDataDataItem["DownloadUrl"].isNull())
			dataItemObject.downloadUrl = usageDataPerPageNodeDataDataItem["DownloadUrl"].asString();
		auto taskConfigNode = value["TaskConfig"];
		if(!taskConfigNode["StartTime"].isNull())
			dataItemObject.taskConfig.startTime = taskConfigNode["StartTime"].asString();
		if(!taskConfigNode["EndTime"].isNull())
			dataItemObject.taskConfig.endTime = taskConfigNode["EndTime"].asString();
		usageDataPerPage_.data.push_back(dataItemObject);
	}

}

DescribeUserUsageDataExportTaskResult::UsageDataPerPage DescribeUserUsageDataExportTaskResult::getUsageDataPerPage()const
{
	return usageDataPerPage_;
}


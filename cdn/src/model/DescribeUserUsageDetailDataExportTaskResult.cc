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

#include <alibabacloud/cdn/model/DescribeUserUsageDetailDataExportTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeUserUsageDetailDataExportTaskResult::DescribeUserUsageDetailDataExportTaskResult() :
	ServiceResult()
{}

DescribeUserUsageDetailDataExportTaskResult::DescribeUserUsageDetailDataExportTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserUsageDetailDataExportTaskResult::~DescribeUserUsageDetailDataExportTaskResult()
{}

void DescribeUserUsageDetailDataExportTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto usageDataPerPageNode = value["UsageDataPerPage"];
	if(!usageDataPerPageNode["PageSize"].isNull())
		usageDataPerPage_.pageSize = std::stoi(usageDataPerPageNode["PageSize"].asString());
	if(!usageDataPerPageNode["PageNumber"].isNull())
		usageDataPerPage_.pageNumber = std::stoi(usageDataPerPageNode["PageNumber"].asString());
	if(!usageDataPerPageNode["TotalCount"].isNull())
		usageDataPerPage_.totalCount = std::stoi(usageDataPerPageNode["TotalCount"].asString());
	auto allDataNode = usageDataPerPageNode["Data"]["DataItem"];
	for (auto usageDataPerPageNodeDataDataItem : allDataNode)
	{
		UsageDataPerPage::DataItem dataItemObject;
		if(!usageDataPerPageNodeDataDataItem["Status"].isNull())
			dataItemObject.status = usageDataPerPageNodeDataDataItem["Status"].asString();
		if(!usageDataPerPageNodeDataDataItem["UpdateTime"].isNull())
			dataItemObject.updateTime = usageDataPerPageNodeDataDataItem["UpdateTime"].asString();
		if(!usageDataPerPageNodeDataDataItem["DownloadUrl"].isNull())
			dataItemObject.downloadUrl = usageDataPerPageNodeDataDataItem["DownloadUrl"].asString();
		if(!usageDataPerPageNodeDataDataItem["CreateTime"].isNull())
			dataItemObject.createTime = usageDataPerPageNodeDataDataItem["CreateTime"].asString();
		if(!usageDataPerPageNodeDataDataItem["TaskName"].isNull())
			dataItemObject.taskName = usageDataPerPageNodeDataDataItem["TaskName"].asString();
		if(!usageDataPerPageNodeDataDataItem["TaskId"].isNull())
			dataItemObject.taskId = usageDataPerPageNodeDataDataItem["TaskId"].asString();
		auto taskConfigNode = value["TaskConfig"];
		if(!taskConfigNode["EndTime"].isNull())
			dataItemObject.taskConfig.endTime = taskConfigNode["EndTime"].asString();
		if(!taskConfigNode["StartTime"].isNull())
			dataItemObject.taskConfig.startTime = taskConfigNode["StartTime"].asString();
		usageDataPerPage_.data.push_back(dataItemObject);
	}

}

DescribeUserUsageDetailDataExportTaskResult::UsageDataPerPage DescribeUserUsageDetailDataExportTaskResult::getUsageDataPerPage()const
{
	return usageDataPerPage_;
}


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

#include <alibabacloud/aegis/model/DescribeLogItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeLogItemsResult::DescribeLogItemsResult() :
	ServiceResult()
{}

DescribeLogItemsResult::DescribeLogItemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogItemsResult::~DescribeLogItemsResult()
{}

void DescribeLogItemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogsListNode = value["LogsList"]["LogsListItem"];
	for (auto valueLogsListLogsListItem : allLogsListNode)
	{
		LogsListItem logsListObject;
		if(!valueLogsListLogsListItem["MLogTime"].isNull())
			logsListObject.mLogTime = valueLogsListLogsListItem["MLogTime"].asString();
		if(!valueLogsListLogsListItem["LogSourceId"].isNull())
			logsListObject.logSourceId = valueLogsListLogsListItem["LogSourceId"].asString();
		if(!valueLogsListLogsListItem["LogSource"].isNull())
			logsListObject.logSource = valueLogsListLogsListItem["LogSource"].asString();
		auto allMContentsNode = allLogsListNode["MContents"]["MContentsItem"];
		for (auto allLogsListNodeMContentsMContentsItem : allMContentsNode)
		{
			LogsListItem::MContentsItem mContentsObject;
			if(!allLogsListNodeMContentsMContentsItem["MKey"].isNull())
				mContentsObject.mKey = allLogsListNodeMContentsMContentsItem["MKey"].asString();
			if(!allLogsListNodeMContentsMContentsItem["MValue"].isNull())
				mContentsObject.mValue = allLogsListNodeMContentsMContentsItem["MValue"].asString();
			logsListObject.mContents.push_back(mContentsObject);
		}
		logsList_.push_back(logsListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["CrackTotalCount"].isNull())
		crackTotalCount_ = std::stoi(value["CrackTotalCount"].asString());
	if(!value["SetPageSize"].isNull())
		setPageSize_ = std::stoi(value["SetPageSize"].asString());
	if(!value["ProcessOffset"].isNull())
		processOffset_ = std::stoi(value["ProcessOffset"].asString());
	if(!value["NetworkOffset"].isNull())
		networkOffset_ = std::stoi(value["NetworkOffset"].asString());
	if(!value["PortSnapshotOffset"].isNull())
		portSnapshotOffset_ = std::stoi(value["PortSnapshotOffset"].asString());
	if(!value["ProcessSnapshotTotalCount"].isNull())
		processSnapshotTotalCount_ = std::stoi(value["ProcessSnapshotTotalCount"].asString());
	if(!value["CrackOffset"].isNull())
		crackOffset_ = std::stoi(value["CrackOffset"].asString());
	if(!value["NetworkTotalCount"].isNull())
		networkTotalCount_ = std::stoi(value["NetworkTotalCount"].asString());
	if(!value["PortSnapshotTotalCount"].isNull())
		portSnapshotTotalCount_ = std::stoi(value["PortSnapshotTotalCount"].asString());
	if(!value["ProcessSnapshotOffset"].isNull())
		processSnapshotOffset_ = std::stoi(value["ProcessSnapshotOffset"].asString());
	if(!value["ProcessTotalCount"].isNull())
		processTotalCount_ = std::stoi(value["ProcessTotalCount"].asString());
	if(!value["LoginTotalCount"].isNull())
		loginTotalCount_ = std::stoi(value["LoginTotalCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["AccountSnapshotOffset"].isNull())
		accountSnapshotOffset_ = std::stoi(value["AccountSnapshotOffset"].asString());
	if(!value["AccountSnapshotTotalCount"].isNull())
		accountSnapshotTotalCount_ = std::stoi(value["AccountSnapshotTotalCount"].asString());

}

int DescribeLogItemsResult::getSetPageSize()const
{
	return setPageSize_;
}

std::vector<DescribeLogItemsResult::LogsListItem> DescribeLogItemsResult::getLogsList()const
{
	return logsList_;
}

int DescribeLogItemsResult::getCrackOffset()const
{
	return crackOffset_;
}

int DescribeLogItemsResult::getAccountSnapshotTotalCount()const
{
	return accountSnapshotTotalCount_;
}

int DescribeLogItemsResult::getProcessOffset()const
{
	return processOffset_;
}

int DescribeLogItemsResult::getNetworkOffset()const
{
	return networkOffset_;
}

int DescribeLogItemsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeLogItemsResult::getProcessSnapshotOffset()const
{
	return processSnapshotOffset_;
}

int DescribeLogItemsResult::getLoginTotalCount()const
{
	return loginTotalCount_;
}

int DescribeLogItemsResult::getCurrentPage()const
{
	return currentPage_;
}

int DescribeLogItemsResult::getPortSnapshotOffset()const
{
	return portSnapshotOffset_;
}

int DescribeLogItemsResult::getNetworkTotalCount()const
{
	return networkTotalCount_;
}

int DescribeLogItemsResult::getAccountSnapshotOffset()const
{
	return accountSnapshotOffset_;
}

int DescribeLogItemsResult::getCrackTotalCount()const
{
	return crackTotalCount_;
}

int DescribeLogItemsResult::getProcessSnapshotTotalCount()const
{
	return processSnapshotTotalCount_;
}

int DescribeLogItemsResult::getPortSnapshotTotalCount()const
{
	return portSnapshotTotalCount_;
}

int DescribeLogItemsResult::getProcessTotalCount()const
{
	return processTotalCount_;
}


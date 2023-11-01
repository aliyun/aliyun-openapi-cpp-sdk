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

#include <alibabacloud/cloud-siem/model/DescribeJobStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeJobStatusResult::DescribeJobStatusResult() :
	ServiceResult()
{}

DescribeJobStatusResult::DescribeJobStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeJobStatusResult::~DescribeJobStatusResult()
{}

void DescribeJobStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TaskCount"].isNull())
		data_.taskCount = std::stoi(dataNode["TaskCount"].asString());
	if(!dataNode["FinishCount"].isNull())
		data_.finishCount = std::stoi(dataNode["FinishCount"].asString());
	if(!dataNode["FailedCount"].isNull())
		data_.failedCount = std::stoi(dataNode["FailedCount"].asString());
	if(!dataNode["TaskStatus"].isNull())
		data_.taskStatus = dataNode["TaskStatus"].asString();
	if(!dataNode["ConfigId"].isNull())
		data_.configId = dataNode["ConfigId"].asString();
	if(!dataNode["FolderId"].isNull())
		data_.folderId = dataNode["FolderId"].asString();
	auto allErrTaskListNode = dataNode["ErrTaskList"]["ErrTaskListItem"];
	for (auto dataNodeErrTaskListErrTaskListItem : allErrTaskListNode)
	{
		Data::ErrTaskListItem errTaskListItemObject;
		if(!dataNodeErrTaskListErrTaskListItem["UserId"].isNull())
			errTaskListItemObject.userId = std::stol(dataNodeErrTaskListErrTaskListItem["UserId"].asString());
		auto allProductListNode = dataNodeErrTaskListErrTaskListItem["ProductList"]["ProductListItem"];
		for (auto dataNodeErrTaskListErrTaskListItemProductListProductListItem : allProductListNode)
		{
			Data::ErrTaskListItem::ProductListItem productListObject;
			if(!dataNodeErrTaskListErrTaskListItemProductListProductListItem["ProductCode"].isNull())
				productListObject.productCode = dataNodeErrTaskListErrTaskListItemProductListProductListItem["ProductCode"].asString();
			auto allLogListNode = dataNodeErrTaskListErrTaskListItemProductListProductListItem["LogList"]["LogListItem"];
			for (auto dataNodeErrTaskListErrTaskListItemProductListProductListItemLogListLogListItem : allLogListNode)
			{
				Data::ErrTaskListItem::ProductListItem::LogListItem logListObject;
				if(!dataNodeErrTaskListErrTaskListItemProductListProductListItemLogListLogListItem["ProductCode"].isNull())
					logListObject.productCode = dataNodeErrTaskListErrTaskListItemProductListProductListItemLogListLogListItem["ProductCode"].asString();
				if(!dataNodeErrTaskListErrTaskListItemProductListProductListItemLogListLogListItem["LogCode"].isNull())
					logListObject.logCode = dataNodeErrTaskListErrTaskListItemProductListProductListItemLogListLogListItem["LogCode"].asString();
				if(!dataNodeErrTaskListErrTaskListItemProductListProductListItemLogListLogListItem["RegionCode"].isNull())
					logListObject.regionCode = dataNodeErrTaskListErrTaskListItemProductListProductListItemLogListLogListItem["RegionCode"].asString();
				if(!dataNodeErrTaskListErrTaskListItemProductListProductListItemLogListLogListItem["ProjectNamePattern"].isNull())
					logListObject.projectNamePattern = dataNodeErrTaskListErrTaskListItemProductListProductListItemLogListLogListItem["ProjectNamePattern"].asString();
				if(!dataNodeErrTaskListErrTaskListItemProductListProductListItemLogListLogListItem["LogStoreNamePattern"].isNull())
					logListObject.logStoreNamePattern = dataNodeErrTaskListErrTaskListItemProductListProductListItemLogListLogListItem["LogStoreNamePattern"].asString();
				if(!dataNodeErrTaskListErrTaskListItemProductListProductListItemLogListLogListItem["ErrorCode"].isNull())
					logListObject.errorCode = dataNodeErrTaskListErrTaskListItemProductListProductListItemLogListLogListItem["ErrorCode"].asString();
				productListObject.logList.push_back(logListObject);
			}
			errTaskListItemObject.productList.push_back(productListObject);
		}
		data_.errTaskList.push_back(errTaskListItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();

}

std::string DescribeJobStatusResult::getMessage()const
{
	return message_;
}

DescribeJobStatusResult::Data DescribeJobStatusResult::getData()const
{
	return data_;
}

int DescribeJobStatusResult::getCode()const
{
	return code_;
}

bool DescribeJobStatusResult::getSuccess()const
{
	return success_;
}

std::string DescribeJobStatusResult::getErrCode()const
{
	return errCode_;
}


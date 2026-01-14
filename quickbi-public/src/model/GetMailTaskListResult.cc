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

#include <alibabacloud/quickbi-public/model/GetMailTaskListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

GetMailTaskListResult::GetMailTaskListResult() :
	ServiceResult()
{}

GetMailTaskListResult::GetMailTaskListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMailTaskListResult::~GetMailTaskListResult()
{}

void GetMailTaskListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["PageNum"].isNull())
		result_.pageNum = std::stoi(resultNode["PageNum"].asString());
	if(!resultNode["PageSize"].isNull())
		result_.pageSize = std::stoi(resultNode["PageSize"].asString());
	if(!resultNode["TotalNum"].isNull())
		result_.totalNum = std::stoi(resultNode["TotalNum"].asString());
	if(!resultNode["TotalPages"].isNull())
		result_.totalPages = std::stoi(resultNode["TotalPages"].asString());
	if(!resultNode["Pre"].isNull())
		result_.pre = std::stoi(resultNode["Pre"].asString());
	if(!resultNode["Next"].isNull())
		result_.next = std::stoi(resultNode["Next"].asString());
	auto allDataNode = resultNode["Data"]["DataItem"];
	for (auto resultNodeDataDataItem : allDataNode)
	{
		Result::DataItem dataItemObject;
		if(!resultNodeDataDataItem["MailId"].isNull())
			dataItemObject.mailId = resultNodeDataDataItem["MailId"].asString();
		if(!resultNodeDataDataItem["Paused"].isNull())
			dataItemObject.paused = resultNodeDataDataItem["Paused"].asString() == "true";
		if(!resultNodeDataDataItem["BizOwnerUserId"].isNull())
			dataItemObject.bizOwnerUserId = resultNodeDataDataItem["BizOwnerUserId"].asString();
		if(!resultNodeDataDataItem["BizOwnerName"].isNull())
			dataItemObject.bizOwnerName = resultNodeDataDataItem["BizOwnerName"].asString();
		if(!resultNodeDataDataItem["SubscribeName"].isNull())
			dataItemObject.subscribeName = resultNodeDataDataItem["SubscribeName"].asString();
		result_.data.push_back(dataItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool GetMailTaskListResult::getSuccess()const
{
	return success_;
}

GetMailTaskListResult::Result GetMailTaskListResult::getResult()const
{
	return result_;
}


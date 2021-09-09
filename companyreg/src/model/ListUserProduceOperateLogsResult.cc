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

#include <alibabacloud/companyreg/model/ListUserProduceOperateLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

ListUserProduceOperateLogsResult::ListUserProduceOperateLogsResult() :
	ServiceResult()
{}

ListUserProduceOperateLogsResult::ListUserProduceOperateLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserProduceOperateLogsResult::~ListUserProduceOperateLogsResult()
{}

void ListUserProduceOperateLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["OpateLogs"];
	for (auto valueDataOpateLogs : allDataNode)
	{
		OpateLogs dataObject;
		if(!valueDataOpateLogs["BizId"].isNull())
			dataObject.bizId = valueDataOpateLogs["BizId"].asString();
		if(!valueDataOpateLogs["BizType"].isNull())
			dataObject.bizType = valueDataOpateLogs["BizType"].asString();
		if(!valueDataOpateLogs["OperateName"].isNull())
			dataObject.operateName = valueDataOpateLogs["OperateName"].asString();
		if(!valueDataOpateLogs["OperateTime"].isNull())
			dataObject.operateTime = std::stol(valueDataOpateLogs["OperateTime"].asString());
		if(!valueDataOpateLogs["OperateUserType"].isNull())
			dataObject.operateUserType = valueDataOpateLogs["OperateUserType"].asString();
		if(!valueDataOpateLogs["BizStatus"].isNull())
			dataObject.bizStatus = std::stoi(valueDataOpateLogs["BizStatus"].asString());
		if(!valueDataOpateLogs["ToBizStatus"].isNull())
			dataObject.toBizStatus = std::stoi(valueDataOpateLogs["ToBizStatus"].asString());
		data_.push_back(dataObject);
	}
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());

}

int ListUserProduceOperateLogsResult::getPageNum()const
{
	return pageNum_;
}

int ListUserProduceOperateLogsResult::getPageSize()const
{
	return pageSize_;
}

int ListUserProduceOperateLogsResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<ListUserProduceOperateLogsResult::OpateLogs> ListUserProduceOperateLogsResult::getData()const
{
	return data_;
}

int ListUserProduceOperateLogsResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool ListUserProduceOperateLogsResult::getSuccess()const
{
	return success_;
}


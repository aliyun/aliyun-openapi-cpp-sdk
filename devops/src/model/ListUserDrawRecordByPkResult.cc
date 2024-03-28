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

#include <alibabacloud/devops/model/ListUserDrawRecordByPkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListUserDrawRecordByPkResult::ListUserDrawRecordByPkResult() :
	ServiceResult()
{}

ListUserDrawRecordByPkResult::ListUserDrawRecordByPkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserDrawRecordByPkResult::~ListUserDrawRecordByPkResult()
{}

void ListUserDrawRecordByPkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alldataNode = value["data"]["lingma-data"];
	for (auto valuedatalingma-data : alldataNode)
	{
		Lingmadata dataObject;
		if(!valuedatalingma-data["uccId"].isNull())
			dataObject.uccId = valuedatalingma-data["uccId"].asString();
		if(!valuedatalingma-data["drawGroup"].isNull())
			dataObject.drawGroup = valuedatalingma-data["drawGroup"].asString();
		if(!valuedatalingma-data["drawPoolName"].isNull())
			dataObject.drawPoolName = valuedatalingma-data["drawPoolName"].asString();
		if(!valuedatalingma-data["taskGroupId"].isNull())
			dataObject.taskGroupId = valuedatalingma-data["taskGroupId"].asString();
		if(!valuedatalingma-data["aliyunPk"].isNull())
			dataObject.aliyunPk = valuedatalingma-data["aliyunPk"].asString();
		if(!valuedatalingma-data["gmtCreate"].isNull())
			dataObject.gmtCreate = valuedatalingma-data["gmtCreate"].asString();
		if(!valuedatalingma-data["drawResult"].isNull())
			dataObject.drawResult = valuedatalingma-data["drawResult"].asString();
		data_.push_back(dataObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();

}

std::vector<ListUserDrawRecordByPkResult::Lingmadata> ListUserDrawRecordByPkResult::getdata()const
{
	return data_;
}

std::string ListUserDrawRecordByPkResult::getRequestId()const
{
	return requestId_;
}

std::string ListUserDrawRecordByPkResult::getMessage()const
{
	return message_;
}

std::string ListUserDrawRecordByPkResult::getCode()const
{
	return code_;
}

bool ListUserDrawRecordByPkResult::getSuccess()const
{
	return success_;
}


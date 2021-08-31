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

#include <alibabacloud/edas/model/ListRecentChangeOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListRecentChangeOrderResult::ListRecentChangeOrderResult() :
	ServiceResult()
{}

ListRecentChangeOrderResult::ListRecentChangeOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRecentChangeOrderResult::~ListRecentChangeOrderResult()
{}

void ListRecentChangeOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allChangeOrderListNode = value["ChangeOrderList"]["ChangeOrder"];
	for (auto valueChangeOrderListChangeOrder : allChangeOrderListNode)
	{
		ChangeOrder changeOrderListObject;
		if(!valueChangeOrderListChangeOrder["ChangeOrderId"].isNull())
			changeOrderListObject.changeOrderId = valueChangeOrderListChangeOrder["ChangeOrderId"].asString();
		if(!valueChangeOrderListChangeOrder["UserId"].isNull())
			changeOrderListObject.userId = valueChangeOrderListChangeOrder["UserId"].asString();
		if(!valueChangeOrderListChangeOrder["BatchType"].isNull())
			changeOrderListObject.batchType = valueChangeOrderListChangeOrder["BatchType"].asString();
		if(!valueChangeOrderListChangeOrder["BatchCount"].isNull())
			changeOrderListObject.batchCount = std::stoi(valueChangeOrderListChangeOrder["BatchCount"].asString());
		if(!valueChangeOrderListChangeOrder["AppId"].isNull())
			changeOrderListObject.appId = valueChangeOrderListChangeOrder["AppId"].asString();
		if(!valueChangeOrderListChangeOrder["GroupId"].isNull())
			changeOrderListObject.groupId = valueChangeOrderListChangeOrder["GroupId"].asString();
		if(!valueChangeOrderListChangeOrder["Status"].isNull())
			changeOrderListObject.status = std::stoi(valueChangeOrderListChangeOrder["Status"].asString());
		if(!valueChangeOrderListChangeOrder["CreateTime"].isNull())
			changeOrderListObject.createTime = valueChangeOrderListChangeOrder["CreateTime"].asString();
		if(!valueChangeOrderListChangeOrder["FinishTime"].isNull())
			changeOrderListObject.finishTime = valueChangeOrderListChangeOrder["FinishTime"].asString();
		if(!valueChangeOrderListChangeOrder["CoType"].isNull())
			changeOrderListObject.coType = valueChangeOrderListChangeOrder["CoType"].asString();
		if(!valueChangeOrderListChangeOrder["CreateUserId"].isNull())
			changeOrderListObject.createUserId = valueChangeOrderListChangeOrder["CreateUserId"].asString();
		if(!valueChangeOrderListChangeOrder["CoTypeCode"].isNull())
			changeOrderListObject.coTypeCode = valueChangeOrderListChangeOrder["CoTypeCode"].asString();
		if(!valueChangeOrderListChangeOrder["Source"].isNull())
			changeOrderListObject.source = valueChangeOrderListChangeOrder["Source"].asString();
		if(!valueChangeOrderListChangeOrder["ChangeOrderDescription"].isNull())
			changeOrderListObject.changeOrderDescription = valueChangeOrderListChangeOrder["ChangeOrderDescription"].asString();
		changeOrderList_.push_back(changeOrderListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListRecentChangeOrderResult::getMessage()const
{
	return message_;
}

std::vector<ListRecentChangeOrderResult::ChangeOrder> ListRecentChangeOrderResult::getChangeOrderList()const
{
	return changeOrderList_;
}

int ListRecentChangeOrderResult::getCode()const
{
	return code_;
}


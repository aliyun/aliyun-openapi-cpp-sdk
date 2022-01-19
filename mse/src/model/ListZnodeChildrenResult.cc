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

#include <alibabacloud/mse/model/ListZnodeChildrenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListZnodeChildrenResult::ListZnodeChildrenResult() :
	ServiceResult()
{}

ListZnodeChildrenResult::ListZnodeChildrenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListZnodeChildrenResult::~ListZnodeChildrenResult()
{}

void ListZnodeChildrenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ZnodeModel"];
	for (auto valueDataZnodeModel : allDataNode)
	{
		ZnodeModel dataObject;
		if(!valueDataZnodeModel["Data"].isNull())
			dataObject.data = valueDataZnodeModel["Data"].asString();
		if(!valueDataZnodeModel["Path"].isNull())
			dataObject.path = valueDataZnodeModel["Path"].asString();
		if(!valueDataZnodeModel["Dir"].isNull())
			dataObject.dir = valueDataZnodeModel["Dir"].asString() == "true";
		if(!valueDataZnodeModel["Name"].isNull())
			dataObject.name = valueDataZnodeModel["Name"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListZnodeChildrenResult::getMessage()const
{
	return message_;
}

std::vector<ListZnodeChildrenResult::ZnodeModel> ListZnodeChildrenResult::getData()const
{
	return data_;
}

std::string ListZnodeChildrenResult::getErrorCode()const
{
	return errorCode_;
}

bool ListZnodeChildrenResult::getSuccess()const
{
	return success_;
}


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

#include <alibabacloud/ddoscoo/model/ListValueAddedResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

ListValueAddedResult::ListValueAddedResult() :
	ServiceResult()
{}

ListValueAddedResult::ListValueAddedResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListValueAddedResult::~ListValueAddedResult()
{}

void ListValueAddedResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allValueAddedListNode = value["ValueAddedList"]["ValueAdded"];
	for (auto valueValueAddedListValueAdded : allValueAddedListNode)
	{
		ValueAdded valueAddedListObject;
		if(!valueValueAddedListValueAdded["InstanceId"].isNull())
			valueAddedListObject.instanceId = valueValueAddedListValueAdded["InstanceId"].asString();
		if(!valueValueAddedListValueAdded["Status"].isNull())
			valueAddedListObject.status = std::stoi(valueValueAddedListValueAdded["Status"].asString());
		if(!valueValueAddedListValueAdded["ExpireTime"].isNull())
			valueAddedListObject.expireTime = std::stol(valueValueAddedListValueAdded["ExpireTime"].asString());
		if(!valueValueAddedListValueAdded["GmtCreate"].isNull())
			valueAddedListObject.gmtCreate = std::stol(valueValueAddedListValueAdded["GmtCreate"].asString());
		if(!valueValueAddedListValueAdded["LogSize"].isNull())
			valueAddedListObject.logSize = std::stol(valueValueAddedListValueAdded["LogSize"].asString());
		valueAddedList_.push_back(valueAddedListObject);
	}

}

std::vector<ListValueAddedResult::ValueAdded> ListValueAddedResult::getValueAddedList()const
{
	return valueAddedList_;
}


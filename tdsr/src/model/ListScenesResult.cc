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

#include <alibabacloud/tdsr/model/ListScenesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Tdsr;
using namespace AlibabaCloud::Tdsr::Model;

ListScenesResult::ListScenesResult() :
	ServiceResult()
{}

ListScenesResult::ListScenesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScenesResult::~ListScenesResult()
{}

void ListScenesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["SceneId"].isNull())
			dataObject.sceneId = valueDataDataItem["SceneId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();

}

std::vector<ListScenesResult::DataItem> ListScenesResult::getData()const
{
	return data_;
}

std::string ListScenesResult::getErrMessage()const
{
	return errMessage_;
}

bool ListScenesResult::getSuccess()const
{
	return success_;
}


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

#include <alibabacloud/cloudauth-console/model/RetrieveFaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth_console;
using namespace AlibabaCloud::Cloudauth_console::Model;

RetrieveFaceResult::RetrieveFaceResult() :
	ServiceResult()
{}

RetrieveFaceResult::RetrieveFaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RetrieveFaceResult::~RetrieveFaceResult()
{}

void RetrieveFaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["UserId"].isNull())
			dataObject.userId = std::stol(valueDataDataItem["UserId"].asString());
		if(!valueDataDataItem["UserName"].isNull())
			dataObject.userName = valueDataDataItem["UserName"].asString();
		if(!valueDataDataItem["Rate"].isNull())
			dataObject.rate = valueDataDataItem["Rate"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<RetrieveFaceResult::DataItem> RetrieveFaceResult::getData()const
{
	return data_;
}

bool RetrieveFaceResult::getSuccess()const
{
	return success_;
}


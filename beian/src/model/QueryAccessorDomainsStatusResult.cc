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

#include <alibabacloud/beian/model/QueryAccessorDomainsStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Beian;
using namespace AlibabaCloud::Beian::Model;

QueryAccessorDomainsStatusResult::QueryAccessorDomainsStatusResult() :
	ServiceResult()
{}

QueryAccessorDomainsStatusResult::QueryAccessorDomainsStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAccessorDomainsStatusResult::~QueryAccessorDomainsStatusResult()
{}

void QueryAccessorDomainsStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Domain"].isNull())
			dataObject.domain = valueDataDataItem["Domain"].asString();
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		if(!valueDataDataItem["ReasonCode"].isNull())
			dataObject.reasonCode = std::stoi(valueDataDataItem["ReasonCode"].asString());
		if(!valueDataDataItem["Reason"].isNull())
			dataObject.reason = valueDataDataItem["Reason"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryAccessorDomainsStatusResult::getMessage()const
{
	return message_;
}

std::vector<QueryAccessorDomainsStatusResult::DataItem> QueryAccessorDomainsStatusResult::getData()const
{
	return data_;
}

int QueryAccessorDomainsStatusResult::getCode()const
{
	return code_;
}


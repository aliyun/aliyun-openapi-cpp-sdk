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

#include <alibabacloud/config/model/ListIntegratedServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

ListIntegratedServiceResult::ListIntegratedServiceResult() :
	ServiceResult()
{}

ListIntegratedServiceResult::ListIntegratedServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIntegratedServiceResult::~ListIntegratedServiceResult()
{}

void ListIntegratedServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["AccountId"].isNull())
			dataObject.accountId = std::stol(valueDatadataItem["AccountId"].asString());
		if(!valueDatadataItem["ServiceName"].isNull())
			dataObject.serviceName = valueDatadataItem["ServiceName"].asString();
		if(!valueDatadataItem["ServiceCode"].isNull())
			dataObject.serviceCode = valueDatadataItem["ServiceCode"].asString();
		if(!valueDatadataItem["Status"].isNull())
			dataObject.status = valueDatadataItem["Status"].asString() == "true";
		data_.push_back(dataObject);
	}

}

std::vector<ListIntegratedServiceResult::DataItem> ListIntegratedServiceResult::getData()const
{
	return data_;
}


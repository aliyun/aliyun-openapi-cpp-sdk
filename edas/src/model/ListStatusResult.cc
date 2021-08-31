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

#include <alibabacloud/edas/model/ListStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListStatusResult::ListStatusResult() :
	ServiceResult()
{}

ListStatusResult::ListStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListStatusResult::~ListStatusResult()
{}

void ListStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Results"];
	for (auto valueDataResults : allDataNode)
	{
		Results dataObject;
		if(!valueDataResults["Region"].isNull())
			dataObject.region = valueDataResults["Region"].asString();
		if(!valueDataResults["NamespaceId"].isNull())
			dataObject.namespaceId = valueDataResults["NamespaceId"].asString();
		if(!valueDataResults["TenantId"].isNull())
			dataObject.tenantId = valueDataResults["TenantId"].asString();
		if(!valueDataResults["Source"].isNull())
			dataObject.source = valueDataResults["Source"].asString();
		if(!valueDataResults["AccountId"].isNull())
			dataObject.accountId = valueDataResults["AccountId"].asString();
		if(!valueDataResults["AppId"].isNull())
			dataObject.appId = valueDataResults["AppId"].asString();
		if(!valueDataResults["Ip"].isNull())
			dataObject.ip = valueDataResults["Ip"].asString();
		if(!valueDataResults["PodName"].isNull())
			dataObject.podName = valueDataResults["PodName"].asString();
		if(!valueDataResults["Status"].isNull())
			dataObject.status = valueDataResults["Status"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListStatusResult::getMessage()const
{
	return message_;
}

std::vector<ListStatusResult::Results> ListStatusResult::getData()const
{
	return data_;
}

int ListStatusResult::getCode()const
{
	return code_;
}

bool ListStatusResult::getSuccess()const
{
	return success_;
}


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

#include <alibabacloud/quickbi-public/model/QueryDataServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryDataServiceResult::QueryDataServiceResult() :
	ServiceResult()
{}

QueryDataServiceResult::QueryDataServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDataServiceResult::~QueryDataServiceResult()
{}

void QueryDataServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Sql"].isNull())
		result_.sql = resultNode["Sql"].asString();
	auto allHeadersNode = resultNode["Headers"]["HeadersItem"];
	for (auto resultNodeHeadersHeadersItem : allHeadersNode)
	{
		Result::HeadersItem headersItemObject;
		if(!resultNodeHeadersHeadersItem["Aggregator"].isNull())
			headersItemObject.aggregator = resultNodeHeadersHeadersItem["Aggregator"].asString();
		if(!resultNodeHeadersHeadersItem["Column"].isNull())
			headersItemObject.column = resultNodeHeadersHeadersItem["Column"].asString();
		if(!resultNodeHeadersHeadersItem["DataType"].isNull())
			headersItemObject.dataType = resultNodeHeadersHeadersItem["DataType"].asString();
		if(!resultNodeHeadersHeadersItem["Granularity"].isNull())
			headersItemObject.granularity = resultNodeHeadersHeadersItem["Granularity"].asString();
		if(!resultNodeHeadersHeadersItem["Label"].isNull())
			headersItemObject.label = resultNodeHeadersHeadersItem["Label"].asString();
		if(!resultNodeHeadersHeadersItem["Type"].isNull())
			headersItemObject.type = resultNodeHeadersHeadersItem["Type"].asString();
		result_.headers.push_back(headersItemObject);
	}
		auto allValues = resultNode["Values"]["Values"];
		for (auto value : allValues)
			result_.values.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryDataServiceResult::getSuccess()const
{
	return success_;
}

QueryDataServiceResult::Result QueryDataServiceResult::getResult()const
{
	return result_;
}


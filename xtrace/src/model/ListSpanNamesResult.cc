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

#include <alibabacloud/xtrace/model/ListSpanNamesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Xtrace;
using namespace AlibabaCloud::Xtrace::Model;

ListSpanNamesResult::ListSpanNamesResult() :
	ServiceResult()
{}

ListSpanNamesResult::ListSpanNamesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSpanNamesResult::~ListSpanNamesResult()
{}

void ListSpanNamesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSpanNames = value["SpanNames"]["SpanName"];
	for (const auto &item : allSpanNames)
		spanNames_.push_back(item.asString());

}

std::vector<std::string> ListSpanNamesResult::getSpanNames()const
{
	return spanNames_;
}


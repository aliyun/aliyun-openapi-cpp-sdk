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

#include <alibabacloud/opensearch/model/ListInterventionDictionaryNerResultsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ListInterventionDictionaryNerResultsResult::ListInterventionDictionaryNerResultsResult() :
	ServiceResult()
{}

ListInterventionDictionaryNerResultsResult::ListInterventionDictionaryNerResultsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInterventionDictionaryNerResultsResult::~ListInterventionDictionaryNerResultsResult()
{}

void ListInterventionDictionaryNerResultsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["nerItem"];
	for (auto valueresultnerItem : allresultNode)
	{
		NerItem resultObject;
		if(!valueresultnerItem["tag"].isNull())
			resultObject.tag = valueresultnerItem["tag"].asString();
		if(!valueresultnerItem["token"].isNull())
			resultObject.token = valueresultnerItem["token"].asString();
		if(!valueresultnerItem["order"].isNull())
			resultObject.order = std::stoi(valueresultnerItem["order"].asString());
		if(!valueresultnerItem["tagLabel"].isNull())
			resultObject.tagLabel = valueresultnerItem["tagLabel"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListInterventionDictionaryNerResultsResult::NerItem> ListInterventionDictionaryNerResultsResult::getresult()const
{
	return result_;
}

std::string ListInterventionDictionaryNerResultsResult::getRequestId()const
{
	return requestId_;
}


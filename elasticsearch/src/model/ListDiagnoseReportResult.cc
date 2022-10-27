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

#include <alibabacloud/elasticsearch/model/ListDiagnoseReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListDiagnoseReportResult::ListDiagnoseReportResult() :
	ServiceResult()
{}

ListDiagnoseReportResult::ListDiagnoseReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDiagnoseReportResult::~ListDiagnoseReportResult()
{}

void ListDiagnoseReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["trigger"].isNull())
			resultObject.trigger = valueResultResultItem["trigger"].asString();
		if(!valueResultResultItem["createTime"].isNull())
			resultObject.createTime = std::stol(valueResultResultItem["createTime"].asString());
		if(!valueResultResultItem["reportId"].isNull())
			resultObject.reportId = valueResultResultItem["reportId"].asString();
		if(!valueResultResultItem["state"].isNull())
			resultObject.state = valueResultResultItem["state"].asString();
		if(!valueResultResultItem["instanceId"].isNull())
			resultObject.instanceId = valueResultResultItem["instanceId"].asString();
		if(!valueResultResultItem["health"].isNull())
			resultObject.health = valueResultResultItem["health"].asString();
		auto alldiagnoseItemsNode = valueResultResultItem["diagnoseItems"]["diagnoseItemsItem"];
		for (auto valueResultResultItemdiagnoseItemsdiagnoseItemsItem : alldiagnoseItemsNode)
		{
			ResultItem::DiagnoseItemsItem diagnoseItemsObject;
			if(!valueResultResultItemdiagnoseItemsdiagnoseItemsItem["item"].isNull())
				diagnoseItemsObject.item = valueResultResultItemdiagnoseItemsdiagnoseItemsItem["item"].asString();
			if(!valueResultResultItemdiagnoseItemsdiagnoseItemsItem["health"].isNull())
				diagnoseItemsObject.health = valueResultResultItemdiagnoseItemsdiagnoseItemsItem["health"].asString();
			auto detailNode = value["detail"];
			if(!detailNode["type"].isNull())
				diagnoseItemsObject.detail.type = detailNode["type"].asString();
			if(!detailNode["name"].isNull())
				diagnoseItemsObject.detail.name = detailNode["name"].asString();
			if(!detailNode["desc"].isNull())
				diagnoseItemsObject.detail.desc = detailNode["desc"].asString();
			if(!detailNode["result"].isNull())
				diagnoseItemsObject.detail.result = detailNode["result"].asString();
			if(!detailNode["suggest"].isNull())
				diagnoseItemsObject.detail.suggest = detailNode["suggest"].asString();
			resultObject.diagnoseItems.push_back(diagnoseItemsObject);
		}
		result_.push_back(resultObject);
	}
	auto headersNode = value["Headers"];
	if(!headersNode["X-Total-Count"].isNull())
		headers_.xTotalCount = std::stoi(headersNode["X-Total-Count"].asString());

}

ListDiagnoseReportResult::Headers ListDiagnoseReportResult::getHeaders()const
{
	return headers_;
}

std::vector<ListDiagnoseReportResult::ResultItem> ListDiagnoseReportResult::getResult()const
{
	return result_;
}


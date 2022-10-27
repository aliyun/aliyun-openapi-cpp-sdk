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

#include <alibabacloud/elasticsearch/model/DiagnoseInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

DiagnoseInstanceResult::DiagnoseInstanceResult() :
	ServiceResult()
{}

DiagnoseInstanceResult::DiagnoseInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DiagnoseInstanceResult::~DiagnoseInstanceResult()
{}

void DiagnoseInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["createTime"].isNull())
		result_.createTime = std::stol(resultNode["createTime"].asString());
	if(!resultNode["reportId"].isNull())
		result_.reportId = resultNode["reportId"].asString();
	if(!resultNode["state"].isNull())
		result_.state = resultNode["state"].asString();
	if(!resultNode["instanceId"].isNull())
		result_.instanceId = resultNode["instanceId"].asString();
	auto alldiagnoseItemsNode = resultNode["diagnoseItems"]["diagnoseItemsItem"];
	for (auto resultNodediagnoseItemsdiagnoseItemsItem : alldiagnoseItemsNode)
	{
		Result::DiagnoseItemsItem diagnoseItemsItemObject;
		if(!resultNodediagnoseItemsdiagnoseItemsItem["item"].isNull())
			diagnoseItemsItemObject.item = resultNodediagnoseItemsdiagnoseItemsItem["item"].asString();
		if(!resultNodediagnoseItemsdiagnoseItemsItem["health"].isNull())
			diagnoseItemsItemObject.health = resultNodediagnoseItemsdiagnoseItemsItem["health"].asString();
		auto detailNode = value["detail"];
		if(!detailNode["type"].isNull())
			diagnoseItemsItemObject.detail.type = detailNode["type"].asString();
		if(!detailNode["name"].isNull())
			diagnoseItemsItemObject.detail.name = detailNode["name"].asString();
		if(!detailNode["desc"].isNull())
			diagnoseItemsItemObject.detail.desc = detailNode["desc"].asString();
		if(!detailNode["result"].isNull())
			diagnoseItemsItemObject.detail.result = detailNode["result"].asString();
		if(!detailNode["suggest"].isNull())
			diagnoseItemsItemObject.detail.suggest = detailNode["suggest"].asString();
		result_.diagnoseItems.push_back(diagnoseItemsItemObject);
	}

}

DiagnoseInstanceResult::Result DiagnoseInstanceResult::getResult()const
{
	return result_;
}


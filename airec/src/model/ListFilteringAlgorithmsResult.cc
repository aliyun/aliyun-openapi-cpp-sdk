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

#include <alibabacloud/airec/model/ListFilteringAlgorithmsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListFilteringAlgorithmsResult::ListFilteringAlgorithmsResult() :
	ServiceResult()
{}

ListFilteringAlgorithmsResult::ListFilteringAlgorithmsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFilteringAlgorithmsResult::~ListFilteringAlgorithmsResult()
{}

void ListFilteringAlgorithmsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["filteringAlgorithm"];
	for (auto valueresultfilteringAlgorithm : allresultNode)
	{
		FilteringAlgorithm resultObject;
		if(!valueresultfilteringAlgorithm["status"].isNull())
			resultObject.status = valueresultfilteringAlgorithm["status"].asString();
		if(!valueresultfilteringAlgorithm["gmtCreate"].isNull())
			resultObject.gmtCreate = valueresultfilteringAlgorithm["gmtCreate"].asString();
		if(!valueresultfilteringAlgorithm["gmtModified"].isNull())
			resultObject.gmtModified = valueresultfilteringAlgorithm["gmtModified"].asString();
		if(!valueresultfilteringAlgorithm["algorithmId"].isNull())
			resultObject.algorithmId = valueresultfilteringAlgorithm["algorithmId"].asString();
		auto metaNode = value["meta"];
		if(!metaNode["metaType"].isNull())
			resultObject.meta.metaType = metaNode["metaType"].asString();
		if(!metaNode["algorithmName"].isNull())
			resultObject.meta.algorithmName = metaNode["algorithmName"].asString();
		if(!metaNode["cron"].isNull())
			resultObject.meta.cron = metaNode["cron"].asString();
		if(!metaNode["cronEnabled"].isNull())
			resultObject.meta.cronEnabled = metaNode["cronEnabled"].asString() == "true";
		if(!metaNode["taskId"].isNull())
			resultObject.meta.taskId = metaNode["taskId"].asString();
		if(!metaNode["projectName"].isNull())
			resultObject.meta.projectName = metaNode["projectName"].asString();
		if(!metaNode["tableName"].isNull())
			resultObject.meta.tableName = metaNode["tableName"].asString();
		if(!metaNode["type"].isNull())
			resultObject.meta.type = metaNode["type"].asString();
		if(!metaNode["category"].isNull())
			resultObject.meta.category = metaNode["category"].asString();
		if(!metaNode["clusterId"].isNull())
			resultObject.meta.clusterId = metaNode["clusterId"].asString();
		if(!metaNode["description"].isNull())
			resultObject.meta.description = metaNode["description"].asString();
		auto extInfoNode = metaNode["extInfo"];
		if(!extInfoNode["itemSeparator"].isNull())
			resultObject.meta.extInfo.itemSeparator = extInfoNode["itemSeparator"].asString();
		if(!extInfoNode["kvSeparator"].isNull())
			resultObject.meta.extInfo.kvSeparator = extInfoNode["kvSeparator"].asString();
		auto thresholdNode = metaNode["threshold"];
		if(!thresholdNode["indexLossThreshold"].isNull())
			resultObject.meta.threshold.indexLossThreshold = std::stoi(thresholdNode["indexLossThreshold"].asString());
		if(!thresholdNode["indexSizeThreshold"].isNull())
			resultObject.meta.threshold.indexSizeThreshold = std::stoi(thresholdNode["indexSizeThreshold"].asString());
		if(!thresholdNode["sourceDataSizeThreshold"].isNull())
			resultObject.meta.threshold.sourceDataSizeThreshold = std::stoi(thresholdNode["sourceDataSizeThreshold"].asString());
		if(!thresholdNode["sourceDataRecordThreshold"].isNull())
			resultObject.meta.threshold.sourceDataRecordThreshold = std::stoi(thresholdNode["sourceDataRecordThreshold"].asString());
		result_.push_back(resultObject);
	}
	auto headersNode = value["headers"];
	if(!headersNode["X-Total-Count"].isNull())
		headers_.xTotalCount = std::stoi(headersNode["X-Total-Count"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListFilteringAlgorithmsResult::FilteringAlgorithm> ListFilteringAlgorithmsResult::getresult()const
{
	return result_;
}

std::string ListFilteringAlgorithmsResult::getRequestId()const
{
	return requestId_;
}

ListFilteringAlgorithmsResult::Headers ListFilteringAlgorithmsResult::getHeaders()const
{
	return headers_;
}


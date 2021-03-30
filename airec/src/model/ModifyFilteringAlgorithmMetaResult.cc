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

#include <alibabacloud/airec/model/ModifyFilteringAlgorithmMetaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ModifyFilteringAlgorithmMetaResult::ModifyFilteringAlgorithmMetaResult() :
	ServiceResult()
{}

ModifyFilteringAlgorithmMetaResult::ModifyFilteringAlgorithmMetaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyFilteringAlgorithmMetaResult::~ModifyFilteringAlgorithmMetaResult()
{}

void ModifyFilteringAlgorithmMetaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["status"].isNull())
		result_.status = resultNode["status"].asString();
	if(!resultNode["gmtCreate"].isNull())
		result_.gmtCreate = resultNode["gmtCreate"].asString();
	if(!resultNode["gmtModified"].isNull())
		result_.gmtModified = resultNode["gmtModified"].asString();
	if(!resultNode["algorithmId"].isNull())
		result_.algorithmId = resultNode["algorithmId"].asString();
	auto metaNode = resultNode["meta"];
	if(!metaNode["metaType"].isNull())
		result_.meta.metaType = metaNode["metaType"].asString();
	if(!metaNode["algorithmName"].isNull())
		result_.meta.algorithmName = metaNode["algorithmName"].asString();
	if(!metaNode["cron"].isNull())
		result_.meta.cron = metaNode["cron"].asString();
	if(!metaNode["cronEnabled"].isNull())
		result_.meta.cronEnabled = metaNode["cronEnabled"].asString() == "true";
	if(!metaNode["taskId"].isNull())
		result_.meta.taskId = metaNode["taskId"].asString();
	if(!metaNode["projectName"].isNull())
		result_.meta.projectName = metaNode["projectName"].asString();
	if(!metaNode["tableName"].isNull())
		result_.meta.tableName = metaNode["tableName"].asString();
	if(!metaNode["type"].isNull())
		result_.meta.type = metaNode["type"].asString();
	if(!metaNode["category"].isNull())
		result_.meta.category = metaNode["category"].asString();
	if(!metaNode["clusterId"].isNull())
		result_.meta.clusterId = metaNode["clusterId"].asString();
	if(!metaNode["description"].isNull())
		result_.meta.description = metaNode["description"].asString();
	auto extInfoNode = metaNode["extInfo"];
	if(!extInfoNode["itemSeparator"].isNull())
		result_.meta.extInfo.itemSeparator = extInfoNode["itemSeparator"].asString();
	if(!extInfoNode["kvSeparator"].isNull())
		result_.meta.extInfo.kvSeparator = extInfoNode["kvSeparator"].asString();
	auto thresholdNode = metaNode["threshold"];
	if(!thresholdNode["indexLossThreshold"].isNull())
		result_.meta.threshold.indexLossThreshold = std::stoi(thresholdNode["indexLossThreshold"].asString());
	if(!thresholdNode["indexSizeThreshold"].isNull())
		result_.meta.threshold.indexSizeThreshold = std::stoi(thresholdNode["indexSizeThreshold"].asString());
	if(!thresholdNode["sourceDataSizeThreshold"].isNull())
		result_.meta.threshold.sourceDataSizeThreshold = std::stoi(thresholdNode["sourceDataSizeThreshold"].asString());
	if(!thresholdNode["sourceDataRecordThreshold"].isNull())
		result_.meta.threshold.sourceDataRecordThreshold = std::stoi(thresholdNode["sourceDataRecordThreshold"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string ModifyFilteringAlgorithmMetaResult::getRequestId()const
{
	return requestId_;
}

ModifyFilteringAlgorithmMetaResult::Result ModifyFilteringAlgorithmMetaResult::getResult()const
{
	return result_;
}


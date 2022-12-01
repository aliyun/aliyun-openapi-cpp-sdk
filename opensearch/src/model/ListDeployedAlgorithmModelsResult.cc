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

#include <alibabacloud/opensearch/model/ListDeployedAlgorithmModelsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ListDeployedAlgorithmModelsResult::ListDeployedAlgorithmModelsResult() :
	ServiceResult()
{}

ListDeployedAlgorithmModelsResult::ListDeployedAlgorithmModelsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDeployedAlgorithmModelsResult::~ListDeployedAlgorithmModelsResult()
{}

void ListDeployedAlgorithmModelsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["appGroupName"].isNull())
			resultObject.appGroupName = valueresultresultItem["appGroupName"].asString();
		if(!valueresultresultItem["gmtModified"].isNull())
			resultObject.gmtModified = valueresultresultItem["gmtModified"].asString();
		if(!valueresultresultItem["status"].isNull())
			resultObject.status = valueresultresultItem["status"].asString();
		if(!valueresultresultItem["scene"].isNull())
			resultObject.scene = valueresultresultItem["scene"].asString();
		if(!valueresultresultItem["gmtCreate"].isNull())
			resultObject.gmtCreate = valueresultresultItem["gmtCreate"].asString();
		if(!valueresultresultItem["id"].isNull())
			resultObject.id = valueresultresultItem["id"].asString();
		if(!valueresultresultItem["desc"].isNull())
			resultObject.desc = valueresultresultItem["desc"].asString();
		auto allmodelsNode = valueresultresultItem["models"]["modelsItem"];
		for (auto valueresultresultItemmodelsmodelsItem : allmodelsNode)
		{
			ResultItem::ModelsItem modelsObject;
			if(!valueresultresultItemmodelsmodelsItem["modelName"].isNull())
				modelsObject.modelName = valueresultresultItemmodelsmodelsItem["modelName"].asString();
			if(!valueresultresultItemmodelsmodelsItem["projectId"].isNull())
				modelsObject.projectId = std::stoi(valueresultresultItemmodelsmodelsItem["projectId"].asString());
			if(!valueresultresultItemmodelsmodelsItem["modelId"].isNull())
				modelsObject.modelId = std::stoi(valueresultresultItemmodelsmodelsItem["modelId"].asString());
			if(!valueresultresultItemmodelsmodelsItem["algorithmType"].isNull())
				modelsObject.algorithmType = valueresultresultItemmodelsmodelsItem["algorithmType"].asString();
			if(!valueresultresultItemmodelsmodelsItem["status"].isNull())
				modelsObject.status = valueresultresultItemmodelsmodelsItem["status"].asString();
			if(!valueresultresultItemmodelsmodelsItem["progress"].isNull())
				modelsObject.progress = std::stoi(valueresultresultItemmodelsmodelsItem["progress"].asString());
			resultObject.models.push_back(modelsObject);
		}
		auto allApps = value["apps"]["apps"];
		for (auto value : allApps)
			resultObject.apps.push_back(value.asString());
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListDeployedAlgorithmModelsResult::ResultItem> ListDeployedAlgorithmModelsResult::getresult()const
{
	return result_;
}

std::string ListDeployedAlgorithmModelsResult::getRequestId()const
{
	return requestId_;
}


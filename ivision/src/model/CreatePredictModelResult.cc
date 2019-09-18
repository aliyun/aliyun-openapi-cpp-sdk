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

#include <alibabacloud/ivision/model/CreatePredictModelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

CreatePredictModelResult::CreatePredictModelResult() :
	ServiceResult()
{}

CreatePredictModelResult::CreatePredictModelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreatePredictModelResult::~CreatePredictModelResult()
{}

void CreatePredictModelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto modelNode = value["Model"];
	if(!modelNode["ModelId"].isNull())
		model_.modelId = modelNode["ModelId"].asString();
	if(!modelNode["Name"].isNull())
		model_.name = modelNode["Name"].asString();
	if(!modelNode["Description"].isNull())
		model_.description = modelNode["Description"].asString();
	if(!modelNode["ProjectId"].isNull())
		model_.projectId = modelNode["ProjectId"].asString();
	if(!modelNode["ProjectName"].isNull())
		model_.projectName = modelNode["ProjectName"].asString();
	if(!modelNode["IterationId"].isNull())
		model_.iterationId = modelNode["IterationId"].asString();
	if(!modelNode["IterationVersion"].isNull())
		model_.iterationVersion = modelNode["IterationVersion"].asString();
	if(!modelNode["Regions"].isNull())
		model_.regions = modelNode["Regions"].asString();
	if(!modelNode["CreationTime"].isNull())
		model_.creationTime = modelNode["CreationTime"].asString();

}

CreatePredictModelResult::Model CreatePredictModelResult::getModel()const
{
	return model_;
}


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

#include <alibabacloud/quickbi-public/model/QueryDatasetSwitchInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryDatasetSwitchInfoResult::QueryDatasetSwitchInfoResult() :
	ServiceResult()
{}

QueryDatasetSwitchInfoResult::QueryDatasetSwitchInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDatasetSwitchInfoResult::~QueryDatasetSwitchInfoResult()
{}

void QueryDatasetSwitchInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["CubeId"].isNull())
		result_.cubeId = resultNode["CubeId"].asString();
	if(!resultNode["IsOpenColumnLevelPermission"].isNull())
		result_.isOpenColumnLevelPermission = std::stoi(resultNode["IsOpenColumnLevelPermission"].asString());
	if(!resultNode["IsOpenRowLevelPermission"].isNull())
		result_.isOpenRowLevelPermission = std::stoi(resultNode["IsOpenRowLevelPermission"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryDatasetSwitchInfoResult::getSuccess()const
{
	return success_;
}

QueryDatasetSwitchInfoResult::Result QueryDatasetSwitchInfoResult::getResult()const
{
	return result_;
}


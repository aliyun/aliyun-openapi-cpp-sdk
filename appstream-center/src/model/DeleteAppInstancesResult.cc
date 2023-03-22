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

#include <alibabacloud/appstream-center/model/DeleteAppInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Appstream_center;
using namespace AlibabaCloud::Appstream_center::Model;

DeleteAppInstancesResult::DeleteAppInstancesResult() :
	ServiceResult()
{}

DeleteAppInstancesResult::DeleteAppInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteAppInstancesResult::~DeleteAppInstancesResult()
{}

void DeleteAppInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDeleteAppInstanceModelsNode = value["DeleteAppInstanceModels"]["data"];
	for (auto valueDeleteAppInstanceModelsdata : allDeleteAppInstanceModelsNode)
	{
		Data deleteAppInstanceModelsObject;
		if(!valueDeleteAppInstanceModelsdata["AppInstanceId"].isNull())
			deleteAppInstanceModelsObject.appInstanceId = valueDeleteAppInstanceModelsdata["AppInstanceId"].asString();
		if(!valueDeleteAppInstanceModelsdata["Success"].isNull())
			deleteAppInstanceModelsObject.success = valueDeleteAppInstanceModelsdata["Success"].asString() == "true";
		if(!valueDeleteAppInstanceModelsdata["Code"].isNull())
			deleteAppInstanceModelsObject.code = valueDeleteAppInstanceModelsdata["Code"].asString();
		if(!valueDeleteAppInstanceModelsdata["Message"].isNull())
			deleteAppInstanceModelsObject.message = valueDeleteAppInstanceModelsdata["Message"].asString();
		deleteAppInstanceModels_.push_back(deleteAppInstanceModelsObject);
	}

}

std::vector<DeleteAppInstancesResult::Data> DeleteAppInstancesResult::getDeleteAppInstanceModels()const
{
	return deleteAppInstanceModels_;
}


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

#include <alibabacloud/eds-user/model/CreatePropertyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eds_user;
using namespace AlibabaCloud::Eds_user::Model;

CreatePropertyResult::CreatePropertyResult() :
	ServiceResult()
{}

CreatePropertyResult::CreatePropertyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreatePropertyResult::~CreatePropertyResult()
{}

void CreatePropertyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto createResultNode = value["CreateResult"];
	if(!createResultNode["PropertyId"].isNull())
		createResult_.propertyId = std::stol(createResultNode["PropertyId"].asString());
	if(!createResultNode["PropertyKey"].isNull())
		createResult_.propertyKey = createResultNode["PropertyKey"].asString();
	auto savePropertyValueModelNode = createResultNode["SavePropertyValueModel"];
	auto allSavePropertyValuesNode = savePropertyValueModelNode["SavePropertyValues"]["savePropertyValuesItem"];
	for (auto savePropertyValueModelNodeSavePropertyValuessavePropertyValuesItem : allSavePropertyValuesNode)
	{
		CreateResult::SavePropertyValueModel::SavePropertyValuesItem savePropertyValuesItemObject;
		if(!savePropertyValueModelNodeSavePropertyValuessavePropertyValuesItem["PropertyValueId"].isNull())
			savePropertyValuesItemObject.propertyValueId = std::stol(savePropertyValueModelNodeSavePropertyValuessavePropertyValuesItem["PropertyValueId"].asString());
		if(!savePropertyValueModelNodeSavePropertyValuessavePropertyValuesItem["PropertyValue"].isNull())
			savePropertyValuesItemObject.propertyValue = savePropertyValueModelNodeSavePropertyValuessavePropertyValuesItem["PropertyValue"].asString();
		createResult_.savePropertyValueModel.savePropertyValues.push_back(savePropertyValuesItemObject);
	}
	auto allFailedPropertyValuesNode = savePropertyValueModelNode["FailedPropertyValues"]["failedPropertyValuesItem"];
	for (auto savePropertyValueModelNodeFailedPropertyValuesfailedPropertyValuesItem : allFailedPropertyValuesNode)
	{
		CreateResult::SavePropertyValueModel::FailedPropertyValuesItem failedPropertyValuesItemObject;
		if(!savePropertyValueModelNodeFailedPropertyValuesfailedPropertyValuesItem["PropertyId"].isNull())
			failedPropertyValuesItemObject.propertyId = std::stol(savePropertyValueModelNodeFailedPropertyValuesfailedPropertyValuesItem["PropertyId"].asString());
		if(!savePropertyValueModelNodeFailedPropertyValuesfailedPropertyValuesItem["PropertyValue"].isNull())
			failedPropertyValuesItemObject.propertyValue = savePropertyValueModelNodeFailedPropertyValuesfailedPropertyValuesItem["PropertyValue"].asString();
		if(!savePropertyValueModelNodeFailedPropertyValuesfailedPropertyValuesItem["ErrorCode"].isNull())
			failedPropertyValuesItemObject.errorCode = savePropertyValueModelNodeFailedPropertyValuesfailedPropertyValuesItem["ErrorCode"].asString();
		if(!savePropertyValueModelNodeFailedPropertyValuesfailedPropertyValuesItem["ErrorMessage"].isNull())
			failedPropertyValuesItemObject.errorMessage = savePropertyValueModelNodeFailedPropertyValuesfailedPropertyValuesItem["ErrorMessage"].asString();
		createResult_.savePropertyValueModel.failedPropertyValues.push_back(failedPropertyValuesItemObject);
	}

}

CreatePropertyResult::CreateResult CreatePropertyResult::getCreateResult()const
{
	return createResult_;
}


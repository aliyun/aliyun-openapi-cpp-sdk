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

#include <alibabacloud/dataworks-public/model/ListDataServicePublishedApisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListDataServicePublishedApisResult::ListDataServicePublishedApisResult() :
	ServiceResult()
{}

ListDataServicePublishedApisResult::ListDataServicePublishedApisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataServicePublishedApisResult::~ListDataServicePublishedApisResult()
{}

void ListDataServicePublishedApisResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allApisNode = dataNode["Apis"]["Api"];
	for (auto dataNodeApisApi : allApisNode)
	{
		Data::Api apiObject;
		if(!dataNodeApisApi["Timeout"].isNull())
			apiObject.timeout = std::stoi(dataNodeApisApi["Timeout"].asString());
		if(!dataNodeApisApi["Status"].isNull())
			apiObject.status = std::stoi(dataNodeApisApi["Status"].asString());
		if(!dataNodeApisApi["ApiId"].isNull())
			apiObject.apiId = std::stol(dataNodeApisApi["ApiId"].asString());
		if(!dataNodeApisApi["ApiMode"].isNull())
			apiObject.apiMode = std::stoi(dataNodeApisApi["ApiMode"].asString());
		if(!dataNodeApisApi["ProjectId"].isNull())
			apiObject.projectId = std::stol(dataNodeApisApi["ProjectId"].asString());
		if(!dataNodeApisApi["ResponseContentType"].isNull())
			apiObject.responseContentType = std::stoi(dataNodeApisApi["ResponseContentType"].asString());
		if(!dataNodeApisApi["CreatorId"].isNull())
			apiObject.creatorId = dataNodeApisApi["CreatorId"].asString();
		if(!dataNodeApisApi["VisibleRange"].isNull())
			apiObject.visibleRange = std::stoi(dataNodeApisApi["VisibleRange"].asString());
		if(!dataNodeApisApi["ModifiedTime"].isNull())
			apiObject.modifiedTime = dataNodeApisApi["ModifiedTime"].asString();
		if(!dataNodeApisApi["OperatorId"].isNull())
			apiObject.operatorId = dataNodeApisApi["OperatorId"].asString();
		if(!dataNodeApisApi["GroupId"].isNull())
			apiObject.groupId = dataNodeApisApi["GroupId"].asString();
		if(!dataNodeApisApi["Description"].isNull())
			apiObject.description = dataNodeApisApi["Description"].asString();
		if(!dataNodeApisApi["RequestMethod"].isNull())
			apiObject.requestMethod = std::stoi(dataNodeApisApi["RequestMethod"].asString());
		if(!dataNodeApisApi["CreatedTime"].isNull())
			apiObject.createdTime = dataNodeApisApi["CreatedTime"].asString();
		if(!dataNodeApisApi["ApiName"].isNull())
			apiObject.apiName = dataNodeApisApi["ApiName"].asString();
		if(!dataNodeApisApi["TenantId"].isNull())
			apiObject.tenantId = std::stol(dataNodeApisApi["TenantId"].asString());
		if(!dataNodeApisApi["ApiPath"].isNull())
			apiObject.apiPath = dataNodeApisApi["ApiPath"].asString();
		auto registrationDetailsNode = value["RegistrationDetails"];
		if(!registrationDetailsNode["ServiceHost"].isNull())
			apiObject.registrationDetails.serviceHost = registrationDetailsNode["ServiceHost"].asString();
		if(!registrationDetailsNode["ServiceContentType"].isNull())
			apiObject.registrationDetails.serviceContentType = std::stoi(registrationDetailsNode["ServiceContentType"].asString());
		if(!registrationDetailsNode["ServicePath"].isNull())
			apiObject.registrationDetails.servicePath = registrationDetailsNode["ServicePath"].asString();
		if(!registrationDetailsNode["SuccessfulResultSample"].isNull())
			apiObject.registrationDetails.successfulResultSample = registrationDetailsNode["SuccessfulResultSample"].asString();
		if(!registrationDetailsNode["FailedResultSample"].isNull())
			apiObject.registrationDetails.failedResultSample = registrationDetailsNode["FailedResultSample"].asString();
		if(!registrationDetailsNode["ServiceRequestBodyDescription"].isNull())
			apiObject.registrationDetails.serviceRequestBodyDescription = registrationDetailsNode["ServiceRequestBodyDescription"].asString();
		auto allRegistrationErrorCodesNode = registrationDetailsNode["RegistrationErrorCodes"]["RegistrationErrorCode"];
		for (auto registrationDetailsNodeRegistrationErrorCodesRegistrationErrorCode : allRegistrationErrorCodesNode)
		{
			Data::Api::RegistrationDetails::RegistrationErrorCode registrationErrorCodeObject;
			if(!registrationDetailsNodeRegistrationErrorCodesRegistrationErrorCode["ErrorMessage"].isNull())
				registrationErrorCodeObject.errorMessage = registrationDetailsNodeRegistrationErrorCodesRegistrationErrorCode["ErrorMessage"].asString();
			if(!registrationDetailsNodeRegistrationErrorCodesRegistrationErrorCode["ErrorCode"].isNull())
				registrationErrorCodeObject.errorCode = registrationDetailsNodeRegistrationErrorCodesRegistrationErrorCode["ErrorCode"].asString();
			if(!registrationDetailsNodeRegistrationErrorCodesRegistrationErrorCode["ErrorSolution"].isNull())
				registrationErrorCodeObject.errorSolution = registrationDetailsNodeRegistrationErrorCodesRegistrationErrorCode["ErrorSolution"].asString();
			apiObject.registrationDetails.registrationErrorCodes.push_back(registrationErrorCodeObject);
		}
		auto allRegistrationRequestParametersNode = registrationDetailsNode["RegistrationRequestParameters"]["RegistrationRequestParameter"];
		for (auto registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter : allRegistrationRequestParametersNode)
		{
			Data::Api::RegistrationDetails::RegistrationRequestParameter registrationRequestParameterObject;
			if(!registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterName"].isNull())
				registrationRequestParameterObject.parameterName = registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterName"].asString();
			if(!registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterPosition"].isNull())
				registrationRequestParameterObject.parameterPosition = std::stoi(registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterPosition"].asString());
			if(!registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterDescription"].isNull())
				registrationRequestParameterObject.parameterDescription = registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterDescription"].asString();
			if(!registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["DefaultValue"].isNull())
				registrationRequestParameterObject.defaultValue = registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["DefaultValue"].asString();
			if(!registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterOperator"].isNull())
				registrationRequestParameterObject.parameterOperator = std::stoi(registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterOperator"].asString());
			if(!registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ExampleValue"].isNull())
				registrationRequestParameterObject.exampleValue = registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ExampleValue"].asString();
			if(!registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterDataType"].isNull())
				registrationRequestParameterObject.parameterDataType = std::stoi(registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["ParameterDataType"].asString());
			if(!registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["IsRequiredParameter"].isNull())
				registrationRequestParameterObject.isRequiredParameter = registrationDetailsNodeRegistrationRequestParametersRegistrationRequestParameter["IsRequiredParameter"].asString() == "true";
			apiObject.registrationDetails.registrationRequestParameters.push_back(registrationRequestParameterObject);
		}
		auto scriptDetailsNode = value["ScriptDetails"];
		if(!scriptDetailsNode["IsPagedResponse"].isNull())
			apiObject.scriptDetails.isPagedResponse = scriptDetailsNode["IsPagedResponse"].asString() == "true";
		if(!scriptDetailsNode["SuccessfulResultSample"].isNull())
			apiObject.scriptDetails.successfulResultSample = scriptDetailsNode["SuccessfulResultSample"].asString();
		if(!scriptDetailsNode["FailedResultSample"].isNull())
			apiObject.scriptDetails.failedResultSample = scriptDetailsNode["FailedResultSample"].asString();
		if(!scriptDetailsNode["Script"].isNull())
			apiObject.scriptDetails.script = scriptDetailsNode["Script"].asString();
		auto allScriptErrorCodesNode = scriptDetailsNode["ScriptErrorCodes"]["ScriptErrorCode"];
		for (auto scriptDetailsNodeScriptErrorCodesScriptErrorCode : allScriptErrorCodesNode)
		{
			Data::Api::ScriptDetails::ScriptErrorCode scriptErrorCodeObject;
			if(!scriptDetailsNodeScriptErrorCodesScriptErrorCode["ErrorMessage"].isNull())
				scriptErrorCodeObject.errorMessage = scriptDetailsNodeScriptErrorCodesScriptErrorCode["ErrorMessage"].asString();
			if(!scriptDetailsNodeScriptErrorCodesScriptErrorCode["ErrorCode"].isNull())
				scriptErrorCodeObject.errorCode = scriptDetailsNodeScriptErrorCodesScriptErrorCode["ErrorCode"].asString();
			if(!scriptDetailsNodeScriptErrorCodesScriptErrorCode["ErrorSolution"].isNull())
				scriptErrorCodeObject.errorSolution = scriptDetailsNodeScriptErrorCodesScriptErrorCode["ErrorSolution"].asString();
			apiObject.scriptDetails.scriptErrorCodes.push_back(scriptErrorCodeObject);
		}
		auto allScriptRequestParametersNode = scriptDetailsNode["ScriptRequestParameters"]["ScriptRequestParameter"];
		for (auto scriptDetailsNodeScriptRequestParametersScriptRequestParameter : allScriptRequestParametersNode)
		{
			Data::Api::ScriptDetails::ScriptRequestParameter scriptRequestParameterObject;
			if(!scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterName"].isNull())
				scriptRequestParameterObject.parameterName = scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterName"].asString();
			if(!scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterPosition"].isNull())
				scriptRequestParameterObject.parameterPosition = std::stoi(scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterPosition"].asString());
			if(!scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterDescription"].isNull())
				scriptRequestParameterObject.parameterDescription = scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterDescription"].asString();
			if(!scriptDetailsNodeScriptRequestParametersScriptRequestParameter["DefaultValue"].isNull())
				scriptRequestParameterObject.defaultValue = scriptDetailsNodeScriptRequestParametersScriptRequestParameter["DefaultValue"].asString();
			if(!scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterOperator"].isNull())
				scriptRequestParameterObject.parameterOperator = std::stoi(scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterOperator"].asString());
			if(!scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ExampleValue"].isNull())
				scriptRequestParameterObject.exampleValue = scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ExampleValue"].asString();
			if(!scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterDataType"].isNull())
				scriptRequestParameterObject.parameterDataType = std::stoi(scriptDetailsNodeScriptRequestParametersScriptRequestParameter["ParameterDataType"].asString());
			if(!scriptDetailsNodeScriptRequestParametersScriptRequestParameter["IsRequiredParameter"].isNull())
				scriptRequestParameterObject.isRequiredParameter = scriptDetailsNodeScriptRequestParametersScriptRequestParameter["IsRequiredParameter"].asString() == "true";
			apiObject.scriptDetails.scriptRequestParameters.push_back(scriptRequestParameterObject);
		}
		auto allScriptResponseParametersNode = scriptDetailsNode["ScriptResponseParameters"]["ScriptResponseParameter"];
		for (auto scriptDetailsNodeScriptResponseParametersScriptResponseParameter : allScriptResponseParametersNode)
		{
			Data::Api::ScriptDetails::ScriptResponseParameter scriptResponseParameterObject;
			if(!scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ParameterDescription"].isNull())
				scriptResponseParameterObject.parameterDescription = scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ParameterDescription"].asString();
			if(!scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ParameterName"].isNull())
				scriptResponseParameterObject.parameterName = scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ParameterName"].asString();
			if(!scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ExampleValue"].isNull())
				scriptResponseParameterObject.exampleValue = scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ExampleValue"].asString();
			if(!scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ParameterDataType"].isNull())
				scriptResponseParameterObject.parameterDataType = std::stoi(scriptDetailsNodeScriptResponseParametersScriptResponseParameter["ParameterDataType"].asString());
			apiObject.scriptDetails.scriptResponseParameters.push_back(scriptResponseParameterObject);
		}
		auto scriptConnectionNode = scriptDetailsNode["ScriptConnection"];
		if(!scriptConnectionNode["TableName"].isNull())
			apiObject.scriptDetails.scriptConnection.tableName = scriptConnectionNode["TableName"].asString();
		if(!scriptConnectionNode["ConnectionId"].isNull())
			apiObject.scriptDetails.scriptConnection.connectionId = std::stol(scriptConnectionNode["ConnectionId"].asString());
		auto wizardDetailsNode = value["WizardDetails"];
		if(!wizardDetailsNode["IsPagedResponse"].isNull())
			apiObject.wizardDetails.isPagedResponse = wizardDetailsNode["IsPagedResponse"].asString() == "true";
		if(!wizardDetailsNode["SuccessfulResultSample"].isNull())
			apiObject.wizardDetails.successfulResultSample = wizardDetailsNode["SuccessfulResultSample"].asString();
		if(!wizardDetailsNode["FailedResultSample"].isNull())
			apiObject.wizardDetails.failedResultSample = wizardDetailsNode["FailedResultSample"].asString();
		auto allWizardErrorCodesNode = wizardDetailsNode["WizardErrorCodes"]["WizardErrorCode"];
		for (auto wizardDetailsNodeWizardErrorCodesWizardErrorCode : allWizardErrorCodesNode)
		{
			Data::Api::WizardDetails::WizardErrorCode wizardErrorCodeObject;
			if(!wizardDetailsNodeWizardErrorCodesWizardErrorCode["ErrorMessage"].isNull())
				wizardErrorCodeObject.errorMessage = wizardDetailsNodeWizardErrorCodesWizardErrorCode["ErrorMessage"].asString();
			if(!wizardDetailsNodeWizardErrorCodesWizardErrorCode["ErrorCode"].isNull())
				wizardErrorCodeObject.errorCode = wizardDetailsNodeWizardErrorCodesWizardErrorCode["ErrorCode"].asString();
			if(!wizardDetailsNodeWizardErrorCodesWizardErrorCode["ErrorSolution"].isNull())
				wizardErrorCodeObject.errorSolution = wizardDetailsNodeWizardErrorCodesWizardErrorCode["ErrorSolution"].asString();
			apiObject.wizardDetails.wizardErrorCodes.push_back(wizardErrorCodeObject);
		}
		auto allWizardRequestParametersNode = wizardDetailsNode["WizardRequestParameters"]["WizardRequestParameter"];
		for (auto wizardDetailsNodeWizardRequestParametersWizardRequestParameter : allWizardRequestParametersNode)
		{
			Data::Api::WizardDetails::WizardRequestParameter wizardRequestParameterObject;
			if(!wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterName"].isNull())
				wizardRequestParameterObject.parameterName = wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterName"].asString();
			if(!wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterPosition"].isNull())
				wizardRequestParameterObject.parameterPosition = std::stoi(wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterPosition"].asString());
			if(!wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterDescription"].isNull())
				wizardRequestParameterObject.parameterDescription = wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterDescription"].asString();
			if(!wizardDetailsNodeWizardRequestParametersWizardRequestParameter["DefaultValue"].isNull())
				wizardRequestParameterObject.defaultValue = wizardDetailsNodeWizardRequestParametersWizardRequestParameter["DefaultValue"].asString();
			if(!wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterOperator"].isNull())
				wizardRequestParameterObject.parameterOperator = std::stoi(wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterOperator"].asString());
			if(!wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ExampleValue"].isNull())
				wizardRequestParameterObject.exampleValue = wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ExampleValue"].asString();
			if(!wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterDataType"].isNull())
				wizardRequestParameterObject.parameterDataType = std::stoi(wizardDetailsNodeWizardRequestParametersWizardRequestParameter["ParameterDataType"].asString());
			if(!wizardDetailsNodeWizardRequestParametersWizardRequestParameter["IsRequiredParameter"].isNull())
				wizardRequestParameterObject.isRequiredParameter = wizardDetailsNodeWizardRequestParametersWizardRequestParameter["IsRequiredParameter"].asString() == "true";
			apiObject.wizardDetails.wizardRequestParameters.push_back(wizardRequestParameterObject);
		}
		auto allWizardResponseParametersNode = wizardDetailsNode["WizardResponseParameters"]["WizardResponseParameter"];
		for (auto wizardDetailsNodeWizardResponseParametersWizardResponseParameter : allWizardResponseParametersNode)
		{
			Data::Api::WizardDetails::WizardResponseParameter wizardResponseParameterObject;
			if(!wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ParameterDescription"].isNull())
				wizardResponseParameterObject.parameterDescription = wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ParameterDescription"].asString();
			if(!wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ParameterName"].isNull())
				wizardResponseParameterObject.parameterName = wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ParameterName"].asString();
			if(!wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ExampleValue"].isNull())
				wizardResponseParameterObject.exampleValue = wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ExampleValue"].asString();
			if(!wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ParameterDataType"].isNull())
				wizardResponseParameterObject.parameterDataType = std::stoi(wizardDetailsNodeWizardResponseParametersWizardResponseParameter["ParameterDataType"].asString());
			apiObject.wizardDetails.wizardResponseParameters.push_back(wizardResponseParameterObject);
		}
		auto wizardConnectionNode = wizardDetailsNode["WizardConnection"];
		if(!wizardConnectionNode["TableName"].isNull())
			apiObject.wizardDetails.wizardConnection.tableName = wizardConnectionNode["TableName"].asString();
		if(!wizardConnectionNode["ConnectionId"].isNull())
			apiObject.wizardDetails.wizardConnection.connectionId = std::stol(wizardConnectionNode["ConnectionId"].asString());
		auto allProtocols = value["Protocols"]["Protocol"];
		for (auto value : allProtocols)
			apiObject.protocols.push_back(value.asString());
		data_.apis.push_back(apiObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

int ListDataServicePublishedApisResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListDataServicePublishedApisResult::Data ListDataServicePublishedApisResult::getData()const
{
	return data_;
}

std::string ListDataServicePublishedApisResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDataServicePublishedApisResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListDataServicePublishedApisResult::getSuccess()const
{
	return success_;
}


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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDATASERVICEPUBLISHEDAPIRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDATASERVICEPUBLISHEDAPIRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetDataServicePublishedApiResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct RegistrationDetails
					{
						struct RegistrationErrorCode
						{
							std::string errorCode;
							std::string errorMessage;
							std::string errorSolution;
						};
						struct RegistrationRequestParameter
						{
							std::string defaultValue;
							std::string exampleValue;
							int parameterDataType;
							int parameterPosition;
							std::string parameterName;
							int parameterOperator;
							std::string parameterDescription;
							bool isRequiredParameter;
						};
						std::string serviceRequestBodyDescription;
						int serviceContentType;
						std::string successfulResultSample;
						std::string servicePath;
						std::vector<RegistrationErrorCode> registrationErrorCodes;
						std::string failedResultSample;
						std::string serviceHost;
						std::vector<RegistrationRequestParameter> registrationRequestParameters;
					};
					struct ScriptDetails
					{
						struct ScriptConnection
						{
							std::string tableName;
							long connectionId;
						};
						struct ScriptErrorCode
						{
							std::string errorCode;
							std::string errorMessage;
							std::string errorSolution;
						};
						struct ScriptRequestParameter
						{
							std::string defaultValue;
							std::string exampleValue;
							int parameterDataType;
							int parameterPosition;
							std::string parameterName;
							int parameterOperator;
							std::string parameterDescription;
							bool isRequiredParameter;
						};
						struct ScriptResponseParameter
						{
							std::string exampleValue;
							int parameterDataType;
							std::string parameterName;
							std::string parameterDescription;
						};
						std::string script;
						std::vector<ScriptErrorCode> scriptErrorCodes;
						bool isPagedResponse;
						std::string successfulResultSample;
						std::vector<ScriptRequestParameter> scriptRequestParameters;
						std::string failedResultSample;
						std::vector<ScriptResponseParameter> scriptResponseParameters;
						ScriptConnection scriptConnection;
					};
					struct WizardDetails
					{
						struct WizardConnection
						{
							std::string tableName;
							long connectionId;
						};
						struct WizardErrorCode
						{
							std::string errorCode;
							std::string errorMessage;
							std::string errorSolution;
						};
						struct WizardRequestParameter
						{
							std::string defaultValue;
							std::string exampleValue;
							int parameterDataType;
							int parameterPosition;
							std::string parameterName;
							int parameterOperator;
							std::string parameterDescription;
							bool isRequiredParameter;
						};
						struct WizardResponseParameter
						{
							std::string exampleValue;
							int parameterDataType;
							std::string parameterName;
							std::string parameterDescription;
						};
						bool isPagedResponse;
						std::vector<WizardRequestParameter> wizardRequestParameters;
						std::string successfulResultSample;
						WizardConnection wizardConnection;
						std::vector<WizardErrorCode> wizardErrorCodes;
						std::vector<WizardResponseParameter> wizardResponseParameters;
						std::string failedResultSample;
					};
					int status;
					WizardDetails wizardDetails;
					int visibleRange;
					std::vector<std::string> protocols;
					std::string description;
					std::string createdTime;
					std::string apiName;
					int timeout;
					std::string creatorId;
					int requestMethod;
					long projectId;
					int responseContentType;
					std::string operatorId;
					RegistrationDetails registrationDetails;
					std::string groupId;
					long tenantId;
					std::string modifiedTime;
					ScriptDetails scriptDetails;
					long apiId;
					int apiMode;
					std::string apiPath;
				};


				GetDataServicePublishedApiResult();
				explicit GetDataServicePublishedApiResult(const std::string &payload);
				~GetDataServicePublishedApiResult();
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int httpStatusCode_;
				Data data_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDATASERVICEPUBLISHEDAPIRESULT_H_
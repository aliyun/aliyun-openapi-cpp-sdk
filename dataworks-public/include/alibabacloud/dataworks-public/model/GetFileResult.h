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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETFILERESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETFILERESULT_H_

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
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetFileResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct File
					{
						long parentId;
						std::string owner;
						long createTime;
						int currentVersion;
						std::string fileName;
						std::string useType;
						std::string createUser;
						bool isMaxCompute;
						std::string connectionName;
						long lastEditTime;
						std::string fileDescription;
						std::string advancedSettings;
						int fileType;
						std::string lastEditUser;
						std::string content;
						int commitStatus;
						std::string deletedStatus;
						long nodeId;
						bool autoParsing;
						long fileId;
						std::string fileFolderId;
						long bizId;
						long businessId;
					};
					struct NodeConfiguration
					{
						struct NodeInputOutput
						{
							std::string input;
							std::string parseType;
						};
						struct NodeInputOutput1
						{
							std::string output;
							std::string refTableName;
						};
						struct InputContextParameter
						{
							std::string valueSource;
							std::string parameterName;
						};
						struct OutputContextParameter
						{
							std::string type;
							std::string description;
							std::string value;
							std::string parameterName;
						};
						std::string cycleType;
						std::vector<NodeInputOutput> inputList;
						long resourceGroupId;
						bool stop;
						int timeout;
						std::string dependentType;
						std::string schedulerType;
						bool startImmediately;
						std::string cronExpress;
						long endEffectDate;
						std::vector<OutputContextParameter> outputParameters;
						std::string dependentNodeIdList;
						int autoRerunIntervalMillis;
						long startEffectDate;
						int autoRerunTimes;
						std::string imageId;
						std::string rerunMode;
						std::string paraValue;
						std::string applyScheduleImmediately;
						std::vector<NodeInputOutput1> outputList;
						std::vector<InputContextParameter> inputParameters;
						std::string ignoreParentSkipRunningProperty;
					};
					struct ResourceDownloadLink
					{
						std::string downloadLink;
					};
					ResourceDownloadLink resourceDownloadLink;
					File file;
					NodeConfiguration nodeConfiguration;
				};


				GetFileResult();
				explicit GetFileResult(const std::string &payload);
				~GetFileResult();
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
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETFILERESULT_H_
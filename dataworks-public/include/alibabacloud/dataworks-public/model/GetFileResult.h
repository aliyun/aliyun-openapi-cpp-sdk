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
						std::string fileName;
						std::string useType;
						int currentVersion;
						std::string createUser;
						bool isMaxCompute;
						std::string connectionName;
						long lastEditTime;
						std::string fileDescription;
						int fileType;
						std::string content;
						std::string lastEditUser;
						long nodeId;
						int commitStatus;
						std::string deletedStatus;
						std::string fileFolderId;
						long bizId;
						long businessId;
						bool autoParse;
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
						std::string cycleType;
						std::vector<NodeInputOutput> inputList;
						long resourceGroupId;
						bool stop;
						std::string dependentType;
						std::string cronExpress;
						long endEffectDate;
						int autoRerunIntervalMillis;
						std::string dependentNodeIdList;
						long startEffectDate;
						int autoRerunTimes;
						std::string rerunMode;
						std::string paraValue;
						std::vector<NodeInputOutput1> outputList;
					};
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
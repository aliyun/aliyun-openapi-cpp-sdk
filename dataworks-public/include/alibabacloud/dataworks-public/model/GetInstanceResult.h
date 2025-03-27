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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETINSTANCERESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETINSTANCERESULT_H_

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
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetInstanceResult : public ServiceResult
			{
			public:
				struct Data
				{
					long baselineId;
					long modifyTime;
					std::string owner;
					std::string dagType;
					std::string nodeName;
					std::string paramValues;
					long dagId;
					long beginRunningTime;
					long bizdate;
					long finishTime;
					std::string taskType;
					std::string dqcDescription;
					int periodNumber;
					long businessId;
					std::string status;
					int taskRerunTime;
					long instanceId;
					int priority;
					int dqcType;
					long createTime;
					std::string connection;
					std::string createUser;
					long relatedFlowId;
					long cycTime;
					long beginWaitTimeTime;
					bool repeatability;
					long nodeId;
					long beginWaitResTime;
					std::string errorMessage;
					long repeatInterval;
				};


				GetInstanceResult();
				explicit GetInstanceResult(const std::string &payload);
				~GetInstanceResult();
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
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETINSTANCERESULT_H_
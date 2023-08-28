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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETTASKRESULT_H_
#define ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETTASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/paifeaturestore/PaiFeatureStoreExport.h>

namespace AlibabaCloud
{
	namespace PaiFeatureStore
	{
		namespace Model
		{
			class ALIBABACLOUD_PAIFEATURESTORE_EXPORT GetTaskResult : public ServiceResult
			{
			public:


				GetTaskResult();
				explicit GetTaskResult(const std::string &payload);
				~GetTaskResult();
				std::string getStatus()const;
				std::string getObjectType()const;
				std::string getType()const;
				std::string getRunningConfig()const;
				std::string getProjectName()const;
				std::string getObjectId()const;
				std::string getConfig()const;
				std::string getGmtExecutedTime()const;
				std::string getGmtFinishedTime()const;
				std::string getProjectId()const;
				std::string getGmtCreateTime()const;
				std::string getGmtModifiedTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string objectType_;
				std::string type_;
				std::string runningConfig_;
				std::string projectName_;
				std::string objectId_;
				std::string config_;
				std::string gmtExecutedTime_;
				std::string gmtFinishedTime_;
				std::string projectId_;
				std::string gmtCreateTime_;
				std::string gmtModifiedTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETTASKRESULT_H_
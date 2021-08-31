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

#ifndef ALIBABACLOUD_EDAS_MODEL_ROLLBACKAPPLICATIONREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_ROLLBACKAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT RollbackApplicationRequest : public RoaServiceRequest
			{

			public:
				RollbackApplicationRequest();
				~RollbackApplicationRequest();

				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				int getBatchWaitTime()const;
				void setBatchWaitTime(int batchWaitTime);
				int getBatch()const;
				void setBatch(int batch);
				std::string getHistoryVersion()const;
				void setHistoryVersion(const std::string& historyVersion);

            private:
				std::string appId_;
				std::string groupId_;
				int batchWaitTime_;
				int batch_;
				std::string historyVersion_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_ROLLBACKAPPLICATIONREQUEST_H_
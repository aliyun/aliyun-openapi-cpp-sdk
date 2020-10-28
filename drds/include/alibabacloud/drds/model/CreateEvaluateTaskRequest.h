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

#ifndef ALIBABACLOUD_DRDS_MODEL_CREATEEVALUATETASKREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_CREATEEVALUATETASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT CreateEvaluateTaskRequest : public RpcServiceRequest
			{
			public:
				struct DbInfo
				{
					std::string instId;
					std::string dbPort;
					std::string dbName;
					std::string dbPassword;
					std::string dbUser;
				};

			public:
				CreateEvaluateTaskRequest();
				~CreateEvaluateTaskRequest();

				int getAvgQpsGrowthScale()const;
				void setAvgQpsGrowthScale(int avgQpsGrowthScale);
				std::string getTaskName()const;
				void setTaskName(const std::string& taskName);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getDataGrowthScale()const;
				void setDataGrowthScale(int dataGrowthScale);
				std::vector<DbInfo> getDbInfo()const;
				void setDbInfo(const std::vector<DbInfo>& dbInfo);
				int getEvaluateHours()const;
				void setEvaluateHours(int evaluateHours);

            private:
				int avgQpsGrowthScale_;
				std::string taskName_;
				std::string accessKeyId_;
				int dataGrowthScale_;
				std::vector<DbInfo> dbInfo_;
				int evaluateHours_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_CREATEEVALUATETASKREQUEST_H_
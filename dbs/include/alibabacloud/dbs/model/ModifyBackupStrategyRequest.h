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

#ifndef ALIBABACLOUD_DBS_MODEL_MODIFYBACKUPSTRATEGYREQUEST_H_
#define ALIBABACLOUD_DBS_MODEL_MODIFYBACKUPSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dbs/DbsExport.h>

namespace AlibabaCloud
{
	namespace Dbs
	{
		namespace Model
		{
			class ALIBABACLOUD_DBS_EXPORT ModifyBackupStrategyRequest : public RpcServiceRequest
			{

			public:
				ModifyBackupStrategyRequest();
				~ModifyBackupStrategyRequest();

				std::string getBackupPeriod()const;
				void setBackupPeriod(const std::string& backupPeriod);
				std::string getBackupStartTime()const;
				void setBackupStartTime(const std::string& backupStartTime);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getBackupPlanId()const;
				void setBackupPlanId(const std::string& backupPlanId);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);

            private:
				std::string backupPeriod_;
				std::string backupStartTime_;
				std::string regionId_;
				std::string clientToken_;
				std::string backupPlanId_;
				std::string ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBS_MODEL_MODIFYBACKUPSTRATEGYREQUEST_H_
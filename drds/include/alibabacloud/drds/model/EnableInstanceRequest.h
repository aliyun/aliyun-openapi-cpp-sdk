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

#ifndef ALIBABACLOUD_DRDS_MODEL_ENABLEINSTANCEREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_ENABLEINSTANCEREQUEST_H_

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
			class ALIBABACLOUD_DRDS_EXPORT EnableInstanceRequest : public RpcServiceRequest
			{

			public:
				EnableInstanceRequest();
				~EnableInstanceRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSourceDbInstId()const;
				void setSourceDbInstId(const std::string& sourceDbInstId);
				std::string getRestoreTime()const;
				void setRestoreTime(const std::string& restoreTime);
				std::string getSwitchId()const;
				void setSwitchId(const std::string& switchId);
				std::string getBackupId()const;
				void setBackupId(const std::string& backupId);
				std::string getDrdsInstanceId()const;
				void setDrdsInstanceId(const std::string& drdsInstanceId);
				std::string getDbInstanceClass()const;
				void setDbInstanceClass(const std::string& dbInstanceClass);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);

            private:
				std::string clientToken_;
				std::string engineVersion_;
				std::string accessKeyId_;
				std::string sourceDbInstId_;
				std::string restoreTime_;
				std::string switchId_;
				std::string backupId_;
				std::string drdsInstanceId_;
				std::string dbInstanceClass_;
				std::string vpcId_;
				std::string zoneId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_ENABLEINSTANCEREQUEST_H_
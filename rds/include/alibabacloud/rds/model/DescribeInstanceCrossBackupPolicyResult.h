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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEINSTANCECROSSBACKUPPOLICYRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEINSTANCECROSSBACKUPPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeInstanceCrossBackupPolicyResult : public ServiceResult
			{
			public:


				DescribeInstanceCrossBackupPolicyResult();
				explicit DescribeInstanceCrossBackupPolicyResult(const std::string &payload);
				~DescribeInstanceCrossBackupPolicyResult();
				std::string getLogBackupEnabled()const;
				std::string getBackupEnabledTime()const;
				std::string getEngineVersion()const;
				std::string getStorageType()const;
				std::string getDBInstanceStatus()const;
				std::string getLogBackupEnabledTime()const;
				std::string getCrossBackupRegion()const;
				int getRetentType()const;
				std::string getLockMode()const;
				std::string getRelServiceId()const;
				int getRetention()const;
				std::string getStorageOwner()const;
				std::string getBackupEnabled()const;
				std::string getCrossBackupType()const;
				std::string getEndpoint()const;
				std::string getDBInstanceId()const;
				std::string getRegionId()const;
				std::string getDBInstanceStatusDesc()const;
				std::string getRelService()const;
				std::string getDBInstanceDescription()const;
				std::string getEngine()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string logBackupEnabled_;
				std::string backupEnabledTime_;
				std::string engineVersion_;
				std::string storageType_;
				std::string dBInstanceStatus_;
				std::string logBackupEnabledTime_;
				std::string crossBackupRegion_;
				int retentType_;
				std::string lockMode_;
				std::string relServiceId_;
				int retention_;
				std::string storageOwner_;
				std::string backupEnabled_;
				std::string crossBackupType_;
				std::string endpoint_;
				std::string dBInstanceId_;
				std::string regionId_;
				std::string dBInstanceStatusDesc_;
				std::string relService_;
				std::string dBInstanceDescription_;
				std::string engine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEINSTANCECROSSBACKUPPOLICYRESULT_H_
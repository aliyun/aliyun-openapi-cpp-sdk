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

#ifndef ALIBABACLOUD_DRDS_MODEL_SUBMITSMOOTHEXPANDTASKREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_SUBMITSMOOTHEXPANDTASKREQUEST_H_

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
			class ALIBABACLOUD_DRDS_EXPORT SubmitSmoothExpandTaskRequest : public RpcServiceRequest
			{
			public:
				struct RdsSuperInstances
				{
					std::string password;
					std::string accountName;
					std::string rdsName;
				};
				struct TransferTaskInfos
				{
					std::string dbName;
					std::string srcInstanceName;
					std::string instanceType;
					std::string dstInstanceName;
				};

			public:
				SubmitSmoothExpandTaskRequest();
				~SubmitSmoothExpandTaskRequest();

				std::string getDrdsInstanceId()const;
				void setDrdsInstanceId(const std::string& drdsInstanceId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				bool getDbInstanceIsCreating()const;
				void setDbInstanceIsCreating(bool dbInstanceIsCreating);
				std::vector<RdsSuperInstances> getRdsSuperInstances()const;
				void setRdsSuperInstances(const std::vector<RdsSuperInstances>& rdsSuperInstances);
				std::string getDbName()const;
				void setDbName(const std::string& dbName);
				std::vector<TransferTaskInfos> getTransferTaskInfos()const;
				void setTransferTaskInfos(const std::vector<TransferTaskInfos>& transferTaskInfos);

            private:
				std::string drdsInstanceId_;
				std::string accessKeyId_;
				bool dbInstanceIsCreating_;
				std::vector<RdsSuperInstances> rdsSuperInstances_;
				std::string dbName_;
				std::vector<TransferTaskInfos> transferTaskInfos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_SUBMITSMOOTHEXPANDTASKREQUEST_H_
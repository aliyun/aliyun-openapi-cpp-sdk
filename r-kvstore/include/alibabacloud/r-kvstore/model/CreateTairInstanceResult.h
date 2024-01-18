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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_CREATETAIRINSTANCERESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_CREATETAIRINSTANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT CreateTairInstanceResult : public ServiceResult
			{
			public:


				CreateTairInstanceResult();
				explicit CreateTairInstanceResult(const std::string &payload);
				~CreateTairInstanceResult();
				long getConnections()const;
				std::string getTaskId()const;
				std::string getZoneId()const;
				std::string getInstanceId()const;
				std::string getConfig()const;
				int getPort()const;
				long getOrderId()const;
				std::string getConnectionDomain()const;
				std::string getInstanceName()const;
				long getQPS()const;
				std::string getChargeType()const;
				std::string getInstanceStatus()const;
				long getBandwidth()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				long connections_;
				std::string taskId_;
				std::string zoneId_;
				std::string instanceId_;
				std::string config_;
				int port_;
				long orderId_;
				std::string connectionDomain_;
				std::string instanceName_;
				long qPS_;
				std::string chargeType_;
				std::string instanceStatus_;
				long bandwidth_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_CREATETAIRINSTANCERESULT_H_
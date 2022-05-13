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

#ifndef ALIBABACLOUD_MSE_MODEL_LISTINSTANCESRESULT_H_
#define ALIBABACLOUD_MSE_MODEL_LISTINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mse/MseExport.h>

namespace AlibabaCloud
{
	namespace Mse
	{
		namespace Model
		{
			class ALIBABACLOUD_MSE_EXPORT ListInstancesResult : public ServiceResult
			{
			public:
				struct Instance
				{
					std::string dbPassword;
					std::string podCidr;
					std::string gmtModified;
					std::string vpc;
					std::string storeMode;
					std::string appClusterId;
					std::string name;
					std::string appVersion;
					bool isCreatedRedis;
					std::string startDate;
					std::string statusDesc;
					long environmentId;
					std::string vswitch;
					std::string dbUrl;
					std::string dbUserName;
					long status;
					std::string zoneId;
					std::string instanceId;
					std::string nameServer;
					std::string orderId;
					std::string securityGroup;
					long endDate;
					long replica;
					std::string seataServerUniqueId;
					std::string gmtCreate;
					std::string imageVersion;
					long k8sResourceId;
					std::string primaryUser;
					std::string region;
					long id;
					std::string spec;
				};


				ListInstancesResult();
				explicit ListInstancesResult(const std::string &payload);
				~ListInstancesResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::vector<Instance> getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::vector<Instance> data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_LISTINSTANCESRESULT_H_
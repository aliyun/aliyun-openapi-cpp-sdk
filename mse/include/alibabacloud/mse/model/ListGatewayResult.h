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

#ifndef ALIBABACLOUD_MSE_MODEL_LISTGATEWAYRESULT_H_
#define ALIBABACLOUD_MSE_MODEL_LISTGATEWAYRESULT_H_

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
			class ALIBABACLOUD_MSE_EXPORT ListGatewayResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Gateways
					{
						struct InitConfig
						{
							bool enableWaf;
							bool supportWaf;
						};
						struct ElasticPolicy
						{
							struct TimePolicyListItem
							{
								std::string endTime;
								std::string startTime;
								int desiredReplica;
							};
							std::string elasticType;
							bool elastic;
							int maxReplica;
							std::vector<TimePolicyListItem> timePolicyList;
						};
						struct SlbItem
						{
							std::string slbId;
							std::string slbPort;
							std::string statusDesc;
							std::string type;
							std::string gatewaySlbMode;
							std::string slbIp;
							std::string gatewaySlbStatus;
							std::string slbSpec;
						};
						struct InternetSlbItem
						{
							std::string slbId;
							std::string slbPort;
							std::string statusDesc;
							std::string type;
							std::string gatewaySlbMode;
							std::string slbIp;
							std::string gatewaySlbStatus;
							std::string slbSpec;
							std::string internetNetworkFlow;
						};
						std::string elasticType;
						std::string resourceGroupId;
						std::string currentVersion;
						std::vector<Gateways::SlbItem> slb;
						std::string gmtModified;
						std::string vswitch2;
						std::string gatewayType;
						bool upgrade;
						std::string name;
						std::string appVersion;
						std::string statusDesc;
						bool armsOn;
						std::string mseTag;
						bool elastic;
						std::vector<Gateways::InternetSlbItem> internetSlb;
						std::string gatewayVersion;
						int status;
						bool supportWasm;
						bool mustUpgrade;
						std::string instanceId;
						ElasticPolicy elasticPolicy;
						int totalReplica;
						bool ahasOn;
						int replica;
						std::string endDate;
						std::string gatewayUniqueId;
						std::string gmtCreate;
						bool rollBack;
						std::string latestVersion;
						std::string chargeType;
						InitConfig initConfig;
						std::string region;
						std::string primaryUser;
						long id;
						std::string tag;
						std::string spec;
						std::string elasticInstanceId;
						int elasticReplica;
					};
					int pageSize;
					int pageNumber;
					long totalSize;
					std::vector<Gateways> result;
				};


				ListGatewayResult();
				explicit ListGatewayResult(const std::string &payload);
				~ListGatewayResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Data data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_LISTGATEWAYRESULT_H_
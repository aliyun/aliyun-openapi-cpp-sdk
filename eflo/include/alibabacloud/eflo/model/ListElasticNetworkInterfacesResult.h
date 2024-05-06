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

#ifndef ALIBABACLOUD_EFLO_MODEL_LISTELASTICNETWORKINTERFACESRESULT_H_
#define ALIBABACLOUD_EFLO_MODEL_LISTELASTICNETWORKINTERFACESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eflo/EfloExport.h>

namespace AlibabaCloud
{
	namespace Eflo
	{
		namespace Model
		{
			class ALIBABACLOUD_EFLO_EXPORT ListElasticNetworkInterfacesResult : public ServiceResult
			{
			public:
				struct Content
				{
					struct DataItem
					{
						std::string status;
						std::string description;
						std::string zoneId;
						std::string message;
						std::string ip;
						std::string vSwitchId;
						std::string createTime;
						std::string securityGroupId;
						std::string mask;
						std::string gmtModified;
						std::string mac;
						std::string elasticNetworkInterfaceId;
						std::string type;
						std::string vpcId;
						std::string gateway;
						std::string nodeId;
						std::string regionId;
					};
					long total;
					std::vector<DataItem> data;
				};


				ListElasticNetworkInterfacesResult();
				explicit ListElasticNetworkInterfacesResult(const std::string &payload);
				~ListElasticNetworkInterfacesResult();
				std::string getMessage()const;
				Content getContent()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Content content_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EFLO_MODEL_LISTELASTICNETWORKINTERFACESRESULT_H_
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

#ifndef ALIBABACLOUD_SGW_MODEL_DESCRIBECSGCLIENTSRESULT_H_
#define ALIBABACLOUD_SGW_MODEL_DESCRIBECSGCLIENTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sgw/SgwExport.h>

namespace AlibabaCloud
{
	namespace Sgw
	{
		namespace Model
		{
			class ALIBABACLOUD_SGW_EXPORT DescribeCSGClientsResult : public ServiceResult
			{
			public:
				struct Client
				{
					std::string status;
					std::string ecsInstanceId;
					std::string vpcId;
					std::string clientDeletionCommand;
					std::string workDirectory;
					long lastHeartbeatTime;
					std::string clientId;
					std::string clientVersion;
					std::string clientInstallationCommand;
				};


				DescribeCSGClientsResult();
				explicit DescribeCSGClientsResult(const std::string &payload);
				~DescribeCSGClientsResult();
				int getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Client> getClients()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::vector<Client> clients_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_DESCRIBECSGCLIENTSRESULT_H_
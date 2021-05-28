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

#ifndef ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYNFSCLIENTSRESULT_H_
#define ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYNFSCLIENTSRESULT_H_

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
			class ALIBABACLOUD_SGW_EXPORT DescribeGatewayNFSClientsResult : public ServiceResult
			{
			public:
				struct ClientInfo
				{
					bool hasNFSv3;
					bool hasNFSv40;
					std::string clientIpAddr;
					bool hasNFSv41;
				};


				DescribeGatewayNFSClientsResult();
				explicit DescribeGatewayNFSClientsResult(const std::string &payload);
				~DescribeGatewayNFSClientsResult();
				bool getVersion40Enabled()const;
				int getTotalCount()const;
				bool getVersion41Enabled()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ClientInfo> getClientInfoList()const;
				bool getVersion3Enabled()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool version40Enabled_;
				int totalCount_;
				bool version41Enabled_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::vector<ClientInfo> clientInfoList_;
				bool version3Enabled_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYNFSCLIENTSRESULT_H_
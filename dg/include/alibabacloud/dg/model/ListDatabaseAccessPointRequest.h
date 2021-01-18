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

#ifndef ALIBABACLOUD_DG_MODEL_LISTDATABASEACCESSPOINTREQUEST_H_
#define ALIBABACLOUD_DG_MODEL_LISTDATABASEACCESSPOINTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dg/DgExport.h>

namespace AlibabaCloud
{
	namespace Dg
	{
		namespace Model
		{
			class ALIBABACLOUD_DG_EXPORT ListDatabaseAccessPointRequest : public RpcServiceRequest
			{

			public:
				ListDatabaseAccessPointRequest();
				~ListDatabaseAccessPointRequest();

				std::string getSearchKey()const;
				void setSearchKey(const std::string& searchKey);
				std::string getPageNumber()const;
				void setPageNumber(const std::string& pageNumber);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::string getHost()const;
				void setHost(const std::string& host);
				std::string getDbInstanceId()const;
				void setDbInstanceId(const std::string& dbInstanceId);
				std::string getGatewayId()const;
				void setGatewayId(const std::string& gatewayId);
				int getPort()const;
				void setPort(int port);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);

            private:
				std::string searchKey_;
				std::string pageNumber_;
				std::string regionId_;
				std::string pageSize_;
				std::string host_;
				std::string dbInstanceId_;
				std::string gatewayId_;
				int port_;
				std::string vpcId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DG_MODEL_LISTDATABASEACCESSPOINTREQUEST_H_
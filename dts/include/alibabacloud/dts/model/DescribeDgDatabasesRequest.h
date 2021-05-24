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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEDGDATABASESREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEDGDATABASESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeDgDatabasesRequest : public RpcServiceRequest
			{

			public:
				DescribeDgDatabasesRequest();
				~DescribeDgDatabasesRequest();

				std::string getType()const;
				void setType(const std::string& type);
				std::string getPageNumber()const;
				void setPageNumber(const std::string& pageNumber);
				std::string getEngine()const;
				void setEngine(const std::string& engine);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::string getRoleName()const;
				void setRoleName(const std::string& roleName);
				std::string getIp()const;
				void setIp(const std::string& ip);
				std::string getAliyunId()const;
				void setAliyunId(const std::string& aliyunId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getPort()const;
				void setPort(const std::string& port);
				std::string getRegion()const;
				void setRegion(const std::string& region);

            private:
				std::string type_;
				std::string pageNumber_;
				std::string engine_;
				std::string regionId_;
				std::string pageSize_;
				std::string roleName_;
				std::string ip_;
				std::string aliyunId_;
				std::string instanceId_;
				std::string port_;
				std::string region_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEDGDATABASESREQUEST_H_
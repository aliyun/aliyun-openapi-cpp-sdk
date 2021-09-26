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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEINSTANCESOURCESREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEINSTANCESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribeInstanceSourcesRequest : public RpcServiceRequest
			{

			public:
				DescribeInstanceSourcesRequest();
				~DescribeInstanceSourcesRequest();

				long getProductId()const;
				void setProductId(long productId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getServiceRegionId()const;
				void setServiceRegionId(const std::string& serviceRegionId);
				std::string getEngineType()const;
				void setEngineType(const std::string& engineType);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				bool getAuthed()const;
				void setAuthed(bool authed);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getDbName()const;
				void setDbName(const std::string& dbName);

            private:
				long productId_;
				std::string sourceIp_;
				int pageSize_;
				std::string lang_;
				std::string serviceRegionId_;
				std::string engineType_;
				int currentPage_;
				bool authed_;
				std::string instanceId_;
				std::string dbName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEINSTANCESOURCESREQUEST_H_
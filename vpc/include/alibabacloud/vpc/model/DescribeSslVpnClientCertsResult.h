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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBESSLVPNCLIENTCERTSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBESSLVPNCLIENTCERTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeSslVpnClientCertsResult : public ServiceResult
			{
			public:
				struct SslVpnClientCertKey
				{
					std::string status;
					long endTime;
					std::string resourceGroupId;
					long createTime;
					std::string sslVpnClientCertId;
					std::string sslVpnServerId;
					std::string regionId;
					std::string name;
				};


				DescribeSslVpnClientCertsResult();
				explicit DescribeSslVpnClientCertsResult(const std::string &payload);
				~DescribeSslVpnClientCertsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<SslVpnClientCertKey> getSslVpnClientCertKeys()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<SslVpnClientCertKey> sslVpnClientCertKeys_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBESSLVPNCLIENTCERTSRESULT_H_
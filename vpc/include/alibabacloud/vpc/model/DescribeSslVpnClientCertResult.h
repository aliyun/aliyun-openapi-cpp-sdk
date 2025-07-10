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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBESSLVPNCLIENTCERTRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBESSLVPNCLIENTCERTRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeSslVpnClientCertResult : public ServiceResult
			{
			public:


				DescribeSslVpnClientCertResult();
				explicit DescribeSslVpnClientCertResult(const std::string &payload);
				~DescribeSslVpnClientCertResult();
				std::string getStatus()const;
				std::string getClientCert()const;
				long getEndTime()const;
				std::string getResourceGroupId()const;
				long getCreateTime()const;
				std::string getClientKey()const;
				std::string getSslVpnClientCertId()const;
				std::string getSslVpnServerId()const;
				std::string getCaCert()const;
				std::string getRegionId()const;
				std::string getClientConfig()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string clientCert_;
				long endTime_;
				std::string resourceGroupId_;
				long createTime_;
				std::string clientKey_;
				std::string sslVpnClientCertId_;
				std::string sslVpnServerId_;
				std::string caCert_;
				std::string regionId_;
				std::string clientConfig_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBESSLVPNCLIENTCERTRESULT_H_
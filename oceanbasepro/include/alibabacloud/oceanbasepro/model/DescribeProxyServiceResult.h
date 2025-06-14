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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEPROXYSERVICERESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEPROXYSERVICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>

namespace AlibabaCloud
{
	namespace OceanBasePro
	{
		namespace Model
		{
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeProxyServiceResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string status;
					long currentEndpointNum;
					std::string zone;
					long unitNum;
					std::string createTime;
					std::string proxyVersion;
					std::string proxyClusterId;
					long unitNumLimit;
					long endpointNumQuota;
					std::string unitSpec;
					std::string expireTime;
					std::string proxyServiceVersion;
					std::string proxyMode;
				};


				DescribeProxyServiceResult();
				explicit DescribeProxyServiceResult(const std::string &payload);
				~DescribeProxyServiceResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEPROXYSERVICERESULT_H_